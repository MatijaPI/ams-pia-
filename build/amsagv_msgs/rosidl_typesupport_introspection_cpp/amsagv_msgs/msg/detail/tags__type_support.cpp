// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from amsagv_msgs:msg/Tags.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "amsagv_msgs/msg/detail/tags__functions.h"
#include "amsagv_msgs/msg/detail/tags__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace amsagv_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Tags_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) amsagv_msgs::msg::Tags(_init);
}

void Tags_fini_function(void * message_memory)
{
  auto typed_message = static_cast<amsagv_msgs::msg::Tags *>(message_memory);
  typed_message->~Tags();
}

size_t size_function__Tags__tags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<amsagv_msgs::msg::Tag> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tags__tags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<amsagv_msgs::msg::Tag> *>(untyped_member);
  return &member[index];
}

void * get_function__Tags__tags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<amsagv_msgs::msg::Tag> *>(untyped_member);
  return &member[index];
}

void fetch_function__Tags__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const amsagv_msgs::msg::Tag *>(
    get_const_function__Tags__tags(untyped_member, index));
  auto & value = *reinterpret_cast<amsagv_msgs::msg::Tag *>(untyped_value);
  value = item;
}

void assign_function__Tags__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<amsagv_msgs::msg::Tag *>(
    get_function__Tags__tags(untyped_member, index));
  const auto & value = *reinterpret_cast<const amsagv_msgs::msg::Tag *>(untyped_value);
  item = value;
}

void resize_function__Tags__tags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<amsagv_msgs::msg::Tag> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Tags_message_member_array[1] = {
  {
    "tags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<amsagv_msgs::msg::Tag>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs::msg::Tags, tags),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tags__tags,  // size() function pointer
    get_const_function__Tags__tags,  // get_const(index) function pointer
    get_function__Tags__tags,  // get(index) function pointer
    fetch_function__Tags__tags,  // fetch(index, &value) function pointer
    assign_function__Tags__tags,  // assign(index, value) function pointer
    resize_function__Tags__tags,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Tags_message_members = {
  "amsagv_msgs::msg",  // message namespace
  "Tags",  // message name
  1,  // number of fields
  sizeof(amsagv_msgs::msg::Tags),
  false,  // has_any_key_member_
  Tags_message_member_array,  // message members
  Tags_init_function,  // function to initialize message memory (memory has to be allocated)
  Tags_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Tags_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Tags_message_members,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__Tags__get_type_hash,
  &amsagv_msgs__msg__Tags__get_type_description,
  &amsagv_msgs__msg__Tags__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace amsagv_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<amsagv_msgs::msg::Tags>()
{
  return &::amsagv_msgs::msg::rosidl_typesupport_introspection_cpp::Tags_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, amsagv_msgs, msg, Tags)() {
  return &::amsagv_msgs::msg::rosidl_typesupport_introspection_cpp::Tags_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
