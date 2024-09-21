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

class Init_GetAIData_Request_point_y
{
public:
  explicit Init_GetAIData_Request_point_y(::hololens_msgs::srv::GetAIData_Request & msg)
  : msg_(msg)
  {}
  ::hololens_msgs::srv::GetAIData_Request point_y(::hololens_msgs::srv::GetAIData_Request::_point_y_type arg)
  {
    msg_.point_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hololens_msgs::srv::GetAIData_Request msg_;
};

class Init_GetAIData_Request_point_x
{
public:
  Init_GetAIData_Request_point_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAIData_Request_point_y point_x(::hololens_msgs::srv::GetAIData_Request::_point_x_type arg)
  {
    msg_.point_x = std::move(arg);
    return Init_GetAIData_Request_point_y(msg_);
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
  return hololens_msgs::srv::builder::Init_GetAIData_Request_point_x();
}

}  // namespace hololens_msgs


namespace hololens_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAIData_Response_scene_names
{
public:
  Init_GetAIData_Response_scene_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hololens_msgs::srv::GetAIData_Response scene_names(::hololens_msgs::srv::GetAIData_Response::_scene_names_type arg)
  {
    msg_.scene_names = std::move(arg);
    return std::move(msg_);
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
  return hololens_msgs::srv::builder::Init_GetAIData_Response_scene_names();
}

}  // namespace hololens_msgs

#endif  // HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__BUILDER_HPP_
