// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amsagv_msgs:msg/Line.idl
// generated code does not contain a copyright notice
#include "amsagv_msgs/msg/detail/line__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amsagv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amsagv_msgs/msg/detail/line__struct.h"
#include "amsagv_msgs/msg/detail/line__functions.h"
#include "fastcdr/Cdr.h"
#include "rosidl_typesupport_fastrtps_cpp/buffer_serialization.hpp"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // values
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // values

// forward declare type support functions


using _Line__ros_msg_type = amsagv_msgs__msg__Line;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_amsagv_msgs__msg__Line(
  const amsagv_msgs__msg__Line * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: values
  {
    // Regular path CPU fallback for rosidl_buffer-backed uint8[]
    if (ros_message->values.is_rosidl_buffer) {
      auto * buffer = reinterpret_cast<const rosidl::Buffer<uint8_t> *>(ros_message->values.data);
      if (buffer == nullptr) {
        fprintf(stderr, "null rosidl_buffer pointer for field 'values'\n");
        return false;
      }
      if (buffer->get_backend_type() == "cpu") {
        cdr << static_cast<uint32_t>(buffer->size());
        if (buffer->size() > 0) {
          cdr.serialize_array(buffer->data(), buffer->size());
        }
      } else {
        const std::vector<uint8_t> vec = buffer->to_vector();
        cdr << vec;
      }
    } else {
      size_t size = ros_message->values.size;
      auto array_ptr = ros_message->values.data;
      cdr << static_cast<uint32_t>(size);
      cdr.serialize_array(array_ptr, size);
    }
  }

  // Field name: left
  {
    cdr << ros_message->left;
  }

  // Field name: right
  {
    cdr << ros_message->right;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_deserialize_amsagv_msgs__msg__Line(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__Line * ros_message)
{
  // Field name: values
  {
    // Regular path CPU fallback for rosidl_buffer-backed uint8[]
    if (ros_message->values.is_rosidl_buffer) {
      auto * old_buffer = reinterpret_cast<rosidl::Buffer<uint8_t> *>(ros_message->values.data);
      delete old_buffer;
      ros_message->values.data = nullptr;
      ros_message->values.size = 0;
      ros_message->values.capacity = 0;
      ros_message->values.is_rosidl_buffer = false;
    }
    uint32_t seq_size = 0u;
    cdr >> seq_size;
    if (ros_message->values.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->values);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->values, seq_size)) {
      fprintf(stderr, "failed to create array for field 'values'");
      return false;
    }
    if (seq_size > 0) {
      cdr.deserialize_array(ros_message->values.data, seq_size);
    }
    ros_message->values.is_rosidl_buffer = false;
  }

  // Field name: left
  {
    cdr >> ros_message->left;
  }

  // Field name: right
  {
    cdr >> ros_message->right;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t get_serialized_size_amsagv_msgs__msg__Line(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Line__ros_msg_type * ros_message = static_cast<const _Line__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: values
  {
    if (ros_message->values.is_rosidl_buffer) {
      auto * buffer = reinterpret_cast<const rosidl::Buffer<uint8_t> *>(ros_message->values.data);
      if (buffer != nullptr) {
        current_alignment +=
          rosidl_typesupport_fastrtps_cpp::get_buffer_serialized_size(
          *buffer, current_alignment);
      }
    } else {
      size_t array_size = ros_message->values.size;
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
      current_alignment += array_size * sizeof(uint8_t) +
        eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint8_t));
    }
  }

  // Field name: left
  {
    size_t item_size = sizeof(ros_message->left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right
  {
    size_t item_size = sizeof(ros_message->right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t max_serialized_size_amsagv_msgs__msg__Line(
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

  // Field name: values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: distance
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
    using DataType = amsagv_msgs__msg__Line;
    is_plain =
      (
      offsetof(DataType, distance) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_key_amsagv_msgs__msg__Line(
  const amsagv_msgs__msg__Line * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: values
  {
    size_t size = ros_message->values.size;
    auto array_ptr = ros_message->values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: left
  {
    cdr << ros_message->left;
  }

  // Field name: right
  {
    cdr << ros_message->right;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t get_serialized_size_key_amsagv_msgs__msg__Line(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Line__ros_msg_type * ros_message = static_cast<const _Line__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: values
  {
    size_t array_size = ros_message->values.size;
    auto array_ptr = ros_message->values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: left
  {
    size_t item_size = sizeof(ros_message->left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: right
  {
    size_t item_size = sizeof(ros_message->right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
size_t max_serialized_size_key_amsagv_msgs__msg__Line(
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
  // Field name: values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: distance
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
    using DataType = amsagv_msgs__msg__Line;
    is_plain =
      (
      offsetof(DataType, distance) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Line__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amsagv_msgs__msg__Line * ros_message = static_cast<const amsagv_msgs__msg__Line *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_amsagv_msgs__msg__Line(ros_message, cdr);
}

static bool _Line__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amsagv_msgs__msg__Line * ros_message = static_cast<amsagv_msgs__msg__Line *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_amsagv_msgs__msg__Line(cdr, ros_message);
}

static uint32_t _Line__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amsagv_msgs__msg__Line(
      untyped_ros_message, 0));
}

static size_t _Line__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amsagv_msgs__msg__Line(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_serialize_with_endpoint_amsagv_msgs__msg__Line(
  const amsagv_msgs__msg__Line * ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: values
  {
    rosidl_typesupport_fastrtps_cpp::serialize_buffer_or_c_sequence_with_endpoint(
      cdr, ros_message->values, endpoint_info, serialization_context);
  }

  // Field name: left
  {
    cdr << ros_message->left;
  }

  // Field name: right
  {
    cdr << ros_message->right;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool cdr_deserialize_with_endpoint_amsagv_msgs__msg__Line(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs__msg__Line * ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Field name: values
  {
    if (!rosidl_typesupport_fastrtps_cpp::deserialize_buffer_or_c_sequence_with_endpoint(
        cdr, ros_message->values, endpoint_info, serialization_context))
    {
      fprintf(stderr, "Failed to deserialize buffer field 'values'\n");
      return false;
    }
  }

  // Field name: left
  {
    cdr >> ros_message->left;
  }

  // Field name: right
  {
    cdr >> ros_message->right;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  return true;
}  // NOLINT(readability/fn_size)

static bool _Line__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const amsagv_msgs__msg__Line * ros_message =
    static_cast<const amsagv_msgs__msg__Line *>(untyped_ros_message);
  return cdr_serialize_with_endpoint_amsagv_msgs__msg__Line(
    ros_message, cdr, endpoint_info, serialization_context);
}

static bool _Line__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  amsagv_msgs__msg__Line * ros_message =
    static_cast<amsagv_msgs__msg__Line *>(untyped_ros_message);
  return cdr_deserialize_with_endpoint_amsagv_msgs__msg__Line(
    cdr, ros_message, endpoint_info, serialization_context);
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amsagv_msgs
bool has_buffer_fields_amsagv_msgs__msg__Line()
{
  return
    true;
}

static message_type_support_callbacks_t __callbacks_Line = {
  "amsagv_msgs::msg",
  "Line",
  _Line__cdr_serialize,
  _Line__cdr_deserialize,
  _Line__get_serialized_size,
  _Line__max_serialized_size,
  nullptr,
  has_buffer_fields_amsagv_msgs__msg__Line(),
  _Line__cdr_serialize_with_endpoint,
  _Line__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _Line__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Line,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__Line__get_type_hash,
  &amsagv_msgs__msg__Line__get_type_description,
  &amsagv_msgs__msg__Line__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amsagv_msgs, msg, Line)() {
  return &_Line__type_support;
}

#if defined(__cplusplus)
}
#endif
