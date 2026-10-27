// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amsagv_msgs:msg/LineStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/line_stamped.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__LINE_STAMPED__STRUCT_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__LINE_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'line'
#include "amsagv_msgs/msg/detail/line__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amsagv_msgs__msg__LineStamped __attribute__((deprecated))
#else
# define DEPRECATED__amsagv_msgs__msg__LineStamped __declspec(deprecated)
#endif

namespace amsagv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LineStamped_
{
  using Type = LineStamped_<ContainerAllocator>;

  explicit LineStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    line(_init)
  {
    (void)_init;
  }

  explicit LineStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    line(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _line_type =
    amsagv_msgs::msg::Line_<ContainerAllocator>;
  _line_type line;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__line(
    const amsagv_msgs::msg::Line_<ContainerAllocator> & _arg)
  {
    this->line = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amsagv_msgs::msg::LineStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const amsagv_msgs::msg::LineStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amsagv_msgs::msg::LineStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amsagv_msgs::msg::LineStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::LineStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::LineStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::LineStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::LineStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amsagv_msgs::msg::LineStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amsagv_msgs::msg::LineStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amsagv_msgs__msg__LineStamped
    std::shared_ptr<amsagv_msgs::msg::LineStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amsagv_msgs__msg__LineStamped
    std::shared_ptr<amsagv_msgs::msg::LineStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LineStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->line != other.line) {
      return false;
    }
    return true;
  }
  bool operator!=(const LineStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LineStamped_

// alias to use template instance with default allocator
using LineStamped =
  amsagv_msgs::msg::LineStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__LINE_STAMPED__STRUCT_HPP_
