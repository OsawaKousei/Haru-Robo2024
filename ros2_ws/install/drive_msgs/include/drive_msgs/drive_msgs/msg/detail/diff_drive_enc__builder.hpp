// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drive_msgs:msg/DiffDriveEnc.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__BUILDER_HPP_
#define DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drive_msgs/msg/detail/diff_drive_enc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drive_msgs
{

namespace msg
{

namespace builder
{

class Init_DiffDriveEnc_azenc
{
public:
  explicit Init_DiffDriveEnc_azenc(::drive_msgs::msg::DiffDriveEnc & msg)
  : msg_(msg)
  {}
  ::drive_msgs::msg::DiffDriveEnc azenc(::drive_msgs::msg::DiffDriveEnc::_azenc_type arg)
  {
    msg_.azenc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drive_msgs::msg::DiffDriveEnc msg_;
};

class Init_DiffDriveEnc_lxenc
{
public:
  explicit Init_DiffDriveEnc_lxenc(::drive_msgs::msg::DiffDriveEnc & msg)
  : msg_(msg)
  {}
  Init_DiffDriveEnc_azenc lxenc(::drive_msgs::msg::DiffDriveEnc::_lxenc_type arg)
  {
    msg_.lxenc = std::move(arg);
    return Init_DiffDriveEnc_azenc(msg_);
  }

private:
  ::drive_msgs::msg::DiffDriveEnc msg_;
};

class Init_DiffDriveEnc_m2enc
{
public:
  explicit Init_DiffDriveEnc_m2enc(::drive_msgs::msg::DiffDriveEnc & msg)
  : msg_(msg)
  {}
  Init_DiffDriveEnc_lxenc m2enc(::drive_msgs::msg::DiffDriveEnc::_m2enc_type arg)
  {
    msg_.m2enc = std::move(arg);
    return Init_DiffDriveEnc_lxenc(msg_);
  }

private:
  ::drive_msgs::msg::DiffDriveEnc msg_;
};

class Init_DiffDriveEnc_m1enc
{
public:
  explicit Init_DiffDriveEnc_m1enc(::drive_msgs::msg::DiffDriveEnc & msg)
  : msg_(msg)
  {}
  Init_DiffDriveEnc_m2enc m1enc(::drive_msgs::msg::DiffDriveEnc::_m1enc_type arg)
  {
    msg_.m1enc = std::move(arg);
    return Init_DiffDriveEnc_m2enc(msg_);
  }

private:
  ::drive_msgs::msg::DiffDriveEnc msg_;
};

class Init_DiffDriveEnc_name
{
public:
  Init_DiffDriveEnc_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiffDriveEnc_m1enc name(::drive_msgs::msg::DiffDriveEnc::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DiffDriveEnc_m1enc(msg_);
  }

private:
  ::drive_msgs::msg::DiffDriveEnc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drive_msgs::msg::DiffDriveEnc>()
{
  return drive_msgs::msg::builder::Init_DiffDriveEnc_name();
}

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__BUILDER_HPP_
