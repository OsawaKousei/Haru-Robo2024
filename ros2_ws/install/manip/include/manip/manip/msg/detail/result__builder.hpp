// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manip:msg/Result.idl
// generated code does not contain a copyright notice

#ifndef MANIP__MSG__DETAIL__RESULT__BUILDER_HPP_
#define MANIP__MSG__DETAIL__RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manip/msg/detail/result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manip
{

namespace msg
{

namespace builder
{

class Init_Result_num
{
public:
  explicit Init_Result_num(::manip::msg::Result & msg)
  : msg_(msg)
  {}
  ::manip::msg::Result num(::manip::msg::Result::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip::msg::Result msg_;
};

class Init_Result_feedback
{
public:
  Init_Result_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Result_num feedback(::manip::msg::Result::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return Init_Result_num(msg_);
  }

private:
  ::manip::msg::Result msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip::msg::Result>()
{
  return manip::msg::builder::Init_Result_feedback();
}

}  // namespace manip

#endif  // MANIP__MSG__DETAIL__RESULT__BUILDER_HPP_
