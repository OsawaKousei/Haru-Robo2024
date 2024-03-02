#pragma once
#include <rclcpp/allocator/allocator_common.hpp>
#include "behaviortree_cpp/behavior_tree.h"
#include "behaviortree_cpp/bt_factory.h"
#include "rclcpp/rclcpp.hpp"
#include "catch_node.hpp"
#include "base1_catch_node.hpp"
#include "path_node.hpp"

using namespace BT;

namespace MyActionNodes{
        class Catch_work : public StatefulActionNode {
        public:
                Catch_work(const std::string& name) : StatefulActionNode(name, {}){ }

                // ノードが呼び出されると一度だけ実行される
                NodeStatus onStart() override {
                        std::cout << "call catch_work_node" << std::endl;
                        
                        // 簡単な処理を記述
                        
                        // RUNNING状態を返すと次のTickでonRunning()が呼び出される。
                        return NodeStatus::RUNNING;
                }

                // Running状態のときに実行される
                NodeStatus onRunning() override {
                
                        // 時間のかかる処理などを記述
                        // rclcpp::init(0, nullptr);
                        // catch_node = std::make_shared<CatchNode>();
                        // rclcpp::spin(catch_node);
                        // rclcpp::shutdown();

                        return NodeStatus::SUCCESS;
                }

                void onHalted() override {
                        std::cout << "interrupt Catch_work" << std::endl;
                }          
        };


        class Put_work : public StatefulActionNode {
        public:
                Put_work(const std::string& name) : StatefulActionNode(name, {}){ }

                // ノードが呼び出されると一度だけ実行される
                NodeStatus onStart() override {
                        std::cout << "call put_work_node" << std::endl;
                        
                        // 簡単な処理を記述
                        
                        // RUNNING状態を返すと次のTickでonRunning()が呼び出される。
                        return NodeStatus::RUNNING;
                }

                // Running状態のときに実行される
                NodeStatus onRunning() override {

                        std::cout << "put work node running" << std::endl;

                        rclcpp::init(0, nullptr);
                        base1_catch_node = std::make_shared<Base1CatchNode>();
                        rclcpp::spin(base1_catch_node);
                        rclcpp::shutdown();
                
                        return NodeStatus::SUCCESS;
                }

                void onHalted() override {
                        std::cout << "interrupt Put_work_node" << std::endl;
                }
        };

        class pos_control : public StatefulActionNode {
        public:
                double x_target = 0;
                double y_target = 0;

                pos_control(const std::string& name, const NodeConfig& config) : StatefulActionNode(name, config){ }

                // Portの情報を記述する
                static PortsList providedPorts() {
                return { InputPort<std::double_t>("x_target"),
                         InputPort<std::double_t>("y_target") };
                }

                // ノードが呼び出されると一度だけ実行される
                NodeStatus onStart() override {
                        std::cout << "call path node" << std::endl;
                        
                        // 簡単な処理を記述
                        // InputPortの値を受け取る
                        Expected<double> msg1 = getInput<double>("x_target");
                        // if (!msg) { // Inputの値が適切でないときの処理
                        // throw BT::RuntimeError("missing required input [in_num]: ", msg.error() );
                        // }
                        x_target = msg1.value();

                        Expected<double> msg2 = getInput<double>("y_target");
                        y_target = msg2.value();

                        std::cout << x_target << std::endl;
                        std::cout << y_target << std::endl;
                        
                        // RUNNING状態を返すと次のTickでonRunning()が呼び出される。
                        return NodeStatus::RUNNING;
                }

                

                

                // Running状態のときに実行される
                NodeStatus onRunning() override {

                        std::cout << "path node running" << std::endl;

                        int argc = 5;
                        std::string x_target_str = "x:=" + std::to_string(x_target);
                        std::string y_target_str = "y:=" + std::to_string(y_target);
                        const char *argv[] = {
                                "--ros-args",
                                "-p", x_target_str.c_str(),
                                "-p", y_target_str.c_str()
                        };

                        rclcpp::init(argc, argv);
                        path_node = std::make_shared<PathNode>();
                        rclcpp::spin(path_node);
                        rclcpp::shutdown();
                
                        return NodeStatus::SUCCESS;
                }

                void onHalted() override {
                        std::cout << "interrupt path node" << std::endl;
                }
        };
}