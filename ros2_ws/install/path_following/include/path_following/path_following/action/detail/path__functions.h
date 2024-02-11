// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from path_following:action/Path.idl
// generated code does not contain a copyright notice

#ifndef PATH_FOLLOWING__ACTION__DETAIL__PATH__FUNCTIONS_H_
#define PATH_FOLLOWING__ACTION__DETAIL__PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "path_following/msg/rosidl_generator_c__visibility_control.h"

#include "path_following/action/detail/path__struct.h"

/// Initialize action/Path message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * path_following__action__Path_Goal
 * )) before or use
 * path_following__action__Path_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Goal__init(path_following__action__Path_Goal * msg);

/// Finalize action/Path message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Goal__fini(path_following__action__Path_Goal * msg);

/// Create action/Path message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * path_following__action__Path_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_Goal *
path_following__action__Path_Goal__create();

/// Destroy action/Path message.
/**
 * It calls
 * path_following__action__Path_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Goal__destroy(path_following__action__Path_Goal * msg);

/// Check for action/Path message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Goal__are_equal(const path_following__action__Path_Goal * lhs, const path_following__action__Path_Goal * rhs);

/// Copy a action/Path message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Goal__copy(
  const path_following__action__Path_Goal * input,
  path_following__action__Path_Goal * output);

/// Initialize array of action/Path messages.
/**
 * It allocates the memory for the number of elements and calls
 * path_following__action__Path_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Goal__Sequence__init(path_following__action__Path_Goal__Sequence * array, size_t size);

/// Finalize array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Goal__Sequence__fini(path_following__action__Path_Goal__Sequence * array);

/// Create array of action/Path messages.
/**
 * It allocates the memory for the array and calls
 * path_following__action__Path_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_Goal__Sequence *
path_following__action__Path_Goal__Sequence__create(size_t size);

/// Destroy array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Goal__Sequence__destroy(path_following__action__Path_Goal__Sequence * array);

/// Check for action/Path message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Goal__Sequence__are_equal(const path_following__action__Path_Goal__Sequence * lhs, const path_following__action__Path_Goal__Sequence * rhs);

/// Copy an array of action/Path messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Goal__Sequence__copy(
  const path_following__action__Path_Goal__Sequence * input,
  path_following__action__Path_Goal__Sequence * output);

/// Initialize action/Path message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * path_following__action__Path_Result
 * )) before or use
 * path_following__action__Path_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Result__init(path_following__action__Path_Result * msg);

/// Finalize action/Path message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Result__fini(path_following__action__Path_Result * msg);

/// Create action/Path message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * path_following__action__Path_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_Result *
path_following__action__Path_Result__create();

/// Destroy action/Path message.
/**
 * It calls
 * path_following__action__Path_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Result__destroy(path_following__action__Path_Result * msg);

/// Check for action/Path message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Result__are_equal(const path_following__action__Path_Result * lhs, const path_following__action__Path_Result * rhs);

/// Copy a action/Path message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Result__copy(
  const path_following__action__Path_Result * input,
  path_following__action__Path_Result * output);

/// Initialize array of action/Path messages.
/**
 * It allocates the memory for the number of elements and calls
 * path_following__action__Path_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Result__Sequence__init(path_following__action__Path_Result__Sequence * array, size_t size);

/// Finalize array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Result__Sequence__fini(path_following__action__Path_Result__Sequence * array);

/// Create array of action/Path messages.
/**
 * It allocates the memory for the array and calls
 * path_following__action__Path_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_Result__Sequence *
path_following__action__Path_Result__Sequence__create(size_t size);

/// Destroy array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Result__Sequence__destroy(path_following__action__Path_Result__Sequence * array);

/// Check for action/Path message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Result__Sequence__are_equal(const path_following__action__Path_Result__Sequence * lhs, const path_following__action__Path_Result__Sequence * rhs);

/// Copy an array of action/Path messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Result__Sequence__copy(
  const path_following__action__Path_Result__Sequence * input,
  path_following__action__Path_Result__Sequence * output);

/// Initialize action/Path message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * path_following__action__Path_Feedback
 * )) before or use
 * path_following__action__Path_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Feedback__init(path_following__action__Path_Feedback * msg);

/// Finalize action/Path message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Feedback__fini(path_following__action__Path_Feedback * msg);

/// Create action/Path message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * path_following__action__Path_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_Feedback *
path_following__action__Path_Feedback__create();

/// Destroy action/Path message.
/**
 * It calls
 * path_following__action__Path_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Feedback__destroy(path_following__action__Path_Feedback * msg);

/// Check for action/Path message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Feedback__are_equal(const path_following__action__Path_Feedback * lhs, const path_following__action__Path_Feedback * rhs);

/// Copy a action/Path message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Feedback__copy(
  const path_following__action__Path_Feedback * input,
  path_following__action__Path_Feedback * output);

/// Initialize array of action/Path messages.
/**
 * It allocates the memory for the number of elements and calls
 * path_following__action__Path_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Feedback__Sequence__init(path_following__action__Path_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Feedback__Sequence__fini(path_following__action__Path_Feedback__Sequence * array);

/// Create array of action/Path messages.
/**
 * It allocates the memory for the array and calls
 * path_following__action__Path_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_Feedback__Sequence *
path_following__action__Path_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_Feedback__Sequence__destroy(path_following__action__Path_Feedback__Sequence * array);

/// Check for action/Path message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Feedback__Sequence__are_equal(const path_following__action__Path_Feedback__Sequence * lhs, const path_following__action__Path_Feedback__Sequence * rhs);

/// Copy an array of action/Path messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_Feedback__Sequence__copy(
  const path_following__action__Path_Feedback__Sequence * input,
  path_following__action__Path_Feedback__Sequence * output);

/// Initialize action/Path message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * path_following__action__Path_SendGoal_Request
 * )) before or use
 * path_following__action__Path_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Request__init(path_following__action__Path_SendGoal_Request * msg);

/// Finalize action/Path message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_SendGoal_Request__fini(path_following__action__Path_SendGoal_Request * msg);

/// Create action/Path message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * path_following__action__Path_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_SendGoal_Request *
path_following__action__Path_SendGoal_Request__create();

/// Destroy action/Path message.
/**
 * It calls
 * path_following__action__Path_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_SendGoal_Request__destroy(path_following__action__Path_SendGoal_Request * msg);

/// Check for action/Path message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Request__are_equal(const path_following__action__Path_SendGoal_Request * lhs, const path_following__action__Path_SendGoal_Request * rhs);

/// Copy a action/Path message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Request__copy(
  const path_following__action__Path_SendGoal_Request * input,
  path_following__action__Path_SendGoal_Request * output);

/// Initialize array of action/Path messages.
/**
 * It allocates the memory for the number of elements and calls
 * path_following__action__Path_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Request__Sequence__init(path_following__action__Path_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_SendGoal_Request__Sequence__fini(path_following__action__Path_SendGoal_Request__Sequence * array);

/// Create array of action/Path messages.
/**
 * It allocates the memory for the array and calls
 * path_following__action__Path_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_SendGoal_Request__Sequence *
path_following__action__Path_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_SendGoal_Request__Sequence__destroy(path_following__action__Path_SendGoal_Request__Sequence * array);

/// Check for action/Path message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Request__Sequence__are_equal(const path_following__action__Path_SendGoal_Request__Sequence * lhs, const path_following__action__Path_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Path messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Request__Sequence__copy(
  const path_following__action__Path_SendGoal_Request__Sequence * input,
  path_following__action__Path_SendGoal_Request__Sequence * output);

/// Initialize action/Path message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * path_following__action__Path_SendGoal_Response
 * )) before or use
 * path_following__action__Path_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Response__init(path_following__action__Path_SendGoal_Response * msg);

/// Finalize action/Path message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_SendGoal_Response__fini(path_following__action__Path_SendGoal_Response * msg);

/// Create action/Path message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * path_following__action__Path_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_SendGoal_Response *
path_following__action__Path_SendGoal_Response__create();

/// Destroy action/Path message.
/**
 * It calls
 * path_following__action__Path_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_SendGoal_Response__destroy(path_following__action__Path_SendGoal_Response * msg);

/// Check for action/Path message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Response__are_equal(const path_following__action__Path_SendGoal_Response * lhs, const path_following__action__Path_SendGoal_Response * rhs);

/// Copy a action/Path message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Response__copy(
  const path_following__action__Path_SendGoal_Response * input,
  path_following__action__Path_SendGoal_Response * output);

/// Initialize array of action/Path messages.
/**
 * It allocates the memory for the number of elements and calls
 * path_following__action__Path_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Response__Sequence__init(path_following__action__Path_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_SendGoal_Response__Sequence__fini(path_following__action__Path_SendGoal_Response__Sequence * array);

/// Create array of action/Path messages.
/**
 * It allocates the memory for the array and calls
 * path_following__action__Path_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_SendGoal_Response__Sequence *
path_following__action__Path_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_SendGoal_Response__Sequence__destroy(path_following__action__Path_SendGoal_Response__Sequence * array);

/// Check for action/Path message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Response__Sequence__are_equal(const path_following__action__Path_SendGoal_Response__Sequence * lhs, const path_following__action__Path_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Path messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_SendGoal_Response__Sequence__copy(
  const path_following__action__Path_SendGoal_Response__Sequence * input,
  path_following__action__Path_SendGoal_Response__Sequence * output);

/// Initialize action/Path message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * path_following__action__Path_GetResult_Request
 * )) before or use
 * path_following__action__Path_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Request__init(path_following__action__Path_GetResult_Request * msg);

/// Finalize action/Path message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_GetResult_Request__fini(path_following__action__Path_GetResult_Request * msg);

/// Create action/Path message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * path_following__action__Path_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_GetResult_Request *
path_following__action__Path_GetResult_Request__create();

/// Destroy action/Path message.
/**
 * It calls
 * path_following__action__Path_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_GetResult_Request__destroy(path_following__action__Path_GetResult_Request * msg);

/// Check for action/Path message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Request__are_equal(const path_following__action__Path_GetResult_Request * lhs, const path_following__action__Path_GetResult_Request * rhs);

/// Copy a action/Path message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Request__copy(
  const path_following__action__Path_GetResult_Request * input,
  path_following__action__Path_GetResult_Request * output);

/// Initialize array of action/Path messages.
/**
 * It allocates the memory for the number of elements and calls
 * path_following__action__Path_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Request__Sequence__init(path_following__action__Path_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_GetResult_Request__Sequence__fini(path_following__action__Path_GetResult_Request__Sequence * array);

/// Create array of action/Path messages.
/**
 * It allocates the memory for the array and calls
 * path_following__action__Path_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_GetResult_Request__Sequence *
path_following__action__Path_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_GetResult_Request__Sequence__destroy(path_following__action__Path_GetResult_Request__Sequence * array);

/// Check for action/Path message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Request__Sequence__are_equal(const path_following__action__Path_GetResult_Request__Sequence * lhs, const path_following__action__Path_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Path messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Request__Sequence__copy(
  const path_following__action__Path_GetResult_Request__Sequence * input,
  path_following__action__Path_GetResult_Request__Sequence * output);

/// Initialize action/Path message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * path_following__action__Path_GetResult_Response
 * )) before or use
 * path_following__action__Path_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Response__init(path_following__action__Path_GetResult_Response * msg);

/// Finalize action/Path message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_GetResult_Response__fini(path_following__action__Path_GetResult_Response * msg);

/// Create action/Path message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * path_following__action__Path_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_GetResult_Response *
path_following__action__Path_GetResult_Response__create();

/// Destroy action/Path message.
/**
 * It calls
 * path_following__action__Path_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_GetResult_Response__destroy(path_following__action__Path_GetResult_Response * msg);

/// Check for action/Path message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Response__are_equal(const path_following__action__Path_GetResult_Response * lhs, const path_following__action__Path_GetResult_Response * rhs);

/// Copy a action/Path message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Response__copy(
  const path_following__action__Path_GetResult_Response * input,
  path_following__action__Path_GetResult_Response * output);

/// Initialize array of action/Path messages.
/**
 * It allocates the memory for the number of elements and calls
 * path_following__action__Path_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Response__Sequence__init(path_following__action__Path_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_GetResult_Response__Sequence__fini(path_following__action__Path_GetResult_Response__Sequence * array);

/// Create array of action/Path messages.
/**
 * It allocates the memory for the array and calls
 * path_following__action__Path_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_GetResult_Response__Sequence *
path_following__action__Path_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_GetResult_Response__Sequence__destroy(path_following__action__Path_GetResult_Response__Sequence * array);

/// Check for action/Path message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Response__Sequence__are_equal(const path_following__action__Path_GetResult_Response__Sequence * lhs, const path_following__action__Path_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Path messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_GetResult_Response__Sequence__copy(
  const path_following__action__Path_GetResult_Response__Sequence * input,
  path_following__action__Path_GetResult_Response__Sequence * output);

/// Initialize action/Path message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * path_following__action__Path_FeedbackMessage
 * )) before or use
 * path_following__action__Path_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_FeedbackMessage__init(path_following__action__Path_FeedbackMessage * msg);

/// Finalize action/Path message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_FeedbackMessage__fini(path_following__action__Path_FeedbackMessage * msg);

/// Create action/Path message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * path_following__action__Path_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_FeedbackMessage *
path_following__action__Path_FeedbackMessage__create();

/// Destroy action/Path message.
/**
 * It calls
 * path_following__action__Path_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_FeedbackMessage__destroy(path_following__action__Path_FeedbackMessage * msg);

/// Check for action/Path message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_FeedbackMessage__are_equal(const path_following__action__Path_FeedbackMessage * lhs, const path_following__action__Path_FeedbackMessage * rhs);

/// Copy a action/Path message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_FeedbackMessage__copy(
  const path_following__action__Path_FeedbackMessage * input,
  path_following__action__Path_FeedbackMessage * output);

/// Initialize array of action/Path messages.
/**
 * It allocates the memory for the number of elements and calls
 * path_following__action__Path_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_FeedbackMessage__Sequence__init(path_following__action__Path_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_FeedbackMessage__Sequence__fini(path_following__action__Path_FeedbackMessage__Sequence * array);

/// Create array of action/Path messages.
/**
 * It allocates the memory for the array and calls
 * path_following__action__Path_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
path_following__action__Path_FeedbackMessage__Sequence *
path_following__action__Path_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Path messages.
/**
 * It calls
 * path_following__action__Path_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
void
path_following__action__Path_FeedbackMessage__Sequence__destroy(path_following__action__Path_FeedbackMessage__Sequence * array);

/// Check for action/Path message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_FeedbackMessage__Sequence__are_equal(const path_following__action__Path_FeedbackMessage__Sequence * lhs, const path_following__action__Path_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Path messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_path_following
bool
path_following__action__Path_FeedbackMessage__Sequence__copy(
  const path_following__action__Path_FeedbackMessage__Sequence * input,
  path_following__action__Path_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PATH_FOLLOWING__ACTION__DETAIL__PATH__FUNCTIONS_H_
