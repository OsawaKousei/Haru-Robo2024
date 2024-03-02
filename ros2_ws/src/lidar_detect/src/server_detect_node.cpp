#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp" 

#include "lidar_detect/srv/scan.hpp"
#include "lidar_detect/msg/detect_result.hpp"

#include "../include/lidar_scan.hpp"
#include "../include/coordinate.hpp"

using namespace std::chrono_literals;

class ServerDetectNode : public rclcpp::Node{
    public:
    sensor_msgs::msg::LaserScan scan;   

    ServerDetectNode() : Node("server_detect_node"){
        publisher_ = this->create_publisher<lidar_detect::msg::DetectResult>("detect_result", 10);

        auto service_callback = [this](const std::shared_ptr<lidar_detect::srv::Scan::Request> request, std::shared_ptr<lidar_detect::srv::Scan::Response> response) -> void{
            auto message = lidar_detect::msg::DetectResult();

            double corner[3] = {0,0,0};
            ScanDetect::dist_corner_detect(scan, corner);

            message.cx = corner[0];
            message.cy = corner[1];

            double edge1[2] = {0,0};
            double edge2[2] = {0,0};

            edge1[0] = scan.ranges[0] * cos(scan.angle_min);
            edge1[1] = scan.ranges[0] * sin(scan.angle_min);
            edge2[0] = scan.ranges[scan.ranges.size()-1] * cos(scan.angle_max);
            edge2[1] = scan.ranges[scan.ranges.size()-1] * sin(scan.angle_max);

            message.reliability = ScanDetect::corner_reliability(edge1, edge2, corner);

            double wall[3] = {0,0,0};
            auto w1 = sensor_msgs::msg::LaserScan();
            ScanAjust::cut_scan(scan, &w1, 0, corner[2]);
            ScanDetect::simple_line_detect(w1, wall);
            message.a1 = wall[0];
            message.b1 = wall[1];
            message.c1 = wall[2];

            auto w2 = sensor_msgs::msg::LaserScan();
            ScanAjust::cut_scan(scan, &w2, corner[2]+1, scan.ranges.size()-1);
            ScanDetect::simple_line_detect(w2, wall);
            message.a2 = wall[0];
            message.b2 = wall[1];
            message.c2 = wall[2];

            message.e1x = edge1[0];
            message.e1y = edge1[1];
            message.e2x = edge2[0];
            message.e2y = edge2[1];
            this->publisher_->publish(message);

            
        };

        srv = create_service<lidar_detect::srv::Scan>("server_detect", service_callback);

        auto topic_callback = [this](const sensor_msgs::msg::LaserScan msg) -> void{
            scan = msg;
        };

        subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>("filtered_scan", 10, topic_callback);
    }
    private:
    float scan_x = 0;
    float scan_y = 0;

    rclcpp::Service<lidar_detect::srv::Scan>::SharedPtr srv;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr subscription_;
    rclcpp::Publisher<lidar_detect::msg::DetectResult>::SharedPtr publisher_;
};

int main(int argc, char **argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ServerDetectNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}