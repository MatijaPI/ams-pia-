// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amsagv_msgs:msg/TagsStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/tags_stamped.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__STRUCT_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__STRUCT_HPP_

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
// Member 'tags'
#include "amsagv_msgs/msg/detail/tag_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amsagv_msgs__msg__TagsStamped __attribute__((deprecated))
#else
# define DEPRECATED__amsagv_msgs__msg__TagsStamped __declspec(deprecated)
#endif

namespace amsagv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TagsStamped_
{
  using Type = TagsStamped_<ContainerAllocator>;

  explicit TagsStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TagsStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _tags_type =
    std::vector<amsagv_msgs::msg::TagStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<amsagv_msgs::msg::TagStamped_<ContainerAllocator>>>;
  _tags_type tags;

  // setters for named parameter idiom
  Type & set__tags(
    const std::vector<amsagv_msgs::msg::TagStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<amsagv_msgs::msg::TagStamped_<ContainerAllocator>>> & _arg)
  {
    this->tags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amsagv_msgs::msg::TagsStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const amsagv_msgs::msg::TagsStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amsagv_msgs::msg::TagsStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amsagv_msgs::msg::TagsStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::TagsStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::TagsStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amsagv_msgs::msg::TagsStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amsagv_msgs::msg::TagsStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amsagv_msgs::msg::TagsStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amsagv_msgs::msg::TagsStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amsagv_msgs__msg__TagsStamped
    std::shared_ptr<amsagv_msgs::msg::TagsStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amsagv_msgs__msg__TagsStamped
    std::shared_ptr<amsagv_msgs::msg::TagsStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TagsStamped_ & other) const
  {
    if (this->tags != other.tags) {
      return false;
    }
    return true;
  }
  bool operator!=(const TagsStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TagsStamped_

// alias to use template instance with default allocator
using TagsStamped =
  amsagv_msgs::msg::TagsStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__STRUCT_HPP_
