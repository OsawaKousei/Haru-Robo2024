#pragma once
#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "path_following/action/path.hpp"
#include "sensor_msgs/msg/joy.hpp"

class PathNode : public rclcpp::Node {
public:
    using Path = path_following::action::Path;
    using GoalHandleState = rclcpp_action::ClientGoalHandle<Path>;

    path_following::action::Path_Goal path = path_following::action::Path_Goal();
    bool state_initialize_frag = false;

    std::vector<int> buttons = {0,0,0,0,0,0,0,0};

    void initialize_path(){
      path.start = {0,0};
      path.goal = {0,0};
      path.head = 0;
    }

    void set_goal(double x, double y){
      path.goal = {x,y};
    }

    std::double_t x_target;
    std::double_t y_target;

    explicit PathNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("path_node", options)
    {
      //パラメータの宣言
      declare_parameter("x", 0.0);
      declare_parameter("y", 0.0);

      x_target = get_parameter("x").as_double();
      y_target = get_parameter("y").as_double();

      RCLCPP_INFO(this->get_logger(), "x target:%f\r\n",x_target);
      RCLCPP_INFO(this->get_logger(), "y target:%f\r\n",y_target);

      using namespace std::placeholders;

      this->client_ptr_ = rclcpp_action::create_client<Path>(this,"path_following");

      //this->timer_ = this->create_wall_timer(,manip::msg::Cmd message
        // std::bind(&ManipJoyNode::send_goal, this));

      set_goal(x_target,y_target);
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

    auto goal_msg = Path::Goal();
    goal_msg = path;

    RCLCPP_INFO(this->get_logger(), "Sending goal");

    auto send_goal_options = rclcpp_action::Client<Path>::SendGoalOptions();
    send_goal_options.goal_response_callback =
      std::bind(&PathNode::goal_response_callback, this, _1);
    send_goal_options.feedback_callback =
      std::bind(&PathNode::feedback_callback, this, _1, _2);
    send_goal_options.result_callback =
      std::bind(&PathNode::result_callback, this, _1);
    this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }
private:
    rclcpp_action::Client<Path>::SharedPtr client_ptr_;
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
    const std::shared_ptr<const Path::Feedback> feedback)
  {
    std::stringstream ss;
    ss << "feedback received: ";
    for (auto number : feedback->posi) {
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
    rclcpp::shutdown();
  }
};

std::shared_ptr<PathNode> path_node;