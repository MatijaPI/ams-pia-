// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amsagv_msgs:msg/TagsStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amsagv_msgs/msg/detail/tags_stamped__rosidl_typesupport_introspection_c.h"
#include "amsagv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amsagv_msgs/msg/detail/tags_stamped__functions.h"
#include "amsagv_msgs/msg/detail/tags_stamped__struct.h"


// Include directives for member types
// Member `tags`
#include "amsagv_msgs/msg/tag_stamped.h"
// Member `tags`
#include "amsagv_msgs/msg/detail/tag_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amsagv_msgs__msg__TagsStamped__init(message_memory);
}

void amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_fini_function(void * message_memory)
{
  amsagv_msgs__msg__TagsStamped__fini(message_memory);
}

size_t amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__size_function__TagsStamped__tags(
  const void * untyped_member)
{
  const amsagv_msgs__msg__TagStamped__Sequence * member =
    (const amsagv_msgs__msg__TagStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__get_const_function__TagsStamped__tags(
  const void * untyped_member, size_t index)
{
  const amsagv_msgs__msg__TagStamped__Sequence * member =
    (const amsagv_msgs__msg__TagStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__get_function__TagsStamped__tags(
  void * untyped_member, size_t index)
{
  amsagv_msgs__msg__TagStamped__Sequence * member =
    (amsagv_msgs__msg__TagStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__fetch_function__TagsStamped__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const amsagv_msgs__msg__TagStamped * item =
    ((const amsagv_msgs__msg__TagStamped *)
    amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__get_const_function__TagsStamped__tags(untyped_member, index));
  amsagv_msgs__msg__TagStamped * value =
    (amsagv_msgs__msg__TagStamped *)(untyped_value);
  *value = *item;
}

void amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__assign_function__TagsStamped__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  amsagv_msgs__msg__TagStamped * item =
    ((amsagv_msgs__msg__TagStamped *)
    amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__get_function__TagsStamped__tags(untyped_member, index));
  const amsagv_msgs__msg__TagStamped * value =
    (const amsagv_msgs__msg__TagStamped *)(untyped_value);
  *item = *value;
}

bool amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__resize_function__TagsStamped__tags(
  void * untyped_member, size_t size)
{
  amsagv_msgs__msg__TagStamped__Sequence * member =
    (amsagv_msgs__msg__TagStamped__Sequence *)(untyped_member);
  amsagv_msgs__msg__TagStamped__Sequence__fini(member);
  return amsagv_msgs__msg__TagStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_message_member_array[1] = {
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amsagv_msgs__msg__TagsStamped, tags),  // bytes offset in struct
    NULL,  // default value
    amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__size_function__TagsStamped__tags,  // size() function pointer
    amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__get_const_function__TagsStamped__tags,  // get_const(index) function pointer
    amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__get_function__TagsStamped__tags,  // get(index) function pointer
    amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__fetch_function__TagsStamped__tags,  // fetch(index, &value) function pointer
    amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__assign_function__TagsStamped__tags,  // assign(index, value) function pointer
    amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__resize_function__TagsStamped__tags,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_message_members = {
  "amsagv_msgs__msg",  // message namespace
  "TagsStamped",  // message name
  1,  // number of fields
  sizeof(amsagv_msgs__msg__TagsStamped),
  false,  // has_any_key_member_
  amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_message_member_array,  // message members
  amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_message_type_support_handle = {
  0,
  &amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_message_members,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__TagsStamped__get_type_hash,
  &amsagv_msgs__msg__TagsStamped__get_type_description,
  &amsagv_msgs__msg__TagsStamped__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amsagv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amsagv_msgs, msg, TagsStamped)() {
  amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amsagv_msgs, msg, TagStamped)();
  if (!amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_message_type_support_handle.typesupport_identifier) {
    amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amsagv_msgs__msg__TagsStamped__rosidl_typesupport_introspection_c__TagsStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
