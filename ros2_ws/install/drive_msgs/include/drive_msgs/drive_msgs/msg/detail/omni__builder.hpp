// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/Omni.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__OMNI__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__OMNI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/omni__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_Omni_mbackleft
{
public:
  explicit Init_Omni_mbackleft(::drive_msgs::msg::Omni & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::Omni mbackleft(::drive_msgs::msg::Omni::_mbackleft_type arg)
  {
    msg_.mbackleft = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::Omni msg_;
};

class Init_Omni_mbackright
{
public:
  explicit Init_Omni_mbackright(::drive_msgs::msg::Omni & msg)
  : msg_(msg)
  {}
  Init_Omni_mbackleft mbackright(::drive_msgs::msg::Omni::_mbackright_type arg)
  {
    msg_.mbackright = std::move(arg);
    return Init_Omni_mbackleft(msg_);
  }

private:
  ::drive_msgs::msg::Omni msg_;
};

class Init_Omni_mfrontleft
{
public:
  explicit Init_Omni_mfrontleft(::drive_msgs::msg::Omni & msg)
  : msg_(msg)
  {}
  Init_Omni_mbackright mfrontleft(::drive_msgs::msg::Omni::_mfrontleft_type arg)
  {
    msg_.mfrontleft = std::move(arg);
    return Init_Omni_mbackright(msg_);
  }

private:
  ::drive_msgs::msg::Omni msg_;
};

class Init_Omni_mfontright
{
public:
  explicit Init_Omni_mfontright(::drive_msgs::msg::Omni & msg)
  : msg_(msg)
  {}
  Init_Omni_mfrontleft mfontright(::drive_msgs::msg::Omni::_mfontright_type arg)
  {
    msg_.mfontright = std::move(arg);
    return Init_Omni_mfrontleft(msg_);
  }

private:
  ::drive_msgs::msg::Omni msg_;
};

class Init_Omni_name
{
public:
  Init_Omni_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Omni_mfontright name(::drive_msgs::msg::Omni::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Omni_mfontright(msg_);
  }

private:
  ::drive_msgs::msg::Omni msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::Omni>()
{
  return drive_msgs::msg::builder::Init_Omni_name();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__OMNI__BUILDER_HPP_
