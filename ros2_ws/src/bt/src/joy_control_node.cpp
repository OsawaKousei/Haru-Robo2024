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
                catch_work,
                put_work,
                catch_high_base,
                put_high_base,
                set_high_base,
                catch_low_base,
                put_low_base,
                set_low_base
        };
        Tasks task = null;

        enum CatchWorkSequence{
                hand_down,
                work_catch,
                hand_up,
                catch_work_finish
        };
        CatchWorkSequence catch_work_sequence = hand_down;

        enum PutWorkSequence{
                hand_open,
                put_work_finish = 0
        };
        PutWorkSequence put_work_sequence = hand_open;

        enum CatchHBaseSequence{
                Hbase_catch,
                Hbase_up,
                catch_Hbase_finish
        };
        CatchHBaseSequence catch_Hbase_sequence = Hbase_catch;

        enum PutHbaseSequence{
                Hbase_arm_set,
                Hbase_put,
                put_high_base_finish
        };
        PutHbaseSequence put_Hbase_sequence = Hbase_arm_set;

        enum SetHBaseSequence{
                Hbase_set,
                Hbase_finish
        };
        SetHBaseSequence set_Hbase_sequence = Hbase_set;

        enum CatchLBaseSequence{
                Lbase_catch,
                Lbase_up,
                catch_Lbase_finish
        };
        CatchLBaseSequence catch_Lbase_sequence = Lbase_catch;

        enum PutLbaseSequence{
                Lbase_arm_set,
                Lbase_put,
                put_low_base_finish
        };
        PutLbaseSequence put_Lbase_sequence = Lbase_arm_set;

        enum SetLBaseSequence{
                Lbase_set,
                Lbase_finish
        };
        SetLBaseSequence set_Lbase_sequence = Lbase_set;


    explicit JoyControlNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("joy_control_node", options)
    {
        using namespace std::placeholders;

        this->client_ptr_ = rclcpp_action::create_client<State>(this,"manip_control");

        auto topic_callback = [this](const sensor_msgs::msg::Joy &msg) -> void {
        
                auto pub_goal_msg = State::Goal();

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

          if(msg.buttons[1] == 1 && buttons[1] == 0 && task == null && msg.buttons[5] == 0 && msg.buttons[4] == 0){//B
                RCLCPP_INFO(this->get_logger(), "button 1");

                put_work_sequence = hand_open;
                task = put_work;
                put_work_task();
          }

          if(msg.buttons[0] == 1 && buttons[0] == 0 && task == null  && msg.buttons[5] == 0 && msg.buttons[4] == 0){//A
                RCLCPP_INFO(this->get_logger(), "button 0");

                catch_work_sequence = hand_down;
                task = catch_work;
                catch_work_task();
          }

          if(msg.buttons[2] == 1 && buttons[2] == 0 && task == null && msg.buttons[5] == 1 && msg.buttons[4] == 0){//X RB
                RCLCPP_INFO(this->get_logger(), "button 2");

                catch_Hbase_sequence = Hbase_catch;
                task = catch_high_base;
                catch_high_base_task();
          }

          if(msg.buttons[1] == 1 && buttons[1] == 0 && task == null && msg.buttons[5] == 1 && msg.buttons[4] == 0){//B RB
                RCLCPP_INFO(this->get_logger(), "button 1");

                put_Hbase_sequence = Hbase_arm_set;
                task = put_high_base;
                put_high_base_task();
          }

          if(msg.buttons[0] == 1 && buttons[0] == 0 && task == null  && msg.buttons[5] == 1 && msg.buttons[4] == 0){//A RB
                RCLCPP_INFO(this->get_logger(), "button 0");

               set_Hbase_sequence = Hbase_set;
               task = set_high_base;
               set_high_base_task();
          }

          if(msg.buttons[2] == 1 && buttons[2] == 0 && task == null && msg.buttons[5] == 0 && msg.buttons[4] == 1){//X LB
                RCLCPP_INFO(this->get_logger(), "button 2");

                catch_Lbase_sequence = Lbase_catch;
                task = catch_low_base;
                catch_low_base_task();
          }

          if(msg.buttons[1] == 1 && buttons[1] == 0 && task == null && msg.buttons[5] == 0 && msg.buttons[4] == 1){//B LB
                RCLCPP_INFO(this->get_logger(), "button 1");

                put_Lbase_sequence = Lbase_arm_set;
                task = put_low_base;
                put_low_base_task();
          }

          if(msg.buttons[0] == 1 && buttons[0] == 0 && task == null  && msg.buttons[5] == 0 && msg.buttons[4] == 1){//A LB
                RCLCPP_INFO(this->get_logger(), "button 0");

               set_Lbase_sequence = Lbase_set;
               task = set_low_base;
               set_low_base_task();
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
        void catch_work_task()
        {
                //this->timer_->cancel(); //チュートリアルにはあったけど、エラーが出たのでコメントアウト

                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                auto goal_msg = State::Goal();

                switch (catch_work_sequence)
                {
                case hand_down:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {1,1,1};
                        send_goal(goal_msg);
                        catch_work_sequence = work_catch;
                        break;
                case work_catch:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {1,1,0};
                        send_goal(goal_msg);
                        catch_work_sequence = hand_up;
                        break;
                case hand_up:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {1,0,0};
                        send_goal(goal_msg);
                        catch_work_sequence = catch_work_finish;
                        break;
                default:
                        break;
                }              
        }

        void put_work_task(){
                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                auto goal_msg = State::Goal();

                switch (put_work_sequence){
                case hand_open:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {-1,-1,1};
                        send_goal(goal_msg);
                        put_work_sequence = put_work_finish;
                        break;
                default:        
                        break;
                }
        }

        void catch_high_base_task(){
                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                auto goal_msg = State::Goal();

                switch (catch_Hbase_sequence){
                case Hbase_catch:
                        goal_msg.base1 = {-1,0};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        catch_Hbase_sequence = Hbase_up;
                        break;
                case Hbase_up:
                        goal_msg.base1 = {0,-1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        catch_Hbase_sequence = catch_Hbase_finish;
                        break;
                default:        
                        break;
                }
        }

        void put_high_base_task(){
                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                auto goal_msg = State::Goal();

                switch (put_Hbase_sequence){
                case Hbase_arm_set:
                        goal_msg.base1 = {2,-1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        put_Hbase_sequence = Hbase_put;
                        break;
                case Hbase_put:
                        goal_msg.base1 = {-1,1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        put_Hbase_sequence = put_high_base_finish;
                        break;
                default:        
                        break;
                }
        }

        void set_high_base_task(){
                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                auto goal_msg = State::Goal();

                switch (set_Hbase_sequence){
                case Hbase_set:
                        goal_msg.base1 = {0,-1};
                        goal_msg.base2 = {-1,-1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        set_Hbase_sequence = Hbase_finish;
                        break;
                default:        
                        break;
                }
        }

        void catch_low_base_task(){
                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                auto goal_msg = State::Goal();

                switch (catch_Lbase_sequence){
                case Lbase_catch:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {-1,0};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        catch_Lbase_sequence = Lbase_up;
                        break;
                case Lbase_up:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {0,-1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        catch_Lbase_sequence = catch_Lbase_finish;
                        break;
                default:        
                        break;
                }
        }

        void put_low_base_task(){
                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                auto goal_msg = State::Goal();

                switch (put_Lbase_sequence){
                case Lbase_arm_set:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {1,-1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        put_Lbase_sequence = Lbase_put;
                        break;
                case Lbase_put:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {-1,1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        put_Lbase_sequence = put_low_base_finish;
                        break;
                default:        
                        break;
                }
        }

        void set_low_base_task(){
                if (!this->client_ptr_->wait_for_action_server()) {
                RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
                rclcpp::shutdown();
                }

                auto goal_msg = State::Goal();

                switch (set_Lbase_sequence){
                case Lbase_set:
                        goal_msg.base1 = {-1,-1};
                        goal_msg.base2 = {0,-1};
                        goal_msg.work = {-1,-1,-1};
                        send_goal(goal_msg);
                        set_Lbase_sequence = Lbase_finish;
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
                case catch_work:
                        if(catch_work_sequence == catch_work_finish){
                        RCLCPP_INFO(this->get_logger(), "Finish the work");
                        task = null;
                        }else{
                                RCLCPP_INFO(this->get_logger(), "execute next sequence");
                                catch_work_task();//次のシーケンスを実行
                        }
                        break;
                case put_work:
                        if(put_work_sequence == put_work_finish){
                        RCLCPP_INFO(this->get_logger(), "Finish the work");
                        task = null;
                        }else{
                                RCLCPP_INFO(this->get_logger(), "execute next sequence");
                                put_work_task();//次のシーケンスを実行
                        }
                        break;
                case catch_high_base:
                        if(catch_Hbase_sequence == catch_Hbase_finish){
                        RCLCPP_INFO(this->get_logger(), "Finish the work");
                        task = null;
                        }else{
                                RCLCPP_INFO(this->get_logger(), "execute next sequence");
                                catch_high_base_task();//次のシーケンスを実行
                        }
                        break;
                case put_high_base:
                        if(put_Hbase_sequence == put_high_base_finish){
                        RCLCPP_INFO(this->get_logger(), "Finish the work");
                        task = null;
                        }else{
                                RCLCPP_INFO(this->get_logger(), "execute next sequence");
                                put_high_base_task();//次のシーケンスを実行
                        }
                        break;
                case set_high_base:
                        if(set_Hbase_sequence == Hbase_finish){
                        RCLCPP_INFO(this->get_logger(), "Finish the work");
                        task = null;
                        }else{
                                RCLCPP_INFO(this->get_logger(), "execute next sequence");
                                set_high_base_task();//次のシーケンスを実行
                        }
                        break;

                case catch_low_base:
                        if(catch_Lbase_sequence == catch_Lbase_finish){
                        RCLCPP_INFO(this->get_logger(), "Finish the work");
                        task = null;
                        }else{
                                RCLCPP_INFO(this->get_logger(), "execute next sequence");
                                catch_low_base_task();//次のシーケンスを実行
                        }
                        break;
                case put_low_base:
                        if(put_Lbase_sequence == put_low_base_finish){
                        RCLCPP_INFO(this->get_logger(), "Finish the work");
                        task = null;
                        }else{
                                RCLCPP_INFO(this->get_logger(), "execute next sequence");
                                put_low_base_task();//次のシーケンスを実行
                        }
                        break;
                case set_low_base:
                        if(set_Lbase_sequence == Lbase_finish){
                        RCLCPP_INFO(this->get_logger(), "Finish the work");
                        task = null;
                        }else{
                                RCLCPP_INFO(this->get_logger(), "execute next sequence");
                                set_low_base_task();//次のシーケンスを実行
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
