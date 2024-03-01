#pragma once
#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include <vector>

#include "coordinate.hpp"
#include "statistics.hpp"

using namespace std;

class VizMaker{
    public:
    VizMaker(){
        
    }

    static void std_cube_setter(visualization_msgs::msg::Marker *message){
        message->type = visualization_msgs::msg::Marker::CUBE;
        message->action = visualization_msgs::msg::Marker::ADD;
        message->lifetime = rclcpp::Duration(0,0);

        message->scale.x = 0.02;
        message->scale.y = 0.02;
        message->scale.z = 0.01;

        message->pose.position.x = 0.0;
        message->pose.position.y = 0.0;
        message->pose.position.z = 0.0;

        message->pose.orientation.x = 0.0;
        message->pose.orientation.y = 0.0;
        message->pose.orientation.z = 0.0;
        message->pose.orientation.w = 1.0;

        message->color.r = 0.0f;
        message->color.g = 1.0f;
        message->color.b = 0.0f;
        message->color.a = 1.0;
    }

    static void std_line_setter(visualization_msgs::msg::Marker *message
                                ,geometry_msgs::msg::Point start_point
                                ,geometry_msgs::msg::Point end_point     ){

        message->type = visualization_msgs::msg::Marker::LINE_STRIP;
        message->action = visualization_msgs::msg::Marker::ADD;
        message->lifetime = rclcpp::Duration(0,0);

        message->scale.x = 0.01;

        message->color.r = 0.0f;
        message->color.g = 0.0f;
        message->color.b = 1.0f;
        message->color.a = 1.0;

        message->points.push_back(start_point);
        message->points.push_back(end_point);
    }
    private:
    
};

class ScanDetect{
    public:
    ScanDetect(){
        
    }

    static void simple_line_detect(sensor_msgs::msg::LaserScan scan, double result[]){
        vector<float> x;
        vector<float> y;

        for(int i = 0; i < scan.ranges.size(); i++){
            x.push_back(scan.ranges[i] * cos(scan.angle_min + scan.angle_increment * i));
            y.push_back(scan.ranges[i] * sin(scan.angle_min + scan.angle_increment * i));
        }

        LeastSquaresMethod data1;

        result[0] = data1.coef_x(x, y, x.size());
        result[1] = data1.coef_y(x, y, x.size());
        result[2] = data1.constant(x, y, x.size());
    }

    static void nearest_point_setter(double point[], double line[], double result[]){
        //ある点から最も近い与直線上の点を求める
        double coef_x = line[0];
        double coef_y = line[1];
        double constant = line[2];
        
        result[0] = (coef_y * coef_y * point[0] - coef_x * coef_y * point[1] - coef_x * constant) / (coef_x * coef_x + coef_y * coef_y);
        result[1] = (coef_x * coef_x * point[1] - coef_x * coef_y * point[0] - coef_y * constant) / (coef_x * coef_x + coef_y * coef_y);
    }

    static void dist_corner_detect(sensor_msgs::msg::LaserScan scan, double result[]){
        double max_range_num = 0;
            for(int i = 0; i < scan.ranges.size(); i++){
                if(scan.ranges[i] > scan.ranges[max_range_num]){
                    max_range_num = i;
                }
            }

        double angle = scan.angle_min + scan.angle_increment * max_range_num;
        double range = scan.ranges[max_range_num];

        result[0] = range * cos(angle);
        result[1] = range * sin(angle);
        result[2] = max_range_num;

        //segmentation fault対策
        if(result[2] == scan.ranges.size()-1){
            result[2] -= 1;
        }
        if(result[2] == 0){
            result[2] += 1;
        }
    }

    private:
    
};

class ScanAjust{
    public:
    ScanAjust(){
        
    }

    static void cut_scan(sensor_msgs::msg::LaserScan scan, sensor_msgs::msg::LaserScan *result, int start, int end){
        *result = scan;

        result->angle_max = scan.angle_min + scan.angle_increment * end;
        result->angle_min = scan.angle_min + scan.angle_increment * start;

        result->ranges.clear();
        for(int i = start; i < end; i++){
            result->ranges.push_back(scan.ranges[i]);
        }
    }

    private:
    
};