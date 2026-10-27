// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amsagv_msgs:msg/Action.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/action.h"


#ifndef AMSAGV_MSGS__MSG__DETAIL__ACTION__STRUCT_H_
#define AMSAGV_MSGS__MSG__DETAIL__ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Action in the package amsagv_msgs.
typedef struct amsagv_msgs__msg__Action
{
  rosidl_runtime_c__String name;
  uint32_t id;
  float distance;
} amsagv_msgs__msg__Action;

// Struct for a sequence of amsagv_msgs__msg__Action.
typedef struct amsagv_msgs__msg__Action__Sequence
{
  amsagv_msgs__msg__Action * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amsagv_msgs__msg__Action__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMSAGV_MSGS__MSG__DETAIL__ACTION__STRUCT_H_
