// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hololens_msgs:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__MSG__DETAIL__IMAGE__BUILDER_HPP_
#define HOLOLENS_MSGS__MSG__DETAIL__IMAGE__BUILDER_HPP_

#include "hololens_msgs/msg/detail/image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace hololens_msgs
{

namespace msg
{

namespace builder
{

class Init_Image_data
{
public:
  Init_Image_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hololens_msgs::msg::Image data(::hololens_msgs::msg::Image::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hololens_msgs::msg::Image msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hololens_msgs::msg::Image>()
{
  return hololens_msgs::msg::builder::Init_Image_data();
}

}  // namespace hololens_msgs

#endif  // HOLOLENS_MSGS__MSG__DETAIL__IMAGE__BUILDER_HPP_
