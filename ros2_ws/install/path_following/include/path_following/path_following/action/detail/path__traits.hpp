// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from path_following:action/Path.idl
// generated code does not contain a copyright notice

#ifndef PATH_FOLLOWING__ACTION__DETAIL__PATH__TRAITS_HPP_
#define PATH_FOLLOWING__ACTION__DETAIL__PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "path_following/action/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace path_following
{

namespace action
{

inline void to_flow_style_yaml(
  const Path_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    if (msg.start.size() == 0) {
      out << "start: []";
    } else {
      out << "start: [";
      size_t pending_items = msg.start.size();
      for (auto item : msg.start) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal
  {
    if (msg.goal.size() == 0) {
      out << "goal: []";
    } else {
      out << "goal: [";
      size_t pending_items = msg.goal.size();
      for (auto item : msg.goal) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: head
  {
    out << "head: ";
    rosidl_generator_traits::value_to_yaml(msg.head, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Path_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start.size() == 0) {
      out << "start: []\n";
    } else {
      out << "start:\n";
      for (auto item : msg.start) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal.size() == 0) {
      out << "goal: []\n";
    } else {
      out << "goal:\n";
      for (auto item : msg.goal) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head: ";
    rosidl_generator_traits::value_to_yaml(msg.head, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Path_Goal & msg, bool use_flow_style = false)
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

}  // namespace path_following

namespace rosidl_generator_traits
{

[[deprecated("use path_following::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const path_following::action::Path_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  path_following::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use path_following::action::to_yaml() instead")]]
inline std::string to_yaml(const path_following::action::Path_Goal & msg)
{
  return path_following::action::to_yaml(msg);
}

template<>
inline const char * data_type<path_following::action::Path_Goal>()
{
  return "path_following::action::Path_Goal";
}

template<>
inline const char * name<path_following::action::Path_Goal>()
{
  return "path_following/action/Path_Goal";
}

template<>
struct has_fixed_size<path_following::action::Path_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<path_following::action::Path_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<path_following::action::Path_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace path_following
{

namespace action
{

inline void to_flow_style_yaml(
  const Path_Result & msg,
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
  const Path_Result & msg,
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

inline std::string to_yaml(const Path_Result & msg, bool use_flow_style = false)
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

}  // namespace path_following

namespace rosidl_generator_traits
{

[[deprecated("use path_following::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const path_following::action::Path_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  path_following::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use path_following::action::to_yaml() instead")]]
inline std::string to_yaml(const path_following::action::Path_Result & msg)
{
  return path_following::action::to_yaml(msg);
}

template<>
inline const char * data_type<path_following::action::Path_Result>()
{
  return "path_following::action::Path_Result";
}

template<>
inline const char * name<path_following::action::Path_Result>()
{
  return "path_following/action/Path_Result";
}

template<>
struct has_fixed_size<path_following::action::Path_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<path_following::action::Path_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<path_following::action::Path_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace path_following
{

namespace action
{

inline void to_flow_style_yaml(
  const Path_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: posi
  {
    if (msg.posi.size() == 0) {
      out << "posi: []";
    } else {
      out << "posi: [";
      size_t pending_items = msg.posi.size();
      for (auto item : msg.posi) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: head
  {
    out << "head: ";
    rosidl_generator_traits::value_to_yaml(msg.head, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Path_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: posi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.posi.size() == 0) {
      out << "posi: []\n";
    } else {
      out << "posi:\n";
      for (auto item : msg.posi) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head: ";
    rosidl_generator_traits::value_to_yaml(msg.head, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Path_Feedback & msg, bool use_flow_style = false)
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

}  // namespace path_following

namespace rosidl_generator_traits
{

[[deprecated("use path_following::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const path_following::action::Path_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  path_following::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use path_following::action::to_yaml() instead")]]
inline std::string to_yaml(const path_following::action::Path_Feedback & msg)
{
  return path_following::action::to_yaml(msg);
}

template<>
inline const char * data_type<path_following::action::Path_Feedback>()
{
  return "path_following::action::Path_Feedback";
}

template<>
inline const char * name<path_following::action::Path_Feedback>()
{
  return "path_following/action/Path_Feedback";
}

template<>
struct has_fixed_size<path_following::action::Path_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<path_following::action::Path_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<path_following::action::Path_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "path_following/action/detail/path__traits.hpp"

namespace path_following
{

namespace action
{

inline void to_flow_style_yaml(
  const Path_SendGoal_Request & msg,
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
  const Path_SendGoal_Request & msg,
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

inline std::string to_yaml(const Path_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace path_following

namespace rosidl_generator_traits
{

[[deprecated("use path_following::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const path_following::action::Path_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  path_following::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use path_following::action::to_yaml() instead")]]
inline std::string to_yaml(const path_following::action::Path_SendGoal_Request & msg)
{
  return path_following::action::to_yaml(msg);
}

template<>
inline const char * data_type<path_following::action::Path_SendGoal_Request>()
{
  return "path_following::action::Path_SendGoal_Request";
}

template<>
inline const char * name<path_following::action::Path_SendGoal_Request>()
{
  return "path_following/action/Path_SendGoal_Request";
}

template<>
struct has_fixed_size<path_following::action::Path_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<path_following::action::Path_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<path_following::action::Path_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<path_following::action::Path_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<path_following::action::Path_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace path_following
{

namespace action
{

inline void to_flow_style_yaml(
  const Path_SendGoal_Response & msg,
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
  const Path_SendGoal_Response & msg,
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

inline std::string to_yaml(const Path_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace path_following

namespace rosidl_generator_traits
{

[[deprecated("use path_following::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const path_following::action::Path_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  path_following::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use path_following::action::to_yaml() instead")]]
inline std::string to_yaml(const path_following::action::Path_SendGoal_Response & msg)
{
  return path_following::action::to_yaml(msg);
}

template<>
inline const char * data_type<path_following::action::Path_SendGoal_Response>()
{
  return "path_following::action::Path_SendGoal_Response";
}

template<>
inline const char * name<path_following::action::Path_SendGoal_Response>()
{
  return "path_following/action/Path_SendGoal_Response";
}

template<>
struct has_fixed_size<path_following::action::Path_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<path_following::action::Path_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<path_following::action::Path_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<path_following::action::Path_SendGoal>()
{
  return "path_following::action::Path_SendGoal";
}

template<>
inline const char * name<path_following::action::Path_SendGoal>()
{
  return "path_following/action/Path_SendGoal";
}

template<>
struct has_fixed_size<path_following::action::Path_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<path_following::action::Path_SendGoal_Request>::value &&
    has_fixed_size<path_following::action::Path_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<path_following::action::Path_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<path_following::action::Path_SendGoal_Request>::value &&
    has_bounded_size<path_following::action::Path_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<path_following::action::Path_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<path_following::action::Path_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<path_following::action::Path_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace path_following
{

namespace action
{

inline void to_flow_style_yaml(
  const Path_GetResult_Request & msg,
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
  const Path_GetResult_Request & msg,
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

inline std::string to_yaml(const Path_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace path_following

namespace rosidl_generator_traits
{

[[deprecated("use path_following::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const path_following::action::Path_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  path_following::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use path_following::action::to_yaml() instead")]]
inline std::string to_yaml(const path_following::action::Path_GetResult_Request & msg)
{
  return path_following::action::to_yaml(msg);
}

template<>
inline const char * data_type<path_following::action::Path_GetResult_Request>()
{
  return "path_following::action::Path_GetResult_Request";
}

template<>
inline const char * name<path_following::action::Path_GetResult_Request>()
{
  return "path_following/action/Path_GetResult_Request";
}

template<>
struct has_fixed_size<path_following::action::Path_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<path_following::action::Path_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<path_following::action::Path_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "path_following/action/detail/path__traits.hpp"

namespace path_following
{

namespace action
{

inline void to_flow_style_yaml(
  const Path_GetResult_Response & msg,
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
  const Path_GetResult_Response & msg,
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

inline std::string to_yaml(const Path_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace path_following

namespace rosidl_generator_traits
{

[[deprecated("use path_following::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const path_following::action::Path_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  path_following::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use path_following::action::to_yaml() instead")]]
inline std::string to_yaml(const path_following::action::Path_GetResult_Response & msg)
{
  return path_following::action::to_yaml(msg);
}

template<>
inline const char * data_type<path_following::action::Path_GetResult_Response>()
{
  return "path_following::action::Path_GetResult_Response";
}

template<>
inline const char * name<path_following::action::Path_GetResult_Response>()
{
  return "path_following/action/Path_GetResult_Response";
}

template<>
struct has_fixed_size<path_following::action::Path_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<path_following::action::Path_Result>::value> {};

template<>
struct has_bounded_size<path_following::action::Path_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<path_following::action::Path_Result>::value> {};

template<>
struct is_message<path_following::action::Path_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<path_following::action::Path_GetResult>()
{
  return "path_following::action::Path_GetResult";
}

template<>
inline const char * name<path_following::action::Path_GetResult>()
{
  return "path_following/action/Path_GetResult";
}

template<>
struct has_fixed_size<path_following::action::Path_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<path_following::action::Path_GetResult_Request>::value &&
    has_fixed_size<path_following::action::Path_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<path_following::action::Path_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<path_following::action::Path_GetResult_Request>::value &&
    has_bounded_size<path_following::action::Path_GetResult_Response>::value
  >
{
};

template<>
struct is_service<path_following::action::Path_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<path_following::action::Path_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<path_following::action::Path_GetResult_Response>
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
// #include "path_following/action/detail/path__traits.hpp"

namespace path_following
{

namespace action
{

inline void to_flow_style_yaml(
  const Path_FeedbackMessage & msg,
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
  const Path_FeedbackMessage & msg,
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

inline std::string to_yaml(const Path_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace path_following

namespace rosidl_generator_traits
{

[[deprecated("use path_following::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const path_following::action::Path_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  path_following::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use path_following::action::to_yaml() instead")]]
inline std::string to_yaml(const path_following::action::Path_FeedbackMessage & msg)
{
  return path_following::action::to_yaml(msg);
}

template<>
inline const char * data_type<path_following::action::Path_FeedbackMessage>()
{
  return "path_following::action::Path_FeedbackMessage";
}

template<>
inline const char * name<path_following::action::Path_FeedbackMessage>()
{
  return "path_following/action/Path_FeedbackMessage";
}

template<>
struct has_fixed_size<path_following::action::Path_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<path_following::action::Path_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<path_following::action::Path_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<path_following::action::Path_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<path_following::action::Path_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<path_following::action::Path>
  : std::true_type
{
};

template<>
struct is_action_goal<path_following::action::Path_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<path_following::action::Path_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<path_following::action::Path_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PATH_FOLLOWING__ACTION__DETAIL__PATH__TRAITS_HPP_
