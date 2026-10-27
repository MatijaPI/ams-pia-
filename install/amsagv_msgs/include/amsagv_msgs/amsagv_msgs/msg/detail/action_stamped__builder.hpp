// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amsagv_msgs:msg/ActionStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/action_stamped.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__ACTION_STAMPED__BUILDER_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__ACTION_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amsagv_msgs/msg/detail/action_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amsagv_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionStamped_action
{
public:
  explicit Init_ActionStamped_action(::amsagv_msgs::msg::ActionStamped & msg)
  : msg_(msg)
  {}
  ::amsagv_msgs::msg::ActionStamped action(::amsagv_msgs::msg::ActionStamped::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amsagv_msgs::msg::ActionStamped msg_;
};

class Init_ActionStamped_header
{
public:
  Init_ActionStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionStamped_action header(::amsagv_msgs::msg::ActionStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActionStamped_action(msg_);
  }

private:
  ::amsagv_msgs::msg::ActionStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amsagv_msgs::msg::ActionStamped>()
{
  return amsagv_msgs::msg::builder::Init_ActionStamped_header();
}

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__ACTION_STAMPED__BUILDER_HPP_
