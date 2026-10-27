// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amsagv_msgs:msg/Action.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/action.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__ACTION__BUILDER_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amsagv_msgs/msg/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amsagv_msgs
{

namespace msg
{

namespace builder
{

class Init_Action_distance
{
public:
  explicit Init_Action_distance(::amsagv_msgs::msg::Action & msg)
  : msg_(msg)
  {}
  ::amsagv_msgs::msg::Action distance(::amsagv_msgs::msg::Action::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amsagv_msgs::msg::Action msg_;
};

class Init_Action_id
{
public:
  explicit Init_Action_id(::amsagv_msgs::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_distance id(::amsagv_msgs::msg::Action::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Action_distance(msg_);
  }

private:
  ::amsagv_msgs::msg::Action msg_;
};

class Init_Action_name
{
public:
  Init_Action_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action_id name(::amsagv_msgs::msg::Action::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Action_id(msg_);
  }

private:
  ::amsagv_msgs::msg::Action msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amsagv_msgs::msg::Action>()
{
  return amsagv_msgs::msg::builder::Init_Action_name();
}

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__ACTION__BUILDER_HPP_
