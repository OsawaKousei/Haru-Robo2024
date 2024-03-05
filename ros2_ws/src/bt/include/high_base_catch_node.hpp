#pragma once
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "manip/action/state.hpp"

class Base1CatchNode : public rclcpp::Node{
    public:

        using State = manip::action::State;//使用するアクションメッセージの名前空間
        using GoalHandleState = rclcpp_action::ClientGoalHandle<State>;//使用するゴールハンドルの名前空間

        //シーケンスの定義
        enum Sequence{
                hand_down,
                work_catch,
                hand_up,
                finish
        };
        Sequence sequence = hand_down;

        //コンストラクタ
        Base1CatchNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()) : Node("base1_catch_node",options){
                using namespace std::placeholders;

                this->client_ptr_ = rclcpp_action::create_client<State>(this,"manip_control");

                //起動時に行う処理
                oder_goal();
        }

        //シーケンスごとにゴールを作成して送信
        void oder_goal()
        {
                //this->timer_->cancel(); //チュートリアルにはあったけど、エラーが出たのでコメントアウト

                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                auto goal_msg = State::Goal();

                switch (sequence)
                {
                case hand_down:
                        goal_msg.base1 = {1,1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        sequence = work_catch;
                        break;
                case work_catch:
                        goal_msg.base1 = {1,0};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        sequence = hand_up;
                        break;
                case hand_up:
                        goal_msg.base1 = {1,0};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        sequence = finish;
                        break;
                default:
                        break;
                }              
        }

        void send_goal(State::Goal goal_msg){
                using namespace std::placeholders;

                RCLCPP_INFO(this->get_logger(), "Sending goal");

                auto send_goal_options = rclcpp_action::Client<State>::SendGoalOptions();
                //アクション通信に関する各コールバック関数の設定(response,feedback,result)
                send_goal_options.goal_response_callback =
                std::bind(&Base1CatchNode::goal_response_callback, this, _1);
                send_goal_options.feedback_callback =
                std::bind(&Base1CatchNode::feedback_callback, this, _1, _2);
                send_goal_options.result_callback =
                std::bind(&Base1CatchNode::result_callback, this, _1);
                //ゴールの送信
                this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
        }

    private:
        rclcpp_action::Client<State>::SharedPtr client_ptr_;

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
        const std::shared_ptr<const State::Feedback> feedback)
        {
        std::stringstream ss;
        ss << "feedback received: ";
        for (auto number : feedback->base1) {
        ss << number << " ";
        }
        RCLCPP_INFO(this->get_logger(), ss.str().c_str());
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
                        oder_goal();//次のシーケンスを実行
                }
        }
};

// ノードのインスタンスを定義
std::shared_ptr<Base1CatchNode> high_base_catch_node;