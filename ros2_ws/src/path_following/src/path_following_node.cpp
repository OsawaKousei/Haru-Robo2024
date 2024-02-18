#include <functional>
#include <memory>
#include <thread>
#include <unistd.h>
#include "rclcpp/rclcpp.hpp"
#include "manip_msgs/msg/cmd.hpp"
#include "manip_msgs/msg/result.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "manip/action/state.hpp"
#include "path_following/action/path.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "drive_msgs/msg/omni_enc.hpp"

class PathfollowingNode : public rclcpp::Node {
public:
    using Path = path_following::action::Path;
    using GoalHandlePath = rclcpp_action::ServerGoalHandle<Path>;

      path_following::action::Path_Goal path = path_following::action::Path_Goal();
      geometry_msgs::msg::Twist cmd_vel = geometry_msgs::msg::Twist();

      struct pid_param
    {
      float Kp;
      float Ki;
      float Kd;
    };

    struct pid_param pid = {0,0,0};

    bool initialize_frag = false;
    bool control_flag = false;
    bool succeed_flag = false;

    const float zone = 0.5;

    void initialize(){
      pid.Kp = 0.2;
      pid.Ki = 0.0;
      pid.Kd = 0.0;

      path.start = {0,0};
      path.goal = {0,0};
      path.head = 0;

      succeed_flag = false;

      cmd_vel.linear.x = 0;
      cmd_vel.linear.y = 0;
      cmd_vel.angular.z = 0;
    }

    void set_cmd(float x_diff, float y_diff){
      cmd_vel.linear.x = 0.0;
      cmd_vel.linear.y = 0.0;

      cmd_vel.linear.x = pid.Kp*x_diff;
      cmd_vel.linear.y = pid.Kp*y_diff;

      cmd_vel.linear.x = duty_limit(cmd_vel.linear.x);
      cmd_vel.linear.y = duty_limit(cmd_vel.linear.y);
    }

    float duty_limit(float duty){
      const float duty_max = 0.5;
      const float duty_min = -0.5;

      if(duty > duty_max){
        return duty_max;
      }else if(duty < duty_min){  
        return duty_min;  
      }else{ 
        return duty;  
      }
    }

    explicit PathfollowingNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("path_following_node", options)
    {
        using namespace std::placeholders;

        //publishreの作成<メッセージ型>(topic名,qos)
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);

        //サブスクリプションのコールバック関数
        auto topic_callback = [this](const drive_msgs::msg::OmniEnc &msg) -> void {

          if(!initialize_frag){
            initialize();
            initialize_frag = true;
            RCLCPP_INFO(this->get_logger(), "initialized path");
          }

          float x_diff = path.goal[0] - msg.enclx;
          float y_diff = path.goal[1] - msg.encly;

          if(x_diff < zone && x_diff > -zone && y_diff < zone && y_diff > -zone && control_flag){
            control_flag = false;
            succeed_flag = true;

            cmd_vel.linear.x = 0.0;
            cmd_vel.linear.y = 0.0;
            publisher_->publish(cmd_vel);
            
            RCLCPP_INFO(this->get_logger(), "detect success");
          }

          if (control_flag)
          {
            set_cmd(x_diff, y_diff);
            publisher_->publish(cmd_vel);
          }
        }; 

        //サブスクリプションの作成<メッセージ型>(topic名,qos,コールバック関数)
        subscription_ = this->create_subscription<drive_msgs::msg::OmniEnc>("enc_val_f7", 10, topic_callback);

        this->action_server_ = rclcpp_action::create_server<path_following::action::Path>(
        this,
        "path_following",
        std::bind(&PathfollowingNode::handle_goal, this, _1, _2),
        std::bind(&PathfollowingNode::handle_cancel, this, _1),
        std::bind(&PathfollowingNode::handle_accepted, this, _1));
    }
private:
    rclcpp_action::Server<path_following::action::Path>::SharedPtr action_server_;
    rclcpp::Subscription<drive_msgs::msg::OmniEnc>::SharedPtr subscription_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;

    //全てのゴールをアクセプトするだけのゴールハンドラー
    rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const Path::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Received goal request");
    (void)uuid;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  //ゴールのキャンセルをアクセプトするだけのキャンセルハンドラー
  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandlePath> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }


  void handle_accepted(const std::shared_ptr<GoalHandlePath> goal_handle)
  {
    using namespace std::placeholders;

    control_flag = false;
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{std::bind(&PathfollowingNode::execute, this, _1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<GoalHandlePath> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Executing goal");

    if(!initialize_frag){
            initialize();
            initialize_frag = true;
            RCLCPP_INFO(this->get_logger(), "initialized path");
    }
    
    auto goal = goal_handle->get_goal();
    path.goal[0] = goal->goal[0];
    path.goal[1] = goal->goal[1];

    succeed_flag = false;
    control_flag = true;


    RCLCPP_INFO(this->get_logger(), "Execute goal");

    while(1){
      sleep(1);
      if(succeed_flag){

        send_success(goal_handle);
        break;
      }
    }

    // auto feedback = std::make_shared<Path::Feedback>();
    
    // // Publish feedback
    // goal_handle->publish_feedback(feedback);
    // RCLCPP_INFO(this->get_logger(), "Publish feedback");
  }

  void send_success(const std::shared_ptr<GoalHandlePath> goal_handle){
    auto result = std::make_shared<Path::Result>();

    RCLCPP_INFO(this->get_logger(), "Goal succeeded");
    goal_handle->succeed(result);
  }

  void show_message(geometry_msgs::msg::Twist message){
    
  std::stringstream ss;
  ss << "cmd message: ";
  ss << message.linear.x << "; ";
  RCLCPP_INFO(this->get_logger(), ss.str().c_str());

  }

  void show_goal(const std::shared_ptr<GoalHandlePath> goal_handle){

    auto goal = goal_handle->get_goal();
    std::stringstream ss;
    ss << "goal is: ";
    for (auto const& value : goal->goal) ss << value << "; ";
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());

  }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PathfollowingNode>());
    rclcpp::shutdown();
    return 0;
}
