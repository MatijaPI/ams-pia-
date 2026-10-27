// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amsagv_msgs:msg/TagsStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/tags_stamped.hpp"


#ifndef AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__TRAITS_HPP_
#define AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <array>
#include <cstddef>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>

#include "amsagv_msgs/msg/detail/tags_stamped__struct.hpp"
#include "rosidl_runtime_cpp/buffer__traits.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tags'
#include "amsagv_msgs/msg/detail/tag_stamped__traits.hpp"

namespace amsagv_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TagsStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: tags
  {
    if (msg.tags.size() == 0) {
      out << "tags: []";
    } else {
      out << "tags: [";
      size_t pending_items = msg.tags.size();
      for (auto item : msg.tags) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TagsStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tags.size() == 0) {
      out << "tags: []\n";
    } else {
      out << "tags:\n";
      for (auto item : msg.tags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TagsStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

template<typename T, std::enable_if_t<std::is_same_v<std::decay_t<T>, amsagv_msgs::msg::TagsStamped>, int> = 0>
constexpr auto as_tuple_ref(T && msg)
{
  return std::forward_as_tuple(std::forward<T>(msg).tags);
}

}  // namespace msg

}  // namespace amsagv_msgs

namespace rosidl_generator_traits
{

template<>
constexpr const char * data_type<amsagv_msgs::msg::TagsStamped>()
{
  return "amsagv_msgs::msg::TagsStamped";
}

template<>
constexpr const char * name<amsagv_msgs::msg::TagsStamped>()
{
  return "amsagv_msgs/msg/TagsStamped";
}

template<>
struct has_fixed_size<amsagv_msgs::msg::TagsStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amsagv_msgs::msg::TagsStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amsagv_msgs::msg::TagsStamped>
  : std::true_type {};

template<>
struct MessageTraits<amsagv_msgs::msg::TagsStamped>
{
  static constexpr std::size_t member_count = 1;
  static constexpr std::array<std::string_view, member_count> member_names = {
    "tags",
  };
};

}  // namespace rosidl_generator_traits

#endif  // AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__TRAITS_HPP_
