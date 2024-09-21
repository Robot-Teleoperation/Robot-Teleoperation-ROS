// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hololens_msgs:msg/AIData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hololens_msgs/msg/detail/ai_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hololens_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AIData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hololens_msgs::msg::AIData(_init);
}

void AIData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hololens_msgs::msg::AIData *>(message_memory);
  typed_message->~AIData();
}

size_t size_function__AIData__scene_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AIData__scene_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__AIData__scene_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__AIData__scene_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AIData_message_member_array[1] = {
  {
    "scene_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hololens_msgs::msg::AIData, scene_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__AIData__scene_names,  // size() function pointer
    get_const_function__AIData__scene_names,  // get_const(index) function pointer
    get_function__AIData__scene_names,  // get(index) function pointer
    resize_function__AIData__scene_names  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AIData_message_members = {
  "hololens_msgs::msg",  // message namespace
  "AIData",  // message name
  1,  // number of fields
  sizeof(hololens_msgs::msg::AIData),
  AIData_message_member_array,  // message members
  AIData_init_function,  // function to initialize message memory (memory has to be allocated)
  AIData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AIData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AIData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hololens_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hololens_msgs::msg::AIData>()
{
  return &::hololens_msgs::msg::rosidl_typesupport_introspection_cpp::AIData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hololens_msgs, msg, AIData)() {
  return &::hololens_msgs::msg::rosidl_typesupport_introspection_cpp::AIData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
