// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amsagv_msgs:msg/Line.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/line.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__LINE__STRUCT_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__amsagv_msgs__msg__Line __attribute__((deprecated))
#else
# define DEPRECATED__amsagv_msgs__msg__Line __declspec(deprecated)
#endif

namespace amsagv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Line_
{
  using Type = Line_<ContainerAllocator>;

  explicit Line_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left = 0.0f;
      this->right = 0.0f;
      this->heading = 0.0f;
      this->distance = 0.0f;
    }
  }

  explicit Line_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left = 0.0f;
      this->right = 0.0f;
      this->heading = 0.0f;
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _values_type =
    rosidl::Buffer<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _values_type values;
  using _left_type =
    float;
  _left_type left;
  using _right_type =
    float;
  _right_type right;
  using _heading_type =
    float;
  _heading_type heading;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__values(
    const rosidl::Buffer<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->values = _arg;
    return *this;
  }
  Type & set__left(
    const float & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__right(
    const float & _arg)
  {
    this->right = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amsagv_msgs::msg::Line_<ContainerAllocator> *;
  using ConstRawPtr =
    const amsagv_msgs::msg::Line_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amsagv_msgs::msg::Line_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amsagv_msgs::msg::Line_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::Line_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::Line_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::Line_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::Line_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amsagv_msgs::msg::Line_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amsagv_msgs::msg::Line_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amsagv_msgs__msg__Line
    std::shared_ptr<amsagv_msgs::msg::Line_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amsagv_msgs__msg__Line
    std::shared_ptr<amsagv_msgs::msg::Line_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Line_ & other) const
  {
    if (this->values != other.values) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Line_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Line_

// alias to use template instance with default allocator
using Line =
  amsagv_msgs::msg::Line_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__LINE__STRUCT_HPP_
