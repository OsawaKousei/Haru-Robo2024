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
    bool path_initialize_frag = false;

    geometry_msgs::msg::Twist cmd_vel = geometry_msgs::msg::Twist();

    void initialize_path(){
      path.start = {0,0};
      path.goal = {0,0};
      path.head = 0;
    }

    void initialize_message(){
    cmd_vel.linear.x = 0;
    cmd_vel.linear.y = 0;
    cmd_vel.linear.z = 0;
  }
 
    explicit PathfollowingNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("path_following_node", options)
    {
        using namespace std::placeholders;

        //publishreの作成<メッセージ型>(topic名,qos)
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);

        //サブスクリプションのコールバック関数
        auto topic_callback = [this](const drive_msgs::msg::OmniEnc &msg) -> void {
            
            //コンソールにメッセージを表示
            RCLCPP_INFO(this->get_logger(), "catch message");
        }; 

        //サブスクリプションの作成<メッセージ型>(topic名,qos,コールバック関数)
        subscription_ = this->create_subscription<drive_msgs::msg::OmniEnc>("manip_reult_f7", 10, topic_callback);

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
    if(!path_initialize_frag){
            initialize_path();
            path_initialize_frag = true;
            RCLCPP_INFO(this->get_logger(), "initialized path");
    }

    using namespace std::placeholders;
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{std::bind(&PathfollowingNode::execute, this, _1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<GoalHandlePath> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Executing goal");

    initialize_message();

    show_message(cmd_vel);
    
    make_cmd_vel(goal_handle);
    execute_cmd_vel(goal_handle);


    RCLCPP_INFO(this->get_logger(), "Executed goal");

    auto feedback = std::make_shared<Path::Feedback>();
    auto result = std::make_shared<Path::Result>();

    // Publish feedback
    goal_handle->publish_feedback(feedback);
    RCLCPP_INFO(this->get_logger(), "Publish feedback");

    RCLCPP_INFO(this->get_logger(), "Goal succeeded");
    goal_handle->succeed(result);
  }

  void make_cmd_vel(const std::shared_ptr<GoalHandlePath> goal_handle){
    auto goal = goal_handle->get_goal();
    path.start = goal->start;
    path.goal = goal->goal;
    path.head = goal->head;
    show_goal(goal_handle);
  }

  void execute_cmd_vel(const std::shared_ptr<GoalHandlePath> goal_handle){
    cmd_vel.linear.x = 0.1;
    publisher_->publish(cmd_vel);
    RCLCPP_INFO(this->get_logger(), "publish cmd_vel");
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
