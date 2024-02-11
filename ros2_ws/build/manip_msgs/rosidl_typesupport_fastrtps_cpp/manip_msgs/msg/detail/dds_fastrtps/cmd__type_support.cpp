// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from manip_msgs:msg/Cmd.idl
// generated code does not contain a copyright notice
#include "manip_msgs/msg/detail/cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "manip_msgs/msg/detail/cmd__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace manip_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_manip_msgs
cdr_serialize(
  const manip_msgs::msg::Cmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: top_base_arm
  cdr << ros_message.top_base_arm;
  // Member: top_base_hand
  cdr << ros_message.top_base_hand;
  // Member: bottom_base_arm
  cdr << ros_message.bottom_base_arm;
  // Member: bottom_base_hand
  cdr << ros_message.bottom_base_hand;
  // Member: work_arm_deploy
  cdr << ros_message.work_arm_deploy;
  // Member: work_arm
  cdr << ros_message.work_arm;
  // Member: work_hand
  cdr << ros_message.work_hand;
  // Member: num
  cdr << ros_message.num;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_manip_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  manip_msgs::msg::Cmd & ros_message)
{
  // Member: top_base_arm
  cdr >> ros_message.top_base_arm;

  // Member: top_base_hand
  cdr >> ros_message.top_base_hand;

  // Member: bottom_base_arm
  cdr >> ros_message.bottom_base_arm;

  // Member: bottom_base_hand
  cdr >> ros_message.bottom_base_hand;

  // Member: work_arm_deploy
  cdr >> ros_message.work_arm_deploy;

  // Member: work_arm
  cdr >> ros_message.work_arm;

  // Member: work_hand
  cdr >> ros_message.work_hand;

  // Member: num
  cdr >> ros_message.num;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_manip_msgs
get_serialized_size(
  const manip_msgs::msg::Cmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: top_base_arm
  {
    size_t item_size = sizeof(ros_message.top_base_arm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: top_base_hand
  {
    size_t item_size = sizeof(ros_message.top_base_hand);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bottom_base_arm
  {
    size_t item_size = sizeof(ros_message.bottom_base_arm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bottom_base_hand
  {
    size_t item_size = sizeof(ros_message.bottom_base_hand);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: work_arm_deploy
  {
    size_t item_size = sizeof(ros_message.work_arm_deploy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: work_arm
  {
    size_t item_size = sizeof(ros_message.work_arm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: work_hand
  {
    size_t item_size = sizeof(ros_message.work_hand);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num
  {
    size_t item_size = sizeof(ros_message.num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_manip_msgs
max_serialized_size_Cmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: top_base_arm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: top_base_hand
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bottom_base_arm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bottom_base_hand
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: work_arm_deploy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: work_arm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: work_hand
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = manip_msgs::msg::Cmd;
    is_plain =
      (
      offsetof(DataType, num) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Cmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const manip_msgs::msg::Cmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Cmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<manip_msgs::msg::Cmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Cmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const manip_msgs::msg::Cmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Cmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Cmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Cmd__callbacks = {
  "manip_msgs::msg",
  "Cmd",
  _Cmd__cdr_serialize,
  _Cmd__cdr_deserialize,
  _Cmd__get_serialized_size,
  _Cmd__max_serialized_size
};

static rosidl_message_type_support_t _Cmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Cmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace manip_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_manip_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<manip_msgs::msg::Cmd>()
{
  return &manip_msgs::msg::typesupport_fastrtps_cpp::_Cmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, manip_msgs, msg, Cmd)() {
  return &manip_msgs::msg::typesupport_fastrtps_cpp::_Cmd__handle;
}

#ifdef __cplusplus
}
#endif
