// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amsagv_msgs:msg/Action.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/action.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__ACTION__STRUCT_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__ACTION__STRUCT_HPP_

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
# define DEPRECATED__amsagv_msgs__msg__Action __attribute__((deprecated))
#else
# define DEPRECATED__amsagv_msgs__msg__Action __declspec(deprecated)
#endif

namespace amsagv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Action_
{
  using Type = Action_<ContainerAllocator>;

  explicit Action_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0ul;
      this->distance = 0.0f;
    }
  }

  explicit Action_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0ul;
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _id_type =
    uint32_t;
  _id_type id;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
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
    amsagv_msgs::msg::Action_<ContainerAllocator> *;
  using ConstRawPtr =
    const amsagv_msgs::msg::Action_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amsagv_msgs::msg::Action_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amsagv_msgs::msg::Action_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::Action_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::Action_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::Action_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::Action_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amsagv_msgs::msg::Action_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amsagv_msgs::msg::Action_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amsagv_msgs__msg__Action
    std::shared_ptr<amsagv_msgs::msg::Action_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amsagv_msgs__msg__Action
    std::shared_ptr<amsagv_msgs::msg::Action_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Action_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Action_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Action_

// alias to use template instance with default allocator
using Action =
  amsagv_msgs::msg::Action_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__ACTION__STRUCT_HPP_
