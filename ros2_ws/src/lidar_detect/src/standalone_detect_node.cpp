#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "lidar_detect/msg/detect_result.hpp"

#include "../include/lidar_scan.hpp"
#include "../include/coordinate.hpp"

using namespace std::chrono_literals;

class StandaloneDetect : public rclcpp::Node {
public:
    StandaloneDetect() : Node("standalone_detect") {//nodeを作成
        //publishreの作成<メッセージ型>(topic名,qos)
        publisher_ = this->create_publisher<lidar_detect::msg::DetectResult>("detect_result", 10);

        auto topic_callback = [this](const sensor_msgs::msg::LaserScan &msg) -> void {
            auto message = lidar_detect::msg::DetectResult();

            double corner[3] = {0,0,0};
            ScanDetect::dist_corner_detect(msg, corner);

            message.cx = corner[0];
            message.cy = corner[1];

            double edge1[2] = {0,0};
            double edge2[2] = {0,0};

            edge1[0] = msg.ranges[0] * cos(msg.angle_min);
            edge1[1] = msg.ranges[0] * sin(msg.angle_min);
            edge2[0] = msg.ranges[msg.ranges.size()-1] * cos(msg.angle_max);
            edge2[1] = msg.ranges[msg.ranges.size()-1] * sin(msg.angle_max);

            message.reliability = ScanDetect::corner_reliability(edge1, edge2, corner);

            double wall[3] = {0,0,0};
            auto w1 = sensor_msgs::msg::LaserScan();
            ScanAjust::cut_scan(msg, &w1, 0, corner[2]);
            ScanDetect::simple_line_detect(w1, wall);
            message.a1 = wall[0];
            message.b1 = wall[1];
            message.c1 = wall[2];

            auto w2 = sensor_msgs::msg::LaserScan();
            ScanAjust::cut_scan(msg, &w2, corner[2]+1, msg.ranges.size()-1);
            ScanDetect::simple_line_detect(w2, wall);
            message.a2 = wall[0];
            message.b2 = wall[1];
            message.c2 = wall[2];

            message.e1x = edge1[0];
            message.e1y = edge1[1];
            message.e2x = edge2[0];
            message.e2y = edge2[1];
            this->publisher_->publish(message);

            double error2 = Coordinate::get_rotate_error(message.a2, message.b2, message.c2);
            double error1 = Coordinate::get_rotate_error(message.a1, message.b1, message.c1);
            double error;

            //誤差が少ない方を正面の壁とみなす　←45度以上傾いていたら誤検出するので注意
            if(abs(error1) > abs(error2)){
                error = error2;
            }else{
                error = error1;
            }

            double dist1 = ScanDetect::distance_powed(edge1, corner);
            double dist2 = ScanDetect::distance_powed(edge2, corner);
            double dist_threshold = 0.01;

            //壁の長さが閾値以下の場合は除外
            if(dist1 < dist_threshold){
                error = error2;
            }else if(dist2 < dist_threshold){
                error = error1;
            }

            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "dist1: %f",dist1);
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "dist2: %f",dist2);
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "rotate error: %f",error);
        }; 

        auto timer_callback = [this]() -> void {
        }; 

        //サブスクリプションの作成<メッセージ型>(topic名,qos,コールバック関数)
        subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>("filtered_scan", 10, topic_callback);
        timer_ = this->create_wall_timer(500ms, timer_callback); 
    }
private:
    double corner[2] {0,0};

    int count = 0;

    // 上記の動作に必要なprivateメンバ
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr subscription_;
    rclcpp::Publisher<lidar_detect::msg::DetectResult>::SharedPtr publisher_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<StandaloneDetect>());
    rclcpp::shutdown();
    return 0;
}