// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amsagv_msgs:msg/TagStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/tag_stamped.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__TAG_STAMPED__BUILDER_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__TAG_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amsagv_msgs/msg/detail/tag_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amsagv_msgs
{

namespace msg
{

namespace builder
{

class Init_TagStamped_tag
{
public:
  explicit Init_TagStamped_tag(::amsagv_msgs::msg::TagStamped & msg)
  : msg_(msg)
  {}
  ::amsagv_msgs::msg::TagStamped tag(::amsagv_msgs::msg::TagStamped::_tag_type arg)
  {
    msg_.tag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amsagv_msgs::msg::TagStamped msg_;
};

class Init_TagStamped_header
{
public:
  Init_TagStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TagStamped_tag header(::amsagv_msgs::msg::TagStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TagStamped_tag(msg_);
  }

private:
  ::amsagv_msgs::msg::TagStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amsagv_msgs::msg::TagStamped>()
{
  return amsagv_msgs::msg::builder::Init_TagStamped_header();
}

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__TAG_STAMPED__BUILDER_HPP_
