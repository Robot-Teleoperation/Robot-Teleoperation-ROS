// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hololens_msgs:srv/GetAIData.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__STRUCT_HPP_
#define HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hololens_msgs__srv__GetAIData_Request __attribute__((deprecated))
#else
# define DEPRECATED__hololens_msgs__srv__GetAIData_Request __declspec(deprecated)
#endif

namespace hololens_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAIData_Request_
{
  using Type = GetAIData_Request_<ContainerAllocator>;

  explicit GetAIData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_x = 0ll;
      this->point_y = 0ll;
    }
  }

  explicit GetAIData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point_x = 0ll;
      this->point_y = 0ll;
    }
  }

  // field types and members
  using _point_x_type =
    int64_t;
  _point_x_type point_x;
  using _point_y_type =
    int64_t;
  _point_y_type point_y;

  // setters for named parameter idiom
  Type & set__point_x(
    const int64_t & _arg)
  {
    this->point_x = _arg;
    return *this;
  }
  Type & set__point_y(
    const int64_t & _arg)
  {
    this->point_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hololens_msgs::srv::GetAIData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hololens_msgs::srv::GetAIData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hololens_msgs::srv::GetAIData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hololens_msgs::srv::GetAIData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hololens_msgs::srv::GetAIData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hololens_msgs::srv::GetAIData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hololens_msgs::srv::GetAIData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hololens_msgs::srv::GetAIData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hololens_msgs::srv::GetAIData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hololens_msgs::srv::GetAIData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hololens_msgs__srv__GetAIData_Request
    std::shared_ptr<hololens_msgs::srv::GetAIData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hololens_msgs__srv__GetAIData_Request
    std::shared_ptr<hololens_msgs::srv::GetAIData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAIData_Request_ & other) const
  {
    if (this->point_x != other.point_x) {
      return false;
    }
    if (this->point_y != other.point_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAIData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAIData_Request_

// alias to use template instance with default allocator
using GetAIData_Request =
  hololens_msgs::srv::GetAIData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hololens_msgs


#ifndef _WIN32
# define DEPRECATED__hololens_msgs__srv__GetAIData_Response __attribute__((deprecated))
#else
# define DEPRECATED__hololens_msgs__srv__GetAIData_Response __declspec(deprecated)
#endif

namespace hololens_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAIData_Response_
{
  using Type = GetAIData_Response_<ContainerAllocator>;

  explicit GetAIData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetAIData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _scene_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _scene_names_type scene_names;

  // setters for named parameter idiom
  Type & set__scene_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->scene_names = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hololens_msgs::srv::GetAIData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hololens_msgs::srv::GetAIData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hololens_msgs::srv::GetAIData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hololens_msgs::srv::GetAIData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hololens_msgs::srv::GetAIData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hololens_msgs::srv::GetAIData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hololens_msgs::srv::GetAIData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hololens_msgs::srv::GetAIData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hololens_msgs::srv::GetAIData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hololens_msgs::srv::GetAIData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hololens_msgs__srv__GetAIData_Response
    std::shared_ptr<hololens_msgs::srv::GetAIData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hololens_msgs__srv__GetAIData_Response
    std::shared_ptr<hololens_msgs::srv::GetAIData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAIData_Response_ & other) const
  {
    if (this->scene_names != other.scene_names) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAIData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAIData_Response_

// alias to use template instance with default allocator
using GetAIData_Response =
  hololens_msgs::srv::GetAIData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hololens_msgs

namespace hololens_msgs
{

namespace srv
{

struct GetAIData
{
  using Request = hololens_msgs::srv::GetAIData_Request;
  using Response = hololens_msgs::srv::GetAIData_Response;
};

}  // namespace srv

}  // namespace hololens_msgs

#endif  // HOLOLENS_MSGS__SRV__DETAIL__GET_AI_DATA__STRUCT_HPP_
