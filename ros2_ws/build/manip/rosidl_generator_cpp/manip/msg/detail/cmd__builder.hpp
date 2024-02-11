// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manip:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef MANIP__MSG__DETAIL__CMD__BUILDER_HPP_
#define MANIP__MSG__DETAIL__CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manip/msg/detail/cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manip
{

namespace msg
{

namespace builder
{

class Init_Cmd_num
{
public:
  explicit Init_Cmd_num(::manip::msg::Cmd & msg)
  : msg_(msg)
  {}
  ::manip::msg::Cmd num(::manip::msg::Cmd::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip::msg::Cmd msg_;
};

class Init_Cmd_work2
{
public:
  explicit Init_Cmd_work2(::manip::msg::Cmd & msg)
  : msg_(msg)
  {}
  Init_Cmd_num work2(::manip::msg::Cmd::_work2_type arg)
  {
    msg_.work2 = std::move(arg);
    return Init_Cmd_num(msg_);
  }

private:
  ::manip::msg::Cmd msg_;
};

class Init_Cmd_work1
{
public:
  explicit Init_Cmd_work1(::manip::msg::Cmd & msg)
  : msg_(msg)
  {}
  Init_Cmd_work2 work1(::manip::msg::Cmd::_work1_type arg)
  {
    msg_.work1 = std::move(arg);
    return Init_Cmd_work2(msg_);
  }

private:
  ::manip::msg::Cmd msg_;
};

class Init_Cmd_base2
{
public:
  explicit Init_Cmd_base2(::manip::msg::Cmd & msg)
  : msg_(msg)
  {}
  Init_Cmd_work1 base2(::manip::msg::Cmd::_base2_type arg)
  {
    msg_.base2 = std::move(arg);
    return Init_Cmd_work1(msg_);
  }

private:
  ::manip::msg::Cmd msg_;
};

class Init_Cmd_base1
{
public:
  Init_Cmd_base1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cmd_base2 base1(::manip::msg::Cmd::_base1_type arg)
  {
    msg_.base1 = std::move(arg);
    return Init_Cmd_base2(msg_);
  }

private:
  ::manip::msg::Cmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip::msg::Cmd>()
{
  return manip::msg::builder::Init_Cmd_base1();
}

}  // namespace manip

#endif  // MANIP__MSG__DETAIL__CMD__BUILDER_HPP_
