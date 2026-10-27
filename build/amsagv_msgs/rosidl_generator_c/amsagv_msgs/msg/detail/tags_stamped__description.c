// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amsagv_msgs:msg/TagsStamped.idl
// generated code does not contain a copyright notice

#include "amsagv_msgs/msg/detail/tags_stamped__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amsagv_msgs
const rosidl_type_hash_t *
amsagv_msgs__msg__TagsStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x76, 0xdc, 0x94, 0x7a, 0xfa, 0xe3, 0xf9, 0x05,
      0x6f, 0xa3, 0x27, 0x6f, 0xb1, 0x51, 0x6c, 0xdc,
      0x85, 0x6b, 0xcf, 0x0b, 0x00, 0x80, 0x3e, 0x25,
      0xed, 0x2f, 0x25, 0x2e, 0xa7, 0x54, 0xb6, 0xfe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "amsagv_msgs/msg/detail/tag__functions.h"
#include "amsagv_msgs/msg/detail/tag_stamped__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t amsagv_msgs__msg__Tag__EXPECTED_HASH = {1, {
    0x4d, 0xab, 0x0c, 0xa1, 0xf9, 0x7f, 0x05, 0x8e,
    0x6a, 0x48, 0x1a, 0x7d, 0x73, 0x4e, 0xb2, 0x23,
    0xbc, 0x26, 0x40, 0x4f, 0x09, 0xc0, 0xa4, 0x24,
    0x34, 0x4f, 0x01, 0x0b, 0xd3, 0xc6, 0x56, 0x0c,
  }};
static const rosidl_type_hash_t amsagv_msgs__msg__TagStamped__EXPECTED_HASH = {1, {
    0xba, 0x45, 0x70, 0xf4, 0x14, 0x7d, 0xc2, 0x1d,
    0x9f, 0x7c, 0x91, 0x49, 0xb4, 0x1c, 0x8b, 0x02,
    0x18, 0x7a, 0xbc, 0xcb, 0x0c, 0xe3, 0x36, 0xf1,
    0x2f, 0xd5, 0xcc, 0x72, 0xa0, 0x63, 0xc8, 0x83,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char amsagv_msgs__msg__TagsStamped__TYPE_NAME[] = "amsagv_msgs/msg/TagsStamped";
static char amsagv_msgs__msg__Tag__TYPE_NAME[] = "amsagv_msgs/msg/Tag";
static char amsagv_msgs__msg__TagStamped__TYPE_NAME[] = "amsagv_msgs/msg/TagStamped";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char amsagv_msgs__msg__TagsStamped__FIELD_NAME__tags[] = "tags";

static rosidl_runtime_c__type_description__Field amsagv_msgs__msg__TagsStamped__FIELDS[] = {
  {
    {amsagv_msgs__msg__TagsStamped__FIELD_NAME__tags, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {amsagv_msgs__msg__TagStamped__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amsagv_msgs__msg__TagsStamped__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {amsagv_msgs__msg__Tag__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {amsagv_msgs__msg__TagStamped__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amsagv_msgs__msg__TagsStamped__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amsagv_msgs__msg__TagsStamped__TYPE_NAME, 27, 27},
      {amsagv_msgs__msg__TagsStamped__FIELDS, 1, 1},
    },
    {amsagv_msgs__msg__TagsStamped__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&amsagv_msgs__msg__Tag__EXPECTED_HASH, amsagv_msgs__msg__Tag__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = amsagv_msgs__msg__Tag__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&amsagv_msgs__msg__TagStamped__EXPECTED_HASH, amsagv_msgs__msg__TagStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = amsagv_msgs__msg__TagStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "TagStamped[] tags";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amsagv_msgs__msg__TagsStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amsagv_msgs__msg__TagsStamped__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 18, 18},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amsagv_msgs__msg__TagsStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amsagv_msgs__msg__TagsStamped__get_individual_type_description_source(NULL),
    sources[1] = *amsagv_msgs__msg__Tag__get_individual_type_description_source(NULL);
    sources[2] = *amsagv_msgs__msg__TagStamped__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
