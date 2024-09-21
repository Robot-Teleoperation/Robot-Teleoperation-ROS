// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hololens_msgs:msg/AIData.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__BUILDER_HPP_
#define HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__BUILDER_HPP_

#include "hololens_msgs/msg/detail/ai_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hololens_msgs
{

namespace msg
{

namespace builder
{

class Init_AIData_scene_names
{
public:
  Init_AIData_scene_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hololens_msgs::msg::AIData scene_names(::hololens_msgs::msg::AIData::_scene_names_type arg)
  {
    msg_.scene_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hololens_msgs::msg::AIData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hololens_msgs::msg::AIData>()
{
  return hololens_msgs::msg::builder::Init_AIData_scene_names();
}

}  // namespace hololens_msgs

#endif  // HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__BUILDER_HPP_
