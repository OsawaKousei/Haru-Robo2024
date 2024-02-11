// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from manip_msgs:msg/Result.idl
// generated code does not contain a copyright notice
#include "manip_msgs/msg/detail/result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
manip_msgs__msg__Result__init(manip_msgs__msg__Result * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  // num
  return true;
}

void
manip_msgs__msg__Result__fini(manip_msgs__msg__Result * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  // num
}

bool
manip_msgs__msg__Result__are_equal(const manip_msgs__msg__Result * lhs, const manip_msgs__msg__Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (lhs->feedback != rhs->feedback) {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  return true;
}

bool
manip_msgs__msg__Result__copy(
  const manip_msgs__msg__Result * input,
  manip_msgs__msg__Result * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  output->feedback = input->feedback;
  // num
  output->num = input->num;
  return true;
}

manip_msgs__msg__Result *
manip_msgs__msg__Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip_msgs__msg__Result * msg = (manip_msgs__msg__Result *)allocator.allocate(sizeof(manip_msgs__msg__Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manip_msgs__msg__Result));
  bool success = manip_msgs__msg__Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manip_msgs__msg__Result__destroy(manip_msgs__msg__Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manip_msgs__msg__Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manip_msgs__msg__Result__Sequence__init(manip_msgs__msg__Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip_msgs__msg__Result * data = NULL;

  if (size) {
    data = (manip_msgs__msg__Result *)allocator.zero_allocate(size, sizeof(manip_msgs__msg__Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manip_msgs__msg__Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manip_msgs__msg__Result__fini(&data[i - 1]);
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
manip_msgs__msg__Result__Sequence__fini(manip_msgs__msg__Result__Sequence * array)
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
      manip_msgs__msg__Result__fini(&array->data[i]);
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

manip_msgs__msg__Result__Sequence *
manip_msgs__msg__Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip_msgs__msg__Result__Sequence * array = (manip_msgs__msg__Result__Sequence *)allocator.allocate(sizeof(manip_msgs__msg__Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manip_msgs__msg__Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manip_msgs__msg__Result__Sequence__destroy(manip_msgs__msg__Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manip_msgs__msg__Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manip_msgs__msg__Result__Sequence__are_equal(const manip_msgs__msg__Result__Sequence * lhs, const manip_msgs__msg__Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manip_msgs__msg__Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manip_msgs__msg__Result__Sequence__copy(
  const manip_msgs__msg__Result__Sequence * input,
  manip_msgs__msg__Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manip_msgs__msg__Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manip_msgs__msg__Result * data =
      (manip_msgs__msg__Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manip_msgs__msg__Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manip_msgs__msg__Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manip_msgs__msg__Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
