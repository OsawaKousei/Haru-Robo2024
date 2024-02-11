// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from manip:action/State.idl
// generated code does not contain a copyright notice

#ifndef MANIP__ACTION__DETAIL__STATE__TRAITS_HPP_
#define MANIP__ACTION__DETAIL__STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "manip/action/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace manip
{

namespace action
{

inline void to_flow_style_yaml(
  const State_Goal & msg,
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

  // member: work
  {
    if (msg.work.size() == 0) {
      out << "work: []";
    } else {
      out << "work: [";
      size_t pending_items = msg.work.size();
      for (auto item : msg.work) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State_Goal & msg,
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

  // member: work
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.work.size() == 0) {
      out << "work: []\n";
    } else {
      out << "work:\n";
      for (auto item : msg.work) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace manip

namespace rosidl_generator_traits
{

[[deprecated("use manip::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manip::action::State_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  manip::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manip::action::to_yaml() instead")]]
inline std::string to_yaml(const manip::action::State_Goal & msg)
{
  return manip::action::to_yaml(msg);
}

template<>
inline const char * data_type<manip::action::State_Goal>()
{
  return "manip::action::State_Goal";
}

template<>
inline const char * name<manip::action::State_Goal>()
{
  return "manip/action/State_Goal";
}

template<>
struct has_fixed_size<manip::action::State_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<manip::action::State_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<manip::action::State_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace manip
{

namespace action
{

inline void to_flow_style_yaml(
  const State_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State_Result & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace manip

namespace rosidl_generator_traits
{

[[deprecated("use manip::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manip::action::State_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  manip::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manip::action::to_yaml() instead")]]
inline std::string to_yaml(const manip::action::State_Result & msg)
{
  return manip::action::to_yaml(msg);
}

template<>
inline const char * data_type<manip::action::State_Result>()
{
  return "manip::action::State_Result";
}

template<>
inline const char * name<manip::action::State_Result>()
{
  return "manip/action/State_Result";
}

template<>
struct has_fixed_size<manip::action::State_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<manip::action::State_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<manip::action::State_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace manip
{

namespace action
{

inline void to_flow_style_yaml(
  const State_Feedback & msg,
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

  // member: work
  {
    if (msg.work.size() == 0) {
      out << "work: []";
    } else {
      out << "work: [";
      size_t pending_items = msg.work.size();
      for (auto item : msg.work) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State_Feedback & msg,
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

  // member: work
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.work.size() == 0) {
      out << "work: []\n";
    } else {
      out << "work:\n";
      for (auto item : msg.work) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace manip

namespace rosidl_generator_traits
{

[[deprecated("use manip::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manip::action::State_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  manip::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manip::action::to_yaml() instead")]]
inline std::string to_yaml(const manip::action::State_Feedback & msg)
{
  return manip::action::to_yaml(msg);
}

template<>
inline const char * data_type<manip::action::State_Feedback>()
{
  return "manip::action::State_Feedback";
}

template<>
inline const char * name<manip::action::State_Feedback>()
{
  return "manip/action/State_Feedback";
}

template<>
struct has_fixed_size<manip::action::State_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<manip::action::State_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<manip::action::State_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "manip/action/detail/state__traits.hpp"

namespace manip
{

namespace action
{

inline void to_flow_style_yaml(
  const State_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace manip

namespace rosidl_generator_traits
{

[[deprecated("use manip::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manip::action::State_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  manip::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manip::action::to_yaml() instead")]]
inline std::string to_yaml(const manip::action::State_SendGoal_Request & msg)
{
  return manip::action::to_yaml(msg);
}

template<>
inline const char * data_type<manip::action::State_SendGoal_Request>()
{
  return "manip::action::State_SendGoal_Request";
}

template<>
inline const char * name<manip::action::State_SendGoal_Request>()
{
  return "manip/action/State_SendGoal_Request";
}

template<>
struct has_fixed_size<manip::action::State_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<manip::action::State_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<manip::action::State_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<manip::action::State_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<manip::action::State_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace manip
{

namespace action
{

inline void to_flow_style_yaml(
  const State_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace manip

namespace rosidl_generator_traits
{

[[deprecated("use manip::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manip::action::State_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  manip::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manip::action::to_yaml() instead")]]
inline std::string to_yaml(const manip::action::State_SendGoal_Response & msg)
{
  return manip::action::to_yaml(msg);
}

template<>
inline const char * data_type<manip::action::State_SendGoal_Response>()
{
  return "manip::action::State_SendGoal_Response";
}

template<>
inline const char * name<manip::action::State_SendGoal_Response>()
{
  return "manip/action/State_SendGoal_Response";
}

template<>
struct has_fixed_size<manip::action::State_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<manip::action::State_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<manip::action::State_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<manip::action::State_SendGoal>()
{
  return "manip::action::State_SendGoal";
}

template<>
inline const char * name<manip::action::State_SendGoal>()
{
  return "manip/action/State_SendGoal";
}

template<>
struct has_fixed_size<manip::action::State_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<manip::action::State_SendGoal_Request>::value &&
    has_fixed_size<manip::action::State_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<manip::action::State_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<manip::action::State_SendGoal_Request>::value &&
    has_bounded_size<manip::action::State_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<manip::action::State_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<manip::action::State_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<manip::action::State_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace manip
{

namespace action
{

inline void to_flow_style_yaml(
  const State_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace manip

namespace rosidl_generator_traits
{

[[deprecated("use manip::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manip::action::State_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  manip::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manip::action::to_yaml() instead")]]
inline std::string to_yaml(const manip::action::State_GetResult_Request & msg)
{
  return manip::action::to_yaml(msg);
}

template<>
inline const char * data_type<manip::action::State_GetResult_Request>()
{
  return "manip::action::State_GetResult_Request";
}

template<>
inline const char * name<manip::action::State_GetResult_Request>()
{
  return "manip/action/State_GetResult_Request";
}

template<>
struct has_fixed_size<manip::action::State_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<manip::action::State_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<manip::action::State_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "manip/action/detail/state__traits.hpp"

namespace manip
{

namespace action
{

inline void to_flow_style_yaml(
  const State_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace manip

namespace rosidl_generator_traits
{

[[deprecated("use manip::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manip::action::State_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  manip::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manip::action::to_yaml() instead")]]
inline std::string to_yaml(const manip::action::State_GetResult_Response & msg)
{
  return manip::action::to_yaml(msg);
}

template<>
inline const char * data_type<manip::action::State_GetResult_Response>()
{
  return "manip::action::State_GetResult_Response";
}

template<>
inline const char * name<manip::action::State_GetResult_Response>()
{
  return "manip/action/State_GetResult_Response";
}

template<>
struct has_fixed_size<manip::action::State_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<manip::action::State_Result>::value> {};

template<>
struct has_bounded_size<manip::action::State_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<manip::action::State_Result>::value> {};

template<>
struct is_message<manip::action::State_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<manip::action::State_GetResult>()
{
  return "manip::action::State_GetResult";
}

template<>
inline const char * name<manip::action::State_GetResult>()
{
  return "manip/action/State_GetResult";
}

template<>
struct has_fixed_size<manip::action::State_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<manip::action::State_GetResult_Request>::value &&
    has_fixed_size<manip::action::State_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<manip::action::State_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<manip::action::State_GetResult_Request>::value &&
    has_bounded_size<manip::action::State_GetResult_Response>::value
  >
{
};

template<>
struct is_service<manip::action::State_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<manip::action::State_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<manip::action::State_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "manip/action/detail/state__traits.hpp"

namespace manip
{

namespace action
{

inline void to_flow_style_yaml(
  const State_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace manip

namespace rosidl_generator_traits
{

[[deprecated("use manip::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const manip::action::State_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  manip::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use manip::action::to_yaml() instead")]]
inline std::string to_yaml(const manip::action::State_FeedbackMessage & msg)
{
  return manip::action::to_yaml(msg);
}

template<>
inline const char * data_type<manip::action::State_FeedbackMessage>()
{
  return "manip::action::State_FeedbackMessage";
}

template<>
inline const char * name<manip::action::State_FeedbackMessage>()
{
  return "manip/action/State_FeedbackMessage";
}

template<>
struct has_fixed_size<manip::action::State_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<manip::action::State_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<manip::action::State_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<manip::action::State_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<manip::action::State_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<manip::action::State>
  : std::true_type
{
};

template<>
struct is_action_goal<manip::action::State_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<manip::action::State_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<manip::action::State_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MANIP__ACTION__DETAIL__STATE__TRAITS_HPP_
