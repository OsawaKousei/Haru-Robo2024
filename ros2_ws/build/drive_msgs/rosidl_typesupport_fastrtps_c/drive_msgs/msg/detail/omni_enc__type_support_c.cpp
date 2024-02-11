// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from drive_msgs:msg/OmniEnc.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/omni_enc__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "drive_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "drive_msgs/msg/detail/omni_enc__struct.h"
#include "drive_msgs/msg/detail/omni_enc__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


using _OmniEnc__ros_msg_type = drive_msgs__msg__OmniEnc;

static bool _OmniEnc__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OmniEnc__ros_msg_type * ros_message = static_cast<const _OmniEnc__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: encfontright
  {
    cdr << ros_message->encfontright;
  }

  // Field name: encfrontleft
  {
    cdr << ros_message->encfrontleft;
  }

  // Field name: encbackright
  {
    cdr << ros_message->encbackright;
  }

  // Field name: encbackleft
  {
    cdr << ros_message->encbackleft;
  }

  // Field name: enclx
  {
    cdr << ros_message->enclx;
  }

  // Field name: encly
  {
    cdr << ros_message->encly;
  }

  // Field name: encadditional
  {
    cdr << ros_message->encadditional;
  }

  return true;
}

static bool _OmniEnc__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OmniEnc__ros_msg_type * ros_message = static_cast<_OmniEnc__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: encfontright
  {
    cdr >> ros_message->encfontright;
  }

  // Field name: encfrontleft
  {
    cdr >> ros_message->encfrontleft;
  }

  // Field name: encbackright
  {
    cdr >> ros_message->encbackright;
  }

  // Field name: encbackleft
  {
    cdr >> ros_message->encbackleft;
  }

  // Field name: enclx
  {
    cdr >> ros_message->enclx;
  }

  // Field name: encly
  {
    cdr >> ros_message->encly;
  }

  // Field name: encadditional
  {
    cdr >> ros_message->encadditional;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_msgs
size_t get_serialized_size_drive_msgs__msg__OmniEnc(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OmniEnc__ros_msg_type * ros_message = static_cast<const _OmniEnc__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name encfontright
  {
    size_t item_size = sizeof(ros_message->encfontright);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name encfrontleft
  {
    size_t item_size = sizeof(ros_message->encfrontleft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name encbackright
  {
    size_t item_size = sizeof(ros_message->encbackright);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name encbackleft
  {
    size_t item_size = sizeof(ros_message->encbackleft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enclx
  {
    size_t item_size = sizeof(ros_message->enclx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name encly
  {
    size_t item_size = sizeof(ros_message->encly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name encadditional
  {
    size_t item_size = sizeof(ros_message->encadditional);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OmniEnc__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_drive_msgs__msg__OmniEnc(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_msgs
size_t max_serialized_size_drive_msgs__msg__OmniEnc(
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

  // member: name
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
  // member: encfontright
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: encfrontleft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: encbackright
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: encbackleft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: enclx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: encly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: encadditional
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
    using DataType = drive_msgs__msg__OmniEnc;
    is_plain =
      (
      offsetof(DataType, encadditional) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _OmniEnc__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_drive_msgs__msg__OmniEnc(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OmniEnc = {
  "drive_msgs::msg",
  "OmniEnc",
  _OmniEnc__cdr_serialize,
  _OmniEnc__cdr_deserialize,
  _OmniEnc__get_serialized_size,
  _OmniEnc__max_serialized_size
};

static rosidl_message_type_support_t _OmniEnc__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OmniEnc,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drive_msgs, msg, OmniEnc)() {
  return &_OmniEnc__type_support;
}

#if defined(__cplusplus)
}
#endif
