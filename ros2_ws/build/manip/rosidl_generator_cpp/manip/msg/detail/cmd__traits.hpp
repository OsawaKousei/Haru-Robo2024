// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from manip:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef MANIP__MSG__DETAIL__CMD__TRAITS_HPP_
#define MANIP__MSG__DETAIL__CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "manip/msg/detail/cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace manip
{

namespace msg
{

inline void to_flow_style_yaml(
  const Cmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: base1
  {
    if (msg.base1.size() == 0) {
      out << "base1: []";
    } else {
      out << "base1: [";
      size_t pending_items = msg.base1.size();
      for (auto item : msg.base1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: base2
  {
    if (msg.base2.size() == 0) {
      out << "base2: []";
    } else {
      out << "base2: [";
      size_t pending_items = msg.base2.size();
      for (auto item : msg.base2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: work1
  {
    if (msg.work1.size() == 0) {
      out << "work1: []";
    } else {
      out << "work1: [";
      size_t pending_items = msg.work1.size();
      for (auto item : msg.work1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: work2
  {
    if (msg.work2.size() == 0) {
      out << "work2: []";
    } else {
      out << "work2: [";
      size_t pending_items = msg.work2.size();
      for (auto item : msg.work2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  // member: base1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.base1.size() == 0) {
      out << "base1: []\n";
    } else {
      out << "base1:\n";
      for (auto item : msg.base1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: base2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.base2.size() == 0) {
      out << "base2: []\n";
    } else {
      out << "base2:\n";
      for (auto item : msg.base2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: work1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.work1.size() == 0) {
      out << "work1: []\n";
    } else {
      out << "work1:\n";
      for (auto item : msg.work1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: work2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.work2.size() == 0) {
      out << "work2: []\n";
    } else {
      out << "work2:\n";
      for (auto item : msg.work2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

}  // namespace manip

namespace rosidl_generator_traits
{

[[deprecated("use manip::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manip::msg::Cmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  manip::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manip::msg::to_yaml() instead")]]
inline std::string to_yaml(const manip::msg::Cmd & msg)
{
  return manip::msg::to_yaml(msg);
}

template<>
inline const char * data_type<manip::msg::Cmd>()
{
  return "manip::msg::Cmd";
}

template<>
inline const char * name<manip::msg::Cmd>()
{
  return "manip/msg/Cmd";
}

template<>
struct has_fixed_size<manip::msg::Cmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<manip::msg::Cmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<manip::msg::Cmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MANIP__MSG__DETAIL__CMD__TRAITS_HPP_
