// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hololens_msgs:msg/AIData.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__STRUCT_H_
#define HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'scene_names'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/AIData in the package hololens_msgs.
typedef struct hololens_msgs__msg__AIData
{
  rosidl_runtime_c__String__Sequence scene_names;
} hololens_msgs__msg__AIData;

// Struct for a sequence of hololens_msgs__msg__AIData.
typedef struct hololens_msgs__msg__AIData__Sequence
{
  hololens_msgs__msg__AIData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hololens_msgs__msg__AIData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__STRUCT_H_
