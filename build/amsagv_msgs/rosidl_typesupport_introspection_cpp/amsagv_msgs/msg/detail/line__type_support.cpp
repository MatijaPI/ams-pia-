// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from amsagv_msgs:msg/Line.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "amsagv_msgs/msg/detail/line__functions.h"
#include "amsagv_msgs/msg/detail/line__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"
#include "rosidl_buffer/buffer.hpp"

namespace amsagv_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Line_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) amsagv_msgs::msg::Line(_init);
}

void Line_fini_function(void * message_memory)
{
  auto typed_message = static_cast<amsagv_msgs::msg::Line *>(message_memory);
  typed_message->~Line();
}

size_t size_function__Line__values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const rosidl::Buffer<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Line__values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const rosidl::Buffer<uint8_t> *>(untyped_member);
  member.throw_if_not_cpu_backend();
  return &member[index];
}

void * get_function__Line__values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<rosidl::Buffer<uint8_t> *>(untyped_member);
  member.throw_if_not_cpu_backend();
  return &member[index];
}

void fetch_function__Line__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Line__values(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Line__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Line__values(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__Line__values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<rosidl::Buffer<uint8_t> *>(untyped_member);
  member->throw_if_not_cpu_backend();
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Line_message_member_array[5] = {
  {
    "values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs::msg::Line, values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Line__values,  // size() function pointer
    get_const_function__Line__values,  // get_const(index) function pointer
    get_function__Line__values,  // get(index) function pointer
    fetch_function__Line__values,  // fetch(index, &value) function pointer
    assign_function__Line__values,  // assign(index, value) function pointer
    resize_function__Line__values,  // resize(index) function pointer
    true  // is_rosidl_buffer
  },
  {
    "left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs::msg::Line, left),  // bytes offset in struct
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
    "right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs::msg::Line, right),  // bytes offset in struct
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
    "heading",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs::msg::Line, heading),  // bytes offset in struct
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
    "distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs::msg::Line, distance),  // bytes offset in struct
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

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Line_message_members = {
  "amsagv_msgs::msg",  // message namespace
  "Line",  // message name
  5,  // number of fields
  sizeof(amsagv_msgs::msg::Line),
  false,  // has_any_key_member_
  Line_message_member_array,  // message members
  Line_init_function,  // function to initialize message memory (memory has to be allocated)
  Line_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Line_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Line_message_members,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__Line__get_type_hash,
  &amsagv_msgs__msg__Line__get_type_description,
  &amsagv_msgs__msg__Line__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace amsagv_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<amsagv_msgs::msg::Line>()
{
  return &::amsagv_msgs::msg::rosidl_typesupport_introspection_cpp::Line_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, amsagv_msgs, msg, Line)() {
  return &::amsagv_msgs::msg::rosidl_typesupport_introspection_cpp::Line_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
