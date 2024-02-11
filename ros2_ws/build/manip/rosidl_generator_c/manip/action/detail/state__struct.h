// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from manip:action/State.idl
// generated code does not contain a copyright notice

#ifndef MANIP__ACTION__DETAIL__STATE__STRUCT_H_
#define MANIP__ACTION__DETAIL__STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'base1'
// Member 'base2'
// Member 'work'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/State in the package manip.
typedef struct manip__action__State_Goal
{
  /// 0:updown(0:up,1:down),1:open_close(0:close,1:open)
  rosidl_runtime_c__int64__Sequence base1;
  rosidl_runtime_c__int64__Sequence base2;
  /// 0:servo(0:close,1:open),1:updown(0:up,1:down),2:open_close(0:close,1:open)
  rosidl_runtime_c__int64__Sequence work;
} manip__action__State_Goal;

// Struct for a sequence of manip__action__State_Goal.
typedef struct manip__action__State_Goal__Sequence
{
  manip__action__State_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manip__action__State_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/State in the package manip.
typedef struct manip__action__State_Result
{
  /// state(0:working,1:succeed,2;failed)
  int64_t feedback;
} manip__action__State_Result;

// Struct for a sequence of manip__action__State_Result.
typedef struct manip__action__State_Result__Sequence
{
  manip__action__State_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manip__action__State_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'base1'
// Member 'base2'
// Member 'work'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/State in the package manip.
typedef struct manip__action__State_Feedback
{
  rosidl_runtime_c__int64__Sequence base1;
  rosidl_runtime_c__int64__Sequence base2;
  rosidl_runtime_c__int64__Sequence work;
} manip__action__State_Feedback;

// Struct for a sequence of manip__action__State_Feedback.
typedef struct manip__action__State_Feedback__Sequence
{
  manip__action__State_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manip__action__State_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "manip/action/detail/state__struct.h"

/// Struct defined in action/State in the package manip.
typedef struct manip__action__State_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  manip__action__State_Goal goal;
} manip__action__State_SendGoal_Request;

// Struct for a sequence of manip__action__State_SendGoal_Request.
typedef struct manip__action__State_SendGoal_Request__Sequence
{
  manip__action__State_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manip__action__State_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/State in the package manip.
typedef struct manip__action__State_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} manip__action__State_SendGoal_Response;

// Struct for a sequence of manip__action__State_SendGoal_Response.
typedef struct manip__action__State_SendGoal_Response__Sequence
{
  manip__action__State_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manip__action__State_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/State in the package manip.
typedef struct manip__action__State_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} manip__action__State_GetResult_Request;

// Struct for a sequence of manip__action__State_GetResult_Request.
typedef struct manip__action__State_GetResult_Request__Sequence
{
  manip__action__State_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manip__action__State_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "manip/action/detail/state__struct.h"

/// Struct defined in action/State in the package manip.
typedef struct manip__action__State_GetResult_Response
{
  int8_t status;
  manip__action__State_Result result;
} manip__action__State_GetResult_Response;

// Struct for a sequence of manip__action__State_GetResult_Response.
typedef struct manip__action__State_GetResult_Response__Sequence
{
  manip__action__State_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manip__action__State_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "manip/action/detail/state__struct.h"

/// Struct defined in action/State in the package manip.
typedef struct manip__action__State_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  manip__action__State_Feedback feedback;
} manip__action__State_FeedbackMessage;

// Struct for a sequence of manip__action__State_FeedbackMessage.
typedef struct manip__action__State_FeedbackMessage__Sequence
{
  manip__action__State_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manip__action__State_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MANIP__ACTION__DETAIL__STATE__STRUCT_H_
