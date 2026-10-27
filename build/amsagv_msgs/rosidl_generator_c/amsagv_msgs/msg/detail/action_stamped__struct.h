// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amsagv_msgs:msg/ActionStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/action_stamped.h"


#ifndef AMSAGV_MSGS__MSG__DETAIL__ACTION_STAMPED__STRUCT_H_
#define AMSAGV_MSGS__MSG__DETAIL__ACTION_STAMPED__STRUCT_H_

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
// Member 'action'
#include "amsagv_msgs/msg/detail/action__struct.h"

/// Struct defined in msg/ActionStamped in the package amsagv_msgs.
typedef struct amsagv_msgs__msg__ActionStamped
{
  std_msgs__msg__Header header;
  amsagv_msgs__msg__Action action;
} amsagv_msgs__msg__ActionStamped;

// Struct for a sequence of amsagv_msgs__msg__ActionStamped.
typedef struct amsagv_msgs__msg__ActionStamped__Sequence
{
  amsagv_msgs__msg__ActionStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amsagv_msgs__msg__ActionStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMSAGV_MSGS__MSG__DETAIL__ACTION_STAMPED__STRUCT_H_
