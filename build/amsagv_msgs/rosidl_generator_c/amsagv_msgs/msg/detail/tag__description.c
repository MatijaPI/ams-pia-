// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amsagv_msgs:msg/Tag.idl
// generated code does not contain a copyright notice

#include "amsagv_msgs/msg/detail/tag__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amsagv_msgs
const rosidl_type_hash_t *
amsagv_msgs__msg__Tag__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0xab, 0x0c, 0xa1, 0xf9, 0x7f, 0x05, 0x8e,
      0x6a, 0x48, 0x1a, 0x7d, 0x73, 0x4e, 0xb2, 0x23,
      0xbc, 0x26, 0x40, 0x4f, 0x09, 0xc0, 0xa4, 0x24,
      0x34, 0x4f, 0x01, 0x0b, 0xd3, 0xc6, 0x56, 0x0c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char amsagv_msgs__msg__Tag__TYPE_NAME[] = "amsagv_msgs/msg/Tag";

// Define type names, field names, and default values
static char amsagv_msgs__msg__Tag__FIELD_NAME__id[] = "id";
static char amsagv_msgs__msg__Tag__FIELD_NAME__a[] = "a";
static char amsagv_msgs__msg__Tag__FIELD_NAME__b[] = "b";
static char amsagv_msgs__msg__Tag__FIELD_NAME__d[] = "d";

static rosidl_runtime_c__type_description__Field amsagv_msgs__msg__Tag__FIELDS[] = {
  {
    {amsagv_msgs__msg__Tag__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amsagv_msgs__msg__Tag__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amsagv_msgs__msg__Tag__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amsagv_msgs__msg__Tag__FIELD_NAME__d, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amsagv_msgs__msg__Tag__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amsagv_msgs__msg__Tag__TYPE_NAME, 19, 19},
      {amsagv_msgs__msg__Tag__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 id\n"
  "int64 a\n"
  "int64 b\n"
  "float32 d";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amsagv_msgs__msg__Tag__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amsagv_msgs__msg__Tag__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amsagv_msgs__msg__Tag__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amsagv_msgs__msg__Tag__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
