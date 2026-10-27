// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amsagv_msgs:msg/TagsStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/tags_stamped.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__BUILDER_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amsagv_msgs/msg/detail/tags_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amsagv_msgs
{

namespace msg
{

namespace builder
{

class Init_TagsStamped_tags
{
public:
  Init_TagsStamped_tags()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::amsagv_msgs::msg::TagsStamped tags(::amsagv_msgs::msg::TagsStamped::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amsagv_msgs::msg::TagsStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amsagv_msgs::msg::TagsStamped>()
{
  return amsagv_msgs::msg::builder::Init_TagsStamped_tags();
}

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__BUILDER_HPP_
