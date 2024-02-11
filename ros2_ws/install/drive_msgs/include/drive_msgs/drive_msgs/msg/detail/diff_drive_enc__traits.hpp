// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_msgs:msg/DiffDriveEnc.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__TRAITS_HPP_
#define DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drive_msgs/msg/detail/diff_drive_enc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DiffDriveEnc & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: m1enc
  {
    out << "m1enc: ";
    rosidl_generator_traits::value_to_yaml(msg.m1enc, out);
    out << ", ";
  }

  // member: m2enc
  {
    out << "m2enc: ";
    rosidl_generator_traits::value_to_yaml(msg.m2enc, out);
    out << ", ";
  }

  // member: lxenc
  {
    out << "lxenc: ";
    rosidl_generator_traits::value_to_yaml(msg.lxenc, out);
    out << ", ";
  }

  // member: azenc
  {
    out << "azenc: ";
    rosidl_generator_traits::value_to_yaml(msg.azenc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DiffDriveEnc & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: m1enc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m1enc: ";
    rosidl_generator_traits::value_to_yaml(msg.m1enc, out);
    out << "\n";
  }

  // member: m2enc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m2enc: ";
    rosidl_generator_traits::value_to_yaml(msg.m2enc, out);
    out << "\n";
  }

  // member: lxenc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lxenc: ";
    rosidl_generator_traits::value_to_yaml(msg.lxenc, out);
    out << "\n";
  }

  // member: azenc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azenc: ";
    rosidl_generator_traits::value_to_yaml(msg.azenc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DiffDriveEnc & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace drive_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drive_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drive_msgs::msg::DiffDriveEnc & msg,
  std::ostream & out, size_t indentation = 0)
{
  drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drive_msgs::msg::DiffDriveEnc & msg)
{
  return drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drive_msgs::msg::DiffDriveEnc>()
{
  return "drive_msgs::msg::DiffDriveEnc";
}

template<>
inline const char * name<drive_msgs::msg::DiffDriveEnc>()
{
  return "drive_msgs/msg/DiffDriveEnc";
}

template<>
struct has_fixed_size<drive_msgs::msg::DiffDriveEnc>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drive_msgs::msg::DiffDriveEnc>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drive_msgs::msg::DiffDriveEnc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__TRAITS_HPP_
