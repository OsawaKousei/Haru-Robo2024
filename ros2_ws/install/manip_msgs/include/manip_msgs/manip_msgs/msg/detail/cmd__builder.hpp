// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manip_msgs:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef MANIP_MSGS__MSG__DETAIL__CMD__BUILDER_HPP_
#define MANIP_MSGS__MSG__DETAIL__CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manip_msgs/msg/detail/cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manip_msgs
{

namespace msg
{

namespace builder
{

class Init_Cmd_num
{
public:
  explicit Init_Cmd_num(::manip_msgs::msg::Cmd & msg)
  : msg_(msg)
  {}
  ::manip_msgs::msg::Cmd num(::manip_msgs::msg::Cmd::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip_msgs::msg::Cmd msg_;
};

class Init_Cmd_work_hand
{
public:
  explicit Init_Cmd_work_hand(::manip_msgs::msg::Cmd & msg)
  : msg_(msg)
  {}
  Init_Cmd_num work_hand(::manip_msgs::msg::Cmd::_work_hand_type arg)
  {
    msg_.work_hand = std::move(arg);
    return Init_Cmd_num(msg_);
  }

private:
  ::manip_msgs::msg::Cmd msg_;
};

class Init_Cmd_work_arm
{
public:
  explicit Init_Cmd_work_arm(::manip_msgs::msg::Cmd & msg)
  : msg_(msg)
  {}
  Init_Cmd_work_hand work_arm(::manip_msgs::msg::Cmd::_work_arm_type arg)
  {
    msg_.work_arm = std::move(arg);
    return Init_Cmd_work_hand(msg_);
  }

private:
  ::manip_msgs::msg::Cmd msg_;
};

class Init_Cmd_work_arm_deploy
{
public:
  explicit Init_Cmd_work_arm_deploy(::manip_msgs::msg::Cmd & msg)
  : msg_(msg)
  {}
  Init_Cmd_work_arm work_arm_deploy(::manip_msgs::msg::Cmd::_work_arm_deploy_type arg)
  {
    msg_.work_arm_deploy = std::move(arg);
    return Init_Cmd_work_arm(msg_);
  }

private:
  ::manip_msgs::msg::Cmd msg_;
};

class Init_Cmd_bottom_base_hand
{
public:
  explicit Init_Cmd_bottom_base_hand(::manip_msgs::msg::Cmd & msg)
  : msg_(msg)
  {}
  Init_Cmd_work_arm_deploy bottom_base_hand(::manip_msgs::msg::Cmd::_bottom_base_hand_type arg)
  {
    msg_.bottom_base_hand = std::move(arg);
    return Init_Cmd_work_arm_deploy(msg_);
  }

private:
  ::manip_msgs::msg::Cmd msg_;
};

class Init_Cmd_bottom_base_arm
{
public:
  explicit Init_Cmd_bottom_base_arm(::manip_msgs::msg::Cmd & msg)
  : msg_(msg)
  {}
  Init_Cmd_bottom_base_hand bottom_base_arm(::manip_msgs::msg::Cmd::_bottom_base_arm_type arg)
  {
    msg_.bottom_base_arm = std::move(arg);
    return Init_Cmd_bottom_base_hand(msg_);
  }

private:
  ::manip_msgs::msg::Cmd msg_;
};

class Init_Cmd_top_base_hand
{
public:
  explicit Init_Cmd_top_base_hand(::manip_msgs::msg::Cmd & msg)
  : msg_(msg)
  {}
  Init_Cmd_bottom_base_arm top_base_hand(::manip_msgs::msg::Cmd::_top_base_hand_type arg)
  {
    msg_.top_base_hand = std::move(arg);
    return Init_Cmd_bottom_base_arm(msg_);
  }

private:
  ::manip_msgs::msg::Cmd msg_;
};

class Init_Cmd_top_base_arm
{
public:
  Init_Cmd_top_base_arm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cmd_top_base_hand top_base_arm(::manip_msgs::msg::Cmd::_top_base_arm_type arg)
  {
    msg_.top_base_arm = std::move(arg);
    return Init_Cmd_top_base_hand(msg_);
  }

private:
  ::manip_msgs::msg::Cmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip_msgs::msg::Cmd>()
{
  return manip_msgs::msg::builder::Init_Cmd_top_base_arm();
}

}  // namespace manip_msgs

#endif  // MANIP_MSGS__MSG__DETAIL__CMD__BUILDER_HPP_
