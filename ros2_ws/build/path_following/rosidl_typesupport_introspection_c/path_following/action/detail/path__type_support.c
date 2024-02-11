// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from path_following:action/Path.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"
#include "path_following/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "path_following/action/detail/path__functions.h"
#include "path_following/action/detail/path__struct.h"


// Include directives for member types
// Member `start`
// Member `goal`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  path_following__action__Path_Goal__init(message_memory);
}

void path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_fini_function(void * message_memory)
{
  path_following__action__Path_Goal__fini(message_memory);
}

size_t path_following__action__Path_Goal__rosidl_typesupport_introspection_c__size_function__Path_Goal__start(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_const_function__Path_Goal__start(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_function__Path_Goal__start(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void path_following__action__Path_Goal__rosidl_typesupport_introspection_c__fetch_function__Path_Goal__start(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_const_function__Path_Goal__start(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void path_following__action__Path_Goal__rosidl_typesupport_introspection_c__assign_function__Path_Goal__start(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_function__Path_Goal__start(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool path_following__action__Path_Goal__rosidl_typesupport_introspection_c__resize_function__Path_Goal__start(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t path_following__action__Path_Goal__rosidl_typesupport_introspection_c__size_function__Path_Goal__goal(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_const_function__Path_Goal__goal(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_function__Path_Goal__goal(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void path_following__action__Path_Goal__rosidl_typesupport_introspection_c__fetch_function__Path_Goal__goal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_const_function__Path_Goal__goal(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void path_following__action__Path_Goal__rosidl_typesupport_introspection_c__assign_function__Path_Goal__goal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_function__Path_Goal__goal(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool path_following__action__Path_Goal__rosidl_typesupport_introspection_c__resize_function__Path_Goal__goal(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_message_member_array[3] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following__action__Path_Goal, start),  // bytes offset in struct
    NULL,  // default value
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__size_function__Path_Goal__start,  // size() function pointer
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_const_function__Path_Goal__start,  // get_const(index) function pointer
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_function__Path_Goal__start,  // get(index) function pointer
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__fetch_function__Path_Goal__start,  // fetch(index, &value) function pointer
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__assign_function__Path_Goal__start,  // assign(index, value) function pointer
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__resize_function__Path_Goal__start  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following__action__Path_Goal, goal),  // bytes offset in struct
    NULL,  // default value
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__size_function__Path_Goal__goal,  // size() function pointer
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_const_function__Path_Goal__goal,  // get_const(index) function pointer
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__get_function__Path_Goal__goal,  // get(index) function pointer
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__fetch_function__Path_Goal__goal,  // fetch(index, &value) function pointer
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__assign_function__Path_Goal__goal,  // assign(index, value) function pointer
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__resize_function__Path_Goal__goal  // resize(index) function pointer
  },
  {
    "head",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following__action__Path_Goal, head),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_message_members = {
  "path_following__action",  // message namespace
  "Path_Goal",  // message name
  3,  // number of fields
  sizeof(path_following__action__Path_Goal),
  path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_message_member_array,  // message members
  path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_message_type_support_handle = {
  0,
  &path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_path_following
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_Goal)() {
  if (!path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_message_type_support_handle.typesupport_identifier) {
    path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &path_following__action__Path_Goal__rosidl_typesupport_introspection_c__Path_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "path_following/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "path_following/action/detail/path__functions.h"
// already included above
// #include "path_following/action/detail/path__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  path_following__action__Path_Result__init(message_memory);
}

void path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_fini_function(void * message_memory)
{
  path_following__action__Path_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following__action__Path_Result, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_message_members = {
  "path_following__action",  // message namespace
  "Path_Result",  // message name
  1,  // number of fields
  sizeof(path_following__action__Path_Result),
  path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_message_member_array,  // message members
  path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_message_type_support_handle = {
  0,
  &path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_path_following
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_Result)() {
  if (!path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_message_type_support_handle.typesupport_identifier) {
    path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &path_following__action__Path_Result__rosidl_typesupport_introspection_c__Path_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "path_following/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "path_following/action/detail/path__functions.h"
// already included above
// #include "path_following/action/detail/path__struct.h"


// Include directives for member types
// Member `posi`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  path_following__action__Path_Feedback__init(message_memory);
}

void path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_fini_function(void * message_memory)
{
  path_following__action__Path_Feedback__fini(message_memory);
}

size_t path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__size_function__Path_Feedback__posi(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__get_const_function__Path_Feedback__posi(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__get_function__Path_Feedback__posi(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__fetch_function__Path_Feedback__posi(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__get_const_function__Path_Feedback__posi(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__assign_function__Path_Feedback__posi(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__get_function__Path_Feedback__posi(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__resize_function__Path_Feedback__posi(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_message_member_array[2] = {
  {
    "posi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following__action__Path_Feedback, posi),  // bytes offset in struct
    NULL,  // default value
    path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__size_function__Path_Feedback__posi,  // size() function pointer
    path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__get_const_function__Path_Feedback__posi,  // get_const(index) function pointer
    path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__get_function__Path_Feedback__posi,  // get(index) function pointer
    path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__fetch_function__Path_Feedback__posi,  // fetch(index, &value) function pointer
    path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__assign_function__Path_Feedback__posi,  // assign(index, value) function pointer
    path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__resize_function__Path_Feedback__posi  // resize(index) function pointer
  },
  {
    "head",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following__action__Path_Feedback, head),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_message_members = {
  "path_following__action",  // message namespace
  "Path_Feedback",  // message name
  2,  // number of fields
  sizeof(path_following__action__Path_Feedback),
  path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_message_member_array,  // message members
  path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_message_type_support_handle = {
  0,
  &path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_path_following
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_Feedback)() {
  if (!path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_message_type_support_handle.typesupport_identifier) {
    path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &path_following__action__Path_Feedback__rosidl_typesupport_introspection_c__Path_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "path_following/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "path_following/action/detail/path__functions.h"
// already included above
// #include "path_following/action/detail/path__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "path_following/action/path.h"
// Member `goal`
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  path_following__action__Path_SendGoal_Request__init(message_memory);
}

void path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_fini_function(void * message_memory)
{
  path_following__action__Path_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following__action__Path_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(path_following__action__Path_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_message_members = {
  "path_following__action",  // message namespace
  "Path_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(path_following__action__Path_SendGoal_Request),
  path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_message_member_array,  // message members
  path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_message_type_support_handle = {
  0,
  &path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_path_following
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_SendGoal_Request)() {
  path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_Goal)();
  if (!path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &path_following__action__Path_SendGoal_Request__rosidl_typesupport_introspection_c__Path_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "path_following/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "path_following/action/detail/path__functions.h"
// already included above
// #include "path_following/action/detail/path__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  path_following__action__Path_SendGoal_Response__init(message_memory);
}

void path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_fini_function(void * message_memory)
{
  path_following__action__Path_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following__action__Path_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(path_following__action__Path_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_message_members = {
  "path_following__action",  // message namespace
  "Path_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(path_following__action__Path_SendGoal_Response),
  path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_message_member_array,  // message members
  path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_message_type_support_handle = {
  0,
  &path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_path_following
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_SendGoal_Response)() {
  path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &path_following__action__Path_SendGoal_Response__rosidl_typesupport_introspection_c__Path_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "path_following/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_SendGoal_service_members = {
  "path_following__action",  // service namespace
  "Path_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_SendGoal_service_type_support_handle = {
  0,
  &path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_path_following
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_SendGoal)() {
  if (!path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_SendGoal_service_type_support_handle.typesupport_identifier) {
    path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_SendGoal_Response)()->data;
  }

  return &path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "path_following/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "path_following/action/detail/path__functions.h"
// already included above
// #include "path_following/action/detail/path__struct.h"


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

void path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  path_following__action__Path_GetResult_Request__init(message_memory);
}

void path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_fini_function(void * message_memory)
{
  path_following__action__Path_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following__action__Path_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_message_members = {
  "path_following__action",  // message namespace
  "Path_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(path_following__action__Path_GetResult_Request),
  path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_message_member_array,  // message members
  path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_message_type_support_handle = {
  0,
  &path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_path_following
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_GetResult_Request)() {
  path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &path_following__action__Path_GetResult_Request__rosidl_typesupport_introspection_c__Path_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "path_following/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "path_following/action/detail/path__functions.h"
// already included above
// #include "path_following/action/detail/path__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "path_following/action/path.h"
// Member `result`
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  path_following__action__Path_GetResult_Response__init(message_memory);
}

void path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_fini_function(void * message_memory)
{
  path_following__action__Path_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following__action__Path_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(path_following__action__Path_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_message_members = {
  "path_following__action",  // message namespace
  "Path_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(path_following__action__Path_GetResult_Response),
  path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_message_member_array,  // message members
  path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_message_type_support_handle = {
  0,
  &path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_path_following
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_GetResult_Response)() {
  path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_Result)();
  if (!path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &path_following__action__Path_GetResult_Response__rosidl_typesupport_introspection_c__Path_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "path_following/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_GetResult_service_members = {
  "path_following__action",  // service namespace
  "Path_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_GetResult_service_type_support_handle = {
  0,
  &path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_path_following
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_GetResult)() {
  if (!path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_GetResult_service_type_support_handle.typesupport_identifier) {
    path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_GetResult_Response)()->data;
  }

  return &path_following__action__detail__path__rosidl_typesupport_introspection_c__Path_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "path_following/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "path_following/action/detail/path__functions.h"
// already included above
// #include "path_following/action/detail/path__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "path_following/action/path.h"
// Member `feedback`
// already included above
// #include "path_following/action/detail/path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  path_following__action__Path_FeedbackMessage__init(message_memory);
}

void path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_fini_function(void * message_memory)
{
  path_following__action__Path_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(path_following__action__Path_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(path_following__action__Path_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_message_members = {
  "path_following__action",  // message namespace
  "Path_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(path_following__action__Path_FeedbackMessage),
  path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_message_member_array,  // message members
  path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_message_type_support_handle = {
  0,
  &path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_path_following
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_FeedbackMessage)() {
  path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_Feedback)();
  if (!path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &path_following__action__Path_FeedbackMessage__rosidl_typesupport_introspection_c__Path_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
