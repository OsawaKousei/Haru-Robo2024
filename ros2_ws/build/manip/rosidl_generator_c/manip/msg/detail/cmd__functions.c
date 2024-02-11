// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from manip:msg/Cmd.idl
// generated code does not contain a copyright notice
#include "manip/msg/detail/cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `base1`
// Member `base2`
// Member `work1`
// Member `work2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
manip__msg__Cmd__init(manip__msg__Cmd * msg)
{
  if (!msg) {
    return false;
  }
  // base1
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->base1, 0)) {
    manip__msg__Cmd__fini(msg);
    return false;
  }
  // base2
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->base2, 0)) {
    manip__msg__Cmd__fini(msg);
    return false;
  }
  // work1
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->work1, 0)) {
    manip__msg__Cmd__fini(msg);
    return false;
  }
  // work2
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->work2, 0)) {
    manip__msg__Cmd__fini(msg);
    return false;
  }
  // num
  return true;
}

void
manip__msg__Cmd__fini(manip__msg__Cmd * msg)
{
  if (!msg) {
    return;
  }
  // base1
  rosidl_runtime_c__int64__Sequence__fini(&msg->base1);
  // base2
  rosidl_runtime_c__int64__Sequence__fini(&msg->base2);
  // work1
  rosidl_runtime_c__int64__Sequence__fini(&msg->work1);
  // work2
  rosidl_runtime_c__int64__Sequence__fini(&msg->work2);
  // num
}

bool
manip__msg__Cmd__are_equal(const manip__msg__Cmd * lhs, const manip__msg__Cmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base1
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->base1), &(rhs->base1)))
  {
    return false;
  }
  // base2
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->base2), &(rhs->base2)))
  {
    return false;
  }
  // work1
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->work1), &(rhs->work1)))
  {
    return false;
  }
  // work2
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->work2), &(rhs->work2)))
  {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  return true;
}

bool
manip__msg__Cmd__copy(
  const manip__msg__Cmd * input,
  manip__msg__Cmd * output)
{
  if (!input || !output) {
    return false;
  }
  // base1
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->base1), &(output->base1)))
  {
    return false;
  }
  // base2
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->base2), &(output->base2)))
  {
    return false;
  }
  // work1
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->work1), &(output->work1)))
  {
    return false;
  }
  // work2
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->work2), &(output->work2)))
  {
    return false;
  }
  // num
  output->num = input->num;
  return true;
}

manip__msg__Cmd *
manip__msg__Cmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__msg__Cmd * msg = (manip__msg__Cmd *)allocator.allocate(sizeof(manip__msg__Cmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manip__msg__Cmd));
  bool success = manip__msg__Cmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manip__msg__Cmd__destroy(manip__msg__Cmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manip__msg__Cmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manip__msg__Cmd__Sequence__init(manip__msg__Cmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__msg__Cmd * data = NULL;

  if (size) {
    data = (manip__msg__Cmd *)allocator.zero_allocate(size, sizeof(manip__msg__Cmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manip__msg__Cmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manip__msg__Cmd__fini(&data[i - 1]);
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
manip__msg__Cmd__Sequence__fini(manip__msg__Cmd__Sequence * array)
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
      manip__msg__Cmd__fini(&array->data[i]);
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

manip__msg__Cmd__Sequence *
manip__msg__Cmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__msg__Cmd__Sequence * array = (manip__msg__Cmd__Sequence *)allocator.allocate(sizeof(manip__msg__Cmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manip__msg__Cmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manip__msg__Cmd__Sequence__destroy(manip__msg__Cmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manip__msg__Cmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manip__msg__Cmd__Sequence__are_equal(const manip__msg__Cmd__Sequence * lhs, const manip__msg__Cmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manip__msg__Cmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manip__msg__Cmd__Sequence__copy(
  const manip__msg__Cmd__Sequence * input,
  manip__msg__Cmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manip__msg__Cmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manip__msg__Cmd * data =
      (manip__msg__Cmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manip__msg__Cmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manip__msg__Cmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manip__msg__Cmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
