// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from amsagv_msgs:msg/LineStamped.idl
// generated code does not contain a copyright notice
#include "amsagv_msgs/msg/detail/line_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "amsagv_msgs/msg/detail/line_stamped__functions.h"
#include "amsagv_msgs/msg/detail/line_stamped__struct.hpp"

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
#include "amsagv_msgs/msg/detail/line_stamped__rosidl_typesupport_fastrtps_c.h"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_with_endpoint(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
bool cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace amsagv_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const amsagv_msgs::msg::Line &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  amsagv_msgs::msg::Line &);
size_t get_serialized_size(
  const amsagv_msgs::msg::Line &,
  size_t current_alignment);
size_t
max_serialized_size_Line(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const amsagv_msgs::msg::Line &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const amsagv_msgs::msg::Line &,
  size_t current_alignment);
size_t
max_serialized_size_key_Line(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_with_endpoint(
  const amsagv_msgs::msg::Line &,
  eprosima::fastcdr::Cdr &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
bool cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr &,
  amsagv_msgs::msg::Line &,
  const rmw_topic_endpoint_info_t &,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext &);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace amsagv_msgs


namespace amsagv_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
cdr_serialize(
  const amsagv_msgs::msg::LineStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: line
  amsagv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.line,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  amsagv_msgs::msg::LineStamped & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: line
  amsagv_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.line);

  return true;
}  // NOLINT(readability/fn_size)

// Endpoint-aware serialization. Always emitted so parent messages can recurse
// through non-Buffer intermediate message types.
bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
cdr_serialize_with_endpoint(
  const amsagv_msgs::msg::LineStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  try {
    // Member: header
    std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_with_endpoint(
      ros_message.header,
      cdr, endpoint_info, serialization_context);
    // Member: line
    amsagv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_with_endpoint(
      ros_message.line,
      cdr, endpoint_info, serialization_context);
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
  amsagv_msgs::msg::LineStamped & ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  (void)ros_message;
  (void)endpoint_info;
  (void)serialization_context;
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize_with_endpoint(
    cdr,
    ros_message.header,
    endpoint_info,
    serialization_context);

  // Member: line
  amsagv_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize_with_endpoint(
    cdr,
    ros_message.line,
    endpoint_info,
    serialization_context);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
get_serialized_size(
  const amsagv_msgs::msg::LineStamped & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: line
  current_alignment +=
    amsagv_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.line, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
max_serialized_size_LineStamped(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: line
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        amsagv_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Line(
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
    using DataType = amsagv_msgs::msg::LineStamped;
    is_plain =
      (
      offsetof(DataType, line) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
cdr_serialize_key(
  const amsagv_msgs::msg::LineStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: line
  amsagv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.line,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
get_serialized_size_key(
  const amsagv_msgs::msg::LineStamped & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: line
  current_alignment +=
    amsagv_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.line, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
max_serialized_size_key_LineStamped(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: line
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        amsagv_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Line(
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
    using DataType = amsagv_msgs::msg::LineStamped;
    is_plain =
      (
      offsetof(DataType, line) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _LineStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const amsagv_msgs::msg::LineStamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LineStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<amsagv_msgs::msg::LineStamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LineStamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const amsagv_msgs::msg::LineStamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LineStamped__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LineStamped(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

// Endpoint-aware serialization wrapper
static bool _LineStamped__cdr_serialize_with_endpoint(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<const amsagv_msgs::msg::LineStamped *>(
    untyped_ros_message);
  return cdr_serialize_with_endpoint(*typed_message, cdr, endpoint_info, serialization_context);
}

// Endpoint-aware deserialization wrapper
static bool _LineStamped__cdr_deserialize_with_endpoint(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message,
  const rmw_topic_endpoint_info_t & endpoint_info,
  const rosidl_typesupport_fastrtps_cpp::BufferSerializationContext & serialization_context)
{
  auto typed_message =
    static_cast<amsagv_msgs::msg::LineStamped *>(
    untyped_ros_message);
  return cdr_deserialize_with_endpoint(cdr, *typed_message, endpoint_info, serialization_context);
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amsagv_msgs
has_buffer_fields_LineStamped()
{
  return has_buffer_fields_amsagv_msgs__msg__LineStamped();
}

static message_type_support_callbacks_t _LineStamped__callbacks = {
  "amsagv_msgs::msg",
  "LineStamped",
  _LineStamped__cdr_serialize,
  _LineStamped__cdr_deserialize,
  _LineStamped__get_serialized_size,
  _LineStamped__max_serialized_size,
  nullptr,
  has_buffer_fields_LineStamped(),
  _LineStamped__cdr_serialize_with_endpoint,
  _LineStamped__cdr_deserialize_with_endpoint
};

static rosidl_message_type_support_t _LineStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LineStamped__callbacks,
  get_message_typesupport_handle_function,
  &amsagv_msgs__msg__LineStamped__get_type_hash,
  &amsagv_msgs__msg__LineStamped__get_type_description,
  &amsagv_msgs__msg__LineStamped__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace amsagv_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_amsagv_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<amsagv_msgs::msg::LineStamped>()
{
  return &amsagv_msgs::msg::typesupport_fastrtps_cpp::_LineStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amsagv_msgs, msg, LineStamped)() {
  return &amsagv_msgs::msg::typesupport_fastrtps_cpp::_LineStamped__handle;
}

#ifdef __cplusplus
}
#endif
