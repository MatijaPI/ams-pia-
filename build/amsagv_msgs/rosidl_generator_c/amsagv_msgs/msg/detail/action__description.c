// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amsagv_msgs:msg/Action.idl
// generated code does not contain a copyright notice

#include "amsagv_msgs/msg/detail/action__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amsagv_msgs
const rosidl_type_hash_t *
amsagv_msgs__msg__Action__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0xb9, 0xe9, 0x0c, 0x2c, 0x73, 0xcc, 0x49,
      0xc8, 0x53, 0x9c, 0x5a, 0x71, 0x46, 0xe2, 0x5f,
      0xc0, 0xc5, 0xf9, 0xbb, 0xcb, 0xe8, 0xf8, 0x31,
      0xff, 0x0d, 0x70, 0x7b, 0x9f, 0x5a, 0x91, 0xa5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char amsagv_msgs__msg__Action__TYPE_NAME[] = "amsagv_msgs/msg/Action";

// Define type names, field names, and default values
static char amsagv_msgs__msg__Action__FIELD_NAME__name[] = "name";
static char amsagv_msgs__msg__Action__FIELD_NAME__id[] = "id";
static char amsagv_msgs__msg__Action__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field amsagv_msgs__msg__Action__FIELDS[] = {
  {
    {amsagv_msgs__msg__Action__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amsagv_msgs__msg__Action__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amsagv_msgs__msg__Action__FIELD_NAME__distance, 8, 8},
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
amsagv_msgs__msg__Action__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amsagv_msgs__msg__Action__TYPE_NAME, 22, 22},
      {amsagv_msgs__msg__Action__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "uint32 id\n"
  "float32 distance";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amsagv_msgs__msg__Action__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amsagv_msgs__msg__Action__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amsagv_msgs__msg__Action__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amsagv_msgs__msg__Action__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
