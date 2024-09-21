// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hololens_msgs:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef HOLOLENS_MSGS__MSG__DETAIL__IMAGE__STRUCT_HPP_
#define HOLOLENS_MSGS__MSG__DETAIL__IMAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hololens_msgs__msg__Image __attribute__((deprecated))
#else
# define DEPRECATED__hololens_msgs__msg__Image __declspec(deprecated)
#endif

namespace hololens_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Image_
{
  using Type = Image_<ContainerAllocator>;

  explicit Image_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0ul;
      this->height = 0ul;
    }
  }

  explicit Image_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0ul;
      this->height = 0ul;
    }
  }

  // field types and members
  using _data_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _data_type data;
  using _width_type =
    uint32_t;
  _width_type width;
  using _height_type =
    uint32_t;
  _height_type height;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hololens_msgs::msg::Image_<ContainerAllocator> *;
  using ConstRawPtr =
    const hololens_msgs::msg::Image_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hololens_msgs::msg::Image_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hololens_msgs::msg::Image_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hololens_msgs::msg::Image_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hololens_msgs::msg::Image_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hololens_msgs::msg::Image_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hololens_msgs::msg::Image_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hololens_msgs::msg::Image_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hololens_msgs::msg::Image_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hololens_msgs__msg__Image
    std::shared_ptr<hololens_msgs::msg::Image_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hololens_msgs__msg__Image
    std::shared_ptr<hololens_msgs::msg::Image_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Image_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const Image_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Image_

// alias to use template instance with default allocator
using Image =
  hololens_msgs::msg::Image_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hololens_msgs

#endif  // HOLOLENS_MSGS__MSG__DETAIL__IMAGE__STRUCT_HPP_
