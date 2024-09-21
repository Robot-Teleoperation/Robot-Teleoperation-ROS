// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hololens_msgs:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__MSG__DETAIL__IMAGE__STRUCT_H_
#define HOLOLENS_MSGS__MSG__DETAIL__IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Image in the package hololens_msgs.
typedef struct hololens_msgs__msg__Image
{
  rosidl_runtime_c__uint8__Sequence data;
  uint32_t width;
  uint32_t height;
} hololens_msgs__msg__Image;

// Struct for a sequence of hololens_msgs__msg__Image.
typedef struct hololens_msgs__msg__Image__Sequence
{
  hololens_msgs__msg__Image * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hololens_msgs__msg__Image__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOLENS_MSGS__MSG__DETAIL__IMAGE__STRUCT_H_
