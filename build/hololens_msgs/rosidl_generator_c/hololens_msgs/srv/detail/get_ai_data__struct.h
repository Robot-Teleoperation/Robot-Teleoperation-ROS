// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hololens_msgs:srv/GetAIData.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__STRUCT_H_
#define HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetAIData in the package hololens_msgs.
typedef struct hololens_msgs__srv__GetAIData_Request
{
  int64_t point_x;
  int64_t point_y;
} hololens_msgs__srv__GetAIData_Request;

// Struct for a sequence of hololens_msgs__srv__GetAIData_Request.
typedef struct hololens_msgs__srv__GetAIData_Request__Sequence
{
  hololens_msgs__srv__GetAIData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hololens_msgs__srv__GetAIData_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'scene_names'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetAIData in the package hololens_msgs.
typedef struct hololens_msgs__srv__GetAIData_Response
{
  rosidl_runtime_c__String__Sequence scene_names;
} hololens_msgs__srv__GetAIData_Response;

// Struct for a sequence of hololens_msgs__srv__GetAIData_Response.
typedef struct hololens_msgs__srv__GetAIData_Response__Sequence
{
  hololens_msgs__srv__GetAIData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hololens_msgs__srv__GetAIData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__STRUCT_H_
