// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hololens_msgs:msg/Image.idl
// generated code does not contain a copyright notice
#include "hololens_msgs/msg/detail/image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hololens_msgs__msg__Image__init(hololens_msgs__msg__Image * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    hololens_msgs__msg__Image__fini(msg);
    return false;
  }
  return true;
}

void
hololens_msgs__msg__Image__fini(hololens_msgs__msg__Image * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
hololens_msgs__msg__Image__are_equal(const hololens_msgs__msg__Image * lhs, const hololens_msgs__msg__Image * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
hololens_msgs__msg__Image__copy(
  const hololens_msgs__msg__Image * input,
  hololens_msgs__msg__Image * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

hololens_msgs__msg__Image *
hololens_msgs__msg__Image__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hololens_msgs__msg__Image * msg = (hololens_msgs__msg__Image *)allocator.allocate(sizeof(hololens_msgs__msg__Image), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hololens_msgs__msg__Image));
  bool success = hololens_msgs__msg__Image__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hololens_msgs__msg__Image__destroy(hololens_msgs__msg__Image * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hololens_msgs__msg__Image__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hololens_msgs__msg__Image__Sequence__init(hololens_msgs__msg__Image__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hololens_msgs__msg__Image * data = NULL;

  if (size) {
    data = (hololens_msgs__msg__Image *)allocator.zero_allocate(size, sizeof(hololens_msgs__msg__Image), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hololens_msgs__msg__Image__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hololens_msgs__msg__Image__fini(&data[i - 1]);
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
hololens_msgs__msg__Image__Sequence__fini(hololens_msgs__msg__Image__Sequence * array)
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
      hololens_msgs__msg__Image__fini(&array->data[i]);
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

hololens_msgs__msg__Image__Sequence *
hololens_msgs__msg__Image__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hololens_msgs__msg__Image__Sequence * array = (hololens_msgs__msg__Image__Sequence *)allocator.allocate(sizeof(hololens_msgs__msg__Image__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hololens_msgs__msg__Image__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hololens_msgs__msg__Image__Sequence__destroy(hololens_msgs__msg__Image__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hololens_msgs__msg__Image__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hololens_msgs__msg__Image__Sequence__are_equal(const hololens_msgs__msg__Image__Sequence * lhs, const hololens_msgs__msg__Image__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hololens_msgs__msg__Image__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hololens_msgs__msg__Image__Sequence__copy(
  const hololens_msgs__msg__Image__Sequence * input,
  hololens_msgs__msg__Image__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hololens_msgs__msg__Image);
    hololens_msgs__msg__Image * data =
      (hololens_msgs__msg__Image *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hololens_msgs__msg__Image__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hololens_msgs__msg__Image__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hololens_msgs__msg__Image__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
