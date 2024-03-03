#include <functional>
#include <memory>
#include <thread>
#include <unistd.h>
#include "rclcpp/rclcpp.hpp"
#include "manip_msgs/msg/cmd.hpp"
#include "manip_msgs/msg/result.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "manip/action/state.hpp"

//BTnodeとアクション通信を行い、f7にcmdトピックを送信する。f7からのresultトピックを受信できる(未実装)。

class ManipControlNode : public rclcpp::Node {
public:
    using State = manip::action::State;
    using GoalHandleState = rclcpp_action::ServerGoalHandle<State>;

    manip::action::State_Goal state = manip::action::State_Goal();  //機体の状態を保持する変数
    bool state_initialize_frag = false;//機体の状態が初期化されたかどうかのフラグ
    manip_msgs::msg::Cmd cmd = manip_msgs::msg::Cmd();//送信するコマンドを保持する変数

    void initialize_state(){
      state.base1 = {0,0};
      state.base2 = {0,0};
      state.work = {0,0,0};
    }

    void initialize_message(){
    cmd.top_base_arm = -1;
    cmd.top_base_hand = -1;
    cmd.bottom_base_arm = -1;
    cmd.bottom_base_hand = -1;
    cmd.work_arm_deploy = -1;
    cmd.work_arm = -1;
    cmd.work_hand = -1;
    cmd.num = 0;
  }
 
    explicit ManipControlNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("manip_control_node", options)
    {
        using namespace std::placeholders;

        //パブリッシャーとサブスクライバーの設定
        publisher_ = this->create_publisher<manip_msgs::msg::Cmd>("manip_cmd_f7", 10);
        auto topic_callback = [this](const manip_msgs::msg::Result &msg) -> void {
            
            //コンソールにメッセージを表示
            RCLCPP_INFO(this->get_logger(), "catch message");
        }; 
        subscription_ = this->create_subscription<manip_msgs::msg::Result>("manip_reult_f7", 10, topic_callback);

        //アクションサーバーの設定
        this->action_server_ = rclcpp_action::create_server<manip::action::State>(
        this,
        "manip_control",
        std::bind(&ManipControlNode::handle_goal, this, _1, _2),
        std::bind(&ManipControlNode::handle_cancel, this, _1),
        std::bind(&ManipControlNode::handle_accepted, this, _1));
    }
private:
    rclcpp_action::Server<manip::action::State>::SharedPtr action_server_;
    rclcpp::Subscription<manip_msgs::msg::Result>::SharedPtr subscription_;
    rclcpp::Publisher<manip_msgs::msg::Cmd>::SharedPtr publisher_;

    //全てのゴールをアクセプトするだけのゴールハンドラー
    rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const State::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Received goal request");
    (void)uuid;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  //ゴールのキャンセルをアクセプトするだけのキャンセルハンドラー
  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleState> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  //ゴールをアクセプトしたときのコールバック関数
  void handle_accepted(const std::shared_ptr<GoalHandleState> goal_handle)
  {
    if(!state_initialize_frag){
            initialize_state();
            state_initialize_frag = true;
            RCLCPP_INFO(this->get_logger(), "initialized state");
    }

    using namespace std::placeholders;
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{std::bind(&ManipControlNode::execute, this, _1), goal_handle}.detach();
  }

  //ゴールを実行する関数
  void execute(const std::shared_ptr<GoalHandleState> goal_handle)
  {
    initialize_message();
    
    make_cmd(goal_handle);
    execute_cmd(goal_handle);

    sleep(4);

    auto feedback = std::make_shared<State::Feedback>();//適当なフィードバックを作成
    auto result = std::make_shared<State::Result>();//適当なリザルトを作成

    goal_handle->publish_feedback(feedback);
    RCLCPP_INFO(this->get_logger(), "Publish feedback");

    RCLCPP_INFO(this->get_logger(), "Goal succeeded");
    goal_handle->succeed(result);//タスクが成功したことを報告
  }

  void make_cmd(const std::shared_ptr<GoalHandleState> goal_handle){
    const auto goal = goal_handle->get_goal();

    show_goal(goal_handle);

    if(!(goal->work[0] == state.work[0])){
      cmd.work_arm_deploy = goal->work[0];
    }
    if(!(goal->work[1] == state.work[1])){
      cmd.work_arm = goal->work[1];
    }
    if(!(goal->work[2] == state.work[2])){
      cmd.work_hand = goal->work[2];
    }
    if(!(goal->base1[0] == state.base1[0])){
      cmd.top_base_arm = goal->base1[0];
    }
    if(!(goal->base1[1] == state.base1[1])){
      cmd.top_base_hand = goal->base1[1];
    }
    if(!(goal->base2[0] == state.base2[0])){
      cmd.bottom_base_arm = goal->base2[0];
    }
    if(!(goal->base2[1] == state.base2[1])){
      cmd.bottom_base_hand = goal->base2[1];
    }
  }

  void execute_cmd(const std::shared_ptr<GoalHandleState> goal_handle){
    const auto goal = goal_handle->get_goal();

    this->publisher_->publish(cmd);
    show_message(cmd);

    state.base1 = goal->base1;
    state.base2 = goal->base2;
    state.work = goal->work;
  }

  void show_message(manip_msgs::msg::Cmd message){
    
  std::stringstream ss;
  ss << "cmd message ";
  ss << "base1:";
  ss << message.top_base_arm << "; ";
  ss << message.top_base_hand << "; ";
  ss << "base2:";
  ss << message.bottom_base_arm << "; ";
  ss << message.bottom_base_hand << "; ";
  ss << "work: ";
  ss << message.work_arm_deploy << "; ";
  ss << message.work_arm << "; ";
  ss << message.work_hand << "; ";
  RCLCPP_INFO(this->get_logger(), ss.str().c_str());

  }

  void show_goal(const std::shared_ptr<GoalHandleState> goal_handle){

    auto goal = goal_handle->get_goal();
    std::stringstream ss;
    ss << "goal is: ";
    for (auto const& value : goal->work) ss << value << "; ";
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());

  }

  void show_state(manip::action::State_Goal state){
    std::stringstream ss;
    ss << "now state is: ";
    for (auto const& value : state.work) ss << value << "; ";
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());
  }
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ManipControlNode>());
    rclcpp::shutdown();
    return 0;
}
