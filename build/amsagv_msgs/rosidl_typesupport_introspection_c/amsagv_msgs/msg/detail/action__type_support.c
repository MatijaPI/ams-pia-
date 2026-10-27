// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amsagv_msgs:msg/Action.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amsagv_msgs/msg/detail/action__rosidl_typesupport_introspection_c.h"
#include "amsagv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amsagv_msgs/msg/detail/action__functions.h"
#include "amsagv_msgs/msg/detail/action__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amsagv_msgs__msg__Action__init(message_memory);
}

void amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_fini_function(void * message_memory)
{
  amsagv_msgs__msg__Action__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs__msg__Action, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs__msg__Action, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs__msg__Action, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_message_members = {
  "amsagv_msgs__msg",  // message namespace
  "Action",  // message name
  3,  // number of fields
  sizeof(amsagv_msgs__msg__Action),
  false,  // has_any_key_member_
  amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array,  // message members
  amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_init_function,  // function to initialize message memory (memory has to be allocated)
  amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_message_type_support_handle = {
  0,
  &amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_message_members,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__Action__get_type_hash,
  &amsagv_msgs__msg__Action__get_type_description,
  &amsagv_msgs__msg__Action__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amsagv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amsagv_msgs, msg, Action)() {
  if (!amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_message_type_support_handle.typesupport_identifier) {
    amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amsagv_msgs__msg__Action__rosidl_typesupport_introspection_c__Action_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
