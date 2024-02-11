// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_msgs:msg/Omni.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__OMNI__TRAITS_HPP_
#define DRIVE_MSGS__MSG__DETAIL__OMNI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drive_msgs/msg/detail/omni__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Omni & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: mfontright
  {
    out << "mfontright: ";
    rosidl_generator_traits::value_to_yaml(msg.mfontright, out);
    out << ", ";
  }

  // member: mfrontleft
  {
    out << "mfrontleft: ";
    rosidl_generator_traits::value_to_yaml(msg.mfrontleft, out);
    out << ", ";
  }

  // member: mbackright
  {
    out << "mbackright: ";
    rosidl_generator_traits::value_to_yaml(msg.mbackright, out);
    out << ", ";
  }

  // member: mbackleft
  {
    out << "mbackleft: ";
    rosidl_generator_traits::value_to_yaml(msg.mbackleft, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Omni & msg,
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

  // member: mfontright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mfontright: ";
    rosidl_generator_traits::value_to_yaml(msg.mfontright, out);
    out << "\n";
  }

  // member: mfrontleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mfrontleft: ";
    rosidl_generator_traits::value_to_yaml(msg.mfrontleft, out);
    out << "\n";
  }

  // member: mbackright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mbackright: ";
    rosidl_generator_traits::value_to_yaml(msg.mbackright, out);
    out << "\n";
  }

  // member: mbackleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mbackleft: ";
    rosidl_generator_traits::value_to_yaml(msg.mbackleft, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Omni & msg, bool use_flow_style = false)
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
  const drive_msgs::msg::Omni & msg,
  std::ostream & out, size_t indentation = 0)
{
  drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drive_msgs::msg::Omni & msg)
{
  return drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drive_msgs::msg::Omni>()
{
  return "drive_msgs::msg::Omni";
}

template<>
inline const char * name<drive_msgs::msg::Omni>()
{
  return "drive_msgs/msg/Omni";
}

template<>
struct has_fixed_size<drive_msgs::msg::Omni>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drive_msgs::msg::Omni>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drive_msgs::msg::Omni>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_MSGS__MSG__DETAIL__OMNI__TRAITS_HPP_
