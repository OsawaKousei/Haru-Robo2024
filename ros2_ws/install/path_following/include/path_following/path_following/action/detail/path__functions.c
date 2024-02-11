// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from path_following:action/Path.idl
// generated code does not contain a copyright notice
#include "path_following/action/detail/path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start`
// Member `goal`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
path_following__action__Path_Goal__init(path_following__action__Path_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!rosidl_runtime_c__double__Sequence__init(&msg->start, 0)) {
    path_following__action__Path_Goal__fini(msg);
    return false;
  }
  // goal
  if (!rosidl_runtime_c__double__Sequence__init(&msg->goal, 0)) {
    path_following__action__Path_Goal__fini(msg);
    return false;
  }
  // head
  return true;
}

void
path_following__action__Path_Goal__fini(path_following__action__Path_Goal * msg)
{
  if (!msg) {
    return;
  }
  // start
  rosidl_runtime_c__double__Sequence__fini(&msg->start);
  // goal
  rosidl_runtime_c__double__Sequence__fini(&msg->goal);
  // head
}

bool
path_following__action__Path_Goal__are_equal(const path_following__action__Path_Goal * lhs, const path_following__action__Path_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // goal
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // head
  if (lhs->head != rhs->head) {
    return false;
  }
  return true;
}

bool
path_following__action__Path_Goal__copy(
  const path_following__action__Path_Goal * input,
  path_following__action__Path_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // goal
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // head
  output->head = input->head;
  return true;
}

path_following__action__Path_Goal *
path_following__action__Path_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_Goal * msg = (path_following__action__Path_Goal *)allocator.allocate(sizeof(path_following__action__Path_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(path_following__action__Path_Goal));
  bool success = path_following__action__Path_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
path_following__action__Path_Goal__destroy(path_following__action__Path_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    path_following__action__Path_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
path_following__action__Path_Goal__Sequence__init(path_following__action__Path_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_Goal * data = NULL;

  if (size) {
    data = (path_following__action__Path_Goal *)allocator.zero_allocate(size, sizeof(path_following__action__Path_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = path_following__action__Path_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        path_following__action__Path_Goal__fini(&data[i - 1]);
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
path_following__action__Path_Goal__Sequence__fini(path_following__action__Path_Goal__Sequence * array)
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
      path_following__action__Path_Goal__fini(&array->data[i]);
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

path_following__action__Path_Goal__Sequence *
path_following__action__Path_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_Goal__Sequence * array = (path_following__action__Path_Goal__Sequence *)allocator.allocate(sizeof(path_following__action__Path_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = path_following__action__Path_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
path_following__action__Path_Goal__Sequence__destroy(path_following__action__Path_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    path_following__action__Path_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
path_following__action__Path_Goal__Sequence__are_equal(const path_following__action__Path_Goal__Sequence * lhs, const path_following__action__Path_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!path_following__action__Path_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
path_following__action__Path_Goal__Sequence__copy(
  const path_following__action__Path_Goal__Sequence * input,
  path_following__action__Path_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(path_following__action__Path_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    path_following__action__Path_Goal * data =
      (path_following__action__Path_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!path_following__action__Path_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          path_following__action__Path_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!path_following__action__Path_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
path_following__action__Path_Result__init(path_following__action__Path_Result * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  return true;
}

void
path_following__action__Path_Result__fini(path_following__action__Path_Result * msg)
{
  if (!msg) {
    return;
  }
  // feedback
}

bool
path_following__action__Path_Result__are_equal(const path_following__action__Path_Result * lhs, const path_following__action__Path_Result * rhs)
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
path_following__action__Path_Result__copy(
  const path_following__action__Path_Result * input,
  path_following__action__Path_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  output->feedback = input->feedback;
  return true;
}

path_following__action__Path_Result *
path_following__action__Path_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_Result * msg = (path_following__action__Path_Result *)allocator.allocate(sizeof(path_following__action__Path_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(path_following__action__Path_Result));
  bool success = path_following__action__Path_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
path_following__action__Path_Result__destroy(path_following__action__Path_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    path_following__action__Path_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
path_following__action__Path_Result__Sequence__init(path_following__action__Path_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_Result * data = NULL;

  if (size) {
    data = (path_following__action__Path_Result *)allocator.zero_allocate(size, sizeof(path_following__action__Path_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = path_following__action__Path_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        path_following__action__Path_Result__fini(&data[i - 1]);
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
path_following__action__Path_Result__Sequence__fini(path_following__action__Path_Result__Sequence * array)
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
      path_following__action__Path_Result__fini(&array->data[i]);
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

path_following__action__Path_Result__Sequence *
path_following__action__Path_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_Result__Sequence * array = (path_following__action__Path_Result__Sequence *)allocator.allocate(sizeof(path_following__action__Path_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = path_following__action__Path_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
path_following__action__Path_Result__Sequence__destroy(path_following__action__Path_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    path_following__action__Path_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
path_following__action__Path_Result__Sequence__are_equal(const path_following__action__Path_Result__Sequence * lhs, const path_following__action__Path_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!path_following__action__Path_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
path_following__action__Path_Result__Sequence__copy(
  const path_following__action__Path_Result__Sequence * input,
  path_following__action__Path_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(path_following__action__Path_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    path_following__action__Path_Result * data =
      (path_following__action__Path_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!path_following__action__Path_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          path_following__action__Path_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!path_following__action__Path_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `posi`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
path_following__action__Path_Feedback__init(path_following__action__Path_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // posi
  if (!rosidl_runtime_c__double__Sequence__init(&msg->posi, 0)) {
    path_following__action__Path_Feedback__fini(msg);
    return false;
  }
  // head
  return true;
}

void
path_following__action__Path_Feedback__fini(path_following__action__Path_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // posi
  rosidl_runtime_c__double__Sequence__fini(&msg->posi);
  // head
}

bool
path_following__action__Path_Feedback__are_equal(const path_following__action__Path_Feedback * lhs, const path_following__action__Path_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // posi
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->posi), &(rhs->posi)))
  {
    return false;
  }
  // head
  if (lhs->head != rhs->head) {
    return false;
  }
  return true;
}

bool
path_following__action__Path_Feedback__copy(
  const path_following__action__Path_Feedback * input,
  path_following__action__Path_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // posi
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->posi), &(output->posi)))
  {
    return false;
  }
  // head
  output->head = input->head;
  return true;
}

path_following__action__Path_Feedback *
path_following__action__Path_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_Feedback * msg = (path_following__action__Path_Feedback *)allocator.allocate(sizeof(path_following__action__Path_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(path_following__action__Path_Feedback));
  bool success = path_following__action__Path_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
path_following__action__Path_Feedback__destroy(path_following__action__Path_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    path_following__action__Path_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
path_following__action__Path_Feedback__Sequence__init(path_following__action__Path_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_Feedback * data = NULL;

  if (size) {
    data = (path_following__action__Path_Feedback *)allocator.zero_allocate(size, sizeof(path_following__action__Path_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = path_following__action__Path_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        path_following__action__Path_Feedback__fini(&data[i - 1]);
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
path_following__action__Path_Feedback__Sequence__fini(path_following__action__Path_Feedback__Sequence * array)
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
      path_following__action__Path_Feedback__fini(&array->data[i]);
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

path_following__action__Path_Feedback__Sequence *
path_following__action__Path_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_Feedback__Sequence * array = (path_following__action__Path_Feedback__Sequence *)allocator.allocate(sizeof(path_following__action__Path_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = path_following__action__Path_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
path_following__action__Path_Feedback__Sequence__destroy(path_following__action__Path_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    path_following__action__Path_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
path_following__action__Path_Feedback__Sequence__are_equal(const path_following__action__Path_Feedback__Sequence * lhs, const path_following__action__Path_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!path_following__action__Path_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
path_following__action__Path_Feedback__Sequence__copy(
  const path_following__action__Path_Feedback__Sequence * input,
  path_following__action__Path_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(path_following__action__Path_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    path_following__action__Path_Feedback * data =
      (path_following__action__Path_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!path_following__action__Path_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          path_following__action__Path_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!path_following__action__Path_Feedback__copy(
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
// #include "path_following/action/detail/path__functions.h"

bool
path_following__action__Path_SendGoal_Request__init(path_following__action__Path_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    path_following__action__Path_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!path_following__action__Path_Goal__init(&msg->goal)) {
    path_following__action__Path_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
path_following__action__Path_SendGoal_Request__fini(path_following__action__Path_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  path_following__action__Path_Goal__fini(&msg->goal);
}

bool
path_following__action__Path_SendGoal_Request__are_equal(const path_following__action__Path_SendGoal_Request * lhs, const path_following__action__Path_SendGoal_Request * rhs)
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
  if (!path_following__action__Path_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
path_following__action__Path_SendGoal_Request__copy(
  const path_following__action__Path_SendGoal_Request * input,
  path_following__action__Path_SendGoal_Request * output)
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
  if (!path_following__action__Path_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

path_following__action__Path_SendGoal_Request *
path_following__action__Path_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_SendGoal_Request * msg = (path_following__action__Path_SendGoal_Request *)allocator.allocate(sizeof(path_following__action__Path_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(path_following__action__Path_SendGoal_Request));
  bool success = path_following__action__Path_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
path_following__action__Path_SendGoal_Request__destroy(path_following__action__Path_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    path_following__action__Path_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
path_following__action__Path_SendGoal_Request__Sequence__init(path_following__action__Path_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_SendGoal_Request * data = NULL;

  if (size) {
    data = (path_following__action__Path_SendGoal_Request *)allocator.zero_allocate(size, sizeof(path_following__action__Path_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = path_following__action__Path_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        path_following__action__Path_SendGoal_Request__fini(&data[i - 1]);
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
path_following__action__Path_SendGoal_Request__Sequence__fini(path_following__action__Path_SendGoal_Request__Sequence * array)
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
      path_following__action__Path_SendGoal_Request__fini(&array->data[i]);
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

path_following__action__Path_SendGoal_Request__Sequence *
path_following__action__Path_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_SendGoal_Request__Sequence * array = (path_following__action__Path_SendGoal_Request__Sequence *)allocator.allocate(sizeof(path_following__action__Path_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = path_following__action__Path_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
path_following__action__Path_SendGoal_Request__Sequence__destroy(path_following__action__Path_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    path_following__action__Path_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
path_following__action__Path_SendGoal_Request__Sequence__are_equal(const path_following__action__Path_SendGoal_Request__Sequence * lhs, const path_following__action__Path_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!path_following__action__Path_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
path_following__action__Path_SendGoal_Request__Sequence__copy(
  const path_following__action__Path_SendGoal_Request__Sequence * input,
  path_following__action__Path_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(path_following__action__Path_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    path_following__action__Path_SendGoal_Request * data =
      (path_following__action__Path_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!path_following__action__Path_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          path_following__action__Path_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!path_following__action__Path_SendGoal_Request__copy(
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
path_following__action__Path_SendGoal_Response__init(path_following__action__Path_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    path_following__action__Path_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
path_following__action__Path_SendGoal_Response__fini(path_following__action__Path_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
path_following__action__Path_SendGoal_Response__are_equal(const path_following__action__Path_SendGoal_Response * lhs, const path_following__action__Path_SendGoal_Response * rhs)
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
path_following__action__Path_SendGoal_Response__copy(
  const path_following__action__Path_SendGoal_Response * input,
  path_following__action__Path_SendGoal_Response * output)
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

path_following__action__Path_SendGoal_Response *
path_following__action__Path_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_SendGoal_Response * msg = (path_following__action__Path_SendGoal_Response *)allocator.allocate(sizeof(path_following__action__Path_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(path_following__action__Path_SendGoal_Response));
  bool success = path_following__action__Path_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
path_following__action__Path_SendGoal_Response__destroy(path_following__action__Path_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    path_following__action__Path_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
path_following__action__Path_SendGoal_Response__Sequence__init(path_following__action__Path_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_SendGoal_Response * data = NULL;

  if (size) {
    data = (path_following__action__Path_SendGoal_Response *)allocator.zero_allocate(size, sizeof(path_following__action__Path_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = path_following__action__Path_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        path_following__action__Path_SendGoal_Response__fini(&data[i - 1]);
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
path_following__action__Path_SendGoal_Response__Sequence__fini(path_following__action__Path_SendGoal_Response__Sequence * array)
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
      path_following__action__Path_SendGoal_Response__fini(&array->data[i]);
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

path_following__action__Path_SendGoal_Response__Sequence *
path_following__action__Path_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_SendGoal_Response__Sequence * array = (path_following__action__Path_SendGoal_Response__Sequence *)allocator.allocate(sizeof(path_following__action__Path_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = path_following__action__Path_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
path_following__action__Path_SendGoal_Response__Sequence__destroy(path_following__action__Path_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    path_following__action__Path_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
path_following__action__Path_SendGoal_Response__Sequence__are_equal(const path_following__action__Path_SendGoal_Response__Sequence * lhs, const path_following__action__Path_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!path_following__action__Path_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
path_following__action__Path_SendGoal_Response__Sequence__copy(
  const path_following__action__Path_SendGoal_Response__Sequence * input,
  path_following__action__Path_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(path_following__action__Path_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    path_following__action__Path_SendGoal_Response * data =
      (path_following__action__Path_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!path_following__action__Path_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          path_following__action__Path_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!path_following__action__Path_SendGoal_Response__copy(
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
path_following__action__Path_GetResult_Request__init(path_following__action__Path_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    path_following__action__Path_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
path_following__action__Path_GetResult_Request__fini(path_following__action__Path_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
path_following__action__Path_GetResult_Request__are_equal(const path_following__action__Path_GetResult_Request * lhs, const path_following__action__Path_GetResult_Request * rhs)
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
path_following__action__Path_GetResult_Request__copy(
  const path_following__action__Path_GetResult_Request * input,
  path_following__action__Path_GetResult_Request * output)
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

path_following__action__Path_GetResult_Request *
path_following__action__Path_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_GetResult_Request * msg = (path_following__action__Path_GetResult_Request *)allocator.allocate(sizeof(path_following__action__Path_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(path_following__action__Path_GetResult_Request));
  bool success = path_following__action__Path_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
path_following__action__Path_GetResult_Request__destroy(path_following__action__Path_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    path_following__action__Path_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
path_following__action__Path_GetResult_Request__Sequence__init(path_following__action__Path_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_GetResult_Request * data = NULL;

  if (size) {
    data = (path_following__action__Path_GetResult_Request *)allocator.zero_allocate(size, sizeof(path_following__action__Path_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = path_following__action__Path_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        path_following__action__Path_GetResult_Request__fini(&data[i - 1]);
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
path_following__action__Path_GetResult_Request__Sequence__fini(path_following__action__Path_GetResult_Request__Sequence * array)
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
      path_following__action__Path_GetResult_Request__fini(&array->data[i]);
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

path_following__action__Path_GetResult_Request__Sequence *
path_following__action__Path_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_GetResult_Request__Sequence * array = (path_following__action__Path_GetResult_Request__Sequence *)allocator.allocate(sizeof(path_following__action__Path_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = path_following__action__Path_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
path_following__action__Path_GetResult_Request__Sequence__destroy(path_following__action__Path_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    path_following__action__Path_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
path_following__action__Path_GetResult_Request__Sequence__are_equal(const path_following__action__Path_GetResult_Request__Sequence * lhs, const path_following__action__Path_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!path_following__action__Path_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
path_following__action__Path_GetResult_Request__Sequence__copy(
  const path_following__action__Path_GetResult_Request__Sequence * input,
  path_following__action__Path_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(path_following__action__Path_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    path_following__action__Path_GetResult_Request * data =
      (path_following__action__Path_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!path_following__action__Path_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          path_following__action__Path_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!path_following__action__Path_GetResult_Request__copy(
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
// #include "path_following/action/detail/path__functions.h"

bool
path_following__action__Path_GetResult_Response__init(path_following__action__Path_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!path_following__action__Path_Result__init(&msg->result)) {
    path_following__action__Path_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
path_following__action__Path_GetResult_Response__fini(path_following__action__Path_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  path_following__action__Path_Result__fini(&msg->result);
}

bool
path_following__action__Path_GetResult_Response__are_equal(const path_following__action__Path_GetResult_Response * lhs, const path_following__action__Path_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!path_following__action__Path_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
path_following__action__Path_GetResult_Response__copy(
  const path_following__action__Path_GetResult_Response * input,
  path_following__action__Path_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!path_following__action__Path_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

path_following__action__Path_GetResult_Response *
path_following__action__Path_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_GetResult_Response * msg = (path_following__action__Path_GetResult_Response *)allocator.allocate(sizeof(path_following__action__Path_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(path_following__action__Path_GetResult_Response));
  bool success = path_following__action__Path_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
path_following__action__Path_GetResult_Response__destroy(path_following__action__Path_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    path_following__action__Path_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
path_following__action__Path_GetResult_Response__Sequence__init(path_following__action__Path_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_GetResult_Response * data = NULL;

  if (size) {
    data = (path_following__action__Path_GetResult_Response *)allocator.zero_allocate(size, sizeof(path_following__action__Path_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = path_following__action__Path_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        path_following__action__Path_GetResult_Response__fini(&data[i - 1]);
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
path_following__action__Path_GetResult_Response__Sequence__fini(path_following__action__Path_GetResult_Response__Sequence * array)
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
      path_following__action__Path_GetResult_Response__fini(&array->data[i]);
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

path_following__action__Path_GetResult_Response__Sequence *
path_following__action__Path_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_GetResult_Response__Sequence * array = (path_following__action__Path_GetResult_Response__Sequence *)allocator.allocate(sizeof(path_following__action__Path_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = path_following__action__Path_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
path_following__action__Path_GetResult_Response__Sequence__destroy(path_following__action__Path_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    path_following__action__Path_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
path_following__action__Path_GetResult_Response__Sequence__are_equal(const path_following__action__Path_GetResult_Response__Sequence * lhs, const path_following__action__Path_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!path_following__action__Path_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
path_following__action__Path_GetResult_Response__Sequence__copy(
  const path_following__action__Path_GetResult_Response__Sequence * input,
  path_following__action__Path_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(path_following__action__Path_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    path_following__action__Path_GetResult_Response * data =
      (path_following__action__Path_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!path_following__action__Path_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          path_following__action__Path_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!path_following__action__Path_GetResult_Response__copy(
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
// #include "path_following/action/detail/path__functions.h"

bool
path_following__action__Path_FeedbackMessage__init(path_following__action__Path_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    path_following__action__Path_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!path_following__action__Path_Feedback__init(&msg->feedback)) {
    path_following__action__Path_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
path_following__action__Path_FeedbackMessage__fini(path_following__action__Path_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  path_following__action__Path_Feedback__fini(&msg->feedback);
}

bool
path_following__action__Path_FeedbackMessage__are_equal(const path_following__action__Path_FeedbackMessage * lhs, const path_following__action__Path_FeedbackMessage * rhs)
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
  if (!path_following__action__Path_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
path_following__action__Path_FeedbackMessage__copy(
  const path_following__action__Path_FeedbackMessage * input,
  path_following__action__Path_FeedbackMessage * output)
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
  if (!path_following__action__Path_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

path_following__action__Path_FeedbackMessage *
path_following__action__Path_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_FeedbackMessage * msg = (path_following__action__Path_FeedbackMessage *)allocator.allocate(sizeof(path_following__action__Path_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(path_following__action__Path_FeedbackMessage));
  bool success = path_following__action__Path_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
path_following__action__Path_FeedbackMessage__destroy(path_following__action__Path_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    path_following__action__Path_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
path_following__action__Path_FeedbackMessage__Sequence__init(path_following__action__Path_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_FeedbackMessage * data = NULL;

  if (size) {
    data = (path_following__action__Path_FeedbackMessage *)allocator.zero_allocate(size, sizeof(path_following__action__Path_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = path_following__action__Path_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        path_following__action__Path_FeedbackMessage__fini(&data[i - 1]);
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
path_following__action__Path_FeedbackMessage__Sequence__fini(path_following__action__Path_FeedbackMessage__Sequence * array)
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
      path_following__action__Path_FeedbackMessage__fini(&array->data[i]);
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

path_following__action__Path_FeedbackMessage__Sequence *
path_following__action__Path_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  path_following__action__Path_FeedbackMessage__Sequence * array = (path_following__action__Path_FeedbackMessage__Sequence *)allocator.allocate(sizeof(path_following__action__Path_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = path_following__action__Path_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
path_following__action__Path_FeedbackMessage__Sequence__destroy(path_following__action__Path_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    path_following__action__Path_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
path_following__action__Path_FeedbackMessage__Sequence__are_equal(const path_following__action__Path_FeedbackMessage__Sequence * lhs, const path_following__action__Path_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!path_following__action__Path_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
path_following__action__Path_FeedbackMessage__Sequence__copy(
  const path_following__action__Path_FeedbackMessage__Sequence * input,
  path_following__action__Path_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(path_following__action__Path_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    path_following__action__Path_FeedbackMessage * data =
      (path_following__action__Path_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!path_following__action__Path_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          path_following__action__Path_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!path_following__action__Path_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
