// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manip_msgs:msg/Result.idl
// generated code does not contain a copyright notice

#ifndef MANIP_MSGS__MSG__DETAIL__RESULT__BUILDER_HPP_
#define MANIP_MSGS__MSG__DETAIL__RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manip_msgs/msg/detail/result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manip_msgs
{

namespace msg
{

namespace builder
{

class Init_Result_num
{
public:
  explicit Init_Result_num(::manip_msgs::msg::Result & msg)
  : msg_(msg)
  {}
  ::manip_msgs::msg::Result num(::manip_msgs::msg::Result::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip_msgs::msg::Result msg_;
};

class Init_Result_feedback
{
public:
  Init_Result_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Result_num feedback(::manip_msgs::msg::Result::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return Init_Result_num(msg_);
  }

private:
  ::manip_msgs::msg::Result msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip_msgs::msg::Result>()
{
  return manip_msgs::msg::builder::Init_Result_feedback();
}

}  // namespace manip_msgs

#endif  // MANIP_MSGS__MSG__DETAIL__RESULT__BUILDER_HPP_
