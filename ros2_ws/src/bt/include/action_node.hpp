#pragma once
#include <rclcpp/allocator/allocator_common.hpp>
#include "behaviortree_cpp/behavior_tree.h"
#include "behaviortree_cpp/bt_factory.h"
#include "rclcpp/rclcpp.hpp"
#include "catch_node.hpp"
#include "base1_catch_node.hpp"

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

}