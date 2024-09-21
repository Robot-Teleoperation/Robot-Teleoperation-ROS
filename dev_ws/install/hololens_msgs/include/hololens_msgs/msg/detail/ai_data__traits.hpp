// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hololens_msgs:msg/AIData.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__TRAITS_HPP_
#define HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__TRAITS_HPP_

#include "hololens_msgs/msg/detail/ai_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hololens_msgs::msg::AIData>()
{
  return "hololens_msgs::msg::AIData";
}

template<>
inline const char * name<hololens_msgs::msg::AIData>()
{
  return "hololens_msgs/msg/AIData";
}

template<>
struct has_fixed_size<hololens_msgs::msg::AIData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hololens_msgs::msg::AIData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hololens_msgs::msg::AIData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__TRAITS_HPP_
