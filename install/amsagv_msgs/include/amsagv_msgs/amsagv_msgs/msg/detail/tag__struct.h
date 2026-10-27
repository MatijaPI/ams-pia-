// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amsagv_msgs:msg/Tag.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amsagv_msgs/msg/tag.h"


#ifndef AMSAGV_MSGS__MSG__DETAIL__TAG__STRUCT_H_
#define AMSAGV_MSGS__MSG__DETAIL__TAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Tag in the package amsagv_msgs.
typedef struct amsagv_msgs__msg__Tag
{
  int64_t id;
  int64_t a;
  int64_t b;
  float d;
} amsagv_msgs__msg__Tag;

// Struct for a sequence of amsagv_msgs__msg__Tag.
typedef struct amsagv_msgs__msg__Tag__Sequence
{
  amsagv_msgs__msg__Tag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amsagv_msgs__msg__Tag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMSAGV_MSGS__MSG__DETAIL__TAG__STRUCT_H_
