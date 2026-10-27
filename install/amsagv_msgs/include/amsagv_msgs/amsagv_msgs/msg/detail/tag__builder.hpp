// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amsagv_msgs:msg/Tag.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/tag.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__TAG__BUILDER_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__TAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amsagv_msgs/msg/detail/tag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amsagv_msgs
{

namespace msg
{

namespace builder
{

class Init_Tag_d
{
public:
  explicit Init_Tag_d(::amsagv_msgs::msg::Tag & msg)
  : msg_(msg)
  {}
  ::amsagv_msgs::msg::Tag d(::amsagv_msgs::msg::Tag::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amsagv_msgs::msg::Tag msg_;
};

class Init_Tag_b
{
public:
  explicit Init_Tag_b(::amsagv_msgs::msg::Tag & msg)
  : msg_(msg)
  {}
  Init_Tag_d b(::amsagv_msgs::msg::Tag::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Tag_d(msg_);
  }

private:
  ::amsagv_msgs::msg::Tag msg_;
};

class Init_Tag_a
{
public:
  explicit Init_Tag_a(::amsagv_msgs::msg::Tag & msg)
  : msg_(msg)
  {}
  Init_Tag_b a(::amsagv_msgs::msg::Tag::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Tag_b(msg_);
  }

private:
  ::amsagv_msgs::msg::Tag msg_;
};

class Init_Tag_id
{
public:
  Init_Tag_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tag_a id(::amsagv_msgs::msg::Tag::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Tag_a(msg_);
  }

private:
  ::amsagv_msgs::msg::Tag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amsagv_msgs::msg::Tag>()
{
  return amsagv_msgs::msg::builder::Init_Tag_id();
}

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__TAG__BUILDER_HPP_
