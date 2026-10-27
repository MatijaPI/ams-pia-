// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amsagv_msgs:msg/LineStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/line_stamped.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__LINE_STAMPED__BUILDER_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__LINE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amsagv_msgs/msg/detail/line_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amsagv_msgs
{

namespace msg
{

namespace builder
{

class Init_LineStamped_line
{
public:
  explicit Init_LineStamped_line(::amsagv_msgs::msg::LineStamped & msg)
  : msg_(msg)
  {}
  ::amsagv_msgs::msg::LineStamped line(::amsagv_msgs::msg::LineStamped::_line_type arg)
  {
    msg_.line = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amsagv_msgs::msg::LineStamped msg_;
};

class Init_LineStamped_header
{
public:
  Init_LineStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LineStamped_line header(::amsagv_msgs::msg::LineStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LineStamped_line(msg_);
  }

private:
  ::amsagv_msgs::msg::LineStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amsagv_msgs::msg::LineStamped>()
{
  return amsagv_msgs::msg::builder::Init_LineStamped_header();
}

}  // namespace amsagv_msgs

#endif  // AMSAGV_MSGS__MSG__DETAIL__LINE_STAMPED__BUILDER_HPP_
