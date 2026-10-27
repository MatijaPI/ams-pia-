// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amsagv_msgs:msg/ActionsStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/actions_stamped.h"


#ifndef AMSAGV_MSGS__MSG__DETAIL__ACTIONS_STAMPED__STRUCT_H_
#define AMSAGV_MSGS__MSG__DETAIL__ACTIONS_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'actions'
#include "amsagv_msgs/msg/detail/action_stamped__struct.h"

/// Struct defined in msg/ActionsStamped in the package amsagv_msgs.
typedef struct amsagv_msgs__msg__ActionsStamped
{
  amsagv_msgs__msg__ActionStamped__Sequence actions;
} amsagv_msgs__msg__ActionsStamped;

// Struct for a sequence of amsagv_msgs__msg__ActionsStamped.
typedef struct amsagv_msgs__msg__ActionsStamped__Sequence
{
  amsagv_msgs__msg__ActionsStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amsagv_msgs__msg__ActionsStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMSAGV_MSGS__MSG__DETAIL__ACTIONS_STAMPED__STRUCT_H_
