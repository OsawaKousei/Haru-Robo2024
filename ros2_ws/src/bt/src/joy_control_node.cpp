#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "manip/action/state.hpp"
#include "sensor_msgs/msg/joy.hpp"

#include "../include/catch_node.hpp"

class JoyControlNode : public rclcpp::Node {
public:
    std::vector<int> buttons = {0,0,0,0,0,0,0,0};

    using State = manip::action::State;//使用するアクションメッセージの名前空間
    using GoalHandleState = rclcpp_action::ClientGoalHandle<State>;//使用するゴールハンドルの名前空間

    //シーケンスの定義
        enum Tasks{
                null,
                work,
                high_base,
                low_base
        };
        Tasks task = null;

        enum WorkSequence{
                deploy,
                hand_down,
                work_catch,
                hand_up,
                finish
        };
        WorkSequence work_sequence = deploy;


    explicit JoyControlNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("joy_control_node", options)
    {
        using namespace std::placeholders;

        this->client_ptr_ = rclcpp_action::create_client<State>(this,"manip_control");

        auto topic_callback = [this](const sensor_msgs::msg::Joy &msg) -> void {

          if(msg.buttons[7] == 1 && buttons[7] == 0){
                RCLCPP_INFO(this->get_logger(), "button 7");
          }

          if(msg.buttons[6] == 1 && buttons[6] == 0){
                RCLCPP_INFO(this->get_logger(), "button 6");
          }

          if(msg.buttons[5] == 1 && buttons[5] == 0){//RB
                RCLCPP_INFO(this->get_logger(), "button 5");
          }

          if(msg.buttons[4] == 1 && buttons[4] == 0){//LB
                RCLCPP_INFO(this->get_logger(), "button 4");
          }

          if(msg.buttons[3] == 1 && buttons[3] == 0){//Y
                RCLCPP_INFO(this->get_logger(), "button 3");
          }

          if(msg.buttons[2] == 1 && buttons[2] == 0){//X
                RCLCPP_INFO(this->get_logger(), "button 2");
          }

          if(msg.buttons[1] == 1 && buttons[1] == 0){//B
                RCLCPP_INFO(this->get_logger(), "button 1");
          }

          if(msg.buttons[0] == 1 && buttons[0] == 0 && task == null){//A
                RCLCPP_INFO(this->get_logger(), "button 0");

                work_sequence = deploy;
                task = work;
                work_task();
          }

          buttons[0] = msg.buttons[0];
          buttons[1] = msg.buttons[1];
          buttons[2] = msg.buttons[2];
          buttons[3] = msg.buttons[3];
          buttons[4] = msg.buttons[4];
          buttons[5] = msg.buttons[5];
          buttons[6] = msg.buttons[6];
          buttons[7] = msg.buttons[7];
          buttons[8] = msg.buttons[8];
        };

        //ジョイコンの入力を受け取るトピックの設定
        subscription_ = this->create_subscription<sensor_msgs::msg::Joy>("joy", 10, topic_callback);
    }

    //シーケンスごとにゴールを作成して送信
        void work_task()
        {
                //this->timer_->cancel(); //チュートリアルにはあったけど、エラーが出たのでコメントアウト

                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                auto goal_msg = State::Goal();

                switch (work_sequence)
                {
                case deploy:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {1,0,1};
                        send_goal(goal_msg);
                        work_sequence = hand_down;//次のシーケンスへ
                        break;
                case hand_down:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {1,1,1};
                        send_goal(goal_msg);
                        work_sequence = work_catch;
                        break;
                case work_catch:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {1,1,0};
                        send_goal(goal_msg);
                        work_sequence = hand_up;
                        break;
                case hand_up:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {1,0,0};
                        send_goal(goal_msg);
                        work_sequence = finish;
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
                std::bind(&JoyControlNode::goal_response_callback, this, _1);
                send_goal_options.feedback_callback =
                std::bind(&JoyControlNode::feedback_callback, this, _1, _2);
                send_goal_options.result_callback =
                std::bind(&JoyControlNode::result_callback, this, _1);
                //ゴールの送信
                this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
        }

private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;
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

                switch (task)
                {
                case work:
                        if(work_sequence == finish){
                        RCLCPP_INFO(this->get_logger(), "Finish the work");
                        task = null;
                        }else{
                                RCLCPP_INFO(this->get_logger(), "execute next sequence");
                                work_task();//次のシーケンスを実行
                        }
                        break;
                
                default:
                        break;
                }

                
        }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JoyControlNode>());
    rclcpp::shutdown();
    return 0;
}
