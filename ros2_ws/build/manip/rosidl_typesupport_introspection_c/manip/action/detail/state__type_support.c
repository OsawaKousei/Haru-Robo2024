// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from manip:action/State.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"
#include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "manip/action/detail/state__functions.h"
#include "manip/action/detail/state__struct.h"


// Include directives for member types
// Member `base1`
// Member `base2`
// Member `work`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manip__action__State_Goal__init(message_memory);
}

void manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_fini_function(void * message_memory)
{
  manip__action__State_Goal__fini(message_memory);
}

size_t manip__action__State_Goal__rosidl_typesupport_introspection_c__size_function__State_Goal__base1(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * manip__action__State_Goal__rosidl_typesupport_introspection_c__get_const_function__State_Goal__base1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manip__action__State_Goal__rosidl_typesupport_introspection_c__get_function__State_Goal__base1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void manip__action__State_Goal__rosidl_typesupport_introspection_c__fetch_function__State_Goal__base1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_const_function__State_Goal__base1(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void manip__action__State_Goal__rosidl_typesupport_introspection_c__assign_function__State_Goal__base1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_function__State_Goal__base1(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool manip__action__State_Goal__rosidl_typesupport_introspection_c__resize_function__State_Goal__base1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t manip__action__State_Goal__rosidl_typesupport_introspection_c__size_function__State_Goal__base2(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * manip__action__State_Goal__rosidl_typesupport_introspection_c__get_const_function__State_Goal__base2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manip__action__State_Goal__rosidl_typesupport_introspection_c__get_function__State_Goal__base2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void manip__action__State_Goal__rosidl_typesupport_introspection_c__fetch_function__State_Goal__base2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_const_function__State_Goal__base2(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void manip__action__State_Goal__rosidl_typesupport_introspection_c__assign_function__State_Goal__base2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_function__State_Goal__base2(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool manip__action__State_Goal__rosidl_typesupport_introspection_c__resize_function__State_Goal__base2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t manip__action__State_Goal__rosidl_typesupport_introspection_c__size_function__State_Goal__work(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * manip__action__State_Goal__rosidl_typesupport_introspection_c__get_const_function__State_Goal__work(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manip__action__State_Goal__rosidl_typesupport_introspection_c__get_function__State_Goal__work(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void manip__action__State_Goal__rosidl_typesupport_introspection_c__fetch_function__State_Goal__work(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_const_function__State_Goal__work(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void manip__action__State_Goal__rosidl_typesupport_introspection_c__assign_function__State_Goal__work(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_function__State_Goal__work(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool manip__action__State_Goal__rosidl_typesupport_introspection_c__resize_function__State_Goal__work(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_message_member_array[3] = {
  {
    "base1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_Goal, base1),  // bytes offset in struct
    NULL,  // default value
    manip__action__State_Goal__rosidl_typesupport_introspection_c__size_function__State_Goal__base1,  // size() function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_const_function__State_Goal__base1,  // get_const(index) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_function__State_Goal__base1,  // get(index) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__fetch_function__State_Goal__base1,  // fetch(index, &value) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__assign_function__State_Goal__base1,  // assign(index, value) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__resize_function__State_Goal__base1  // resize(index) function pointer
  },
  {
    "base2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_Goal, base2),  // bytes offset in struct
    NULL,  // default value
    manip__action__State_Goal__rosidl_typesupport_introspection_c__size_function__State_Goal__base2,  // size() function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_const_function__State_Goal__base2,  // get_const(index) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_function__State_Goal__base2,  // get(index) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__fetch_function__State_Goal__base2,  // fetch(index, &value) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__assign_function__State_Goal__base2,  // assign(index, value) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__resize_function__State_Goal__base2  // resize(index) function pointer
  },
  {
    "work",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_Goal, work),  // bytes offset in struct
    NULL,  // default value
    manip__action__State_Goal__rosidl_typesupport_introspection_c__size_function__State_Goal__work,  // size() function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_const_function__State_Goal__work,  // get_const(index) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__get_function__State_Goal__work,  // get(index) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__fetch_function__State_Goal__work,  // fetch(index, &value) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__assign_function__State_Goal__work,  // assign(index, value) function pointer
    manip__action__State_Goal__rosidl_typesupport_introspection_c__resize_function__State_Goal__work  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_message_members = {
  "manip__action",  // message namespace
  "State_Goal",  // message name
  3,  // number of fields
  sizeof(manip__action__State_Goal),
  manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_message_member_array,  // message members
  manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_message_type_support_handle = {
  0,
  &manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_Goal)() {
  if (!manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_message_type_support_handle.typesupport_identifier) {
    manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manip__action__State_Goal__rosidl_typesupport_introspection_c__State_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "manip/action/detail/state__functions.h"
// already included above
// #include "manip/action/detail/state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manip__action__State_Result__init(message_memory);
}

void manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_fini_function(void * message_memory)
{
  manip__action__State_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_Result, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_message_members = {
  "manip__action",  // message namespace
  "State_Result",  // message name
  1,  // number of fields
  sizeof(manip__action__State_Result),
  manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_message_member_array,  // message members
  manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_message_type_support_handle = {
  0,
  &manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_Result)() {
  if (!manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_message_type_support_handle.typesupport_identifier) {
    manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manip__action__State_Result__rosidl_typesupport_introspection_c__State_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "manip/action/detail/state__functions.h"
// already included above
// #include "manip/action/detail/state__struct.h"


// Include directives for member types
// Member `base1`
// Member `base2`
// Member `work`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manip__action__State_Feedback__init(message_memory);
}

void manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_fini_function(void * message_memory)
{
  manip__action__State_Feedback__fini(message_memory);
}

size_t manip__action__State_Feedback__rosidl_typesupport_introspection_c__size_function__State_Feedback__base1(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_const_function__State_Feedback__base1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_function__State_Feedback__base1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void manip__action__State_Feedback__rosidl_typesupport_introspection_c__fetch_function__State_Feedback__base1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_const_function__State_Feedback__base1(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void manip__action__State_Feedback__rosidl_typesupport_introspection_c__assign_function__State_Feedback__base1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_function__State_Feedback__base1(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool manip__action__State_Feedback__rosidl_typesupport_introspection_c__resize_function__State_Feedback__base1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t manip__action__State_Feedback__rosidl_typesupport_introspection_c__size_function__State_Feedback__base2(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_const_function__State_Feedback__base2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_function__State_Feedback__base2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void manip__action__State_Feedback__rosidl_typesupport_introspection_c__fetch_function__State_Feedback__base2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_const_function__State_Feedback__base2(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void manip__action__State_Feedback__rosidl_typesupport_introspection_c__assign_function__State_Feedback__base2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_function__State_Feedback__base2(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool manip__action__State_Feedback__rosidl_typesupport_introspection_c__resize_function__State_Feedback__base2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t manip__action__State_Feedback__rosidl_typesupport_introspection_c__size_function__State_Feedback__work(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_const_function__State_Feedback__work(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_function__State_Feedback__work(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void manip__action__State_Feedback__rosidl_typesupport_introspection_c__fetch_function__State_Feedback__work(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_const_function__State_Feedback__work(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void manip__action__State_Feedback__rosidl_typesupport_introspection_c__assign_function__State_Feedback__work(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_function__State_Feedback__work(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool manip__action__State_Feedback__rosidl_typesupport_introspection_c__resize_function__State_Feedback__work(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_message_member_array[3] = {
  {
    "base1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_Feedback, base1),  // bytes offset in struct
    NULL,  // default value
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__size_function__State_Feedback__base1,  // size() function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_const_function__State_Feedback__base1,  // get_const(index) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_function__State_Feedback__base1,  // get(index) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__fetch_function__State_Feedback__base1,  // fetch(index, &value) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__assign_function__State_Feedback__base1,  // assign(index, value) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__resize_function__State_Feedback__base1  // resize(index) function pointer
  },
  {
    "base2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_Feedback, base2),  // bytes offset in struct
    NULL,  // default value
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__size_function__State_Feedback__base2,  // size() function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_const_function__State_Feedback__base2,  // get_const(index) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_function__State_Feedback__base2,  // get(index) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__fetch_function__State_Feedback__base2,  // fetch(index, &value) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__assign_function__State_Feedback__base2,  // assign(index, value) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__resize_function__State_Feedback__base2  // resize(index) function pointer
  },
  {
    "work",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_Feedback, work),  // bytes offset in struct
    NULL,  // default value
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__size_function__State_Feedback__work,  // size() function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_const_function__State_Feedback__work,  // get_const(index) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__get_function__State_Feedback__work,  // get(index) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__fetch_function__State_Feedback__work,  // fetch(index, &value) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__assign_function__State_Feedback__work,  // assign(index, value) function pointer
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__resize_function__State_Feedback__work  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_message_members = {
  "manip__action",  // message namespace
  "State_Feedback",  // message name
  3,  // number of fields
  sizeof(manip__action__State_Feedback),
  manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_message_member_array,  // message members
  manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_message_type_support_handle = {
  0,
  &manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_Feedback)() {
  if (!manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_message_type_support_handle.typesupport_identifier) {
    manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manip__action__State_Feedback__rosidl_typesupport_introspection_c__State_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "manip/action/detail/state__functions.h"
// already included above
// #include "manip/action/detail/state__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "manip/action/state.h"
// Member `goal`
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manip__action__State_SendGoal_Request__init(message_memory);
}

void manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_fini_function(void * message_memory)
{
  manip__action__State_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_message_members = {
  "manip__action",  // message namespace
  "State_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(manip__action__State_SendGoal_Request),
  manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_message_member_array,  // message members
  manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_message_type_support_handle = {
  0,
  &manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_SendGoal_Request)() {
  manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_Goal)();
  if (!manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manip__action__State_SendGoal_Request__rosidl_typesupport_introspection_c__State_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "manip/action/detail/state__functions.h"
// already included above
// #include "manip/action/detail/state__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manip__action__State_SendGoal_Response__init(message_memory);
}

void manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_fini_function(void * message_memory)
{
  manip__action__State_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_message_members = {
  "manip__action",  // message namespace
  "State_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(manip__action__State_SendGoal_Response),
  manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_message_member_array,  // message members
  manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_message_type_support_handle = {
  0,
  &manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_SendGoal_Response)() {
  manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manip__action__State_SendGoal_Response__rosidl_typesupport_introspection_c__State_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers manip__action__detail__state__rosidl_typesupport_introspection_c__State_SendGoal_service_members = {
  "manip__action",  // service namespace
  "State_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // manip__action__detail__state__rosidl_typesupport_introspection_c__State_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // manip__action__detail__state__rosidl_typesupport_introspection_c__State_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t manip__action__detail__state__rosidl_typesupport_introspection_c__State_SendGoal_service_type_support_handle = {
  0,
  &manip__action__detail__state__rosidl_typesupport_introspection_c__State_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_SendGoal)() {
  if (!manip__action__detail__state__rosidl_typesupport_introspection_c__State_SendGoal_service_type_support_handle.typesupport_identifier) {
    manip__action__detail__state__rosidl_typesupport_introspection_c__State_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)manip__action__detail__state__rosidl_typesupport_introspection_c__State_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_SendGoal_Response)()->data;
  }

  return &manip__action__detail__state__rosidl_typesupport_introspection_c__State_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "manip/action/detail/state__functions.h"
// already included above
// #include "manip/action/detail/state__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manip__action__State_GetResult_Request__init(message_memory);
}

void manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_fini_function(void * message_memory)
{
  manip__action__State_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_message_members = {
  "manip__action",  // message namespace
  "State_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(manip__action__State_GetResult_Request),
  manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_message_member_array,  // message members
  manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_message_type_support_handle = {
  0,
  &manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_GetResult_Request)() {
  manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manip__action__State_GetResult_Request__rosidl_typesupport_introspection_c__State_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "manip/action/detail/state__functions.h"
// already included above
// #include "manip/action/detail/state__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "manip/action/state.h"
// Member `result`
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manip__action__State_GetResult_Response__init(message_memory);
}

void manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_fini_function(void * message_memory)
{
  manip__action__State_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_message_members = {
  "manip__action",  // message namespace
  "State_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(manip__action__State_GetResult_Response),
  manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_message_member_array,  // message members
  manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_message_type_support_handle = {
  0,
  &manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_GetResult_Response)() {
  manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_Result)();
  if (!manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manip__action__State_GetResult_Response__rosidl_typesupport_introspection_c__State_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers manip__action__detail__state__rosidl_typesupport_introspection_c__State_GetResult_service_members = {
  "manip__action",  // service namespace
  "State_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // manip__action__detail__state__rosidl_typesupport_introspection_c__State_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // manip__action__detail__state__rosidl_typesupport_introspection_c__State_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t manip__action__detail__state__rosidl_typesupport_introspection_c__State_GetResult_service_type_support_handle = {
  0,
  &manip__action__detail__state__rosidl_typesupport_introspection_c__State_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_GetResult)() {
  if (!manip__action__detail__state__rosidl_typesupport_introspection_c__State_GetResult_service_type_support_handle.typesupport_identifier) {
    manip__action__detail__state__rosidl_typesupport_introspection_c__State_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)manip__action__detail__state__rosidl_typesupport_introspection_c__State_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_GetResult_Response)()->data;
  }

  return &manip__action__detail__state__rosidl_typesupport_introspection_c__State_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "manip/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "manip/action/detail/state__functions.h"
// already included above
// #include "manip/action/detail/state__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "manip/action/state.h"
// Member `feedback`
// already included above
// #include "manip/action/detail/state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  manip__action__State_FeedbackMessage__init(message_memory);
}

void manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_fini_function(void * message_memory)
{
  manip__action__State_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(manip__action__State_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_message_members = {
  "manip__action",  // message namespace
  "State_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(manip__action__State_FeedbackMessage),
  manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_message_member_array,  // message members
  manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_message_type_support_handle = {
  0,
  &manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_manip
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_FeedbackMessage)() {
  manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_Feedback)();
  if (!manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &manip__action__State_FeedbackMessage__rosidl_typesupport_introspection_c__State_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
