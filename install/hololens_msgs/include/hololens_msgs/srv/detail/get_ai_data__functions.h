// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hololens_msgs:srv/GetAIData.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__FUNCTIONS_H_
#define HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hololens_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hololens_msgs/srv/detail/get_ai_data__struct.h"

/// Initialize srv/GetAIData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hololens_msgs__srv__GetAIData_Request
 * )) before or use
 * hololens_msgs__srv__GetAIData_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__srv__GetAIData_Request__init(hololens_msgs__srv__GetAIData_Request * msg);

/// Finalize srv/GetAIData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__srv__GetAIData_Request__fini(hololens_msgs__srv__GetAIData_Request * msg);

/// Create srv/GetAIData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hololens_msgs__srv__GetAIData_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
hololens_msgs__srv__GetAIData_Request *
hololens_msgs__srv__GetAIData_Request__create();

/// Destroy srv/GetAIData message.
/**
 * It calls
 * hololens_msgs__srv__GetAIData_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__srv__GetAIData_Request__destroy(hololens_msgs__srv__GetAIData_Request * msg);

/// Check for srv/GetAIData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__srv__GetAIData_Request__are_equal(const hololens_msgs__srv__GetAIData_Request * lhs, const hololens_msgs__srv__GetAIData_Request * rhs);

/// Copy a srv/GetAIData message.
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
hololens_msgs__srv__GetAIData_Request__copy(
  const hololens_msgs__srv__GetAIData_Request * input,
  hololens_msgs__srv__GetAIData_Request * output);

/// Initialize array of srv/GetAIData messages.
/**
 * It allocates the memory for the number of elements and calls
 * hololens_msgs__srv__GetAIData_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__srv__GetAIData_Request__Sequence__init(hololens_msgs__srv__GetAIData_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetAIData messages.
/**
 * It calls
 * hololens_msgs__srv__GetAIData_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__srv__GetAIData_Request__Sequence__fini(hololens_msgs__srv__GetAIData_Request__Sequence * array);

/// Create array of srv/GetAIData messages.
/**
 * It allocates the memory for the array and calls
 * hololens_msgs__srv__GetAIData_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
hololens_msgs__srv__GetAIData_Request__Sequence *
hololens_msgs__srv__GetAIData_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetAIData messages.
/**
 * It calls
 * hololens_msgs__srv__GetAIData_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__srv__GetAIData_Request__Sequence__destroy(hololens_msgs__srv__GetAIData_Request__Sequence * array);

/// Check for srv/GetAIData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__srv__GetAIData_Request__Sequence__are_equal(const hololens_msgs__srv__GetAIData_Request__Sequence * lhs, const hololens_msgs__srv__GetAIData_Request__Sequence * rhs);

/// Copy an array of srv/GetAIData messages.
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
hololens_msgs__srv__GetAIData_Request__Sequence__copy(
  const hololens_msgs__srv__GetAIData_Request__Sequence * input,
  hololens_msgs__srv__GetAIData_Request__Sequence * output);

/// Initialize srv/GetAIData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hololens_msgs__srv__GetAIData_Response
 * )) before or use
 * hololens_msgs__srv__GetAIData_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__srv__GetAIData_Response__init(hololens_msgs__srv__GetAIData_Response * msg);

/// Finalize srv/GetAIData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__srv__GetAIData_Response__fini(hololens_msgs__srv__GetAIData_Response * msg);

/// Create srv/GetAIData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hololens_msgs__srv__GetAIData_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
hololens_msgs__srv__GetAIData_Response *
hololens_msgs__srv__GetAIData_Response__create();

/// Destroy srv/GetAIData message.
/**
 * It calls
 * hololens_msgs__srv__GetAIData_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__srv__GetAIData_Response__destroy(hololens_msgs__srv__GetAIData_Response * msg);

/// Check for srv/GetAIData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__srv__GetAIData_Response__are_equal(const hololens_msgs__srv__GetAIData_Response * lhs, const hololens_msgs__srv__GetAIData_Response * rhs);

/// Copy a srv/GetAIData message.
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
hololens_msgs__srv__GetAIData_Response__copy(
  const hololens_msgs__srv__GetAIData_Response * input,
  hololens_msgs__srv__GetAIData_Response * output);

/// Initialize array of srv/GetAIData messages.
/**
 * It allocates the memory for the number of elements and calls
 * hololens_msgs__srv__GetAIData_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__srv__GetAIData_Response__Sequence__init(hololens_msgs__srv__GetAIData_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetAIData messages.
/**
 * It calls
 * hololens_msgs__srv__GetAIData_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__srv__GetAIData_Response__Sequence__fini(hololens_msgs__srv__GetAIData_Response__Sequence * array);

/// Create array of srv/GetAIData messages.
/**
 * It allocates the memory for the array and calls
 * hololens_msgs__srv__GetAIData_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
hololens_msgs__srv__GetAIData_Response__Sequence *
hololens_msgs__srv__GetAIData_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetAIData messages.
/**
 * It calls
 * hololens_msgs__srv__GetAIData_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
void
hololens_msgs__srv__GetAIData_Response__Sequence__destroy(hololens_msgs__srv__GetAIData_Response__Sequence * array);

/// Check for srv/GetAIData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hololens_msgs
bool
hololens_msgs__srv__GetAIData_Response__Sequence__are_equal(const hololens_msgs__srv__GetAIData_Response__Sequence * lhs, const hololens_msgs__srv__GetAIData_Response__Sequence * rhs);

/// Copy an array of srv/GetAIData messages.
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
hololens_msgs__srv__GetAIData_Response__Sequence__copy(
  const hololens_msgs__srv__GetAIData_Response__Sequence * input,
  hololens_msgs__srv__GetAIData_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__FUNCTIONS_H_
