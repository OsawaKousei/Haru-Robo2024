// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/DiffDriveEnc.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__STRUCT_H_

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

/// Struct defined in msg/DiffDriveEnc in the package drive_msgs.
typedef struct drive_msgs__msg__DiffDriveEnc
{
  rosidl_runtime_c__String name;
  /// 右輪rps
  double m1enc;
  /// 左輪rps
  double m2enc;
  /// x速度m/s
  double lxenc;
  /// z角速度rad/s
  double azenc;
} drive_msgs__msg__DiffDriveEnc;

// Struct for a sequence of drive_msgs__msg__DiffDriveEnc.
typedef struct drive_msgs__msg__DiffDriveEnc__Sequence
{
  drive_msgs__msg__DiffDriveEnc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__DiffDriveEnc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__STRUCT_H_
