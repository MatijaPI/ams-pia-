// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amsagv_msgs:msg/Actions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/actions.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__ACTIONS__BUILDER_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__ACTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amsagv_msgs/msg/detail/actions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amsagv_msgs
{

namespace msg
{

namespace builder
{

class Init_Actions_actions
{
public:
  Init_Actions_actions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::amsagv_msgs::msg::Actions actions(::amsagv_msgs::msg::Actions::_actions_type arg)
  {
    msg_.actions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amsagv_msgs::msg::Actions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amsagv_msgs::msg::Actions>()
{
  return amsagv_msgs::msg::builder::Init_Actions_actions();
}

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__ACTIONS__BUILDER_HPP_
