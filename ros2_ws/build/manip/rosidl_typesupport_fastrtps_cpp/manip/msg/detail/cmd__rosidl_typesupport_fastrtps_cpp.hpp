// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from manip:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef MANIP__MSG__DETAIL__CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MANIP__MSG__DETAIL__CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "manip/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "manip/msg/detail/cmd__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace manip
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_manip
cdr_serialize(
  const manip::msg::Cmd & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_manip
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  manip::msg::Cmd & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_manip
get_serialized_size(
  const manip::msg::Cmd & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_manip
max_serialized_size_Cmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace manip

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_manip
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, manip, msg, Cmd)();

#ifdef __cplusplus
}
#endif

#endif  // MANIP__MSG__DETAIL__CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
