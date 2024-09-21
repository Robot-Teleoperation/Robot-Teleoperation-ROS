// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hololens_msgs:msg/AIData.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__STRUCT_HPP_
#define HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hololens_msgs__msg__AIData __attribute__((deprecated))
#else
# define DEPRECATED__hololens_msgs__msg__AIData __declspec(deprecated)
#endif

namespace hololens_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AIData_
{
  using Type = AIData_<ContainerAllocator>;

  explicit AIData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AIData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    hololens_msgs::msg::AIData_<ContainerAllocator> *;
  using ConstRawPtr =
    const hololens_msgs::msg::AIData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hololens_msgs::msg::AIData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hololens_msgs::msg::AIData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hololens_msgs::msg::AIData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hololens_msgs::msg::AIData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hololens_msgs::msg::AIData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hololens_msgs::msg::AIData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hololens_msgs::msg::AIData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hololens_msgs::msg::AIData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hololens_msgs__msg__AIData
    std::shared_ptr<hololens_msgs::msg::AIData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hololens_msgs__msg__AIData
    std::shared_ptr<hololens_msgs::msg::AIData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AIData_ & other) const
  {
    if (this->scene_names != other.scene_names) {
      return false;
    }
    return true;
  }
  bool operator!=(const AIData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AIData_

// alias to use template instance with default allocator
using AIData =
  hololens_msgs::msg::AIData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hololens_msgs

#endif  // HOLOLENS_MSGS__MSG__DETAIL__AI_DATA__STRUCT_HPP_
