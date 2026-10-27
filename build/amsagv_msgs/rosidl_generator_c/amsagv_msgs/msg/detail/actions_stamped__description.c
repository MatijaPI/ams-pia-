// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amsagv_msgs:msg/ActionsStamped.idl
// generated code does not contain a copyright notice

#include "amsagv_msgs/msg/detail/actions_stamped__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amsagv_msgs
const rosidl_type_hash_t *
amsagv_msgs__msg__ActionsStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0x2c, 0xf6, 0xd0, 0x29, 0xe6, 0x04, 0xfc,
      0x8e, 0x6e, 0x6e, 0x60, 0x39, 0x4b, 0x44, 0x54,
      0x86, 0xe8, 0xc1, 0xa9, 0x51, 0x41, 0x7a, 0xc2,
      0x39, 0xc0, 0x7a, 0x20, 0x38, 0xc5, 0xf0, 0x9d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "amsagv_msgs/msg/detail/action__functions.h"
#include "amsagv_msgs/msg/detail/action_stamped__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t amsagv_msgs__msg__Action__EXPECTED_HASH = {1, {
    0x85, 0xb9, 0xe9, 0x0c, 0x2c, 0x73, 0xcc, 0x49,
    0xc8, 0x53, 0x9c, 0x5a, 0x71, 0x46, 0xe2, 0x5f,
    0xc0, 0xc5, 0xf9, 0xbb, 0xcb, 0xe8, 0xf8, 0x31,
    0xff, 0x0d, 0x70, 0x7b, 0x9f, 0x5a, 0x91, 0xa5,
  }};
static const rosidl_type_hash_t amsagv_msgs__msg__ActionStamped__EXPECTED_HASH = {1, {
    0x64, 0x4f, 0x04, 0xb0, 0xa5, 0x4a, 0x77, 0x6d,
    0x20, 0x31, 0x40, 0x30, 0xbb, 0x91, 0xf7, 0xb9,
    0x9c, 0x66, 0xac, 0xd3, 0x16, 0xb9, 0x9e, 0xc3,
    0x02, 0xab, 0x92, 0xcc, 0x30, 0x79, 0xd6, 0x21,
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

static char amsagv_msgs__msg__ActionsStamped__TYPE_NAME[] = "amsagv_msgs/msg/ActionsStamped";
static char amsagv_msgs__msg__Action__TYPE_NAME[] = "amsagv_msgs/msg/Action";
static char amsagv_msgs__msg__ActionStamped__TYPE_NAME[] = "amsagv_msgs/msg/ActionStamped";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char amsagv_msgs__msg__ActionsStamped__FIELD_NAME__actions[] = "actions";

static rosidl_runtime_c__type_description__Field amsagv_msgs__msg__ActionsStamped__FIELDS[] = {
  {
    {amsagv_msgs__msg__ActionsStamped__FIELD_NAME__actions, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {amsagv_msgs__msg__ActionStamped__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amsagv_msgs__msg__ActionsStamped__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {amsagv_msgs__msg__Action__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {amsagv_msgs__msg__ActionStamped__TYPE_NAME, 29, 29},
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
amsagv_msgs__msg__ActionsStamped__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amsagv_msgs__msg__ActionsStamped__TYPE_NAME, 30, 30},
      {amsagv_msgs__msg__ActionsStamped__FIELDS, 1, 1},
    },
    {amsagv_msgs__msg__ActionsStamped__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&amsagv_msgs__msg__Action__EXPECTED_HASH, amsagv_msgs__msg__Action__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = amsagv_msgs__msg__Action__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&amsagv_msgs__msg__ActionStamped__EXPECTED_HASH, amsagv_msgs__msg__ActionStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = amsagv_msgs__msg__ActionStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "ActionStamped[] actions";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amsagv_msgs__msg__ActionsStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amsagv_msgs__msg__ActionsStamped__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amsagv_msgs__msg__ActionsStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amsagv_msgs__msg__ActionsStamped__get_individual_type_description_source(NULL),
    sources[1] = *amsagv_msgs__msg__Action__get_individual_type_description_source(NULL);
    sources[2] = *amsagv_msgs__msg__ActionStamped__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
