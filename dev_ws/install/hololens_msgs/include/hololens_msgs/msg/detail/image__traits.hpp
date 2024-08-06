// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hololens_msgs:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__MSG__DETAIL__IMAGE__TRAITS_HPP_
#define HOLOLENS_MSGS__MSG__DETAIL__IMAGE__TRAITS_HPP_

#include "hololens_msgs/msg/detail/image__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hololens_msgs::msg::Image>()
{
  return "hololens_msgs::msg::Image";
}

template<>
inline const char * name<hololens_msgs::msg::Image>()
{
  return "hololens_msgs/msg/Image";
}

template<>
struct has_fixed_size<hololens_msgs::msg::Image>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hololens_msgs::msg::Image>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hololens_msgs::msg::Image>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOLOLENS_MSGS__MSG__DETAIL__IMAGE__TRAITS_HPP_
