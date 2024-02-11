// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/OmniEnc.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OmniEnc in the package drive_msgs.
typedef struct drive_msgs__msg__OmniEnc
{
  rosidl_runtime_c__String name;
  double encfontright;
  double encfrontleft;
  double encbackright;
  double encbackleft;
  double enclx;
  double encly;
  double encadditional;
} drive_msgs__msg__OmniEnc;

// Struct for a sequence of drive_msgs__msg__OmniEnc.
typedef struct drive_msgs__msg__OmniEnc__Sequence
{
  drive_msgs__msg__OmniEnc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__OmniEnc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__STRUCT_H_