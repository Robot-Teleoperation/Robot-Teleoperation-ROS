// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hololens_msgs:srv/GetAIData.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__BUILDER_HPP_
#define HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__BUILDER_HPP_

#include "hololens_msgs/srv/detail/get_ai_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hololens_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAIData_Request_req
{
public:
  Init_GetAIData_Request_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hololens_msgs::srv::GetAIData_Request req(::hololens_msgs::srv::GetAIData_Request::_req_type arg)
  {
    msg_.req = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hololens_msgs::srv::GetAIData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hololens_msgs::srv::GetAIData_Request>()
{
  return hololens_msgs::srv::builder::Init_GetAIData_Request_req();
}

}  // namespace hololens_msgs


namespace hololens_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAIData_Response_model
{
public:
  explicit Init_GetAIData_Response_model(::hololens_msgs::srv::GetAIData_Response & msg)
  : msg_(msg)
  {}
  ::hololens_msgs::srv::GetAIData_Response model(::hololens_msgs::srv::GetAIData_Response::_model_type arg)
  {
    msg_.model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hololens_msgs::srv::GetAIData_Response msg_;
};

class Init_GetAIData_Response_instructions
{
public:
  explicit Init_GetAIData_Response_instructions(::hololens_msgs::srv::GetAIData_Response & msg)
  : msg_(msg)
  {}
  Init_GetAIData_Response_model instructions(::hololens_msgs::srv::GetAIData_Response::_instructions_type arg)
  {
    msg_.instructions = std::move(arg);
    return Init_GetAIData_Response_model(msg_);
  }

private:
  ::hololens_msgs::srv::GetAIData_Response msg_;
};

class Init_GetAIData_Response_class_name
{
public:
  Init_GetAIData_Response_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAIData_Response_instructions class_name(::hololens_msgs::srv::GetAIData_Response::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_GetAIData_Response_instructions(msg_);
  }

private:
  ::hololens_msgs::srv::GetAIData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hololens_msgs::srv::GetAIData_Response>()
{
  return hololens_msgs::srv::builder::Init_GetAIData_Response_class_name();
}

}  // namespace hololens_msgs

#endif  // HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__BUILDER_HPP_
