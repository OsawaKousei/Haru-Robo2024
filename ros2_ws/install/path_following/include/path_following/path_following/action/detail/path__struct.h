// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from path_following:action/Path.idl
// generated code does not contain a copyright notice

#ifndef PATH_FOLLOWING__ACTION__DETAIL__PATH__STRUCT_H_
#define PATH_FOLLOWING__ACTION__DETAIL__PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Path in the package path_following.
typedef struct path_following__action__Path_Goal
{
  /// [x,y]
  rosidl_runtime_c__double__Sequence start;
  /// [x,y]
  rosidl_runtime_c__double__Sequence goal;
  /// 0:foward,1:backward,2:left,3:right
  int64_t head;
} path_following__action__Path_Goal;

// Struct for a sequence of path_following__action__Path_Goal.
typedef struct path_following__action__Path_Goal__Sequence
{
  path_following__action__Path_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} path_following__action__Path_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Path in the package path_following.
typedef struct path_following__action__Path_Result
{
  /// state(0:working,1:succeed,2;failed)
  int64_t feedback;
} path_following__action__Path_Result;

// Struct for a sequence of path_following__action__Path_Result.
typedef struct path_following__action__Path_Result__Sequence
{
  path_following__action__Path_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} path_following__action__Path_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'posi'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Path in the package path_following.
typedef struct path_following__action__Path_Feedback
{
  /// [x,y]
  rosidl_runtime_c__double__Sequence posi;
  /// 0:foward,1:backward,2:left,3:right
  int64_t head;
} path_following__action__Path_Feedback;

// Struct for a sequence of path_following__action__Path_Feedback.
typedef struct path_following__action__Path_Feedback__Sequence
{
  path_following__action__Path_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} path_following__action__Path_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "path_following/action/detail/path__struct.h"

/// Struct defined in action/Path in the package path_following.
typedef struct path_following__action__Path_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  path_following__action__Path_Goal goal;
} path_following__action__Path_SendGoal_Request;

// Struct for a sequence of path_following__action__Path_SendGoal_Request.
typedef struct path_following__action__Path_SendGoal_Request__Sequence
{
  path_following__action__Path_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} path_following__action__Path_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Path in the package path_following.
typedef struct path_following__action__Path_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} path_following__action__Path_SendGoal_Response;

// Struct for a sequence of path_following__action__Path_SendGoal_Response.
typedef struct path_following__action__Path_SendGoal_Response__Sequence
{
  path_following__action__Path_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} path_following__action__Path_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Path in the package path_following.
typedef struct path_following__action__Path_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} path_following__action__Path_GetResult_Request;

// Struct for a sequence of path_following__action__Path_GetResult_Request.
typedef struct path_following__action__Path_GetResult_Request__Sequence
{
  path_following__action__Path_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} path_following__action__Path_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "path_following/action/detail/path__struct.h"

/// Struct defined in action/Path in the package path_following.
typedef struct path_following__action__Path_GetResult_Response
{
  int8_t status;
  path_following__action__Path_Result result;
} path_following__action__Path_GetResult_Response;

// Struct for a sequence of path_following__action__Path_GetResult_Response.
typedef struct path_following__action__Path_GetResult_Response__Sequence
{
  path_following__action__Path_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} path_following__action__Path_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "path_following/action/detail/path__struct.h"

/// Struct defined in action/Path in the package path_following.
typedef struct path_following__action__Path_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  path_following__action__Path_Feedback feedback;
} path_following__action__Path_FeedbackMessage;

// Struct for a sequence of path_following__action__Path_FeedbackMessage.
typedef struct path_following__action__Path_FeedbackMessage__Sequence
{
  path_following__action__Path_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} path_following__action__Path_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PATH_FOLLOWING__ACTION__DETAIL__PATH__STRUCT_H_
