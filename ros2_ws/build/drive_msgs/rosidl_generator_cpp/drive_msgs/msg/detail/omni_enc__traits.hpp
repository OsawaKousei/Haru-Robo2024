// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drive_msgs:msg/OmniEnc.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__TRAITS_HPP_
#define DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drive_msgs/msg/detail/omni_enc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OmniEnc & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: encfontright
  {
    out << "encfontright: ";
    rosidl_generator_traits::value_to_yaml(msg.encfontright, out);
    out << ", ";
  }

  // member: encfrontleft
  {
    out << "encfrontleft: ";
    rosidl_generator_traits::value_to_yaml(msg.encfrontleft, out);
    out << ", ";
  }

  // member: encbackright
  {
    out << "encbackright: ";
    rosidl_generator_traits::value_to_yaml(msg.encbackright, out);
    out << ", ";
  }

  // member: encbackleft
  {
    out << "encbackleft: ";
    rosidl_generator_traits::value_to_yaml(msg.encbackleft, out);
    out << ", ";
  }

  // member: enclx
  {
    out << "enclx: ";
    rosidl_generator_traits::value_to_yaml(msg.enclx, out);
    out << ", ";
  }

  // member: encly
  {
    out << "encly: ";
    rosidl_generator_traits::value_to_yaml(msg.encly, out);
    out << ", ";
  }

  // member: encadditional
  {
    out << "encadditional: ";
    rosidl_generator_traits::value_to_yaml(msg.encadditional, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OmniEnc & msg,
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

  // member: encfontright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encfontright: ";
    rosidl_generator_traits::value_to_yaml(msg.encfontright, out);
    out << "\n";
  }

  // member: encfrontleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encfrontleft: ";
    rosidl_generator_traits::value_to_yaml(msg.encfrontleft, out);
    out << "\n";
  }

  // member: encbackright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encbackright: ";
    rosidl_generator_traits::value_to_yaml(msg.encbackright, out);
    out << "\n";
  }

  // member: encbackleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encbackleft: ";
    rosidl_generator_traits::value_to_yaml(msg.encbackleft, out);
    out << "\n";
  }

  // member: enclx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enclx: ";
    rosidl_generator_traits::value_to_yaml(msg.enclx, out);
    out << "\n";
  }

  // member: encly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encly: ";
    rosidl_generator_traits::value_to_yaml(msg.encly, out);
    out << "\n";
  }

  // member: encadditional
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encadditional: ";
    rosidl_generator_traits::value_to_yaml(msg.encadditional, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OmniEnc & msg, bool use_flow_style = false)
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
  const drive_msgs::msg::OmniEnc & msg,
  std::ostream & out, size_t indentation = 0)
{
  drive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drive_msgs::msg::OmniEnc & msg)
{
  return drive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drive_msgs::msg::OmniEnc>()
{
  return "drive_msgs::msg::OmniEnc";
}

template<>
inline const char * name<drive_msgs::msg::OmniEnc>()
{
  return "drive_msgs/msg/OmniEnc";
}

template<>
struct has_fixed_size<drive_msgs::msg::OmniEnc>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drive_msgs::msg::OmniEnc>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drive_msgs::msg::OmniEnc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__TRAITS_HPP_
