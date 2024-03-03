#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "manip/action/state.hpp"
#include "sensor_msgs/msg/joy.hpp"

class JoyControlNode : public rclcpp::Node {
public:
    std::vector<int> buttons = {0,0,0,0,0,0,0,0};

    explicit JoyControlNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
    : Node("joy_control_node", options)
    {
        auto topic_callback = [this](const sensor_msgs::msg::Joy &msg) -> void {

          if(msg.buttons[7] == 1 && buttons[7] == 0){
           
          }

          if(msg.buttons[6] == 1 && buttons[6] == 0){
           
          }

          if(msg.buttons[5] == 1 && buttons[5] == 0){
           
          }

          if(msg.buttons[4] == 1 && buttons[4] == 0){
           
          }

          if(msg.buttons[3] == 1 && buttons[3] == 0){
            
          }

          if(msg.buttons[2] == 1 && buttons[2] == 0){
            
          }

          if(msg.buttons[1] == 1 && buttons[1] == 0){
           
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

        };

        //ジョイコンの入力を受け取るトピックの設定
        subscription_ = this->create_subscription<sensor_msgs::msg::Joy>("joy", 10, topic_callback);
    }

private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JoyControlNode>());
    rclcpp::shutdown();
    return 0;
}
