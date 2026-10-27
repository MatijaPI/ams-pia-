// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amsagv_msgs:msg/Tags.idl
// generated code does not contain a copyright notice
#include "amsagv_msgs/msg/detail/tags__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amsagv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amsagv_msgs/msg/detail/tags__struct.h"
#include "amsagv_msgs/msg/detail/tags__functions.h"
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

#include "amsagv_msgs/msg/detail/tag__functions.h"  // tags

// forward declare type support functions

bool cdr_serialize_amsagv_msgs__msg__Tag(
  const amsagv_msgs__msg__Tag * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_amsagv_msgs__msg__Tag(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__Tag * ros_message);

size_t get_serialized_size_amsagv_msgs__msg__Tag(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_amsagv_msgs__msg__Tag(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_amsagv_msgs__msg__Tag(
  const amsagv_msgs__msg__Tag * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_amsagv_msgs__msg__Tag(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_amsagv_msgs__msg__Tag(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amsagv_msgs, msg, Tag)();

bool cdr_serialize_with_endpoint_amsagv_msgs__msg__Tag(
  const amsagv_msgs__msg__Tag * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool cdr_deserialize_with_endpoint_amsagv_msgs__msg__Tag(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__Tag * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context);

bool has_buffer_fields_amsagv_msgs__msg__Tag();


using _Tags__ros_msg_type = amsagv_msgs__msg__Tags;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_amsagv_msgs__msg__Tags(
  const amsagv_msgs__msg__Tags * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: tags
  {
    size_t size = ros_message->tags.size;
    auto array_ptr = ros_message->tags.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_amsagv_msgs__msg__Tag(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_deserialize_amsagv_msgs__msg__Tags(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__Tags * ros_message)
{
  // Field name: tags
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->tags.data) {
      amsagv_msgs__msg__Tag__Sequence__fini(&ros_message->tags);
    }
    if (!amsagv_msgs__msg__Tag__Sequence__init(&ros_message->tags, size)) {
      fprintf(stderr, "failed to create array for field 'tags'");
      return false;
    }
    auto array_ptr = ros_message->tags.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_amsagv_msgs__msg__Tag(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t get_serialized_size_amsagv_msgs__msg__Tags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tags__ros_msg_type * ros_message = static_cast<const _Tags__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: tags
  {
    size_t array_size = ros_message->tags.size;
    auto array_ptr = ros_message->tags.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_amsagv_msgs__msg__Tag(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t max_serialized_size_amsagv_msgs__msg__Tags(
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

  // Field name: tags
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_amsagv_msgs__msg__Tag(
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
    using DataType = amsagv_msgs__msg__Tags;
    is_plain =
      (
      offsetof(DataType, tags) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_key_amsagv_msgs__msg__Tags(
  const amsagv_msgs__msg__Tags * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: tags
  {
    size_t size = ros_message->tags.size;
    auto array_ptr = ros_message->tags.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_amsagv_msgs__msg__Tag(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t get_serialized_size_key_amsagv_msgs__msg__Tags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tags__ros_msg_type * ros_message = static_cast<const _Tags__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: tags
  {
    size_t array_size = ros_message->tags.size;
    auto array_ptr = ros_message->tags.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_amsagv_msgs__msg__Tag(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t max_serialized_size_key_amsagv_msgs__msg__Tags(
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
  // Field name: tags
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_amsagv_msgs__msg__Tag(
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
    using DataType = amsagv_msgs__msg__Tags;
    is_plain =
      (
      offsetof(DataType, tags) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Tags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amsagv_msgs__msg__Tags * ros_message = static_cast<const amsagv_msgs__msg__Tags *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_amsagv_msgs__msg__Tags(ros_message, cdr);
}

static bool _Tags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amsagv_msgs__msg__Tags * ros_message = static_cast<amsagv_msgs__msg__Tags *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_amsagv_msgs__msg__Tags(cdr, ros_message);
}

static uint32_t _Tags__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amsagv_msgs__msg__Tags(
      untyped_ros_message, 0));
}

static size_t _Tags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amsagv_msgs__msg__Tags(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_with_endpoint_amsagv_msgs__msg__Tags(
  const amsagv_msgs__msg__Tags * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: tags
  {
    size_t size = ros_message->tags.size;
    auto array_ptr = ros_message->tags.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_with_endpoint_amsagv_msgs__msg__Tag(
        &array_ptr[i], cdr, endpoint_info, serialization_context);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_deserialize_with_endpoint_amsagv_msgs__msg__Tags(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__Tags * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: tags
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->tags.data) {
      amsagv_msgs__msg__Tag__Sequence__fini(&ros_message->tags);
    }
    if (!amsagv_msgs__msg__Tag__Sequence__init(&ros_message->tags, size)) {
      fprintf(stderr, "failed to create array for field 'tags'");
      return false;
    }
    auto array_ptr = ros_message->tags.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_with_endpoint_amsagv_msgs__msg__Tag(cdr, &array_ptr[i], endpoint_info, serialization_context);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _Tags__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amsagv_msgs__msg__Tags * ros_message =
    static_cast<const amsagv_msgs__msg__Tags *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_amsagv_msgs__msg__Tags(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _Tags__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amsagv_msgs__msg__Tags * ros_message =
    static_cast<amsagv_msgs__msg__Tags *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_amsagv_msgs__msg__Tags(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool has_buffer_fields_amsagv_msgs__msg__Tags()
{
  return
    has_buffer_fields_amsagv_msgs__msg__Tag();
}

static message_type_support_callbacks_t __callbacks_Tags = {
  "amsagv_msgs::msg",
  "Tags",
  _Tags__cdr_serialize,
  _Tags__cdr_deserialize,
  _Tags__get_serialized_size,
  _Tags__max_serialized_size,
  nullptr,
  has_buffer_fields_amsagv_msgs__msg__Tags(),
  _Tags__cdr_serialize_with_endpoint,
  _Tags__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _Tags__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tags,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__Tags__get_type_hash,
  &amsagv_msgs__msg__Tags__get_type_description,
  &amsagv_msgs__msg__Tags__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amsagv_msgs, msg, Tags)() {
  return &_Tags__type_support;
}

#if defined(__cplusplus)
}
#endif
