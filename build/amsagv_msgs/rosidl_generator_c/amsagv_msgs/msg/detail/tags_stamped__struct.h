// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amsagv_msgs:msg/TagsStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/tags_stamped.h"


#ifndef AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__STRUCT_H_
#define AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'tags'
#include "amsagv_msgs/msg/detail/tag_stamped__struct.h"

/// Struct defined in msg/TagsStamped in the package amsagv_msgs.
typedef struct amsagv_msgs__msg__TagsStamped
{
  amsagv_msgs__msg__TagStamped__Sequence tags;
} amsagv_msgs__msg__TagsStamped;

// Struct for a sequence of amsagv_msgs__msg__TagsStamped.
typedef struct amsagv_msgs__msg__TagsStamped__Sequence
{
  amsagv_msgs__msg__TagsStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amsagv_msgs__msg__TagsStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMSAGV_MSGS__MSG__DETAIL__TAGS_STAMPED__STRUCT_H_
