// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hololens_msgs:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__MSG__DETAIL__IMAGE__FUNCTIONS_H_
#define HOLOLENS_MSGS__MSG__DETAIL__IMAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hololens_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hololens_msgs/msg/detail/image__struct.h"

/// Initialize msg/Image message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hololens_msgs__msg__Image
 * )) before or use
 * hololens_msgs__msg__Image__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__msg__Image__init(hololens_msgs__msg__Image * msg);

/// Finalize msg/Image message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__msg__Image__fini(hololens_msgs__msg__Image * msg);

/// Create msg/Image message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hololens_msgs__msg__Image__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
hololens_msgs__msg__Image *
hololens_msgs__msg__Image__create();

/// Destroy msg/Image message.
/**
 * It calls
 * hololens_msgs__msg__Image__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__msg__Image__destroy(hololens_msgs__msg__Image * msg);

/// Check for msg/Image message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__msg__Image__are_equal(const hololens_msgs__msg__Image * lhs, const hololens_msgs__msg__Image * rhs);

/// Copy a msg/Image message.
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
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__msg__Image__copy(
  const hololens_msgs__msg__Image * input,
  hololens_msgs__msg__Image * output);

/// Initialize array of msg/Image messages.
/**
 * It allocates the memory for the number of elements and calls
 * hololens_msgs__msg__Image__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__msg__Image__Sequence__init(hololens_msgs__msg__Image__Sequence * array, size_t size);

/// Finalize array of msg/Image messages.
/**
 * It calls
 * hololens_msgs__msg__Image__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__msg__Image__Sequence__fini(hololens_msgs__msg__Image__Sequence * array);

/// Create array of msg/Image messages.
/**
 * It allocates the memory for the array and calls
 * hololens_msgs__msg__Image__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
hololens_msgs__msg__Image__Sequence *
hololens_msgs__msg__Image__Sequence__create(size_t size);

/// Destroy array of msg/Image messages.
/**
 * It calls
 * hololens_msgs__msg__Image__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__msg__Image__Sequence__destroy(hololens_msgs__msg__Image__Sequence * array);

/// Check for msg/Image message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__msg__Image__Sequence__are_equal(const hololens_msgs__msg__Image__Sequence * lhs, const hololens_msgs__msg__Image__Sequence * rhs);

/// Copy an array of msg/Image messages.
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
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__msg__Image__Sequence__copy(
  const hololens_msgs__msg__Image__Sequence * input,
  hololens_msgs__msg__Image__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HOLOLENS_MSGS__MSG__DETAIL__IMAGE__FUNCTIONS_H_
