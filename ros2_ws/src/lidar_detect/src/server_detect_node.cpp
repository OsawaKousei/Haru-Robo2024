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
    sensor_msgs::msg::LaserScan filtered_scan;

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

            response->rotation_error = error;

            //角度誤差を修正した角の相対座標を求める
            double modified_corner[2] = {0,0};
            modified_corner[0] = (corner[0] + scan_x) * cos(error) - (corner[1] + scan_y) * sin(error);
            modified_corner[1] = (corner[0] + scan_x) * sin(error) + (corner[1] + scan_y) * cos(error);

            //角の絶対座標を求める
            double world_coner[2] = {0,0};
            world_coner[0] = modified_corner[0] + request->odom[0];
            world_coner[1] = modified_corner[1] + request->odom[1];

            //lidarによる角の絶対座標と実際の座標の誤差を求める
            response->odom_error[0] = request->corner[0] - world_coner[0];
            response->odom_error[1] = request->corner[1] - world_coner[1];
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

    void filter_scan(float angle[]){
        //scanメッセージを変更
        filtered_scan = scan;

        double min_angle = angle[0];
        double max_angle = angle[1];

        filtered_scan.angle_max = max_angle;
        filtered_scan.angle_min = min_angle;

        //scanデータを変更
        int start_index = 0;
        int end_index = 0;

        start_index = (int)((min_angle - scan.angle_min) / scan.angle_increment);
        end_index = (int)((max_angle - scan.angle_min) / scan.angle_increment);

        int size = end_index - start_index + 1;

        filtered_scan.ranges.resize(size);
        for(int i = 0; i < size; i++){
            filtered_scan.ranges[i] = scan.ranges[start_index + i];
        }
    }
};

int main(int argc, char **argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ServerDetectNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}