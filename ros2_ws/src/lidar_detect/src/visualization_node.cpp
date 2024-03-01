#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "tf2_msgs/msg/tf_message.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "tf2/LinearMath/Quaternion.h"
#include "lidar_detect/msg/detect_result.hpp"

#include "../include/lidar_scan.hpp"
#include "../include/coordinate.hpp"


using namespace std::chrono_literals;

class ScanEdgeNode : public rclcpp::Node {
public:
    ScanEdgeNode() : Node("scan_edge") {//nodeを作成
        //publishreの作成<メッセージ型>(topic名,qos)
        corner_publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("corner", 10);
        w1_publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("wall1", 10);
        w2_publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("wall2", 10);
        e1_publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("edge1", 10);
        e2_publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("edge2", 10);

        auto topic_callback = [this](const lidar_detect::msg::DetectResult &msg) -> void {
            auto corner_message = visualization_msgs::msg::Marker();
            corner_message.header.frame_id = "base_link";
            corner_message.header.stamp = this->now();
            corner_message.ns = "corner";
            corner_message.id = 0;
            VizMaker::std_cube_setter(&corner_message);
            corner_message.pose.position.x = msg.cx;
            corner_message.pose.position.y = msg.cy;
            corner_message.pose.position.z = 0.0;
            corner_message.color.r = 1.0f;
            corner_message.color.g = 0.0f;
            corner_message.color.b = 0.0f;
            corner_message.color.a = 1.0;
            corner_publisher_->publish(corner_message);

            auto w1_message = visualization_msgs::msg::Marker();
            w1_message.header.frame_id = "base_link";
            w1_message.header.stamp = this->now();
            w1_message.ns = "wall1";
            w1_message.id = 1;
            double line[3] = {msg.a1, msg.b1, msg.c1};
            double edge1[2] = {msg.e1x, msg.e1y};
            double edge2[2] = {msg.cx, msg.cy};
            double start_point[2] = {0,0};
            double end_point[2] = {0,0};
            ScanDetect::nearest_point_setter(edge1, line, start_point);
            ScanDetect::nearest_point_setter(edge2, line, end_point);
            geometry_msgs::msg::Point start;
            start.x = start_point[0];
            start.y = start_point[1];
            geometry_msgs::msg::Point end;
            end.x = end_point[0];
            end.y = end_point[1];
            VizMaker::std_line_setter(&w1_message, start, end);
            
            w1_publisher_->publish(w1_message);

            auto w2_message = visualization_msgs::msg::Marker();
            w2_message.header.frame_id = "base_link";
            w2_message.header.stamp = this->now();
            w2_message.ns = "wall2";
            w2_message.id = 2;
            line[0] = msg.a2;
            line[1] = msg.b2;
            line[2] = msg.c2;
            edge1[0] = msg.e2x;
            edge1[1] = msg.e2y;
            edge2[0] = msg.cx;
            edge2[1] = msg.cy;
            ScanDetect::nearest_point_setter(edge1, line, start_point);
            ScanDetect::nearest_point_setter(edge2, line, end_point);
            start.x = start_point[0];
            start.y = start_point[1];
            end.x = end_point[0];
            end.y = end_point[1];
            VizMaker::std_line_setter(&w2_message, start, end);

            w2_publisher_->publish(w2_message);

            auto e1_message = visualization_msgs::msg::Marker();
            e1_message.header.frame_id = "base_link";
            e1_message.header.stamp = this->now();
            e1_message.ns = "edge1";
            e1_message.id = 3;
            VizMaker::std_cube_setter(&e1_message);
            e1_message.pose.position.x = msg.e1x;
            e1_message.pose.position.y = msg.e1y;
            e1_message.pose.position.z = 0.0;
            e1_publisher_->publish(e1_message);

            auto e2_message = visualization_msgs::msg::Marker();
            e2_message.header.frame_id = "base_link";
            e2_message.header.stamp = this->now();
            e2_message.ns = "edge2";
            e2_message.id = 4;
            VizMaker::std_cube_setter(&e2_message);
            e2_message.pose.position.x = msg.e2x;
            e2_message.pose.position.y = msg.e2y;
            e2_message.pose.position.z = 0.0;
            e2_publisher_->publish(e2_message);
        };

        auto timer_callback = [this]() -> void {
        }; 

        //サブスクリプションの作成<メッセージ型>(topic名,qos,コールバック関数)
        subscription_ = this->create_subscription<lidar_detect::msg::DetectResult>("detect_result", 10, topic_callback);
        timer_ = this->create_wall_timer(500ms, timer_callback); 
    }
private:
    double corner[2] {0,0};

    int count = 0;

    // 上記の動作に必要なprivateメンバ
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<lidar_detect::msg::DetectResult>::SharedPtr subscription_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr corner_publisher_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr w1_publisher_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr w2_publisher_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr e1_publisher_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr e2_publisher_;
    std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ScanEdgeNode>());
    rclcpp::shutdown();
    return 0;
}