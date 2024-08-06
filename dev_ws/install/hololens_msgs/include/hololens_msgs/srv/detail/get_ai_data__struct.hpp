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
      this->req = 0ll;
    }
  }

  explicit GetAIData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req = 0ll;
    }
  }

  // field types and members
  using _req_type =
    int64_t;
  _req_type req;

  // setters for named parameter idiom
  Type & set__req(
    const int64_t & _arg)
  {
    this->req = _arg;
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
    if (this->req != other.req) {
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
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->instructions = "";
      this->model = "";
    }
  }

  explicit GetAIData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc),
    instructions(_alloc),
    model(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->instructions = "";
      this->model = "";
    }
  }

  // field types and members
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _class_name_type class_name;
  using _instructions_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _instructions_type instructions;
  using _model_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _model_type model;

  // setters for named parameter idiom
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__instructions(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->instructions = _arg;
    return *this;
  }
  Type & set__model(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->model = _arg;
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
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->instructions != other.instructions) {
      return false;
    }
    if (this->model != other.model) {
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
