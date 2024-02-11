// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/DiffDriveEnc.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/diff_drive_enc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
drive_msgs__msg__DiffDriveEnc__init(drive_msgs__msg__DiffDriveEnc * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    drive_msgs__msg__DiffDriveEnc__fini(msg);
    return false;
  }
  // m1enc
  // m2enc
  // lxenc
  // azenc
  return true;
}

void
drive_msgs__msg__DiffDriveEnc__fini(drive_msgs__msg__DiffDriveEnc * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // m1enc
  // m2enc
  // lxenc
  // azenc
}

bool
drive_msgs__msg__DiffDriveEnc__are_equal(const drive_msgs__msg__DiffDriveEnc * lhs, const drive_msgs__msg__DiffDriveEnc * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // m1enc
  if (lhs->m1enc != rhs->m1enc) {
    return false;
  }
  // m2enc
  if (lhs->m2enc != rhs->m2enc) {
    return false;
  }
  // lxenc
  if (lhs->lxenc != rhs->lxenc) {
    return false;
  }
  // azenc
  if (lhs->azenc != rhs->azenc) {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__DiffDriveEnc__copy(
  const drive_msgs__msg__DiffDriveEnc * input,
  drive_msgs__msg__DiffDriveEnc * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // m1enc
  output->m1enc = input->m1enc;
  // m2enc
  output->m2enc = input->m2enc;
  // lxenc
  output->lxenc = input->lxenc;
  // azenc
  output->azenc = input->azenc;
  return true;
}

drive_msgs__msg__DiffDriveEnc *
drive_msgs__msg__DiffDriveEnc__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__DiffDriveEnc * msg = (drive_msgs__msg__DiffDriveEnc *)allocator.allocate(sizeof(drive_msgs__msg__DiffDriveEnc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__DiffDriveEnc));
  bool success = drive_msgs__msg__DiffDriveEnc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__DiffDriveEnc__destroy(drive_msgs__msg__DiffDriveEnc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__DiffDriveEnc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__DiffDriveEnc__Sequence__init(drive_msgs__msg__DiffDriveEnc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__DiffDriveEnc * data = NULL;

  if (size) {
    data = (drive_msgs__msg__DiffDriveEnc *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__DiffDriveEnc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__DiffDriveEnc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__DiffDriveEnc__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
drive_msgs__msg__DiffDriveEnc__Sequence__fini(drive_msgs__msg__DiffDriveEnc__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      drive_msgs__msg__DiffDriveEnc__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

drive_msgs__msg__DiffDriveEnc__Sequence *
drive_msgs__msg__DiffDriveEnc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__DiffDriveEnc__Sequence * array = (drive_msgs__msg__DiffDriveEnc__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__DiffDriveEnc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__DiffDriveEnc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__DiffDriveEnc__Sequence__destroy(drive_msgs__msg__DiffDriveEnc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__DiffDriveEnc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__DiffDriveEnc__Sequence__are_equal(const drive_msgs__msg__DiffDriveEnc__Sequence * lhs, const drive_msgs__msg__DiffDriveEnc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__DiffDriveEnc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__DiffDriveEnc__Sequence__copy(
  const drive_msgs__msg__DiffDriveEnc__Sequence * input,
  drive_msgs__msg__DiffDriveEnc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__DiffDriveEnc);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__DiffDriveEnc * data =
      (drive_msgs__msg__DiffDriveEnc *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__DiffDriveEnc__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__DiffDriveEnc__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__DiffDriveEnc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
