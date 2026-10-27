// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amsagv_msgs:msg/Tag.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/tag.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__TAG__TRAITS_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__TAG__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "amsagv_msgs/msg/detail/tag__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace amsagv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Tag & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Tag & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tag & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, amsagv_msgs::msg::Tag>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).id,
    std::forward<T>(msg).a,
    std::forward<T>(msg).b,
    std::forward<T>(msg).d);
}

}  // namespace msg

}  // namespace amsagv_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<amsagv_msgs::msg::Tag>()
{
  return "amsagv_msgs::msg::Tag";
}

template<>
constexpr const char * name<amsagv_msgs::msg::Tag>()
{
  return "amsagv_msgs/msg/Tag";
}

template<>
struct has_fixed_size<amsagv_msgs::msg::Tag>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<amsagv_msgs::msg::Tag>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<amsagv_msgs::msg::Tag>
  : std::true_type {};

template<>
struct MessageTraits<amsagv_msgs::msg::Tag>
{
  static constexpr std::size_t member_count = 4;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "id",
    "a",
    "b",
    "d",
  };
};

}  // namespace rosidl_generator_traits

#endif  // AMSAGV_MSGS__MSG__DETAIL__TAG__TRAITS_HPP_
