// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from manip:msg/Cmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "manip/msg/detail/cmd__rosidl_typesupport_introspection_c.h"
#include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "manip/msg/detail/cmd__functions.h"
#include "manip/msg/detail/cmd__struct.h"


// Include directives for member types
// Member `base1`
// Member `base2`
// Member `work1`
// Member `work2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manip__msg__Cmd__init(message_memory);
}

void manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_fini_function(void * message_memory)
{
  manip__msg__Cmd__fini(message_memory);
}

size_t manip__msg__Cmd__rosidl_typesupport_introspection_c__size_function__Cmd__base1(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__base1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__base1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void manip__msg__Cmd__rosidl_typesupport_introspection_c__fetch_function__Cmd__base1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__base1(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void manip__msg__Cmd__rosidl_typesupport_introspection_c__assign_function__Cmd__base1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__base1(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool manip__msg__Cmd__rosidl_typesupport_introspection_c__resize_function__Cmd__base1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t manip__msg__Cmd__rosidl_typesupport_introspection_c__size_function__Cmd__base2(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__base2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__base2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void manip__msg__Cmd__rosidl_typesupport_introspection_c__fetch_function__Cmd__base2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__base2(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void manip__msg__Cmd__rosidl_typesupport_introspection_c__assign_function__Cmd__base2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__base2(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool manip__msg__Cmd__rosidl_typesupport_introspection_c__resize_function__Cmd__base2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t manip__msg__Cmd__rosidl_typesupport_introspection_c__size_function__Cmd__work1(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__work1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__work1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void manip__msg__Cmd__rosidl_typesupport_introspection_c__fetch_function__Cmd__work1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__work1(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void manip__msg__Cmd__rosidl_typesupport_introspection_c__assign_function__Cmd__work1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__work1(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool manip__msg__Cmd__rosidl_typesupport_introspection_c__resize_function__Cmd__work1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t manip__msg__Cmd__rosidl_typesupport_introspection_c__size_function__Cmd__work2(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__work2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__work2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void manip__msg__Cmd__rosidl_typesupport_introspection_c__fetch_function__Cmd__work2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__work2(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void manip__msg__Cmd__rosidl_typesupport_introspection_c__assign_function__Cmd__work2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__work2(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool manip__msg__Cmd__rosidl_typesupport_introspection_c__resize_function__Cmd__work2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_member_array[5] = {
  {
    "base1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__msg__Cmd, base1),  // bytes offset in struct
    NULL,  // default value
    manip__msg__Cmd__rosidl_typesupport_introspection_c__size_function__Cmd__base1,  // size() function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__base1,  // get_const(index) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__base1,  // get(index) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__fetch_function__Cmd__base1,  // fetch(index, &value) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__assign_function__Cmd__base1,  // assign(index, value) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__resize_function__Cmd__base1  // resize(index) function pointer
  },
  {
    "base2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__msg__Cmd, base2),  // bytes offset in struct
    NULL,  // default value
    manip__msg__Cmd__rosidl_typesupport_introspection_c__size_function__Cmd__base2,  // size() function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__base2,  // get_const(index) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__base2,  // get(index) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__fetch_function__Cmd__base2,  // fetch(index, &value) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__assign_function__Cmd__base2,  // assign(index, value) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__resize_function__Cmd__base2  // resize(index) function pointer
  },
  {
    "work1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__msg__Cmd, work1),  // bytes offset in struct
    NULL,  // default value
    manip__msg__Cmd__rosidl_typesupport_introspection_c__size_function__Cmd__work1,  // size() function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__work1,  // get_const(index) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__work1,  // get(index) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__fetch_function__Cmd__work1,  // fetch(index, &value) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__assign_function__Cmd__work1,  // assign(index, value) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__resize_function__Cmd__work1  // resize(index) function pointer
  },
  {
    "work2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__msg__Cmd, work2),  // bytes offset in struct
    NULL,  // default value
    manip__msg__Cmd__rosidl_typesupport_introspection_c__size_function__Cmd__work2,  // size() function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_const_function__Cmd__work2,  // get_const(index) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__get_function__Cmd__work2,  // get(index) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__fetch_function__Cmd__work2,  // fetch(index, &value) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__assign_function__Cmd__work2,  // assign(index, value) function pointer
    manip__msg__Cmd__rosidl_typesupport_introspection_c__resize_function__Cmd__work2  // resize(index) function pointer
  },
  {
    "num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__msg__Cmd, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_members = {
  "manip__msg",  // message namespace
  "Cmd",  // message name
  5,  // number of fields
  sizeof(manip__msg__Cmd),
  manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_member_array,  // message members
  manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_init_function,  // function to initialize message memory (memory has to be allocated)
  manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle = {
  0,
  &manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, msg, Cmd)() {
  if (!manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle.typesupport_identifier) {
    manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manip__msg__Cmd__rosidl_typesupport_introspection_c__Cmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
