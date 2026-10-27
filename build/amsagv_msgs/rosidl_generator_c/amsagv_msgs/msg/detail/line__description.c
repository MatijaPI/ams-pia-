// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amsagv_msgs:msg/Line.idl
// generated code does not contain a copyright notice

#include "amsagv_msgs/msg/detail/line__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amsagv_msgs
const rosidl_type_hash_t *
amsagv_msgs__msg__Line__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0x76, 0x65, 0x80, 0x82, 0x00, 0x47, 0x73,
      0x08, 0xd6, 0xb4, 0xd3, 0x5e, 0xb2, 0x97, 0x6b,
      0x25, 0xd6, 0x49, 0xb3, 0x88, 0x2b, 0x89, 0x4f,
      0x43, 0xef, 0x84, 0x28, 0x4f, 0xe5, 0x83, 0x21,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char amsagv_msgs__msg__Line__TYPE_NAME[] = "amsagv_msgs/msg/Line";

// Define type names, field names, and default values
static char amsagv_msgs__msg__Line__FIELD_NAME__values[] = "values";
static char amsagv_msgs__msg__Line__FIELD_NAME__left[] = "left";
static char amsagv_msgs__msg__Line__FIELD_NAME__right[] = "right";
static char amsagv_msgs__msg__Line__FIELD_NAME__heading[] = "heading";
static char amsagv_msgs__msg__Line__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field amsagv_msgs__msg__Line__FIELDS[] = {
  {
    {amsagv_msgs__msg__Line__FIELD_NAME__values, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amsagv_msgs__msg__Line__FIELD_NAME__left, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amsagv_msgs__msg__Line__FIELD_NAME__right, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amsagv_msgs__msg__Line__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amsagv_msgs__msg__Line__FIELD_NAME__distance, 8, 8},
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
amsagv_msgs__msg__Line__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amsagv_msgs__msg__Line__TYPE_NAME, 20, 20},
      {amsagv_msgs__msg__Line__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8[] values\n"
  "float32 left\n"
  "float32 right\n"
  "float32 heading\n"
  "float32 distance";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amsagv_msgs__msg__Line__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amsagv_msgs__msg__Line__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 75, 75},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amsagv_msgs__msg__Line__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amsagv_msgs__msg__Line__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
