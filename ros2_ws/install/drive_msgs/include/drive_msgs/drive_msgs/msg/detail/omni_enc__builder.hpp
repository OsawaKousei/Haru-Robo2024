// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/OmniEnc.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/omni_enc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_OmniEnc_encadditional
{
public:
  explicit Init_OmniEnc_encadditional(::drive_msgs::msg::OmniEnc & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::OmniEnc encadditional(::drive_msgs::msg::OmniEnc::_encadditional_type arg)
  {
    msg_.encadditional = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::OmniEnc msg_;
};

class Init_OmniEnc_encly
{
public:
  explicit Init_OmniEnc_encly(::drive_msgs::msg::OmniEnc & msg)
  : msg_(msg)
  {}
  Init_OmniEnc_encadditional encly(::drive_msgs::msg::OmniEnc::_encly_type arg)
  {
    msg_.encly = std::move(arg);
    return Init_OmniEnc_encadditional(msg_);
  }

private:
  ::drive_msgs::msg::OmniEnc msg_;
};

class Init_OmniEnc_enclx
{
public:
  explicit Init_OmniEnc_enclx(::drive_msgs::msg::OmniEnc & msg)
  : msg_(msg)
  {}
  Init_OmniEnc_encly enclx(::drive_msgs::msg::OmniEnc::_enclx_type arg)
  {
    msg_.enclx = std::move(arg);
    return Init_OmniEnc_encly(msg_);
  }

private:
  ::drive_msgs::msg::OmniEnc msg_;
};

class Init_OmniEnc_encbackleft
{
public:
  explicit Init_OmniEnc_encbackleft(::drive_msgs::msg::OmniEnc & msg)
  : msg_(msg)
  {}
  Init_OmniEnc_enclx encbackleft(::drive_msgs::msg::OmniEnc::_encbackleft_type arg)
  {
    msg_.encbackleft = std::move(arg);
    return Init_OmniEnc_enclx(msg_);
  }

private:
  ::drive_msgs::msg::OmniEnc msg_;
};

class Init_OmniEnc_encbackright
{
public:
  explicit Init_OmniEnc_encbackright(::drive_msgs::msg::OmniEnc & msg)
  : msg_(msg)
  {}
  Init_OmniEnc_encbackleft encbackright(::drive_msgs::msg::OmniEnc::_encbackright_type arg)
  {
    msg_.encbackright = std::move(arg);
    return Init_OmniEnc_encbackleft(msg_);
  }

private:
  ::drive_msgs::msg::OmniEnc msg_;
};

class Init_OmniEnc_encfrontleft
{
public:
  explicit Init_OmniEnc_encfrontleft(::drive_msgs::msg::OmniEnc & msg)
  : msg_(msg)
  {}
  Init_OmniEnc_encbackright encfrontleft(::drive_msgs::msg::OmniEnc::_encfrontleft_type arg)
  {
    msg_.encfrontleft = std::move(arg);
    return Init_OmniEnc_encbackright(msg_);
  }

private:
  ::drive_msgs::msg::OmniEnc msg_;
};

class Init_OmniEnc_encfontright
{
public:
  explicit Init_OmniEnc_encfontright(::drive_msgs::msg::OmniEnc & msg)
  : msg_(msg)
  {}
  Init_OmniEnc_encfrontleft encfontright(::drive_msgs::msg::OmniEnc::_encfontright_type arg)
  {
    msg_.encfontright = std::move(arg);
    return Init_OmniEnc_encfrontleft(msg_);
  }

private:
  ::drive_msgs::msg::OmniEnc msg_;
};

class Init_OmniEnc_name
{
public:
  Init_OmniEnc_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OmniEnc_encfontright name(::drive_msgs::msg::OmniEnc::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_OmniEnc_encfontright(msg_);
  }

private:
  ::drive_msgs::msg::OmniEnc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::OmniEnc>()
{
  return drive_msgs::msg::builder::Init_OmniEnc_name();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__BUILDER_HPP_
