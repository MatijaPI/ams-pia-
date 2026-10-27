// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amsagv_msgs:msg/ActionStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/action_stamped.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__ACTION_STAMPED__TRAITS_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__ACTION_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "amsagv_msgs/msg/detail/action_stamped__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'action'
#include "amsagv_msgs/msg/detail/action__traits.hpp"

namespace amsagv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    to_flow_style_yaml(msg.action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action:\n";
    to_block_style_yaml(msg.action, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, amsagv_msgs::msg::ActionStamped>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).header,
    std::forward<T>(msg).action);
}

}  // namespace msg

}  // namespace amsagv_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<amsagv_msgs::msg::ActionStamped>()
{
  return "amsagv_msgs::msg::ActionStamped";
}

template<>
constexpr const char * name<amsagv_msgs::msg::ActionStamped>()
{
  return "amsagv_msgs/msg/ActionStamped";
}

template<>
struct has_fixed_size<amsagv_msgs::msg::ActionStamped>
  : std::integral_constant<bool, has_fixed_size<amsagv_msgs::msg::Action>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<amsagv_msgs::msg::ActionStamped>
  : std::integral_constant<bool, has_bounded_size<amsagv_msgs::msg::Action>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<amsagv_msgs::msg::ActionStamped>
  : std::true_type {};

template<>
struct MessageTraits<amsagv_msgs::msg::ActionStamped>
{
  static constexpr std::size_t member_count = 2;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "header",
    "action",
  };
};

}  // namespace rosidl_generator_traits

#endif  // AMSAGV_MSGS__MSG__DETAIL__ACTION_STAMPED__TRAITS_HPP_
