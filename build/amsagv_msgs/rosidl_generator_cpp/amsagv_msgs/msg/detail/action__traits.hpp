// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amsagv_msgs:msg/Action.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/action.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__ACTION__TRAITS_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__ACTION__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "amsagv_msgs/msg/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace amsagv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Action & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, amsagv_msgs::msg::Action>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).name,
    std::forward<T>(msg).id,
    std::forward<T>(msg).distance);
}

}  // namespace msg

}  // namespace amsagv_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<amsagv_msgs::msg::Action>()
{
  return "amsagv_msgs::msg::Action";
}

template<>
constexpr const char * name<amsagv_msgs::msg::Action>()
{
  return "amsagv_msgs/msg/Action";
}

template<>
struct has_fixed_size<amsagv_msgs::msg::Action>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amsagv_msgs::msg::Action>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amsagv_msgs::msg::Action>
  : std::true_type {};

template<>
struct MessageTraits<amsagv_msgs::msg::Action>
{
  static constexpr std::size_t member_count = 3;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "name",
    "id",
    "distance",
  };
};

}  // namespace rosidl_generator_traits

#endif  // AMSAGV_MSGS__MSG__DETAIL__ACTION__TRAITS_HPP_
