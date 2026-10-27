// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amsagv_msgs:msg/Tag.idl
// generated code does not contain a copyright notice
#include "amsagv_msgs/msg/detail/tag__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amsagv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amsagv_msgs/msg/detail/tag__struct.h"
#include "amsagv_msgs/msg/detail/tag__functions.h"
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


// forward declare type support functions


using _Tag__ros_msg_type = amsagv_msgs__msg__Tag;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_amsagv_msgs__msg__Tag(
  const amsagv_msgs__msg__Tag * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  // Field name: d
  {
    cdr << ros_message->d;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_deserialize_amsagv_msgs__msg__Tag(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__Tag * ros_message)
{
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: a
  {
    cdr >> ros_message->a;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  // Field name: d
  {
    cdr >> ros_message->d;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t get_serialized_size_amsagv_msgs__msg__Tag(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tag__ros_msg_type * ros_message = static_cast<const _Tag__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: d
  {
    size_t item_size = sizeof(ros_message->d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t max_serialized_size_amsagv_msgs__msg__Tag(
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

  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: d
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amsagv_msgs__msg__Tag;
    is_plain =
      (
      offsetof(DataType, d) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_key_amsagv_msgs__msg__Tag(
  const amsagv_msgs__msg__Tag * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  // Field name: d
  {
    cdr << ros_message->d;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t get_serialized_size_key_amsagv_msgs__msg__Tag(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tag__ros_msg_type * ros_message = static_cast<const _Tag__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: d
  {
    size_t item_size = sizeof(ros_message->d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t max_serialized_size_key_amsagv_msgs__msg__Tag(
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
  // Field name: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: a
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: b
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: d
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amsagv_msgs__msg__Tag;
    is_plain =
      (
      offsetof(DataType, d) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Tag__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amsagv_msgs__msg__Tag * ros_message = static_cast<const amsagv_msgs__msg__Tag *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_amsagv_msgs__msg__Tag(ros_message, cdr);
}

static bool _Tag__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amsagv_msgs__msg__Tag * ros_message = static_cast<amsagv_msgs__msg__Tag *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_amsagv_msgs__msg__Tag(cdr, ros_message);
}

static uint32_t _Tag__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amsagv_msgs__msg__Tag(
      untyped_ros_message, 0));
}

static size_t _Tag__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amsagv_msgs__msg__Tag(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_with_endpoint_amsagv_msgs__msg__Tag(
  const amsagv_msgs__msg__Tag * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  // Field name: d
  {
    cdr << ros_message->d;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_deserialize_with_endpoint_amsagv_msgs__msg__Tag(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__Tag * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: a
  {
    cdr >> ros_message->a;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  // Field name: d
  {
    cdr >> ros_message->d;
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _Tag__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amsagv_msgs__msg__Tag * ros_message =
    static_cast<const amsagv_msgs__msg__Tag *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_amsagv_msgs__msg__Tag(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _Tag__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amsagv_msgs__msg__Tag * ros_message =
    static_cast<amsagv_msgs__msg__Tag *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_amsagv_msgs__msg__Tag(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool has_buffer_fields_amsagv_msgs__msg__Tag()
{
  return
    false;
}

static message_type_support_callbacks_t __callbacks_Tag = {
  "amsagv_msgs::msg",
  "Tag",
  _Tag__cdr_serialize,
  _Tag__cdr_deserialize,
  _Tag__get_serialized_size,
  _Tag__max_serialized_size,
  nullptr,
  has_buffer_fields_amsagv_msgs__msg__Tag(),
  _Tag__cdr_serialize_with_endpoint,
  _Tag__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _Tag__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tag,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__Tag__get_type_hash,
  &amsagv_msgs__msg__Tag__get_type_description,
  &amsagv_msgs__msg__Tag__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amsagv_msgs, msg, Tag)() {
  return &_Tag__type_support;
}

#if defined(__cplusplus)
}
#endif
