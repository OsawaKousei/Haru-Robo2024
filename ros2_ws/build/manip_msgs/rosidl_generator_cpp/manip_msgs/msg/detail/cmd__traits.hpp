// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from manip_msgs:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef MANIP_MSGS__MSG__DETAIL__CMD__TRAITS_HPP_
#define MANIP_MSGS__MSG__DETAIL__CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "manip_msgs/msg/detail/cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace manip_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Cmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: top_base_arm
  {
    out << "top_base_arm: ";
    rosidl_generator_traits::value_to_yaml(msg.top_base_arm, out);
    out << ", ";
  }

  // member: top_base_hand
  {
    out << "top_base_hand: ";
    rosidl_generator_traits::value_to_yaml(msg.top_base_hand, out);
    out << ", ";
  }

  // member: bottom_base_arm
  {
    out << "bottom_base_arm: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_base_arm, out);
    out << ", ";
  }

  // member: bottom_base_hand
  {
    out << "bottom_base_hand: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_base_hand, out);
    out << ", ";
  }

  // member: work_arm_deploy
  {
    out << "work_arm_deploy: ";
    rosidl_generator_traits::value_to_yaml(msg.work_arm_deploy, out);
    out << ", ";
  }

  // member: work_arm
  {
    out << "work_arm: ";
    rosidl_generator_traits::value_to_yaml(msg.work_arm, out);
    out << ", ";
  }

  // member: work_hand
  {
    out << "work_hand: ";
    rosidl_generator_traits::value_to_yaml(msg.work_hand, out);
    out << ", ";
  }

  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Cmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: top_base_arm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_base_arm: ";
    rosidl_generator_traits::value_to_yaml(msg.top_base_arm, out);
    out << "\n";
  }

  // member: top_base_hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_base_hand: ";
    rosidl_generator_traits::value_to_yaml(msg.top_base_hand, out);
    out << "\n";
  }

  // member: bottom_base_arm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_base_arm: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_base_arm, out);
    out << "\n";
  }

  // member: bottom_base_hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_base_hand: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_base_hand, out);
    out << "\n";
  }

  // member: work_arm_deploy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "work_arm_deploy: ";
    rosidl_generator_traits::value_to_yaml(msg.work_arm_deploy, out);
    out << "\n";
  }

  // member: work_arm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "work_arm: ";
    rosidl_generator_traits::value_to_yaml(msg.work_arm, out);
    out << "\n";
  }

  // member: work_hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "work_hand: ";
    rosidl_generator_traits::value_to_yaml(msg.work_hand, out);
    out << "\n";
  }

  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Cmd & msg, bool use_flow_style = false)
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

}  // namespace manip_msgs

namespace rosidl_generator_traits
{

[[deprecated("use manip_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manip_msgs::msg::Cmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  manip_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manip_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const manip_msgs::msg::Cmd & msg)
{
  return manip_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<manip_msgs::msg::Cmd>()
{
  return "manip_msgs::msg::Cmd";
}

template<>
inline const char * name<manip_msgs::msg::Cmd>()
{
  return "manip_msgs/msg/Cmd";
}

template<>
struct has_fixed_size<manip_msgs::msg::Cmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<manip_msgs::msg::Cmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<manip_msgs::msg::Cmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MANIP_MSGS__MSG__DETAIL__CMD__TRAITS_HPP_
