// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amsagv_msgs:msg/Actions.idl
// generated code does not contain a copyright notice

#include "amsagv_msgs/msg/detail/actions__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amsagv_msgs
const rosidl_type_hash_t *
amsagv_msgs__msg__Actions__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0xb3, 0x8c, 0xcf, 0x1c, 0xe7, 0x1f, 0xd6,
      0xb2, 0x77, 0xed, 0xea, 0xc2, 0xd9, 0x8a, 0xfa,
      0xf7, 0x3a, 0xe5, 0xb9, 0x0d, 0x91, 0xbf, 0xdc,
      0x51, 0xca, 0x2c, 0x0a, 0x44, 0xb4, 0xa3, 0x3c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "amsagv_msgs/msg/detail/action__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t amsagv_msgs__msg__Action__EXPECTED_HASH = {1, {
    0x85, 0xb9, 0xe9, 0x0c, 0x2c, 0x73, 0xcc, 0x49,
    0xc8, 0x53, 0x9c, 0x5a, 0x71, 0x46, 0xe2, 0x5f,
    0xc0, 0xc5, 0xf9, 0xbb, 0xcb, 0xe8, 0xf8, 0x31,
    0xff, 0x0d, 0x70, 0x7b, 0x9f, 0x5a, 0x91, 0xa5,
  }};
#endif

static char amsagv_msgs__msg__Actions__TYPE_NAME[] = "amsagv_msgs/msg/Actions";
static char amsagv_msgs__msg__Action__TYPE_NAME[] = "amsagv_msgs/msg/Action";

// Define type names, field names, and default values
static char amsagv_msgs__msg__Actions__FIELD_NAME__actions[] = "actions";

static rosidl_runtime_c__type_description__Field amsagv_msgs__msg__Actions__FIELDS[] = {
  {
    {amsagv_msgs__msg__Actions__FIELD_NAME__actions, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {amsagv_msgs__msg__Action__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amsagv_msgs__msg__Actions__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {amsagv_msgs__msg__Action__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amsagv_msgs__msg__Actions__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amsagv_msgs__msg__Actions__TYPE_NAME, 23, 23},
      {amsagv_msgs__msg__Actions__FIELDS, 1, 1},
    },
    {amsagv_msgs__msg__Actions__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&amsagv_msgs__msg__Action__EXPECTED_HASH, amsagv_msgs__msg__Action__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = amsagv_msgs__msg__Action__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Action[] actions";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amsagv_msgs__msg__Actions__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amsagv_msgs__msg__Actions__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amsagv_msgs__msg__Actions__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amsagv_msgs__msg__Actions__get_individual_type_description_source(NULL),
    sources[1] = *amsagv_msgs__msg__Action__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
