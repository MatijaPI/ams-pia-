// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amsagv_msgs:msg/ActionsStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/actions_stamped.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__ACTIONS_STAMPED__STRUCT_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__ACTIONS_STAMPED__STRUCT_HPP_

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
// Member 'actions'
#include "amsagv_msgs/msg/detail/action_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amsagv_msgs__msg__ActionsStamped __attribute__((deprecated))
#else
# define DEPRECATED__amsagv_msgs__msg__ActionsStamped __declspec(deprecated)
#endif

namespace amsagv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionsStamped_
{
  using Type = ActionsStamped_<ContainerAllocator>;

  explicit ActionsStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ActionsStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _actions_type =
    std::vector<amsagv_msgs::msg::ActionStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<amsagv_msgs::msg::ActionStamped_<ContainerAllocator>>>;
  _actions_type actions;

  // setters for named parameter idiom
  Type & set__actions(
    const std::vector<amsagv_msgs::msg::ActionStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<amsagv_msgs::msg::ActionStamped_<ContainerAllocator>>> & _arg)
  {
    this->actions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amsagv_msgs::msg::ActionsStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const amsagv_msgs::msg::ActionsStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amsagv_msgs::msg::ActionsStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amsagv_msgs::msg::ActionsStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::ActionsStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::ActionsStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::ActionsStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::ActionsStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amsagv_msgs::msg::ActionsStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amsagv_msgs::msg::ActionsStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amsagv_msgs__msg__ActionsStamped
    std::shared_ptr<amsagv_msgs::msg::ActionsStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amsagv_msgs__msg__ActionsStamped
    std::shared_ptr<amsagv_msgs::msg::ActionsStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionsStamped_ & other) const
  {
    if (this->actions != other.actions) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionsStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionsStamped_

// alias to use template instance with default allocator
using ActionsStamped =
  amsagv_msgs::msg::ActionsStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__ACTIONS_STAMPED__STRUCT_HPP_
