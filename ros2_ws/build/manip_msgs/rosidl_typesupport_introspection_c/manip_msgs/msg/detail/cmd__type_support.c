// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from manip_msgs:msg/Cmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "manip_msgs/msg/detail/cmd__rosidl_typesupport_introspection_c.h"
#include "manip_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "manip_msgs/msg/detail/cmd__functions.h"
#include "manip_msgs/msg/detail/cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manip_msgs__msg__Cmd__init(message_memory);
}

void manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_fini_function(void * message_memory)
{
  manip_msgs__msg__Cmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_member_array[8] = {
  {
    "top_base_arm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip_msgs__msg__Cmd, top_base_arm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "top_base_hand",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip_msgs__msg__Cmd, top_base_hand),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom_base_arm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip_msgs__msg__Cmd, bottom_base_arm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom_base_hand",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip_msgs__msg__Cmd, bottom_base_hand),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "work_arm_deploy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip_msgs__msg__Cmd, work_arm_deploy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "work_arm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip_msgs__msg__Cmd, work_arm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "work_hand",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip_msgs__msg__Cmd, work_hand),  // bytes offset in struct
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
    offsetof(manip_msgs__msg__Cmd, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_members = {
  "manip_msgs__msg",  // message namespace
  "Cmd",  // message name
  8,  // number of fields
  sizeof(manip_msgs__msg__Cmd),
  manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_member_array,  // message members
  manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_init_function,  // function to initialize message memory (memory has to be allocated)
  manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle = {
  0,
  &manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip_msgs, msg, Cmd)() {
  if (!manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle.typesupport_identifier) {
    manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manip_msgs__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
