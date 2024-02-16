#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "manip/action/state.hpp"
#include "sensor_msgs/msg/joy.hpp"

class ManipJoyNode : public rclcpp::Node {
public:
    using State = manip::action::State;
    using GoalHandleState = rclcpp_action::ClientGoalHandle<State>;

    manip::action::State_Goal state = manip::action::State_Goal();
    bool state_initialize_frag = false;

    std::vector<int> buttons = {0,0,0,0,0,0,0,0};

    void initialize_state(){
      state.base1 = {0,0};
      state.base2 = {0,0};
      state.work = {0,0,0};
    }

    explicit ManipJoyNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("manip_control_node", options)
    {
        using namespace std::placeholders;

        this->client_ptr_ = rclcpp_action::create_client<State>(this,"manip_control");

        //this->timer_ = this->create_wall_timer(,manip::msg::Cmd message
          // std::bind(&ManipJoyNode::send_goal, this));

        auto topic_callback = [this](const sensor_msgs::msg::Joy &msg) -> void {
          if(!state_initialize_frag){
            initialize_state();
            state_initialize_frag = true;
            RCLCPP_INFO(this->get_logger(), "initialized state");
          }
          bool send_goal_frag = false;

          if(msg.buttons[7] == 1 && buttons[7] == 0){
            if(state.base2[1] == 0){
              state.base2[1] = 1;
            }else{
              state.base2[1] = 0;
            }
            send_goal_frag = true;
          }

          if(msg.buttons[6] == 1 && buttons[6] == 0){
            if(state.base2[0] == 0){
              state.base2[0] = 1;
            }else{
              state.base2[0] = 0;
            }
            send_goal_frag = true;
          }

          if(msg.buttons[5] == 1 && buttons[5] == 0){
            if(state.base1[1] == 0){
              state.base1[1] = 1;
            }else{
              state.base1[1] = 0;
            }
            send_goal_frag = true;
          }

          if(msg.buttons[4] == 1 && buttons[4] == 0){
            if(state.base1[0] == 0){
              state.base1[0] = 1;
            }else{
              state.base1[0] = 0;
            }
            send_goal_frag = true;
          }

          if(msg.buttons[3] == 1 && buttons[3] == 0){
            if(state.work[0] == 0){
              state.work[0] = 1;
            }else{
              state.work[0] = 0;
            }
            send_goal_frag = true;
          }

          if(msg.buttons[2] == 1 && buttons[2] == 0){
            if(state.work[1] == 0){
              state.work[1] = 1;
            }else{ 
              state.work[1] = 0;
            }
            send_goal_frag = true;
          }

          if(msg.buttons[1] == 1 && buttons[1] == 0){
            if(state.work[2] == 0){
              state.work[2] = 1;
            }else{ 
              state.work[2] = 0;
            }
            send_goal_frag = true;
          }

          if(msg.buttons[0] == 1 && buttons[0] == 0){
            
          }

          buttons[1] = msg.buttons[1];
          buttons[2] = msg.buttons[2];
          buttons[3] = msg.buttons[3];
          buttons[4] = msg.buttons[4];
          buttons[5] = msg.buttons[5];
          buttons[6] = msg.buttons[6];
          buttons[7] = msg.buttons[7];
          buttons[8] = msg.buttons[8];

          if(send_goal_frag){
            RCLCPP_INFO(this->get_logger(), "Sending goal");
            send_goal();
          }
        };

        //ジョイコンの入力を受け取るトピックの設定
        subscription_ = this->create_subscription<sensor_msgs::msg::Joy>("joy", 10, topic_callback);
    }

  void send_goal()
  {
    using namespace std::placeholders;

    //this->timer_->cancel();

    if (!this->client_ptr_->wait_for_action_server()) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
      rclcpp::shutdown();
    }

    auto goal_msg = State::Goal();
    goal_msg = state;

    RCLCPP_INFO(this->get_logger(), "Sending goal");

    auto send_goal_options = rclcpp_action::Client<State>::SendGoalOptions();
    send_goal_options.goal_response_callback =
      std::bind(&ManipJoyNode::goal_response_callback, this, _1);
    send_goal_options.feedback_callback =
      std::bind(&ManipJoyNode::feedback_callback, this, _1, _2);
    send_goal_options.result_callback =
      std::bind(&ManipJoyNode::result_callback, this, _1);
    this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }
private:
    rclcpp_action::Client<State>::SharedPtr client_ptr_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;


  void goal_response_callback(const GoalHandleState::SharedPtr & goal_handle)
  {
    if (!goal_handle) {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
    } else {
      RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
    }
  }
  
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
    std::stringstream ss;
    ss << "Result received: ";
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());
    //rclcpp::shutdown();
  }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ManipJoyNode>());
    rclcpp::shutdown();
    return 0;
}
