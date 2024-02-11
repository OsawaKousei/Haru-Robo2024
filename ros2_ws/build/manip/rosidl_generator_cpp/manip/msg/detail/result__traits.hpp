// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from manip:msg/Result.idl
// generated code does not contain a copyright notice

#ifndef MANIP__MSG__DETAIL__RESULT__TRAITS_HPP_
#define MANIP__MSG__DETAIL__RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "manip/msg/detail/result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace manip
{

namespace msg
{

inline void to_flow_style_yaml(
  const Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
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
  const Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
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

inline std::string to_yaml(const Result & msg, bool use_flow_style = false)
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

}  // namespace manip

namespace rosidl_generator_traits
{

[[deprecated("use manip::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manip::msg::Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  manip::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manip::msg::to_yaml() instead")]]
inline std::string to_yaml(const manip::msg::Result & msg)
{
  return manip::msg::to_yaml(msg);
}

template<>
inline const char * data_type<manip::msg::Result>()
{
  return "manip::msg::Result";
}

template<>
inline const char * name<manip::msg::Result>()
{
  return "manip/msg/Result";
}

template<>
struct has_fixed_size<manip::msg::Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<manip::msg::Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<manip::msg::Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MANIP__MSG__DETAIL__RESULT__TRAITS_HPP_
