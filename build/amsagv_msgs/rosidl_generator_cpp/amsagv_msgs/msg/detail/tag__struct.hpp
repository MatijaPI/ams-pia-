// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amsagv_msgs:msg/Tag.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/tag.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__TAG__STRUCT_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__TAG__STRUCT_HPP_

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
# define DEPRECATED__amsagv_msgs__msg__Tag __attribute__((deprecated))
#else
# define DEPRECATED__amsagv_msgs__msg__Tag __declspec(deprecated)
#endif

namespace amsagv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tag_
{
  using Type = Tag_<ContainerAllocator>;

  explicit Tag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->a = 0ll;
      this->b = 0ll;
      this->d = 0.0f;
    }
  }

  explicit Tag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->a = 0ll;
      this->b = 0ll;
      this->d = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;
  using _d_type =
    float;
  _d_type d;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__d(
    const float & _arg)
  {
    this->d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amsagv_msgs::msg::Tag_<ContainerAllocator> *;
  using ConstRawPtr =
    const amsagv_msgs::msg::Tag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amsagv_msgs::msg::Tag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amsagv_msgs::msg::Tag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::Tag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::Tag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::Tag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::Tag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amsagv_msgs::msg::Tag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amsagv_msgs::msg::Tag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amsagv_msgs__msg__Tag
    std::shared_ptr<amsagv_msgs::msg::Tag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amsagv_msgs__msg__Tag
    std::shared_ptr<amsagv_msgs::msg::Tag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tag_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tag_

// alias to use template instance with default allocator
using Tag =
  amsagv_msgs::msg::Tag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__TAG__STRUCT_HPP_
