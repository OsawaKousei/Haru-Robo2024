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
#include "path_following/action/calib.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "drive_msgs/msg/omni_enc.hpp"
#include "drive_msgs/msg/omni_enc_mod.hpp"
#include <chrono>
#include "../include/pid.hpp"

using namespace std::chrono_literals; // 500msとか書けるようにするため  

class CalibNode : public rclcpp::Node {
public:
    using Calib = path_following::action::Calib;
    using GoalHandlePath = rclcpp_action::ServerGoalHandle<Calib>;

      path_following::action::Calib_Goal calib = path_following::action::Calib_Goal();
      geometry_msgs::msg::Twist cmd_vel = geometry_msgs::msg::Twist();

    bool initialize_frag = false;
    bool control_flag = false;
    bool succeed_flag = false;
    float succeed_count = 0;
    float succeed_time = 100;

    float present_theta = 0.0;
    float theta_per_enc = 0.0;
    float enc_diff = 0.0;
    float enc_base_lx = 0.0;
    float enc_base_ly = 0.0;

    bool enc_init_flag = false;

    PID_ctrl pid_ctrl_x = PID_ctrl(0);
    PID_ctrl pid_ctrl_y = PID_ctrl(0);

    void initialize(){
      calib.rad = 0.0;

      present_theta = 0.0;
      theta_per_enc = 0.0;
      enc_diff = 0.0;
      enc_base_lx = 0.0;
      enc_base_ly = 0.0;

      cmd_vel.linear.x = 0;
      cmd_vel.linear.y = 0;
      cmd_vel.angular.z = 0;

      succeed_count = 0;
      succeed_flag = false;

      pid_ctrl_x.cmd_debug_flag = true;
      pid_ctrl_x.Kp = 0.1;
      pid_ctrl_x.Ki = 0.01;
      pid_ctrl_x.max_limit_flag = true;
      pid_ctrl_x.max_limit = 0.2;
      pid_ctrl_x.min_limit_flag = true;
      pid_ctrl_x.min_limit = 0.025;
      pid_ctrl_x.integral_limit_flag = true;
      pid_ctrl_x.integral_limit = 6;//i項を変えるとここも変える
      pid_ctrl_x.torelance_judge_flag = true;
      pid_ctrl_x.torelance = 0.1;
      pid_ctrl_x.torelance_type = Stop;
      pid_ctrl_x.torelance_debug_flag = true;
      //pid_ctrl_y.cmd_debug_flag = true;
    }

    void set_cmd(){
      cmd_vel.angular.z = 0.0;

      cmd_vel.angular.z = pid_ctrl_x.pid_ctrl(present_theta, calib.rad);

      cmd_vel.angular.z = duty_limit(cmd_vel.angular.z);
    }

    float duty_limit(float duty){
      const float duty_max = 0.2;
      const float duty_min = duty_max * -1;

      if(duty > duty_max){
        return duty_max;
      }else if(duty < duty_min){  
        return duty_min;  
      }else{ 
        return duty;  
      }
    }

    explicit CalibNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("path_following_node", options)
    {
        using namespace std::placeholders;

        //publishreの作成<メッセージ型>(topic名,qos)
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);

        modpub = this->create_publisher<drive_msgs::msg::OmniEncMod>("enc_mod", 10);

        //サブスクリプションのコールバック関数
        auto topic_callback = [this](const drive_msgs::msg::OmniEnc &msg) -> void {

          if(!initialize_frag){
            initialize();
            initialize_frag = true;
            RCLCPP_INFO(this->get_logger(), "initialized path");
          }

          //エンコーダーの初期値を取得
          if(!enc_init_flag){
            enc_base_lx = msg.enclx;
            enc_base_ly = msg.encly;
            enc_init_flag = true;
          }

          //エンコーダーの変化量を取得し、radに変換
          enc_diff = msg.enclx - enc_base_lx;
          present_theta = enc_diff * theta_per_enc;

          if(succeed_flag){
            control_flag = false;

            cmd_vel.angular.z = 0.0;
            publisher_->publish(cmd_vel);
            
            RCLCPP_INFO(this->get_logger(), "detect success");
          }

          //制御周期ごとにpid制御を行う
          auto timer_callback = [this,msg]() -> void {  
            if (control_flag)
            {
              if(pid_ctrl_x.if_torelance()){
                succeed_count++;
                if(succeed_count > succeed_time){

                  //calibによるエンコーダーの変化を相殺
                  auto modmsg = drive_msgs::msg::OmniEncMod();
                  modmsg.enclx = enc_base_lx-msg.enclx;
                  modmsg.encly = enc_base_ly-msg.encly;
                  modpub->publish(modmsg);

                  succeed_flag = true;
                }
              }else{
                succeed_count = 0;
              }
              set_cmd();
              publisher_->publish(cmd_vel);
            }
          };

          timer_ = this->create_wall_timer(10ms, timer_callback);  
        }; 

        //サブスクリプションの作成<メッセージ型>(topic名,qos,コールバック関数)
        subscription_ = this->create_subscription<drive_msgs::msg::OmniEnc>("enc_val", 10, topic_callback);

        this->action_server_ = rclcpp_action::create_server<path_following::action::Calib>(
        this,
        "path_following",
        std::bind(&CalibNode::handle_goal, this, _1, _2),
        std::bind(&CalibNode::handle_cancel, this, _1),
        std::bind(&CalibNode::handle_accepted, this, _1));
    }
private:
    rclcpp_action::Server<path_following::action::Calib>::SharedPtr action_server_;
    rclcpp::Subscription<drive_msgs::msg::OmniEnc>::SharedPtr subscription_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::Publisher<drive_msgs::msg::OmniEncMod>::SharedPtr modpub;
    rclcpp::TimerBase::SharedPtr timer_;  

    //全てのゴールをアクセプトするだけのゴールハンドラー
    rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const Calib::Goal> goal)
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
    std::thread{std::bind(&CalibNode::execute, this, _1), goal_handle}.detach();
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
    calib.rad = goal->rad;

    succeed_flag = false;
    control_flag = true;


    RCLCPP_INFO(this->get_logger(), "rad target:%f\r\n",calib.rad);

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
    auto result = std::make_shared<Calib::Result>();

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
    ss << goal->rad << "; ";
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());

  }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CalibNode>());
    rclcpp::shutdown();
    return 0;
}
