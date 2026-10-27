// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from amsagv_msgs:msg/TagStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "amsagv_msgs/msg/detail/tag_stamped__functions.h"
#include "amsagv_msgs/msg/detail/tag_stamped__struct.hpp"
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

void TagStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) amsagv_msgs::msg::TagStamped(_init);
}

void TagStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<amsagv_msgs::msg::TagStamped *>(message_memory);
  typed_message->~TagStamped();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TagStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs::msg::TagStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "tag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<amsagv_msgs::msg::Tag>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs::msg::TagStamped, tag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TagStamped_message_members = {
  "amsagv_msgs::msg",  // message namespace
  "TagStamped",  // message name
  2,  // number of fields
  sizeof(amsagv_msgs::msg::TagStamped),
  false,  // has_any_key_member_
  TagStamped_message_member_array,  // message members
  TagStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  TagStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TagStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TagStamped_message_members,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__TagStamped__get_type_hash,
  &amsagv_msgs__msg__TagStamped__get_type_description,
  &amsagv_msgs__msg__TagStamped__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace amsagv_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<amsagv_msgs::msg::TagStamped>()
{
  return &::amsagv_msgs::msg::rosidl_typesupport_introspection_cpp::TagStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, amsagv_msgs, msg, TagStamped)() {
  return &::amsagv_msgs::msg::rosidl_typesupport_introspection_cpp::TagStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
