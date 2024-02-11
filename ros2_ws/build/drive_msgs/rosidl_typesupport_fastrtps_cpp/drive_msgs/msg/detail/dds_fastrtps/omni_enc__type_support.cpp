// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from drive_msgs:msg/OmniEnc.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/omni_enc__rosidl_typesupport_fastrtps_cpp.hpp"
#include "drive_msgs/msg/detail/omni_enc__struct.hpp"

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

namespace drive_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_msgs
cdr_serialize(
  const drive_msgs::msg::OmniEnc & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: encfontright
  cdr << ros_message.encfontright;
  // Member: encfrontleft
  cdr << ros_message.encfrontleft;
  // Member: encbackright
  cdr << ros_message.encbackright;
  // Member: encbackleft
  cdr << ros_message.encbackleft;
  // Member: enclx
  cdr << ros_message.enclx;
  // Member: encly
  cdr << ros_message.encly;
  // Member: encadditional
  cdr << ros_message.encadditional;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drive_msgs::msg::OmniEnc & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: encfontright
  cdr >> ros_message.encfontright;

  // Member: encfrontleft
  cdr >> ros_message.encfrontleft;

  // Member: encbackright
  cdr >> ros_message.encbackright;

  // Member: encbackleft
  cdr >> ros_message.encbackleft;

  // Member: enclx
  cdr >> ros_message.enclx;

  // Member: encly
  cdr >> ros_message.encly;

  // Member: encadditional
  cdr >> ros_message.encadditional;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_msgs
get_serialized_size(
  const drive_msgs::msg::OmniEnc & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: encfontright
  {
    size_t item_size = sizeof(ros_message.encfontright);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: encfrontleft
  {
    size_t item_size = sizeof(ros_message.encfrontleft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: encbackright
  {
    size_t item_size = sizeof(ros_message.encbackright);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: encbackleft
  {
    size_t item_size = sizeof(ros_message.encbackleft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enclx
  {
    size_t item_size = sizeof(ros_message.enclx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: encly
  {
    size_t item_size = sizeof(ros_message.encly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: encadditional
  {
    size_t item_size = sizeof(ros_message.encadditional);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_msgs
max_serialized_size_OmniEnc(
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


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: encfontright
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: encfrontleft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: encbackright
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: encbackleft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: enclx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: encly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: encadditional
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
    using DataType = drive_msgs::msg::OmniEnc;
    is_plain =
      (
      offsetof(DataType, encadditional) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _OmniEnc__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const drive_msgs::msg::OmniEnc *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OmniEnc__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<drive_msgs::msg::OmniEnc *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OmniEnc__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const drive_msgs::msg::OmniEnc *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OmniEnc__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OmniEnc(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OmniEnc__callbacks = {
  "drive_msgs::msg",
  "OmniEnc",
  _OmniEnc__cdr_serialize,
  _OmniEnc__cdr_deserialize,
  _OmniEnc__get_serialized_size,
  _OmniEnc__max_serialized_size
};

static rosidl_message_type_support_t _OmniEnc__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OmniEnc__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace drive_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_drive_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<drive_msgs::msg::OmniEnc>()
{
  return &drive_msgs::msg::typesupport_fastrtps_cpp::_OmniEnc__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drive_msgs, msg, OmniEnc)() {
  return &drive_msgs::msg::typesupport_fastrtps_cpp::_OmniEnc__handle;
}

#ifdef __cplusplus
}
#endif
