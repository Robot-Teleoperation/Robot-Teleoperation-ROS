// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hololens_msgs:srv/GetAIData.idl
// generated code does not contain a copyright notice
#include "hololens_msgs/srv/detail/get_ai_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hololens_msgs/srv/detail/get_ai_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hololens_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hololens_msgs
cdr_serialize(
  const hololens_msgs::srv::GetAIData_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: point_x
  cdr << ros_message.point_x;
  // Member: point_y
  cdr << ros_message.point_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hololens_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hololens_msgs::srv::GetAIData_Request & ros_message)
{
  // Member: point_x
  cdr >> ros_message.point_x;

  // Member: point_y
  cdr >> ros_message.point_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hololens_msgs
get_serialized_size(
  const hololens_msgs::srv::GetAIData_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: point_x
  {
    size_t item_size = sizeof(ros_message.point_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: point_y
  {
    size_t item_size = sizeof(ros_message.point_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hololens_msgs
max_serialized_size_GetAIData_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: point_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: point_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GetAIData_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hololens_msgs::srv::GetAIData_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetAIData_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hololens_msgs::srv::GetAIData_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetAIData_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hololens_msgs::srv::GetAIData_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetAIData_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetAIData_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetAIData_Request__callbacks = {
  "hololens_msgs::srv",
  "GetAIData_Request",
  _GetAIData_Request__cdr_serialize,
  _GetAIData_Request__cdr_deserialize,
  _GetAIData_Request__get_serialized_size,
  _GetAIData_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAIData_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAIData_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hololens_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hololens_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hololens_msgs::srv::GetAIData_Request>()
{
  return &hololens_msgs::srv::typesupport_fastrtps_cpp::_GetAIData_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hololens_msgs, srv, GetAIData_Request)() {
  return &hololens_msgs::srv::typesupport_fastrtps_cpp::_GetAIData_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hololens_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hololens_msgs
cdr_serialize(
  const hololens_msgs::srv::GetAIData_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: scene_names
  {
    cdr << ros_message.scene_names;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hololens_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hololens_msgs::srv::GetAIData_Response & ros_message)
{
  // Member: scene_names
  {
    cdr >> ros_message.scene_names;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hololens_msgs
get_serialized_size(
  const hololens_msgs::srv::GetAIData_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: scene_names
  {
    size_t array_size = ros_message.scene_names.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.scene_names[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hololens_msgs
max_serialized_size_GetAIData_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: scene_names
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetAIData_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hololens_msgs::srv::GetAIData_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetAIData_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hololens_msgs::srv::GetAIData_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetAIData_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hololens_msgs::srv::GetAIData_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetAIData_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetAIData_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetAIData_Response__callbacks = {
  "hololens_msgs::srv",
  "GetAIData_Response",
  _GetAIData_Response__cdr_serialize,
  _GetAIData_Response__cdr_deserialize,
  _GetAIData_Response__get_serialized_size,
  _GetAIData_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAIData_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAIData_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hololens_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hololens_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hololens_msgs::srv::GetAIData_Response>()
{
  return &hololens_msgs::srv::typesupport_fastrtps_cpp::_GetAIData_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hololens_msgs, srv, GetAIData_Response)() {
  return &hololens_msgs::srv::typesupport_fastrtps_cpp::_GetAIData_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace hololens_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetAIData__callbacks = {
  "hololens_msgs::srv",
  "GetAIData",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hololens_msgs, srv, GetAIData_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hololens_msgs, srv, GetAIData_Response)(),
};

static rosidl_service_type_support_t _GetAIData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAIData__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hololens_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hololens_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<hololens_msgs::srv::GetAIData>()
{
  return &hololens_msgs::srv::typesupport_fastrtps_cpp::_GetAIData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hololens_msgs, srv, GetAIData)() {
  return &hololens_msgs::srv::typesupport_fastrtps_cpp::_GetAIData__handle;
}

#ifdef __cplusplus
}
#endif
