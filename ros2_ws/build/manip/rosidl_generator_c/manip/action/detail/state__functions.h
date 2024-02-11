// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from manip:action/State.idl
// generated code does not contain a copyright notice

#ifndef MANIP__ACTION__DETAIL__STATE__FUNCTIONS_H_
#define MANIP__ACTION__DETAIL__STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "manip/msg/rosidl_generator_c__visibility_control.h"

#include "manip/action/detail/state__struct.h"

/// Initialize action/State message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * manip__action__State_Goal
 * )) before or use
 * manip__action__State_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Goal__init(manip__action__State_Goal * msg);

/// Finalize action/State message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Goal__fini(manip__action__State_Goal * msg);

/// Create action/State message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * manip__action__State_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_Goal *
manip__action__State_Goal__create();

/// Destroy action/State message.
/**
 * It calls
 * manip__action__State_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Goal__destroy(manip__action__State_Goal * msg);

/// Check for action/State message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Goal__are_equal(const manip__action__State_Goal * lhs, const manip__action__State_Goal * rhs);

/// Copy a action/State message.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Goal__copy(
  const manip__action__State_Goal * input,
  manip__action__State_Goal * output);

/// Initialize array of action/State messages.
/**
 * It allocates the memory for the number of elements and calls
 * manip__action__State_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Goal__Sequence__init(manip__action__State_Goal__Sequence * array, size_t size);

/// Finalize array of action/State messages.
/**
 * It calls
 * manip__action__State_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Goal__Sequence__fini(manip__action__State_Goal__Sequence * array);

/// Create array of action/State messages.
/**
 * It allocates the memory for the array and calls
 * manip__action__State_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_Goal__Sequence *
manip__action__State_Goal__Sequence__create(size_t size);

/// Destroy array of action/State messages.
/**
 * It calls
 * manip__action__State_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Goal__Sequence__destroy(manip__action__State_Goal__Sequence * array);

/// Check for action/State message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Goal__Sequence__are_equal(const manip__action__State_Goal__Sequence * lhs, const manip__action__State_Goal__Sequence * rhs);

/// Copy an array of action/State messages.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Goal__Sequence__copy(
  const manip__action__State_Goal__Sequence * input,
  manip__action__State_Goal__Sequence * output);

/// Initialize action/State message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * manip__action__State_Result
 * )) before or use
 * manip__action__State_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Result__init(manip__action__State_Result * msg);

/// Finalize action/State message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Result__fini(manip__action__State_Result * msg);

/// Create action/State message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * manip__action__State_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_Result *
manip__action__State_Result__create();

/// Destroy action/State message.
/**
 * It calls
 * manip__action__State_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Result__destroy(manip__action__State_Result * msg);

/// Check for action/State message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Result__are_equal(const manip__action__State_Result * lhs, const manip__action__State_Result * rhs);

/// Copy a action/State message.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Result__copy(
  const manip__action__State_Result * input,
  manip__action__State_Result * output);

/// Initialize array of action/State messages.
/**
 * It allocates the memory for the number of elements and calls
 * manip__action__State_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Result__Sequence__init(manip__action__State_Result__Sequence * array, size_t size);

/// Finalize array of action/State messages.
/**
 * It calls
 * manip__action__State_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Result__Sequence__fini(manip__action__State_Result__Sequence * array);

/// Create array of action/State messages.
/**
 * It allocates the memory for the array and calls
 * manip__action__State_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_Result__Sequence *
manip__action__State_Result__Sequence__create(size_t size);

/// Destroy array of action/State messages.
/**
 * It calls
 * manip__action__State_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Result__Sequence__destroy(manip__action__State_Result__Sequence * array);

/// Check for action/State message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Result__Sequence__are_equal(const manip__action__State_Result__Sequence * lhs, const manip__action__State_Result__Sequence * rhs);

/// Copy an array of action/State messages.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Result__Sequence__copy(
  const manip__action__State_Result__Sequence * input,
  manip__action__State_Result__Sequence * output);

/// Initialize action/State message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * manip__action__State_Feedback
 * )) before or use
 * manip__action__State_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Feedback__init(manip__action__State_Feedback * msg);

/// Finalize action/State message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Feedback__fini(manip__action__State_Feedback * msg);

/// Create action/State message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * manip__action__State_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_Feedback *
manip__action__State_Feedback__create();

/// Destroy action/State message.
/**
 * It calls
 * manip__action__State_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Feedback__destroy(manip__action__State_Feedback * msg);

/// Check for action/State message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Feedback__are_equal(const manip__action__State_Feedback * lhs, const manip__action__State_Feedback * rhs);

/// Copy a action/State message.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Feedback__copy(
  const manip__action__State_Feedback * input,
  manip__action__State_Feedback * output);

/// Initialize array of action/State messages.
/**
 * It allocates the memory for the number of elements and calls
 * manip__action__State_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Feedback__Sequence__init(manip__action__State_Feedback__Sequence * array, size_t size);

/// Finalize array of action/State messages.
/**
 * It calls
 * manip__action__State_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Feedback__Sequence__fini(manip__action__State_Feedback__Sequence * array);

/// Create array of action/State messages.
/**
 * It allocates the memory for the array and calls
 * manip__action__State_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_Feedback__Sequence *
manip__action__State_Feedback__Sequence__create(size_t size);

/// Destroy array of action/State messages.
/**
 * It calls
 * manip__action__State_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_Feedback__Sequence__destroy(manip__action__State_Feedback__Sequence * array);

/// Check for action/State message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Feedback__Sequence__are_equal(const manip__action__State_Feedback__Sequence * lhs, const manip__action__State_Feedback__Sequence * rhs);

/// Copy an array of action/State messages.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_Feedback__Sequence__copy(
  const manip__action__State_Feedback__Sequence * input,
  manip__action__State_Feedback__Sequence * output);

/// Initialize action/State message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * manip__action__State_SendGoal_Request
 * )) before or use
 * manip__action__State_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Request__init(manip__action__State_SendGoal_Request * msg);

/// Finalize action/State message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_SendGoal_Request__fini(manip__action__State_SendGoal_Request * msg);

/// Create action/State message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * manip__action__State_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_SendGoal_Request *
manip__action__State_SendGoal_Request__create();

/// Destroy action/State message.
/**
 * It calls
 * manip__action__State_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_SendGoal_Request__destroy(manip__action__State_SendGoal_Request * msg);

/// Check for action/State message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Request__are_equal(const manip__action__State_SendGoal_Request * lhs, const manip__action__State_SendGoal_Request * rhs);

/// Copy a action/State message.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Request__copy(
  const manip__action__State_SendGoal_Request * input,
  manip__action__State_SendGoal_Request * output);

/// Initialize array of action/State messages.
/**
 * It allocates the memory for the number of elements and calls
 * manip__action__State_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Request__Sequence__init(manip__action__State_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/State messages.
/**
 * It calls
 * manip__action__State_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_SendGoal_Request__Sequence__fini(manip__action__State_SendGoal_Request__Sequence * array);

/// Create array of action/State messages.
/**
 * It allocates the memory for the array and calls
 * manip__action__State_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_SendGoal_Request__Sequence *
manip__action__State_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/State messages.
/**
 * It calls
 * manip__action__State_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_SendGoal_Request__Sequence__destroy(manip__action__State_SendGoal_Request__Sequence * array);

/// Check for action/State message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Request__Sequence__are_equal(const manip__action__State_SendGoal_Request__Sequence * lhs, const manip__action__State_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/State messages.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Request__Sequence__copy(
  const manip__action__State_SendGoal_Request__Sequence * input,
  manip__action__State_SendGoal_Request__Sequence * output);

/// Initialize action/State message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * manip__action__State_SendGoal_Response
 * )) before or use
 * manip__action__State_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Response__init(manip__action__State_SendGoal_Response * msg);

/// Finalize action/State message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_SendGoal_Response__fini(manip__action__State_SendGoal_Response * msg);

/// Create action/State message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * manip__action__State_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_SendGoal_Response *
manip__action__State_SendGoal_Response__create();

/// Destroy action/State message.
/**
 * It calls
 * manip__action__State_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_SendGoal_Response__destroy(manip__action__State_SendGoal_Response * msg);

/// Check for action/State message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Response__are_equal(const manip__action__State_SendGoal_Response * lhs, const manip__action__State_SendGoal_Response * rhs);

/// Copy a action/State message.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Response__copy(
  const manip__action__State_SendGoal_Response * input,
  manip__action__State_SendGoal_Response * output);

/// Initialize array of action/State messages.
/**
 * It allocates the memory for the number of elements and calls
 * manip__action__State_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Response__Sequence__init(manip__action__State_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/State messages.
/**
 * It calls
 * manip__action__State_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_SendGoal_Response__Sequence__fini(manip__action__State_SendGoal_Response__Sequence * array);

/// Create array of action/State messages.
/**
 * It allocates the memory for the array and calls
 * manip__action__State_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_SendGoal_Response__Sequence *
manip__action__State_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/State messages.
/**
 * It calls
 * manip__action__State_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_SendGoal_Response__Sequence__destroy(manip__action__State_SendGoal_Response__Sequence * array);

/// Check for action/State message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Response__Sequence__are_equal(const manip__action__State_SendGoal_Response__Sequence * lhs, const manip__action__State_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/State messages.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_SendGoal_Response__Sequence__copy(
  const manip__action__State_SendGoal_Response__Sequence * input,
  manip__action__State_SendGoal_Response__Sequence * output);

/// Initialize action/State message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * manip__action__State_GetResult_Request
 * )) before or use
 * manip__action__State_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Request__init(manip__action__State_GetResult_Request * msg);

/// Finalize action/State message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_GetResult_Request__fini(manip__action__State_GetResult_Request * msg);

/// Create action/State message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * manip__action__State_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_GetResult_Request *
manip__action__State_GetResult_Request__create();

/// Destroy action/State message.
/**
 * It calls
 * manip__action__State_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_GetResult_Request__destroy(manip__action__State_GetResult_Request * msg);

/// Check for action/State message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Request__are_equal(const manip__action__State_GetResult_Request * lhs, const manip__action__State_GetResult_Request * rhs);

/// Copy a action/State message.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Request__copy(
  const manip__action__State_GetResult_Request * input,
  manip__action__State_GetResult_Request * output);

/// Initialize array of action/State messages.
/**
 * It allocates the memory for the number of elements and calls
 * manip__action__State_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Request__Sequence__init(manip__action__State_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/State messages.
/**
 * It calls
 * manip__action__State_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_GetResult_Request__Sequence__fini(manip__action__State_GetResult_Request__Sequence * array);

/// Create array of action/State messages.
/**
 * It allocates the memory for the array and calls
 * manip__action__State_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_GetResult_Request__Sequence *
manip__action__State_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/State messages.
/**
 * It calls
 * manip__action__State_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_GetResult_Request__Sequence__destroy(manip__action__State_GetResult_Request__Sequence * array);

/// Check for action/State message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Request__Sequence__are_equal(const manip__action__State_GetResult_Request__Sequence * lhs, const manip__action__State_GetResult_Request__Sequence * rhs);

/// Copy an array of action/State messages.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Request__Sequence__copy(
  const manip__action__State_GetResult_Request__Sequence * input,
  manip__action__State_GetResult_Request__Sequence * output);

/// Initialize action/State message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * manip__action__State_GetResult_Response
 * )) before or use
 * manip__action__State_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Response__init(manip__action__State_GetResult_Response * msg);

/// Finalize action/State message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_GetResult_Response__fini(manip__action__State_GetResult_Response * msg);

/// Create action/State message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * manip__action__State_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_GetResult_Response *
manip__action__State_GetResult_Response__create();

/// Destroy action/State message.
/**
 * It calls
 * manip__action__State_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_GetResult_Response__destroy(manip__action__State_GetResult_Response * msg);

/// Check for action/State message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Response__are_equal(const manip__action__State_GetResult_Response * lhs, const manip__action__State_GetResult_Response * rhs);

/// Copy a action/State message.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Response__copy(
  const manip__action__State_GetResult_Response * input,
  manip__action__State_GetResult_Response * output);

/// Initialize array of action/State messages.
/**
 * It allocates the memory for the number of elements and calls
 * manip__action__State_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Response__Sequence__init(manip__action__State_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/State messages.
/**
 * It calls
 * manip__action__State_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_GetResult_Response__Sequence__fini(manip__action__State_GetResult_Response__Sequence * array);

/// Create array of action/State messages.
/**
 * It allocates the memory for the array and calls
 * manip__action__State_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_GetResult_Response__Sequence *
manip__action__State_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/State messages.
/**
 * It calls
 * manip__action__State_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_GetResult_Response__Sequence__destroy(manip__action__State_GetResult_Response__Sequence * array);

/// Check for action/State message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Response__Sequence__are_equal(const manip__action__State_GetResult_Response__Sequence * lhs, const manip__action__State_GetResult_Response__Sequence * rhs);

/// Copy an array of action/State messages.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_GetResult_Response__Sequence__copy(
  const manip__action__State_GetResult_Response__Sequence * input,
  manip__action__State_GetResult_Response__Sequence * output);

/// Initialize action/State message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * manip__action__State_FeedbackMessage
 * )) before or use
 * manip__action__State_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_FeedbackMessage__init(manip__action__State_FeedbackMessage * msg);

/// Finalize action/State message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_FeedbackMessage__fini(manip__action__State_FeedbackMessage * msg);

/// Create action/State message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * manip__action__State_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_FeedbackMessage *
manip__action__State_FeedbackMessage__create();

/// Destroy action/State message.
/**
 * It calls
 * manip__action__State_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_FeedbackMessage__destroy(manip__action__State_FeedbackMessage * msg);

/// Check for action/State message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_FeedbackMessage__are_equal(const manip__action__State_FeedbackMessage * lhs, const manip__action__State_FeedbackMessage * rhs);

/// Copy a action/State message.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_FeedbackMessage__copy(
  const manip__action__State_FeedbackMessage * input,
  manip__action__State_FeedbackMessage * output);

/// Initialize array of action/State messages.
/**
 * It allocates the memory for the number of elements and calls
 * manip__action__State_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_FeedbackMessage__Sequence__init(manip__action__State_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/State messages.
/**
 * It calls
 * manip__action__State_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_FeedbackMessage__Sequence__fini(manip__action__State_FeedbackMessage__Sequence * array);

/// Create array of action/State messages.
/**
 * It allocates the memory for the array and calls
 * manip__action__State_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
manip__action__State_FeedbackMessage__Sequence *
manip__action__State_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/State messages.
/**
 * It calls
 * manip__action__State_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
void
manip__action__State_FeedbackMessage__Sequence__destroy(manip__action__State_FeedbackMessage__Sequence * array);

/// Check for action/State message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_FeedbackMessage__Sequence__are_equal(const manip__action__State_FeedbackMessage__Sequence * lhs, const manip__action__State_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/State messages.
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
ROSIDL_GENERATOR_C_PUBLIC_manip
bool
manip__action__State_FeedbackMessage__Sequence__copy(
  const manip__action__State_FeedbackMessage__Sequence * input,
  manip__action__State_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MANIP__ACTION__DETAIL__STATE__FUNCTIONS_H_
