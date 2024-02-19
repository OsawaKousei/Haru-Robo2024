#include "../include/action_node.hpp"
#include "ament_index_cpp/get_package_share_directory.hpp"
#include "iostream"

using namespace MyActionNodes;
using namespace BT;

int main(int argc, char* argv[]){
  //rclcpp::init(argc, argv);
  // ros_node.hppで定義したインスタンスにポインタを入力
  //catch_node = std::make_shared<CatchNode>();
  //rclcpp::shutdown();
  
  BehaviorTreeFactory factory;
  // action_node.hppで定義したActionNodeクラスを登録
  factory.registerNodeType<Catch_work>("Catch_work");
  factory.registerNodeType<Put_work>("Put_work");
  factory.registerNodeType<pos_control>("pos_control");

  // main_bt.xmlのpathを取得して登録
  std::string package_path = ament_index_cpp::get_package_share_directory("bt");
  factory.registerBehaviorTreeFromFile(package_path + "/config/pos_control.xml");

  // main_bt.xml内のMainBTツリーを作成
  BT::Tree tree = factory.createTree("pos_control_test2");

  // Tree構造を表示
  printTreeRecursively(tree.rootNode());
  
  NodeStatus status = NodeStatus::RUNNING;
  while(status == NodeStatus::RUNNING){
    status = tree.tickOnce();
  }
  return 0;
}