// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from amsagv_msgs:msg/Line.idl
// generated code does not contain a copyright notice
#include "amsagv_msgs/msg/detail/line__rosidl_typesupport_fastrtps_cpp.hpp"
#include "amsagv_msgs/msg/detail/line__functions.h"
#include "amsagv_msgs/msg/detail/line__struct.hpp"

#include <cstddef>
#include <cstdio>
#include <limits>
#include <stdexcept>
#include <string>
#include "rcutils/logging_macros.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "amsagv_msgs/msg/detail/line__rosidl_typesupport_fastrtps_c.h"
#include "fastcdr/Cdr.h"
#include "rosidl_typesupport_fastrtps_cpp/buffer_serialization.hpp"


// forward declaration of message dependencies and their conversion functions

namespace amsagv_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
cdr_serialize(
  const amsagv_msgs::msg::Line & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: values
  {
    if (ros_message.values.get_backend_type() == "cpu") {
      const std::vector<uint8_t> & vec = ros_message.values;
      cdr << vec;
    } else {
      std::vector<uint8_t> vec = ros_message.values.to_vector();
      cdr << vec;
    }
  }

  // Member: left
  cdr << ros_message.left;

  // Member: right
  cdr << ros_message.right;

  // Member: heading
  cdr << ros_message.heading;

  // Member: distance
  cdr << ros_message.distance;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs::msg::Line & ros_message)
{
  // Member: values
  {
    cdr >> ros_message.values;
  }

  // Member: left
  cdr >> ros_message.left;

  // Member: right
  cdr >> ros_message.right;

  // Member: heading
  cdr >> ros_message.heading;

  // Member: distance
  cdr >> ros_message.distance;

  return true;
}  // NOLINT(readability/fn_size)

// Endpoint-aware serialization. Always emitted so parent messages can recurse
// through non-Buffer intermediate message types.
bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
cdr_serialize_with_endpoint(
  const amsagv_msgs::msg::Line & ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  try {
    // Member: values
    {
      rosidl_typesupport_fastrtps_cpp::serialize_buffer_with_endpoint(
        cdr, ros_message.values, endpoint_info, serialization_context);
    }
    // Member: left
    cdr << ros_message.left;
    // Member: right
    cdr << ros_message.right;
    // Member: heading
    cdr << ros_message.heading;
    // Member: distance
    cdr << ros_message.distance;
  } catch (const std::exception & e) {
    RCUTILS_LOG_ERROR_NAMED(
      "amsagv_msgs.typesupport_fastrtps_cpp",
      "cdr_serialize_with_endpoint failed: %s", e.what());
    return false;
  }
  return true;
}

// Endpoint-aware deserialization. Always emitted so parent messages can recurse
// through non-Buffer intermediate message types.
bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs::msg::Line & ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Member: values
  {
    if (!rosidl_typesupport_fastrtps_cpp::deserialize_buffer_with_endpoint(
        cdr, ros_message.values, endpoint_info, serialization_context))
    {
      RCUTILS_LOG_ERROR_NAMED(
        "amsagv_msgs.typesupport_fastrtps_cpp",
        "cdr_deserialize_with_endpoint: failed to deserialize 'values'");
      return false;
    }
  }

  // Member: left
  cdr >> ros_message.left;

  // Member: right
  cdr >> ros_message.right;

  // Member: heading
  cdr >> ros_message.heading;

  // Member: distance
  cdr >> ros_message.distance;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
get_serialized_size(
  const amsagv_msgs::msg::Line & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: values
  current_alignment +=
    rosidl_typesupport_fastrtps_cpp::get_buffer_serialized_size(
    ros_message.values, current_alignment);

  // Member: left
  {
    size_t item_size = sizeof(ros_message.left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right
  {
    size_t item_size = sizeof(ros_message.right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: distance
  {
    size_t item_size = sizeof(ros_message.distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
max_serialized_size_Line(
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

  // Member: values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: distance
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
    using DataType = amsagv_msgs::msg::Line;
    is_plain =
      (
      offsetof(DataType, distance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
cdr_serialize_key(
  const amsagv_msgs::msg::Line & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: values
  {
    if (ros_message.values.get_backend_type() == "cpu") {
      const std::vector<uint8_t> & vec = ros_message.values;
      cdr << vec;
    } else {
      std::vector<uint8_t> vec = ros_message.values.to_vector();
      cdr << vec;
    }
  }

  // Member: left
  cdr << ros_message.left;

  // Member: right
  cdr << ros_message.right;

  // Member: heading
  cdr << ros_message.heading;

  // Member: distance
  cdr << ros_message.distance;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
get_serialized_size_key(
  const amsagv_msgs::msg::Line & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: values
  current_alignment +=
    rosidl_typesupport_fastrtps_cpp::get_buffer_serialized_size(
    ros_message.values, current_alignment);

  // Member: left
  {
    size_t item_size = sizeof(ros_message.left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: right
  {
    size_t item_size = sizeof(ros_message.right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: distance
  {
    size_t item_size = sizeof(ros_message.distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
max_serialized_size_key_Line(
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

  // Member: values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: distance
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
    using DataType = amsagv_msgs::msg::Line;
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
  auto typed_message =
    static_cast<const amsagv_msgs::msg::Line *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Line__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<amsagv_msgs::msg::Line *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Line__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const amsagv_msgs::msg::Line *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Line__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Line(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

// Endpoint-aware serialization wrapper
static bool _Line__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<const amsagv_msgs::msg::Line *>(
    untyped_ros_message);
  return cdr_serialize_with_endpoint(*typed_message, cdr, endpoint_info, serialization_context);
}

// Endpoint-aware deserialization wrapper
static bool _Line__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<amsagv_msgs::msg::Line *>(
    untyped_ros_message);
  return cdr_deserialize_with_endpoint(cdr, *typed_message, endpoint_info, serialization_context);
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
has_buffer_fields_Line()
{
  return has_buffer_fields_amsagv_msgs__msg__Line();
}

static message_type_support_callbacks_t _Line__callbacks = {
  "amsagv_msgs::msg",
  "Line",
  _Line__cdr_serialize,
  _Line__cdr_deserialize,
  _Line__get_serialized_size,
  _Line__max_serialized_size,
  nullptr,
  has_buffer_fields_Line(),
  _Line__cdr_serialize_with_endpoint,
  _Line__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _Line__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Line__callbacks,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__Line__get_type_hash,
  &amsagv_msgs__msg__Line__get_type_description,
  &amsagv_msgs__msg__Line__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace amsagv_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_amsagv_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<amsagv_msgs::msg::Line>()
{
  return &amsagv_msgs::msg::typesupport_fastrtps_cpp::_Line__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amsagv_msgs, msg, Line)() {
  return &amsagv_msgs::msg::typesupport_fastrtps_cpp::_Line__handle;
}

#ifdef __cplusplus
}
#endif
