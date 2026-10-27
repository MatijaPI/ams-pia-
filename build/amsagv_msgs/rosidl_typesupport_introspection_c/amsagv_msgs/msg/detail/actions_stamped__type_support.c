// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amsagv_msgs:msg/ActionsStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amsagv_msgs/msg/detail/actions_stamped__rosidl_typesupport_introspection_c.h"
#include "amsagv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amsagv_msgs/msg/detail/actions_stamped__functions.h"
#include "amsagv_msgs/msg/detail/actions_stamped__struct.h"


// Include directives for member types
// Member `actions`
#include "amsagv_msgs/msg/action_stamped.h"
// Member `actions`
#include "amsagv_msgs/msg/detail/action_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amsagv_msgs__msg__ActionsStamped__init(message_memory);
}

void amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_fini_function(void * message_memory)
{
  amsagv_msgs__msg__ActionsStamped__fini(message_memory);
}

size_t amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__size_function__ActionsStamped__actions(
  const void * untyped_member)
{
  const amsagv_msgs__msg__ActionStamped__Sequence * member =
    (const amsagv_msgs__msg__ActionStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__get_const_function__ActionsStamped__actions(
  const void * untyped_member, size_t index)
{
  const amsagv_msgs__msg__ActionStamped__Sequence * member =
    (const amsagv_msgs__msg__ActionStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__get_function__ActionsStamped__actions(
  void * untyped_member, size_t index)
{
  amsagv_msgs__msg__ActionStamped__Sequence * member =
    (amsagv_msgs__msg__ActionStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__fetch_function__ActionsStamped__actions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const amsagv_msgs__msg__ActionStamped * item =
    ((const amsagv_msgs__msg__ActionStamped *)
    amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__get_const_function__ActionsStamped__actions(untyped_member, index));
  amsagv_msgs__msg__ActionStamped * value =
    (amsagv_msgs__msg__ActionStamped *)(untyped_value);
  *value = *item;
}

void amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__assign_function__ActionsStamped__actions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  amsagv_msgs__msg__ActionStamped * item =
    ((amsagv_msgs__msg__ActionStamped *)
    amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__get_function__ActionsStamped__actions(untyped_member, index));
  const amsagv_msgs__msg__ActionStamped * value =
    (const amsagv_msgs__msg__ActionStamped *)(untyped_value);
  *item = *value;
}

bool amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__resize_function__ActionsStamped__actions(
  void * untyped_member, size_t size)
{
  amsagv_msgs__msg__ActionStamped__Sequence * member =
    (amsagv_msgs__msg__ActionStamped__Sequence *)(untyped_member);
  amsagv_msgs__msg__ActionStamped__Sequence__fini(member);
  return amsagv_msgs__msg__ActionStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_message_member_array[1] = {
  {
    "actions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs__msg__ActionsStamped, actions),  // bytes offset in struct
    NULL,  // default value
    amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__size_function__ActionsStamped__actions,  // size() function pointer
    amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__get_const_function__ActionsStamped__actions,  // get_const(index) function pointer
    amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__get_function__ActionsStamped__actions,  // get(index) function pointer
    amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__fetch_function__ActionsStamped__actions,  // fetch(index, &value) function pointer
    amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__assign_function__ActionsStamped__actions,  // assign(index, value) function pointer
    amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__resize_function__ActionsStamped__actions,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_message_members = {
  "amsagv_msgs__msg",  // message namespace
  "ActionsStamped",  // message name
  1,  // number of fields
  sizeof(amsagv_msgs__msg__ActionsStamped),
  false,  // has_any_key_member_
  amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_message_member_array,  // message members
  amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_message_type_support_handle = {
  0,
  &amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_message_members,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__ActionsStamped__get_type_hash,
  &amsagv_msgs__msg__ActionsStamped__get_type_description,
  &amsagv_msgs__msg__ActionsStamped__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amsagv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amsagv_msgs, msg, ActionsStamped)() {
  amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amsagv_msgs, msg, ActionStamped)();
  if (!amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_message_type_support_handle.typesupport_identifier) {
    amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amsagv_msgs__msg__ActionsStamped__rosidl_typesupport_introspection_c__ActionsStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
