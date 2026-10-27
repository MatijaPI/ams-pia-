// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amsagv_msgs:msg/Line.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/line.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__LINE__BUILDER_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amsagv_msgs/msg/detail/line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amsagv_msgs
{

namespace msg
{

namespace builder
{

class Init_Line_distance
{
public:
  explicit Init_Line_distance(::amsagv_msgs::msg::Line & msg)
  : msg_(msg)
  {}
  ::amsagv_msgs::msg::Line distance(::amsagv_msgs::msg::Line::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amsagv_msgs::msg::Line msg_;
};

class Init_Line_heading
{
public:
  explicit Init_Line_heading(::amsagv_msgs::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_distance heading(::amsagv_msgs::msg::Line::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_Line_distance(msg_);
  }

private:
  ::amsagv_msgs::msg::Line msg_;
};

class Init_Line_right
{
public:
  explicit Init_Line_right(::amsagv_msgs::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_heading right(::amsagv_msgs::msg::Line::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_Line_heading(msg_);
  }

private:
  ::amsagv_msgs::msg::Line msg_;
};

class Init_Line_left
{
public:
  explicit Init_Line_left(::amsagv_msgs::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_right left(::amsagv_msgs::msg::Line::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_Line_right(msg_);
  }

private:
  ::amsagv_msgs::msg::Line msg_;
};

class Init_Line_values
{
public:
  Init_Line_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Line_left values(::amsagv_msgs::msg::Line::_values_type arg)
  {
    msg_.values = std::move(arg);
    return Init_Line_left(msg_);
  }

private:
  ::amsagv_msgs::msg::Line msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amsagv_msgs::msg::Line>()
{
  return amsagv_msgs::msg::builder::Init_Line_values();
}

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__LINE__BUILDER_HPP_
