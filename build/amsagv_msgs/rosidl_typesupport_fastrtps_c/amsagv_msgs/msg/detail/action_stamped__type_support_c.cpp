// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amsagv_msgs:msg/ActionStamped.idl
// generated code does not contain a copyright notice
#include "amsagv_msgs/msg/detail/action_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amsagv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amsagv_msgs/msg/detail/action_stamped__struct.h"
#include "amsagv_msgs/msg/detail/action_stamped__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "amsagv_msgs/msg/detail/action__functions.h"  // action
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_amsagv_msgs__msg__Action(
  const amsagv_msgs__msg__Action * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_amsagv_msgs__msg__Action(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__Action * ros_message);

size_t get_serialized_size_amsagv_msgs__msg__Action(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_amsagv_msgs__msg__Action(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_amsagv_msgs__msg__Action(
  const amsagv_msgs__msg__Action * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_amsagv_msgs__msg__Action(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_amsagv_msgs__msg__Action(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amsagv_msgs, msg, Action)();

bool cdr_serialize_with_endpoint_amsagv_msgs__msg__Action(
  const amsagv_msgs__msg__Action * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool cdr_deserialize_with_endpoint_amsagv_msgs__msg__Action(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__Action * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool has_buffer_fields_amsagv_msgs__msg__Action();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amsagv_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amsagv_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amsagv_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amsagv_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amsagv_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amsagv_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amsagv_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amsagv_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amsagv_msgs
bool cdr_serialize_with_endpoint_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amsagv_msgs
bool cdr_deserialize_with_endpoint_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_amsagv_msgs
bool has_buffer_fields_std_msgs__msg__Header();


using _ActionStamped__ros_msg_type = amsagv_msgs__msg__ActionStamped;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_amsagv_msgs__msg__ActionStamped(
  const amsagv_msgs__msg__ActionStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: action
  {
    cdr_serialize_amsagv_msgs__msg__Action(
      &ros_message->action, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_deserialize_amsagv_msgs__msg__ActionStamped(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__ActionStamped * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: action
  {
    cdr_deserialize_amsagv_msgs__msg__Action(cdr, &ros_message->action);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t get_serialized_size_amsagv_msgs__msg__ActionStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionStamped__ros_msg_type * ros_message = static_cast<const _ActionStamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: action
  current_alignment += get_serialized_size_amsagv_msgs__msg__Action(
    &(ros_message->action), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t max_serialized_size_amsagv_msgs__msg__ActionStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: action
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_amsagv_msgs__msg__Action(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amsagv_msgs__msg__ActionStamped;
    is_plain =
      (
      offsetof(DataType, action) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_key_amsagv_msgs__msg__ActionStamped(
  const amsagv_msgs__msg__ActionStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: action
  {
    cdr_serialize_key_amsagv_msgs__msg__Action(
      &ros_message->action, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t get_serialized_size_key_amsagv_msgs__msg__ActionStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionStamped__ros_msg_type * ros_message = static_cast<const _ActionStamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: action
  current_alignment += get_serialized_size_key_amsagv_msgs__msg__Action(
    &(ros_message->action), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t max_serialized_size_key_amsagv_msgs__msg__ActionStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: action
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_amsagv_msgs__msg__Action(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amsagv_msgs__msg__ActionStamped;
    is_plain =
      (
      offsetof(DataType, action) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ActionStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amsagv_msgs__msg__ActionStamped * ros_message = static_cast<const amsagv_msgs__msg__ActionStamped *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_amsagv_msgs__msg__ActionStamped(ros_message, cdr);
}

static bool _ActionStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amsagv_msgs__msg__ActionStamped * ros_message = static_cast<amsagv_msgs__msg__ActionStamped *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_amsagv_msgs__msg__ActionStamped(cdr, ros_message);
}

static uint32_t _ActionStamped__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amsagv_msgs__msg__ActionStamped(
      untyped_ros_message, 0));
}

static size_t _ActionStamped__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amsagv_msgs__msg__ActionStamped(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_with_endpoint_amsagv_msgs__msg__ActionStamped(
  const amsagv_msgs__msg__ActionStamped * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: header
  {
    cdr_serialize_with_endpoint_std_msgs__msg__Header(
      &ros_message->header, cdr, endpoint_info, serialization_context);
  }

  // Field name: action
  {
    cdr_serialize_with_endpoint_amsagv_msgs__msg__Action(
      &ros_message->action, cdr, endpoint_info, serialization_context);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_deserialize_with_endpoint_amsagv_msgs__msg__ActionStamped(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__ActionStamped * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: header
  {
    cdr_deserialize_with_endpoint_std_msgs__msg__Header(cdr, &ros_message->header, endpoint_info, serialization_context);
  }

  // Field name: action
  {
    cdr_deserialize_with_endpoint_amsagv_msgs__msg__Action(cdr, &ros_message->action, endpoint_info, serialization_context);
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _ActionStamped__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amsagv_msgs__msg__ActionStamped * ros_message =
    static_cast<const amsagv_msgs__msg__ActionStamped *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_amsagv_msgs__msg__ActionStamped(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _ActionStamped__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amsagv_msgs__msg__ActionStamped * ros_message =
    static_cast<amsagv_msgs__msg__ActionStamped *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_amsagv_msgs__msg__ActionStamped(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool has_buffer_fields_amsagv_msgs__msg__ActionStamped()
{
  return
    has_buffer_fields_std_msgs__msg__Header() ||
    has_buffer_fields_amsagv_msgs__msg__Action();
}

static message_type_support_callbacks_t __callbacks_ActionStamped = {
  "amsagv_msgs::msg",
  "ActionStamped",
  _ActionStamped__cdr_serialize,
  _ActionStamped__cdr_deserialize,
  _ActionStamped__get_serialized_size,
  _ActionStamped__max_serialized_size,
  nullptr,
  has_buffer_fields_amsagv_msgs__msg__ActionStamped(),
  _ActionStamped__cdr_serialize_with_endpoint,
  _ActionStamped__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _ActionStamped__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionStamped,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__ActionStamped__get_type_hash,
  &amsagv_msgs__msg__ActionStamped__get_type_description,
  &amsagv_msgs__msg__ActionStamped__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amsagv_msgs, msg, ActionStamped)() {
  return &_ActionStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
