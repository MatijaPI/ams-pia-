// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amsagv_msgs:msg/Tags.idl
// generated code does not contain a copyright notice

#include "amsagv_msgs/msg/detail/tags__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amsagv_msgs
const rosidl_type_hash_t *
amsagv_msgs__msg__Tags__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb6, 0xf4, 0x5b, 0x11, 0x13, 0xdb, 0xc6, 0xcf,
      0xff, 0x12, 0xff, 0x8f, 0x27, 0x28, 0x30, 0xe0,
      0xe3, 0xbe, 0xd7, 0x91, 0x1f, 0x6f, 0x2b, 0x4d,
      0x06, 0x5e, 0xd3, 0x7e, 0xbb, 0xe8, 0xf4, 0xc4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "amsagv_msgs/msg/detail/tag__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t amsagv_msgs__msg__Tag__EXPECTED_HASH = {1, {
    0x4d, 0xab, 0x0c, 0xa1, 0xf9, 0x7f, 0x05, 0x8e,
    0x6a, 0x48, 0x1a, 0x7d, 0x73, 0x4e, 0xb2, 0x23,
    0xbc, 0x26, 0x40, 0x4f, 0x09, 0xc0, 0xa4, 0x24,
    0x34, 0x4f, 0x01, 0x0b, 0xd3, 0xc6, 0x56, 0x0c,
  }};
#endif

static char amsagv_msgs__msg__Tags__TYPE_NAME[] = "amsagv_msgs/msg/Tags";
static char amsagv_msgs__msg__Tag__TYPE_NAME[] = "amsagv_msgs/msg/Tag";

// Define type names, field names, and default values
static char amsagv_msgs__msg__Tags__FIELD_NAME__tags[] = "tags";

static rosidl_runtime_c__type_description__Field amsagv_msgs__msg__Tags__FIELDS[] = {
  {
    {amsagv_msgs__msg__Tags__FIELD_NAME__tags, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {amsagv_msgs__msg__Tag__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amsagv_msgs__msg__Tags__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {amsagv_msgs__msg__Tag__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amsagv_msgs__msg__Tags__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amsagv_msgs__msg__Tags__TYPE_NAME, 20, 20},
      {amsagv_msgs__msg__Tags__FIELDS, 1, 1},
    },
    {amsagv_msgs__msg__Tags__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&amsagv_msgs__msg__Tag__EXPECTED_HASH, amsagv_msgs__msg__Tag__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = amsagv_msgs__msg__Tag__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Tag[] tags";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amsagv_msgs__msg__Tags__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amsagv_msgs__msg__Tags__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 11, 11},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amsagv_msgs__msg__Tags__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amsagv_msgs__msg__Tags__get_individual_type_description_source(NULL),
    sources[1] = *amsagv_msgs__msg__Tag__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
