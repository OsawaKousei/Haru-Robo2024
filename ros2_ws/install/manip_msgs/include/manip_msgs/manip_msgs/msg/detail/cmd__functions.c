// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from manip_msgs:msg/Cmd.idl
// generated code does not contain a copyright notice
#include "manip_msgs/msg/detail/cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
manip_msgs__msg__Cmd__init(manip_msgs__msg__Cmd * msg)
{
  if (!msg) {
    return false;
  }
  // top_base_arm
  // top_base_hand
  // bottom_base_arm
  // bottom_base_hand
  // work_arm_deploy
  // work_arm
  // work_hand
  // num
  return true;
}

void
manip_msgs__msg__Cmd__fini(manip_msgs__msg__Cmd * msg)
{
  if (!msg) {
    return;
  }
  // top_base_arm
  // top_base_hand
  // bottom_base_arm
  // bottom_base_hand
  // work_arm_deploy
  // work_arm
  // work_hand
  // num
}

bool
manip_msgs__msg__Cmd__are_equal(const manip_msgs__msg__Cmd * lhs, const manip_msgs__msg__Cmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // top_base_arm
  if (lhs->top_base_arm != rhs->top_base_arm) {
    return false;
  }
  // top_base_hand
  if (lhs->top_base_hand != rhs->top_base_hand) {
    return false;
  }
  // bottom_base_arm
  if (lhs->bottom_base_arm != rhs->bottom_base_arm) {
    return false;
  }
  // bottom_base_hand
  if (lhs->bottom_base_hand != rhs->bottom_base_hand) {
    return false;
  }
  // work_arm_deploy
  if (lhs->work_arm_deploy != rhs->work_arm_deploy) {
    return false;
  }
  // work_arm
  if (lhs->work_arm != rhs->work_arm) {
    return false;
  }
  // work_hand
  if (lhs->work_hand != rhs->work_hand) {
    return false;
  }
  // num
  if (lhs->num != rhs->num) {
    return false;
  }
  return true;
}

bool
manip_msgs__msg__Cmd__copy(
  const manip_msgs__msg__Cmd * input,
  manip_msgs__msg__Cmd * output)
{
  if (!input || !output) {
    return false;
  }
  // top_base_arm
  output->top_base_arm = input->top_base_arm;
  // top_base_hand
  output->top_base_hand = input->top_base_hand;
  // bottom_base_arm
  output->bottom_base_arm = input->bottom_base_arm;
  // bottom_base_hand
  output->bottom_base_hand = input->bottom_base_hand;
  // work_arm_deploy
  output->work_arm_deploy = input->work_arm_deploy;
  // work_arm
  output->work_arm = input->work_arm;
  // work_hand
  output->work_hand = input->work_hand;
  // num
  output->num = input->num;
  return true;
}

manip_msgs__msg__Cmd *
manip_msgs__msg__Cmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip_msgs__msg__Cmd * msg = (manip_msgs__msg__Cmd *)allocator.allocate(sizeof(manip_msgs__msg__Cmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manip_msgs__msg__Cmd));
  bool success = manip_msgs__msg__Cmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manip_msgs__msg__Cmd__destroy(manip_msgs__msg__Cmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manip_msgs__msg__Cmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manip_msgs__msg__Cmd__Sequence__init(manip_msgs__msg__Cmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip_msgs__msg__Cmd * data = NULL;

  if (size) {
    data = (manip_msgs__msg__Cmd *)allocator.zero_allocate(size, sizeof(manip_msgs__msg__Cmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manip_msgs__msg__Cmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manip_msgs__msg__Cmd__fini(&data[i - 1]);
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
manip_msgs__msg__Cmd__Sequence__fini(manip_msgs__msg__Cmd__Sequence * array)
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
      manip_msgs__msg__Cmd__fini(&array->data[i]);
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

manip_msgs__msg__Cmd__Sequence *
manip_msgs__msg__Cmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip_msgs__msg__Cmd__Sequence * array = (manip_msgs__msg__Cmd__Sequence *)allocator.allocate(sizeof(manip_msgs__msg__Cmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manip_msgs__msg__Cmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manip_msgs__msg__Cmd__Sequence__destroy(manip_msgs__msg__Cmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manip_msgs__msg__Cmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manip_msgs__msg__Cmd__Sequence__are_equal(const manip_msgs__msg__Cmd__Sequence * lhs, const manip_msgs__msg__Cmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manip_msgs__msg__Cmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manip_msgs__msg__Cmd__Sequence__copy(
  const manip_msgs__msg__Cmd__Sequence * input,
  manip_msgs__msg__Cmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manip_msgs__msg__Cmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manip_msgs__msg__Cmd * data =
      (manip_msgs__msg__Cmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manip_msgs__msg__Cmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manip_msgs__msg__Cmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manip_msgs__msg__Cmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
