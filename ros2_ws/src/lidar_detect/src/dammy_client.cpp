#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <memory>
#include "lidar_detect/srv/scan.hpp"
#include <algorithm>
#include <string>

using namespace std::chrono_literals;

class DammyClient : public rclcpp::Node {
public:
    DammyClient() : Node("dammy_client") {//nodeを作成
        std::cout << "dammy_client" << std::endl;
        rclcpp::Client<lidar_detect::srv::Scan>::SharedPtr client = create_client<lidar_detect::srv::Scan>("server_detect");
        std::cout << "dammy_client1" << std::endl;
        // Serviceを探索
        while(!client->wait_for_service(1s)){
            if(!rclcpp::ok()){
                break;
            }
            std::cout << "call_text service not available" << std::endl;

        }
        std::cout << "call_text service available" << std::endl;

        auto callback_response = [this](rclcpp::Client<lidar_detect::srv::Scan>::SharedFuture future) -> void {
            RCLCPP_INFO(this->get_logger(), "res: %f , %f", future.get()->odom_error[0], future.get()->odom_error[1]);
        };

        auto timer_callback = [this,client,callback_response]() -> void {
                auto request = std::make_shared<lidar_detect::srv::Scan::Request>();
                request->odom[1] = 0;
                request->corner[0] = 0;
                request->corner[1] = 0;

                auto result = client->async_send_request(request);  // ServerにRequestを送信

                auto future_res = client->async_send_request(request, callback_response);
        }; 

        timer_ = this->create_wall_timer(1000ms, timer_callback); 
    }
private:
    rclcpp::TimerBase::SharedPtr timer_;
};

//argcはこれから与えられる引数の数を示し、argvはコマンドライン引数
int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DammyClient>());
    rclcpp::shutdown();
    return 0;
}
