// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from manip:action/State.idl
// generated code does not contain a copyright notice
#include "manip/action/detail/state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `base1`
// Member `base2`
// Member `work`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
manip__action__State_Goal__init(manip__action__State_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // base1
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->base1, 0)) {
    manip__action__State_Goal__fini(msg);
    return false;
  }
  // base2
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->base2, 0)) {
    manip__action__State_Goal__fini(msg);
    return false;
  }
  // work
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->work, 0)) {
    manip__action__State_Goal__fini(msg);
    return false;
  }
  return true;
}

void
manip__action__State_Goal__fini(manip__action__State_Goal * msg)
{
  if (!msg) {
    return;
  }
  // base1
  rosidl_runtime_c__int64__Sequence__fini(&msg->base1);
  // base2
  rosidl_runtime_c__int64__Sequence__fini(&msg->base2);
  // work
  rosidl_runtime_c__int64__Sequence__fini(&msg->work);
}

bool
manip__action__State_Goal__are_equal(const manip__action__State_Goal * lhs, const manip__action__State_Goal * rhs)
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
  // work
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->work), &(rhs->work)))
  {
    return false;
  }
  return true;
}

bool
manip__action__State_Goal__copy(
  const manip__action__State_Goal * input,
  manip__action__State_Goal * output)
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
  // work
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->work), &(output->work)))
  {
    return false;
  }
  return true;
}

manip__action__State_Goal *
manip__action__State_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_Goal * msg = (manip__action__State_Goal *)allocator.allocate(sizeof(manip__action__State_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manip__action__State_Goal));
  bool success = manip__action__State_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manip__action__State_Goal__destroy(manip__action__State_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manip__action__State_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manip__action__State_Goal__Sequence__init(manip__action__State_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_Goal * data = NULL;

  if (size) {
    data = (manip__action__State_Goal *)allocator.zero_allocate(size, sizeof(manip__action__State_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manip__action__State_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manip__action__State_Goal__fini(&data[i - 1]);
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
manip__action__State_Goal__Sequence__fini(manip__action__State_Goal__Sequence * array)
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
      manip__action__State_Goal__fini(&array->data[i]);
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

manip__action__State_Goal__Sequence *
manip__action__State_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_Goal__Sequence * array = (manip__action__State_Goal__Sequence *)allocator.allocate(sizeof(manip__action__State_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manip__action__State_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manip__action__State_Goal__Sequence__destroy(manip__action__State_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manip__action__State_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manip__action__State_Goal__Sequence__are_equal(const manip__action__State_Goal__Sequence * lhs, const manip__action__State_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manip__action__State_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manip__action__State_Goal__Sequence__copy(
  const manip__action__State_Goal__Sequence * input,
  manip__action__State_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manip__action__State_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manip__action__State_Goal * data =
      (manip__action__State_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manip__action__State_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manip__action__State_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manip__action__State_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
manip__action__State_Result__init(manip__action__State_Result * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  return true;
}

void
manip__action__State_Result__fini(manip__action__State_Result * msg)
{
  if (!msg) {
    return;
  }
  // feedback
}

bool
manip__action__State_Result__are_equal(const manip__action__State_Result * lhs, const manip__action__State_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (lhs->feedback != rhs->feedback) {
    return false;
  }
  return true;
}

bool
manip__action__State_Result__copy(
  const manip__action__State_Result * input,
  manip__action__State_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  output->feedback = input->feedback;
  return true;
}

manip__action__State_Result *
manip__action__State_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_Result * msg = (manip__action__State_Result *)allocator.allocate(sizeof(manip__action__State_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manip__action__State_Result));
  bool success = manip__action__State_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manip__action__State_Result__destroy(manip__action__State_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manip__action__State_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manip__action__State_Result__Sequence__init(manip__action__State_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_Result * data = NULL;

  if (size) {
    data = (manip__action__State_Result *)allocator.zero_allocate(size, sizeof(manip__action__State_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manip__action__State_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manip__action__State_Result__fini(&data[i - 1]);
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
manip__action__State_Result__Sequence__fini(manip__action__State_Result__Sequence * array)
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
      manip__action__State_Result__fini(&array->data[i]);
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

manip__action__State_Result__Sequence *
manip__action__State_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_Result__Sequence * array = (manip__action__State_Result__Sequence *)allocator.allocate(sizeof(manip__action__State_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manip__action__State_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manip__action__State_Result__Sequence__destroy(manip__action__State_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manip__action__State_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manip__action__State_Result__Sequence__are_equal(const manip__action__State_Result__Sequence * lhs, const manip__action__State_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manip__action__State_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manip__action__State_Result__Sequence__copy(
  const manip__action__State_Result__Sequence * input,
  manip__action__State_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manip__action__State_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manip__action__State_Result * data =
      (manip__action__State_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manip__action__State_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manip__action__State_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manip__action__State_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `base1`
// Member `base2`
// Member `work`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
manip__action__State_Feedback__init(manip__action__State_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // base1
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->base1, 0)) {
    manip__action__State_Feedback__fini(msg);
    return false;
  }
  // base2
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->base2, 0)) {
    manip__action__State_Feedback__fini(msg);
    return false;
  }
  // work
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->work, 0)) {
    manip__action__State_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
manip__action__State_Feedback__fini(manip__action__State_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // base1
  rosidl_runtime_c__int64__Sequence__fini(&msg->base1);
  // base2
  rosidl_runtime_c__int64__Sequence__fini(&msg->base2);
  // work
  rosidl_runtime_c__int64__Sequence__fini(&msg->work);
}

bool
manip__action__State_Feedback__are_equal(const manip__action__State_Feedback * lhs, const manip__action__State_Feedback * rhs)
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
  // work
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->work), &(rhs->work)))
  {
    return false;
  }
  return true;
}

bool
manip__action__State_Feedback__copy(
  const manip__action__State_Feedback * input,
  manip__action__State_Feedback * output)
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
  // work
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->work), &(output->work)))
  {
    return false;
  }
  return true;
}

manip__action__State_Feedback *
manip__action__State_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_Feedback * msg = (manip__action__State_Feedback *)allocator.allocate(sizeof(manip__action__State_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manip__action__State_Feedback));
  bool success = manip__action__State_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manip__action__State_Feedback__destroy(manip__action__State_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manip__action__State_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manip__action__State_Feedback__Sequence__init(manip__action__State_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_Feedback * data = NULL;

  if (size) {
    data = (manip__action__State_Feedback *)allocator.zero_allocate(size, sizeof(manip__action__State_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manip__action__State_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manip__action__State_Feedback__fini(&data[i - 1]);
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
manip__action__State_Feedback__Sequence__fini(manip__action__State_Feedback__Sequence * array)
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
      manip__action__State_Feedback__fini(&array->data[i]);
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

manip__action__State_Feedback__Sequence *
manip__action__State_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_Feedback__Sequence * array = (manip__action__State_Feedback__Sequence *)allocator.allocate(sizeof(manip__action__State_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manip__action__State_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manip__action__State_Feedback__Sequence__destroy(manip__action__State_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manip__action__State_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manip__action__State_Feedback__Sequence__are_equal(const manip__action__State_Feedback__Sequence * lhs, const manip__action__State_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manip__action__State_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manip__action__State_Feedback__Sequence__copy(
  const manip__action__State_Feedback__Sequence * input,
  manip__action__State_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manip__action__State_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manip__action__State_Feedback * data =
      (manip__action__State_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manip__action__State_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manip__action__State_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manip__action__State_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "manip/action/detail/state__functions.h"

bool
manip__action__State_SendGoal_Request__init(manip__action__State_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    manip__action__State_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!manip__action__State_Goal__init(&msg->goal)) {
    manip__action__State_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
manip__action__State_SendGoal_Request__fini(manip__action__State_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  manip__action__State_Goal__fini(&msg->goal);
}

bool
manip__action__State_SendGoal_Request__are_equal(const manip__action__State_SendGoal_Request * lhs, const manip__action__State_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!manip__action__State_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
manip__action__State_SendGoal_Request__copy(
  const manip__action__State_SendGoal_Request * input,
  manip__action__State_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!manip__action__State_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

manip__action__State_SendGoal_Request *
manip__action__State_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_SendGoal_Request * msg = (manip__action__State_SendGoal_Request *)allocator.allocate(sizeof(manip__action__State_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manip__action__State_SendGoal_Request));
  bool success = manip__action__State_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manip__action__State_SendGoal_Request__destroy(manip__action__State_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manip__action__State_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manip__action__State_SendGoal_Request__Sequence__init(manip__action__State_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_SendGoal_Request * data = NULL;

  if (size) {
    data = (manip__action__State_SendGoal_Request *)allocator.zero_allocate(size, sizeof(manip__action__State_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manip__action__State_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manip__action__State_SendGoal_Request__fini(&data[i - 1]);
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
manip__action__State_SendGoal_Request__Sequence__fini(manip__action__State_SendGoal_Request__Sequence * array)
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
      manip__action__State_SendGoal_Request__fini(&array->data[i]);
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

manip__action__State_SendGoal_Request__Sequence *
manip__action__State_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_SendGoal_Request__Sequence * array = (manip__action__State_SendGoal_Request__Sequence *)allocator.allocate(sizeof(manip__action__State_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manip__action__State_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manip__action__State_SendGoal_Request__Sequence__destroy(manip__action__State_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manip__action__State_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manip__action__State_SendGoal_Request__Sequence__are_equal(const manip__action__State_SendGoal_Request__Sequence * lhs, const manip__action__State_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manip__action__State_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manip__action__State_SendGoal_Request__Sequence__copy(
  const manip__action__State_SendGoal_Request__Sequence * input,
  manip__action__State_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manip__action__State_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manip__action__State_SendGoal_Request * data =
      (manip__action__State_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manip__action__State_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manip__action__State_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manip__action__State_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
manip__action__State_SendGoal_Response__init(manip__action__State_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    manip__action__State_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
manip__action__State_SendGoal_Response__fini(manip__action__State_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
manip__action__State_SendGoal_Response__are_equal(const manip__action__State_SendGoal_Response * lhs, const manip__action__State_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
manip__action__State_SendGoal_Response__copy(
  const manip__action__State_SendGoal_Response * input,
  manip__action__State_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

manip__action__State_SendGoal_Response *
manip__action__State_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_SendGoal_Response * msg = (manip__action__State_SendGoal_Response *)allocator.allocate(sizeof(manip__action__State_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manip__action__State_SendGoal_Response));
  bool success = manip__action__State_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manip__action__State_SendGoal_Response__destroy(manip__action__State_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manip__action__State_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manip__action__State_SendGoal_Response__Sequence__init(manip__action__State_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_SendGoal_Response * data = NULL;

  if (size) {
    data = (manip__action__State_SendGoal_Response *)allocator.zero_allocate(size, sizeof(manip__action__State_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manip__action__State_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manip__action__State_SendGoal_Response__fini(&data[i - 1]);
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
manip__action__State_SendGoal_Response__Sequence__fini(manip__action__State_SendGoal_Response__Sequence * array)
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
      manip__action__State_SendGoal_Response__fini(&array->data[i]);
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

manip__action__State_SendGoal_Response__Sequence *
manip__action__State_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_SendGoal_Response__Sequence * array = (manip__action__State_SendGoal_Response__Sequence *)allocator.allocate(sizeof(manip__action__State_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manip__action__State_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manip__action__State_SendGoal_Response__Sequence__destroy(manip__action__State_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manip__action__State_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manip__action__State_SendGoal_Response__Sequence__are_equal(const manip__action__State_SendGoal_Response__Sequence * lhs, const manip__action__State_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manip__action__State_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manip__action__State_SendGoal_Response__Sequence__copy(
  const manip__action__State_SendGoal_Response__Sequence * input,
  manip__action__State_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manip__action__State_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manip__action__State_SendGoal_Response * data =
      (manip__action__State_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manip__action__State_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manip__action__State_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manip__action__State_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
manip__action__State_GetResult_Request__init(manip__action__State_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    manip__action__State_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
manip__action__State_GetResult_Request__fini(manip__action__State_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
manip__action__State_GetResult_Request__are_equal(const manip__action__State_GetResult_Request * lhs, const manip__action__State_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
manip__action__State_GetResult_Request__copy(
  const manip__action__State_GetResult_Request * input,
  manip__action__State_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

manip__action__State_GetResult_Request *
manip__action__State_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_GetResult_Request * msg = (manip__action__State_GetResult_Request *)allocator.allocate(sizeof(manip__action__State_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manip__action__State_GetResult_Request));
  bool success = manip__action__State_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manip__action__State_GetResult_Request__destroy(manip__action__State_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manip__action__State_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manip__action__State_GetResult_Request__Sequence__init(manip__action__State_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_GetResult_Request * data = NULL;

  if (size) {
    data = (manip__action__State_GetResult_Request *)allocator.zero_allocate(size, sizeof(manip__action__State_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manip__action__State_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manip__action__State_GetResult_Request__fini(&data[i - 1]);
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
manip__action__State_GetResult_Request__Sequence__fini(manip__action__State_GetResult_Request__Sequence * array)
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
      manip__action__State_GetResult_Request__fini(&array->data[i]);
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

manip__action__State_GetResult_Request__Sequence *
manip__action__State_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_GetResult_Request__Sequence * array = (manip__action__State_GetResult_Request__Sequence *)allocator.allocate(sizeof(manip__action__State_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manip__action__State_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manip__action__State_GetResult_Request__Sequence__destroy(manip__action__State_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manip__action__State_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manip__action__State_GetResult_Request__Sequence__are_equal(const manip__action__State_GetResult_Request__Sequence * lhs, const manip__action__State_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manip__action__State_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manip__action__State_GetResult_Request__Sequence__copy(
  const manip__action__State_GetResult_Request__Sequence * input,
  manip__action__State_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manip__action__State_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manip__action__State_GetResult_Request * data =
      (manip__action__State_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manip__action__State_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manip__action__State_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manip__action__State_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "manip/action/detail/state__functions.h"

bool
manip__action__State_GetResult_Response__init(manip__action__State_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!manip__action__State_Result__init(&msg->result)) {
    manip__action__State_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
manip__action__State_GetResult_Response__fini(manip__action__State_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  manip__action__State_Result__fini(&msg->result);
}

bool
manip__action__State_GetResult_Response__are_equal(const manip__action__State_GetResult_Response * lhs, const manip__action__State_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!manip__action__State_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
manip__action__State_GetResult_Response__copy(
  const manip__action__State_GetResult_Response * input,
  manip__action__State_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!manip__action__State_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

manip__action__State_GetResult_Response *
manip__action__State_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_GetResult_Response * msg = (manip__action__State_GetResult_Response *)allocator.allocate(sizeof(manip__action__State_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manip__action__State_GetResult_Response));
  bool success = manip__action__State_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manip__action__State_GetResult_Response__destroy(manip__action__State_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manip__action__State_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manip__action__State_GetResult_Response__Sequence__init(manip__action__State_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_GetResult_Response * data = NULL;

  if (size) {
    data = (manip__action__State_GetResult_Response *)allocator.zero_allocate(size, sizeof(manip__action__State_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manip__action__State_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manip__action__State_GetResult_Response__fini(&data[i - 1]);
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
manip__action__State_GetResult_Response__Sequence__fini(manip__action__State_GetResult_Response__Sequence * array)
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
      manip__action__State_GetResult_Response__fini(&array->data[i]);
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

manip__action__State_GetResult_Response__Sequence *
manip__action__State_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_GetResult_Response__Sequence * array = (manip__action__State_GetResult_Response__Sequence *)allocator.allocate(sizeof(manip__action__State_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manip__action__State_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manip__action__State_GetResult_Response__Sequence__destroy(manip__action__State_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manip__action__State_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manip__action__State_GetResult_Response__Sequence__are_equal(const manip__action__State_GetResult_Response__Sequence * lhs, const manip__action__State_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manip__action__State_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manip__action__State_GetResult_Response__Sequence__copy(
  const manip__action__State_GetResult_Response__Sequence * input,
  manip__action__State_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manip__action__State_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manip__action__State_GetResult_Response * data =
      (manip__action__State_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manip__action__State_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manip__action__State_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manip__action__State_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "manip/action/detail/state__functions.h"

bool
manip__action__State_FeedbackMessage__init(manip__action__State_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    manip__action__State_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!manip__action__State_Feedback__init(&msg->feedback)) {
    manip__action__State_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
manip__action__State_FeedbackMessage__fini(manip__action__State_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  manip__action__State_Feedback__fini(&msg->feedback);
}

bool
manip__action__State_FeedbackMessage__are_equal(const manip__action__State_FeedbackMessage * lhs, const manip__action__State_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!manip__action__State_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
manip__action__State_FeedbackMessage__copy(
  const manip__action__State_FeedbackMessage * input,
  manip__action__State_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!manip__action__State_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

manip__action__State_FeedbackMessage *
manip__action__State_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_FeedbackMessage * msg = (manip__action__State_FeedbackMessage *)allocator.allocate(sizeof(manip__action__State_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manip__action__State_FeedbackMessage));
  bool success = manip__action__State_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manip__action__State_FeedbackMessage__destroy(manip__action__State_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manip__action__State_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manip__action__State_FeedbackMessage__Sequence__init(manip__action__State_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_FeedbackMessage * data = NULL;

  if (size) {
    data = (manip__action__State_FeedbackMessage *)allocator.zero_allocate(size, sizeof(manip__action__State_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manip__action__State_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manip__action__State_FeedbackMessage__fini(&data[i - 1]);
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
manip__action__State_FeedbackMessage__Sequence__fini(manip__action__State_FeedbackMessage__Sequence * array)
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
      manip__action__State_FeedbackMessage__fini(&array->data[i]);
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

manip__action__State_FeedbackMessage__Sequence *
manip__action__State_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manip__action__State_FeedbackMessage__Sequence * array = (manip__action__State_FeedbackMessage__Sequence *)allocator.allocate(sizeof(manip__action__State_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manip__action__State_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manip__action__State_FeedbackMessage__Sequence__destroy(manip__action__State_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manip__action__State_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manip__action__State_FeedbackMessage__Sequence__are_equal(const manip__action__State_FeedbackMessage__Sequence * lhs, const manip__action__State_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manip__action__State_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manip__action__State_FeedbackMessage__Sequence__copy(
  const manip__action__State_FeedbackMessage__Sequence * input,
  manip__action__State_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manip__action__State_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manip__action__State_FeedbackMessage * data =
      (manip__action__State_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manip__action__State_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manip__action__State_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manip__action__State_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
