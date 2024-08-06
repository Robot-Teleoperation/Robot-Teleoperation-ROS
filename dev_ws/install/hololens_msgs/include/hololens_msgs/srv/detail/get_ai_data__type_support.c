// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hololens_msgs:srv/GetAIData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hololens_msgs/srv/detail/get_ai_data__rosidl_typesupport_introspection_c.h"
#include "hololens_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hololens_msgs/srv/detail/get_ai_data__functions.h"
#include "hololens_msgs/srv/detail/get_ai_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hololens_msgs__srv__GetAIData_Request__init(message_memory);
}

void GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_fini_function(void * message_memory)
{
  hololens_msgs__srv__GetAIData_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_message_member_array[1] = {
  {
    "req",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hololens_msgs__srv__GetAIData_Request, req),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_message_members = {
  "hololens_msgs__srv",  // message namespace
  "GetAIData_Request",  // message name
  1,  // number of fields
  sizeof(hololens_msgs__srv__GetAIData_Request),
  GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_message_member_array,  // message members
  GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_message_type_support_handle = {
  0,
  &GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hololens_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hololens_msgs, srv, GetAIData_Request)() {
  if (!GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_message_type_support_handle.typesupport_identifier) {
    GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetAIData_Request__rosidl_typesupport_introspection_c__GetAIData_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hololens_msgs/srv/detail/get_ai_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hololens_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hololens_msgs/srv/detail/get_ai_data__functions.h"
// already included above
// #include "hololens_msgs/srv/detail/get_ai_data__struct.h"


// Include directives for member types
// Member `class_name`
// Member `instructions`
// Member `model`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hololens_msgs__srv__GetAIData_Response__init(message_memory);
}

void GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_fini_function(void * message_memory)
{
  hololens_msgs__srv__GetAIData_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_message_member_array[3] = {
  {
    "class_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hololens_msgs__srv__GetAIData_Response, class_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "instructions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hololens_msgs__srv__GetAIData_Response, instructions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hololens_msgs__srv__GetAIData_Response, model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_message_members = {
  "hololens_msgs__srv",  // message namespace
  "GetAIData_Response",  // message name
  3,  // number of fields
  sizeof(hololens_msgs__srv__GetAIData_Response),
  GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_message_member_array,  // message members
  GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_message_type_support_handle = {
  0,
  &GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hololens_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hololens_msgs, srv, GetAIData_Response)() {
  if (!GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_message_type_support_handle.typesupport_identifier) {
    GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetAIData_Response__rosidl_typesupport_introspection_c__GetAIData_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hololens_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hololens_msgs/srv/detail/get_ai_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hololens_msgs__srv__detail__get_ai_data__rosidl_typesupport_introspection_c__GetAIData_service_members = {
  "hololens_msgs__srv",  // service namespace
  "GetAIData",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hololens_msgs__srv__detail__get_ai_data__rosidl_typesupport_introspection_c__GetAIData_Request_message_type_support_handle,
  NULL  // response message
  // hololens_msgs__srv__detail__get_ai_data__rosidl_typesupport_introspection_c__GetAIData_Response_message_type_support_handle
};

static rosidl_service_type_support_t hololens_msgs__srv__detail__get_ai_data__rosidl_typesupport_introspection_c__GetAIData_service_type_support_handle = {
  0,
  &hololens_msgs__srv__detail__get_ai_data__rosidl_typesupport_introspection_c__GetAIData_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hololens_msgs, srv, GetAIData_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hololens_msgs, srv, GetAIData_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hololens_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hololens_msgs, srv, GetAIData)() {
  if (!hololens_msgs__srv__detail__get_ai_data__rosidl_typesupport_introspection_c__GetAIData_service_type_support_handle.typesupport_identifier) {
    hololens_msgs__srv__detail__get_ai_data__rosidl_typesupport_introspection_c__GetAIData_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hololens_msgs__srv__detail__get_ai_data__rosidl_typesupport_introspection_c__GetAIData_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hololens_msgs, srv, GetAIData_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hololens_msgs, srv, GetAIData_Response)()->data;
  }

  return &hololens_msgs__srv__detail__get_ai_data__rosidl_typesupport_introspection_c__GetAIData_service_type_support_handle;
}
