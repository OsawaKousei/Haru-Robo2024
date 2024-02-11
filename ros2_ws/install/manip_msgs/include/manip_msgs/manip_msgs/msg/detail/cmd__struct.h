// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from manip_msgs:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef MANIP_MSGS__MSG__DETAIL__CMD__STRUCT_H_
#define MANIP_MSGS__MSG__DETAIL__CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Cmd in the package manip_msgs.
/**
  * -1: no change
 */
typedef struct manip_msgs__msg__Cmd
{
  /// 0:up,1:down
  int64_t top_base_arm;
  /// 0:close,1:open
  int64_t top_base_hand;
  /// 0:up,1:down
  int64_t bottom_base_arm;
  /// 0:close,1:open
  int64_t bottom_base_hand;
  /// 0:deploy,1:retract
  int64_t work_arm_deploy;
  /// 0:up,1:down
  int64_t work_arm;
  /// 0:close,1:open
  int64_t work_hand;
  /// cmd num
  int64_t num;
} manip_msgs__msg__Cmd;

// Struct for a sequence of manip_msgs__msg__Cmd.
typedef struct manip_msgs__msg__Cmd__Sequence
{
  manip_msgs__msg__Cmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manip_msgs__msg__Cmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MANIP_MSGS__MSG__DETAIL__CMD__STRUCT_H_
