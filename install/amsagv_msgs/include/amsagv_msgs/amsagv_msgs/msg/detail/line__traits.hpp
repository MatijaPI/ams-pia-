// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amsagv_msgs:msg/Line.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/line.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__LINE__TRAITS_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__LINE__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "amsagv_msgs/msg/detail/line__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace amsagv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Line & msg,
  std::ostream & out)
{
  out << "{";
  // member: values
  {
    if (msg.values.size() == 0) {
      out << "values: []";
    } else {
      out << "values: [";
      size_t pending_items = msg.values.size();
      for (auto item : msg.values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left
  {
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
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
  const Line & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << "\n";
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
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

inline std::string to_yaml(const Line & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, amsagv_msgs::msg::Line>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(
    std::forward<T>(msg).values,
    std::forward<T>(msg).left,
    std::forward<T>(msg).right,
    std::forward<T>(msg).heading,
    std::forward<T>(msg).distance);
}

}  // namespace msg

}  // namespace amsagv_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<amsagv_msgs::msg::Line>()
{
  return "amsagv_msgs::msg::Line";
}

template<>
constexpr const char * name<amsagv_msgs::msg::Line>()
{
  return "amsagv_msgs/msg/Line";
}

template<>
struct has_fixed_size<amsagv_msgs::msg::Line>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amsagv_msgs::msg::Line>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amsagv_msgs::msg::Line>
  : std::true_type {};

template<>
struct MessageTraits<amsagv_msgs::msg::Line>
{
  static constexpr std::size_t member_count = 5;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "values",
    "left",
    "right",
    "heading",
    "distance",
  };
};

}  // namespace rosidl_generator_traits

#endif  // AMSAGV_MSGS__MSG__DETAIL__LINE__TRAITS_HPP_
