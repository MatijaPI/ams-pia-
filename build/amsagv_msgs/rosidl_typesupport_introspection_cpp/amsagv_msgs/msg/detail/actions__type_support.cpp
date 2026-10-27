// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from amsagv_msgs:msg/Actions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "amsagv_msgs/msg/detail/actions__functions.h"
#include "amsagv_msgs/msg/detail/actions__struct.hpp"
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

void Actions_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) amsagv_msgs::msg::Actions(_init);
}

void Actions_fini_function(void * message_memory)
{
  auto typed_message = static_cast<amsagv_msgs::msg::Actions *>(message_memory);
  typed_message->~Actions();
}

size_t size_function__Actions__actions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<amsagv_msgs::msg::Action> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Actions__actions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<amsagv_msgs::msg::Action> *>(untyped_member);
  return &member[index];
}

void * get_function__Actions__actions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<amsagv_msgs::msg::Action> *>(untyped_member);
  return &member[index];
}

void fetch_function__Actions__actions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const amsagv_msgs::msg::Action *>(
    get_const_function__Actions__actions(untyped_member, index));
  auto & value = *reinterpret_cast<amsagv_msgs::msg::Action *>(untyped_value);
  value = item;
}

void assign_function__Actions__actions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<amsagv_msgs::msg::Action *>(
    get_function__Actions__actions(untyped_member, index));
  const auto & value = *reinterpret_cast<const amsagv_msgs::msg::Action *>(untyped_value);
  item = value;
}

void resize_function__Actions__actions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<amsagv_msgs::msg::Action> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Actions_message_member_array[1] = {
  {
    "actions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<amsagv_msgs::msg::Action>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs::msg::Actions, actions),  // bytes offset in struct
    nullptr,  // default value
    size_function__Actions__actions,  // size() function pointer
    get_const_function__Actions__actions,  // get_const(index) function pointer
    get_function__Actions__actions,  // get(index) function pointer
    fetch_function__Actions__actions,  // fetch(index, &value) function pointer
    assign_function__Actions__actions,  // assign(index, value) function pointer
    resize_function__Actions__actions,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Actions_message_members = {
  "amsagv_msgs::msg",  // message namespace
  "Actions",  // message name
  1,  // number of fields
  sizeof(amsagv_msgs::msg::Actions),
  false,  // has_any_key_member_
  Actions_message_member_array,  // message members
  Actions_init_function,  // function to initialize message memory (memory has to be allocated)
  Actions_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Actions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Actions_message_members,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__Actions__get_type_hash,
  &amsagv_msgs__msg__Actions__get_type_description,
  &amsagv_msgs__msg__Actions__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace amsagv_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<amsagv_msgs::msg::Actions>()
{
  return &::amsagv_msgs::msg::rosidl_typesupport_introspection_cpp::Actions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, amsagv_msgs, msg, Actions)() {
  return &::amsagv_msgs::msg::rosidl_typesupport_introspection_cpp::Actions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
