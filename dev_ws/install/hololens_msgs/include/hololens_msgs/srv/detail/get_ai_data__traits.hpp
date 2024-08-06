// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hololens_msgs:srv/GetAIData.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__TRAITS_HPP_
#define HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__TRAITS_HPP_

#include "hololens_msgs/srv/detail/get_ai_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hololens_msgs::srv::GetAIData_Request>()
{
  return "hololens_msgs::srv::GetAIData_Request";
}

template<>
inline const char * name<hololens_msgs::srv::GetAIData_Request>()
{
  return "hololens_msgs/srv/GetAIData_Request";
}

template<>
struct has_fixed_size<hololens_msgs::srv::GetAIData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hololens_msgs::srv::GetAIData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hololens_msgs::srv::GetAIData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hololens_msgs::srv::GetAIData_Response>()
{
  return "hololens_msgs::srv::GetAIData_Response";
}

template<>
inline const char * name<hololens_msgs::srv::GetAIData_Response>()
{
  return "hololens_msgs/srv/GetAIData_Response";
}

template<>
struct has_fixed_size<hololens_msgs::srv::GetAIData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hololens_msgs::srv::GetAIData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hololens_msgs::srv::GetAIData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hololens_msgs::srv::GetAIData>()
{
  return "hololens_msgs::srv::GetAIData";
}

template<>
inline const char * name<hololens_msgs::srv::GetAIData>()
{
  return "hololens_msgs/srv/GetAIData";
}

template<>
struct has_fixed_size<hololens_msgs::srv::GetAIData>
  : std::integral_constant<
    bool,
    has_fixed_size<hololens_msgs::srv::GetAIData_Request>::value &&
    has_fixed_size<hololens_msgs::srv::GetAIData_Response>::value
  >
{
};

template<>
struct has_bounded_size<hololens_msgs::srv::GetAIData>
  : std::integral_constant<
    bool,
    has_bounded_size<hololens_msgs::srv::GetAIData_Request>::value &&
    has_bounded_size<hololens_msgs::srv::GetAIData_Response>::value
  >
{
};

template<>
struct is_service<hololens_msgs::srv::GetAIData>
  : std::true_type
{
};

template<>
struct is_service_request<hololens_msgs::srv::GetAIData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hololens_msgs::srv::GetAIData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__TRAITS_HPP_
