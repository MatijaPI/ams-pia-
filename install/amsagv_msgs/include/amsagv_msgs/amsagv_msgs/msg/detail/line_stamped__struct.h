// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amsagv_msgs:msg/LineStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/line_stamped.h"


#ifndef AMSAGV_MSGS__MSG__DETAIL__LINE_STAMPED__STRUCT_H_
#define AMSAGV_MSGS__MSG__DETAIL__LINE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'line'
#include "amsagv_msgs/msg/detail/line__struct.h"

/// Struct defined in msg/LineStamped in the package amsagv_msgs.
typedef struct amsagv_msgs__msg__LineStamped
{
  std_msgs__msg__Header header;
  amsagv_msgs__msg__Line line;
} amsagv_msgs__msg__LineStamped;

// Struct for a sequence of amsagv_msgs__msg__LineStamped.
typedef struct amsagv_msgs__msg__LineStamped__Sequence
{
  amsagv_msgs__msg__LineStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amsagv_msgs__msg__LineStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMSAGV_MSGS__MSG__DETAIL__LINE_STAMPED__STRUCT_H_
