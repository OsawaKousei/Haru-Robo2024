// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/Omni.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/omni__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
drive_msgs__msg__Omni__init(drive_msgs__msg__Omni * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    drive_msgs__msg__Omni__fini(msg);
    return false;
  }
  // mfontright
  // mfrontleft
  // mbackright
  // mbackleft
  return true;
}

void
drive_msgs__msg__Omni__fini(drive_msgs__msg__Omni * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // mfontright
  // mfrontleft
  // mbackright
  // mbackleft
}

bool
drive_msgs__msg__Omni__are_equal(const drive_msgs__msg__Omni * lhs, const drive_msgs__msg__Omni * rhs)
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
  // mfontright
  if (lhs->mfontright != rhs->mfontright) {
    return false;
  }
  // mfrontleft
  if (lhs->mfrontleft != rhs->mfrontleft) {
    return false;
  }
  // mbackright
  if (lhs->mbackright != rhs->mbackright) {
    return false;
  }
  // mbackleft
  if (lhs->mbackleft != rhs->mbackleft) {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__Omni__copy(
  const drive_msgs__msg__Omni * input,
  drive_msgs__msg__Omni * output)
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
  // mfontright
  output->mfontright = input->mfontright;
  // mfrontleft
  output->mfrontleft = input->mfrontleft;
  // mbackright
  output->mbackright = input->mbackright;
  // mbackleft
  output->mbackleft = input->mbackleft;
  return true;
}

drive_msgs__msg__Omni *
drive_msgs__msg__Omni__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__Omni * msg = (drive_msgs__msg__Omni *)allocator.allocate(sizeof(drive_msgs__msg__Omni), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__Omni));
  bool success = drive_msgs__msg__Omni__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__Omni__destroy(drive_msgs__msg__Omni * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__Omni__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__Omni__Sequence__init(drive_msgs__msg__Omni__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__Omni * data = NULL;

  if (size) {
    data = (drive_msgs__msg__Omni *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__Omni), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__Omni__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__Omni__fini(&data[i - 1]);
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
drive_msgs__msg__Omni__Sequence__fini(drive_msgs__msg__Omni__Sequence * array)
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
      drive_msgs__msg__Omni__fini(&array->data[i]);
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

drive_msgs__msg__Omni__Sequence *
drive_msgs__msg__Omni__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__Omni__Sequence * array = (drive_msgs__msg__Omni__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__Omni__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__Omni__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__Omni__Sequence__destroy(drive_msgs__msg__Omni__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__Omni__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__Omni__Sequence__are_equal(const drive_msgs__msg__Omni__Sequence * lhs, const drive_msgs__msg__Omni__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__Omni__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__Omni__Sequence__copy(
  const drive_msgs__msg__Omni__Sequence * input,
  drive_msgs__msg__Omni__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__Omni);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__Omni * data =
      (drive_msgs__msg__Omni *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__Omni__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__Omni__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__Omni__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
