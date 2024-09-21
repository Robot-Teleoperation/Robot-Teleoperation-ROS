// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hololens_msgs:msg/AIData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hololens_msgs/msg/detail/ai_data__rosidl_typesupport_introspection_c.h"
#include "hololens_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hololens_msgs/msg/detail/ai_data__functions.h"
#include "hololens_msgs/msg/detail/ai_data__struct.h"


// Include directives for member types
// Member `scene_names`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AIData__rosidl_typesupport_introspection_c__AIData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hololens_msgs__msg__AIData__init(message_memory);
}

void AIData__rosidl_typesupport_introspection_c__AIData_fini_function(void * message_memory)
{
  hololens_msgs__msg__AIData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AIData__rosidl_typesupport_introspection_c__AIData_message_member_array[1] = {
  {
    "scene_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hololens_msgs__msg__AIData, scene_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AIData__rosidl_typesupport_introspection_c__AIData_message_members = {
  "hololens_msgs__msg",  // message namespace
  "AIData",  // message name
  1,  // number of fields
  sizeof(hololens_msgs__msg__AIData),
  AIData__rosidl_typesupport_introspection_c__AIData_message_member_array,  // message members
  AIData__rosidl_typesupport_introspection_c__AIData_init_function,  // function to initialize message memory (memory has to be allocated)
  AIData__rosidl_typesupport_introspection_c__AIData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AIData__rosidl_typesupport_introspection_c__AIData_message_type_support_handle = {
  0,
  &AIData__rosidl_typesupport_introspection_c__AIData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hololens_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hololens_msgs, msg, AIData)() {
  if (!AIData__rosidl_typesupport_introspection_c__AIData_message_type_support_handle.typesupport_identifier) {
    AIData__rosidl_typesupport_introspection_c__AIData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AIData__rosidl_typesupport_introspection_c__AIData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
