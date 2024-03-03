#pragma once
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "manip/action/state.hpp"
#include "drive_msgs/msg/omni_enc_mod.hpp"
#include "lidar_detect/srv/scan.hpp"
#include "path_following/action/calib.hpp"

using namespace std::chrono_literals;

class CatchNode : public rclcpp::Node{
    public:

        using Calib = path_following::action::Calib;//使用するアクションメッセージの名前空間
        using GoalHandleState = rclcpp_action::ClientGoalHandle<Calib>;//使用するゴールハンドルの名前空間

        //シーケンスの定義
        enum Sequence{
                get_error,
                calib,
                modify,
                finish
        };
        Sequence sequence = get_error; 

        std::double_t min_angle;
        std::double_t max_angle;

        //コンストラクタ
        CatchNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()) : Node("catch_node",options){
                using namespace std::placeholders;

                //パラメータの宣言
                declare_parameter("min", 0.0);
                declare_parameter("max", 0.0);

                min_angle = get_parameter("min").as_double();
                max_angle = get_parameter("max").as_double();

                this->client_ptr_ = rclcpp_action::create_client<Calib>(this,"manip_control");
                rclcpp::Client<lidar_detect::srv::Scan>::SharedPtr client = create_client<lidar_detect::srv::Scan>("server_detect");
                while(!client->wait_for_service(1s)){
                if(!rclcpp::ok()){
                        break;
                }
                std::cout << "call_text service not available" << std::endl;

                }
                std::cout << "call_text service available" << std::endl;

                auto callback_response = [this](rclcpp::Client<lidar_detect::srv::Scan>::SharedFuture future) -> void {
                        this->odom_error[0] = future.get()->odom_error[0];
                        this->odom_error[1] = future.get()->odom_error[1];
                        this->rotation_error = future.get()->rotation_error;

                        get_result_frag = true;

                        RCLCPP_INFO(this->get_logger(), "res: %f , %f , %f", this->odom_error[0], this->odom_error[1], this->rotation_error);
                };

                auto request = std::make_shared<lidar_detect::srv::Scan::Request>();
                request->odom[1] = 0;
                request->corner[0] = 0;
                request->corner[1] = 0;

                auto result = client->async_send_request(request);  // ServerにRequestを送信

                auto future_res = client->async_send_request(request, callback_response);

                //サーバーの応答を待つ
                sleep(1);

                //起動時に行う処理
                execute_seq();
        }

        //シーケンスごとにゴールを作成して送信
        void execute_seq()
        {
                //this->timer_->cancel(); //チュートリアルにはあったけど、エラーが出たのでコメントアウト

                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                auto goal_msg = Calib::Goal();
                auto mod_msg = drive_msgs::msg::OmniEncMod();

                switch(sequence)
                {
                case get_error:
                        if(!get_result_frag){
                                RCLCPP_INFO(this->get_logger(), "failed to get result");
                        }
                        sequence = calib;
                        break;
                case calib:
                        goal_msg.rad = rotation_error;
                        send_goal(goal_msg);
                        sequence = modify;
                        break;
                case modify:
                        mod_msg.enclx = odom_error[0];
                        mod_msg.encly = odom_error[1];
                        modpub->publish(mod_msg);
                        sequence = finish;
                        break;
                default:
                        break;
                }              
        }

        void send_goal(Calib::Goal goal_msg){
                using namespace std::placeholders;

                RCLCPP_INFO(this->get_logger(), "Sending goal");

                auto send_goal_options = rclcpp_action::Client<Calib>::SendGoalOptions();
                //アクション通信に関する各コールバック関数の設定(response,feedback,result)
                send_goal_options.goal_response_callback =
                std::bind(&CatchNode::goal_response_callback, this, _1);
                send_goal_options.feedback_callback =
                std::bind(&CatchNode::feedback_callback, this, _1, _2);
                send_goal_options.result_callback =
                std::bind(&CatchNode::result_callback, this, _1);
                //ゴールの送信
                this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
        }

    private:
        rclcpp_action::Client<Calib>::SharedPtr client_ptr_;
        rclcpp::Publisher<drive_msgs::msg::OmniEncMod>::SharedPtr modpub;

        float odom_error[2] = {0.0,0.0};
        float rotation_error = 0.0;

        bool get_result_frag = false;

        //レスポンスを報告するだけのコールバック関数
        void goal_response_callback(const GoalHandleState::SharedPtr & goal_handle)
        {
        if (!goal_handle) {
        RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
        } else {
        RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
        }
        }
        
        //フィードバックの値を(一部)報告するだけのコールバック関数
        void feedback_callback(
        GoalHandleState::SharedPtr,
        const std::shared_ptr<const Calib::Feedback> feedback)
        {
        std::stringstream ss;
        ss << "feedback received: ";
        }

        //結果を報告し、次のシーケンスを実行するコールバック関数
        void result_callback(const GoalHandleState::WrappedResult & result)
        {
                switch (result.code) {
                case rclcpp_action::ResultCode::SUCCEEDED:
                        RCLCPP_INFO(this->get_logger(), "Goal successed");
                        break;
                case rclcpp_action::ResultCode::ABORTED:
                        RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
                        return;
                case rclcpp_action::ResultCode::CANCELED:
                        RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
                        return;
                default:
                        RCLCPP_ERROR(this->get_logger(), "Unknown result code");
                        return;
                }

                if(sequence == finish){
                        RCLCPP_INFO(this->get_logger(), "Finish the work");
                        rclcpp::shutdown();
                }else{
                        RCLCPP_INFO(this->get_logger(), "execute next sequence");
                        execute_seq();//次のシーケンスを実行
                }
        }
};

// ノードのインスタンスを定義
std::shared_ptr<CatchNode> calib_node;