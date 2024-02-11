// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from manip_msgs:msg/Result.idl
// generated code does not contain a copyright notice

#ifndef MANIP_MSGS__MSG__DETAIL__RESULT__STRUCT_H_
#define MANIP_MSGS__MSG__DETAIL__RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Result in the package manip_msgs.
/**
  * result
 */
typedef struct manip_msgs__msg__Result
{
  /// state(0:working,1:succeed,2;failed)
  int64_t feedback;
  /// cmd num
  int64_t num;
} manip_msgs__msg__Result;

// Struct for a sequence of manip_msgs__msg__Result.
typedef struct manip_msgs__msg__Result__Sequence
{
  manip_msgs__msg__Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manip_msgs__msg__Result__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MANIP_MSGS__MSG__DETAIL__RESULT__STRUCT_H_
