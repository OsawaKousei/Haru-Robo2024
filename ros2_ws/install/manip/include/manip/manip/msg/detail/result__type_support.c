// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from manip:msg/Result.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "manip/msg/detail/result__rosidl_typesupport_introspection_c.h"
#include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "manip/msg/detail/result__functions.h"
#include "manip/msg/detail/result__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void manip__msg__Result__rosidl_typesupport_introspection_c__Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manip__msg__Result__init(message_memory);
}

void manip__msg__Result__rosidl_typesupport_introspection_c__Result_fini_function(void * message_memory)
{
  manip__msg__Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember manip__msg__Result__rosidl_typesupport_introspection_c__Result_message_member_array[2] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__msg__Result, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__msg__Result, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manip__msg__Result__rosidl_typesupport_introspection_c__Result_message_members = {
  "manip__msg",  // message namespace
  "Result",  // message name
  2,  // number of fields
  sizeof(manip__msg__Result),
  manip__msg__Result__rosidl_typesupport_introspection_c__Result_message_member_array,  // message members
  manip__msg__Result__rosidl_typesupport_introspection_c__Result_init_function,  // function to initialize message memory (memory has to be allocated)
  manip__msg__Result__rosidl_typesupport_introspection_c__Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manip__msg__Result__rosidl_typesupport_introspection_c__Result_message_type_support_handle = {
  0,
  &manip__msg__Result__rosidl_typesupport_introspection_c__Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, msg, Result)() {
  if (!manip__msg__Result__rosidl_typesupport_introspection_c__Result_message_type_support_handle.typesupport_identifier) {
    manip__msg__Result__rosidl_typesupport_introspection_c__Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manip__msg__Result__rosidl_typesupport_introspection_c__Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
