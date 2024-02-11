// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from manip:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef MANIP__MSG__DETAIL__CMD__STRUCT_H_
#define MANIP__MSG__DETAIL__CMD__STRUCT_H_

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
// Member 'work1'
// Member 'work2'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Cmd in the package manip.
/**
  * -1: no change
 */
typedef struct manip__msg__Cmd
{
  /// 0:servo(0:close,1:open),1:updown(0:up,1:down),2:open_close(0:close,1:open)
  rosidl_runtime_c__int64__Sequence base1;
  /// 0:servo(0:close,1:open),1:updown(0:up,1:down),2:open_close(0:close,1:open)
  rosidl_runtime_c__int64__Sequence base2;
  /// 0:updown(0:up,1:down),1:open_close(0:close,1:open)
  rosidl_runtime_c__int64__Sequence work1;
  /// 0:updown(0:up,1:down),1:open_close(0:close,1:open)
  rosidl_runtime_c__int64__Sequence work2;
  /// cmd num
  int64_t num;
} manip__msg__Cmd;

// Struct for a sequence of manip__msg__Cmd.
typedef struct manip__msg__Cmd__Sequence
{
  manip__msg__Cmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manip__msg__Cmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MANIP__MSG__DETAIL__CMD__STRUCT_H_
