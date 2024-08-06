// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hololens_msgs:srv/GetAIData.idl
// generated code does not contain a copyright notice
#include "hololens_msgs/srv/detail/get_ai_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
hololens_msgs__srv__GetAIData_Request__init(hololens_msgs__srv__GetAIData_Request * msg)
{
  if (!msg) {
    return false;
  }
  // req
  return true;
}

void
hololens_msgs__srv__GetAIData_Request__fini(hololens_msgs__srv__GetAIData_Request * msg)
{
  if (!msg) {
    return;
  }
  // req
}

bool
hololens_msgs__srv__GetAIData_Request__are_equal(const hololens_msgs__srv__GetAIData_Request * lhs, const hololens_msgs__srv__GetAIData_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // req
  if (lhs->req != rhs->req) {
    return false;
  }
  return true;
}

bool
hololens_msgs__srv__GetAIData_Request__copy(
  const hololens_msgs__srv__GetAIData_Request * input,
  hololens_msgs__srv__GetAIData_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // req
  output->req = input->req;
  return true;
}

hololens_msgs__srv__GetAIData_Request *
hololens_msgs__srv__GetAIData_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hololens_msgs__srv__GetAIData_Request * msg = (hololens_msgs__srv__GetAIData_Request *)allocator.allocate(sizeof(hololens_msgs__srv__GetAIData_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hololens_msgs__srv__GetAIData_Request));
  bool success = hololens_msgs__srv__GetAIData_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hololens_msgs__srv__GetAIData_Request__destroy(hololens_msgs__srv__GetAIData_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hololens_msgs__srv__GetAIData_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hololens_msgs__srv__GetAIData_Request__Sequence__init(hololens_msgs__srv__GetAIData_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hololens_msgs__srv__GetAIData_Request * data = NULL;

  if (size) {
    data = (hololens_msgs__srv__GetAIData_Request *)allocator.zero_allocate(size, sizeof(hololens_msgs__srv__GetAIData_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hololens_msgs__srv__GetAIData_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hololens_msgs__srv__GetAIData_Request__fini(&data[i - 1]);
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
hololens_msgs__srv__GetAIData_Request__Sequence__fini(hololens_msgs__srv__GetAIData_Request__Sequence * array)
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
      hololens_msgs__srv__GetAIData_Request__fini(&array->data[i]);
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

hololens_msgs__srv__GetAIData_Request__Sequence *
hololens_msgs__srv__GetAIData_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hololens_msgs__srv__GetAIData_Request__Sequence * array = (hololens_msgs__srv__GetAIData_Request__Sequence *)allocator.allocate(sizeof(hololens_msgs__srv__GetAIData_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hololens_msgs__srv__GetAIData_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hololens_msgs__srv__GetAIData_Request__Sequence__destroy(hololens_msgs__srv__GetAIData_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hololens_msgs__srv__GetAIData_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hololens_msgs__srv__GetAIData_Request__Sequence__are_equal(const hololens_msgs__srv__GetAIData_Request__Sequence * lhs, const hololens_msgs__srv__GetAIData_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hololens_msgs__srv__GetAIData_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hololens_msgs__srv__GetAIData_Request__Sequence__copy(
  const hololens_msgs__srv__GetAIData_Request__Sequence * input,
  hololens_msgs__srv__GetAIData_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hololens_msgs__srv__GetAIData_Request);
    hololens_msgs__srv__GetAIData_Request * data =
      (hololens_msgs__srv__GetAIData_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hololens_msgs__srv__GetAIData_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hololens_msgs__srv__GetAIData_Request__fini(&data[i]);
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
    if (!hololens_msgs__srv__GetAIData_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `class_name`
// Member `instructions`
// Member `model`
#include "rosidl_runtime_c/string_functions.h"

bool
hololens_msgs__srv__GetAIData_Response__init(hololens_msgs__srv__GetAIData_Response * msg)
{
  if (!msg) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    hololens_msgs__srv__GetAIData_Response__fini(msg);
    return false;
  }
  // instructions
  if (!rosidl_runtime_c__String__init(&msg->instructions)) {
    hololens_msgs__srv__GetAIData_Response__fini(msg);
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    hololens_msgs__srv__GetAIData_Response__fini(msg);
    return false;
  }
  return true;
}

void
hololens_msgs__srv__GetAIData_Response__fini(hololens_msgs__srv__GetAIData_Response * msg)
{
  if (!msg) {
    return;
  }
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // instructions
  rosidl_runtime_c__String__fini(&msg->instructions);
  // model
  rosidl_runtime_c__String__fini(&msg->model);
}

bool
hololens_msgs__srv__GetAIData_Response__are_equal(const hololens_msgs__srv__GetAIData_Response * lhs, const hololens_msgs__srv__GetAIData_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // instructions
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->instructions), &(rhs->instructions)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  return true;
}

bool
hololens_msgs__srv__GetAIData_Response__copy(
  const hololens_msgs__srv__GetAIData_Response * input,
  hololens_msgs__srv__GetAIData_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // instructions
  if (!rosidl_runtime_c__String__copy(
      &(input->instructions), &(output->instructions)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  return true;
}

hololens_msgs__srv__GetAIData_Response *
hololens_msgs__srv__GetAIData_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hololens_msgs__srv__GetAIData_Response * msg = (hololens_msgs__srv__GetAIData_Response *)allocator.allocate(sizeof(hololens_msgs__srv__GetAIData_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hololens_msgs__srv__GetAIData_Response));
  bool success = hololens_msgs__srv__GetAIData_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hololens_msgs__srv__GetAIData_Response__destroy(hololens_msgs__srv__GetAIData_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hololens_msgs__srv__GetAIData_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hololens_msgs__srv__GetAIData_Response__Sequence__init(hololens_msgs__srv__GetAIData_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hololens_msgs__srv__GetAIData_Response * data = NULL;

  if (size) {
    data = (hololens_msgs__srv__GetAIData_Response *)allocator.zero_allocate(size, sizeof(hololens_msgs__srv__GetAIData_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hololens_msgs__srv__GetAIData_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hololens_msgs__srv__GetAIData_Response__fini(&data[i - 1]);
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
hololens_msgs__srv__GetAIData_Response__Sequence__fini(hololens_msgs__srv__GetAIData_Response__Sequence * array)
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
      hololens_msgs__srv__GetAIData_Response__fini(&array->data[i]);
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

hololens_msgs__srv__GetAIData_Response__Sequence *
hololens_msgs__srv__GetAIData_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hololens_msgs__srv__GetAIData_Response__Sequence * array = (hololens_msgs__srv__GetAIData_Response__Sequence *)allocator.allocate(sizeof(hololens_msgs__srv__GetAIData_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hololens_msgs__srv__GetAIData_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hololens_msgs__srv__GetAIData_Response__Sequence__destroy(hololens_msgs__srv__GetAIData_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hololens_msgs__srv__GetAIData_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hololens_msgs__srv__GetAIData_Response__Sequence__are_equal(const hololens_msgs__srv__GetAIData_Response__Sequence * lhs, const hololens_msgs__srv__GetAIData_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hololens_msgs__srv__GetAIData_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hololens_msgs__srv__GetAIData_Response__Sequence__copy(
  const hololens_msgs__srv__GetAIData_Response__Sequence * input,
  hololens_msgs__srv__GetAIData_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hololens_msgs__srv__GetAIData_Response);
    hololens_msgs__srv__GetAIData_Response * data =
      (hololens_msgs__srv__GetAIData_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hololens_msgs__srv__GetAIData_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hololens_msgs__srv__GetAIData_Response__fini(&data[i]);
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
    if (!hololens_msgs__srv__GetAIData_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
