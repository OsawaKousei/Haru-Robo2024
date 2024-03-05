#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "path_following/action/calib.hpp"
#include "sensor_msgs/msg/joy.hpp"

class DammyCalibNode : public rclcpp::Node {
public:
    using Calib = path_following::action::Calib;
    using GoalHandleState = rclcpp_action::ClientGoalHandle<Calib>;

    path_following::action::Calib_Goal calib = path_following::action::Calib_Goal();
    bool state_initialize_frag = false;

    std::vector<int> buttons = {0,0,0,0,0,0,0,0};

    void initialize_calib(){
      calib.rad = 0.0;
    }

    void set_goal(double rad){
      calib.rad = rad;
    }

    std::double_t rad_target;

    explicit DammyCalibNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("dammy_calib_node", options)
    {
      //パラメータの宣言
      declare_parameter("rad", 0.0);

      rad_target = get_parameter("rad").as_double();

      using namespace std::placeholders;

      this->client_ptr_ = rclcpp_action::create_client<Calib>(this,"path_following");

      //this->timer_ = this->create_wall_timer(,manip::msg::Cmd message
        // std::bind(&ManipJoyNode::send_goal, this));

      set_goal(rad_target);
      send_goal();
    }

  void send_goal()
  {
    using namespace std::placeholders;

    //this->timer_->cancel();

    if (!this->client_ptr_->wait_for_action_server()) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
      rclcpp::shutdown();
    }

    auto goal_msg = Calib::Goal();
    goal_msg = calib;

    RCLCPP_INFO(this->get_logger(), "Sending goal");

    auto send_goal_options = rclcpp_action::Client<Calib>::SendGoalOptions();
    send_goal_options.goal_response_callback =
      std::bind(&DammyCalibNode::goal_response_callback, this, _1);
    send_goal_options.feedback_callback =
      std::bind(&DammyCalibNode::feedback_callback, this, _1, _2);
    send_goal_options.result_callback =
      std::bind(&DammyCalibNode::result_callback, this, _1);
    this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }
private:
    rclcpp_action::Client<Calib>::SharedPtr client_ptr_;
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
    const std::shared_ptr<const Calib::Feedback> feedback)
  {
    std::stringstream ss;
    ss << "feedback received: ";
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
    rclcpp::shutdown();
  }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DammyCalibNode>());
    rclcpp::shutdown();
    return 0;
}
