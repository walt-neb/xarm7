// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from xarm_msgs:srv/BioGripperCtrl.idl
// generated code does not contain a copyright notice

#include "xarm_msgs/srv/detail/bio_gripper_ctrl__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_xarm_msgs
const rosidl_type_hash_t *
xarm_msgs__srv__BioGripperCtrl__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x41, 0x24, 0x27, 0xc8, 0xb5, 0x4d, 0x29,
      0xc1, 0x94, 0x1d, 0x11, 0xd3, 0x4e, 0x81, 0xb2,
      0x18, 0xe8, 0xf6, 0x75, 0x63, 0xb4, 0xc1, 0xb5,
      0x5f, 0xf0, 0x4a, 0x37, 0xfa, 0xcf, 0xde, 0xb8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_xarm_msgs
const rosidl_type_hash_t *
xarm_msgs__srv__BioGripperCtrl_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0xa7, 0xf8, 0xc1, 0xc5, 0xf2, 0xad, 0x19,
      0x8b, 0x77, 0x56, 0x01, 0x6d, 0x46, 0x56, 0x54,
      0xba, 0x22, 0x3f, 0x14, 0x2d, 0x2d, 0x14, 0x2c,
      0x52, 0x17, 0x70, 0x34, 0xbe, 0xfc, 0xc6, 0x3c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_xarm_msgs
const rosidl_type_hash_t *
xarm_msgs__srv__BioGripperCtrl_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0xff, 0x4f, 0x9e, 0x36, 0xa1, 0x0d, 0x8a,
      0xa0, 0xf3, 0x18, 0x29, 0x6c, 0xea, 0x73, 0xd8,
      0x16, 0x0d, 0x05, 0x81, 0xcf, 0xd9, 0x3f, 0x33,
      0x1c, 0xd6, 0x05, 0xe7, 0x8b, 0xf0, 0x72, 0x48,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_xarm_msgs
const rosidl_type_hash_t *
xarm_msgs__srv__BioGripperCtrl_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0x35, 0xa5, 0xeb, 0x7f, 0x18, 0xe4, 0xa6,
      0x4b, 0xf9, 0x46, 0xc6, 0x3b, 0x37, 0x6b, 0x85,
      0xbc, 0xf1, 0xd3, 0x23, 0x80, 0xd7, 0xd3, 0x77,
      0xc5, 0x5c, 0x4c, 0xbe, 0xf5, 0xdb, 0x18, 0xf2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char xarm_msgs__srv__BioGripperCtrl__TYPE_NAME[] = "xarm_msgs/srv/BioGripperCtrl";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char xarm_msgs__srv__BioGripperCtrl_Event__TYPE_NAME[] = "xarm_msgs/srv/BioGripperCtrl_Event";
static char xarm_msgs__srv__BioGripperCtrl_Request__TYPE_NAME[] = "xarm_msgs/srv/BioGripperCtrl_Request";
static char xarm_msgs__srv__BioGripperCtrl_Response__TYPE_NAME[] = "xarm_msgs/srv/BioGripperCtrl_Response";

// Define type names, field names, and default values
static char xarm_msgs__srv__BioGripperCtrl__FIELD_NAME__request_message[] = "request_message";
static char xarm_msgs__srv__BioGripperCtrl__FIELD_NAME__response_message[] = "response_message";
static char xarm_msgs__srv__BioGripperCtrl__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field xarm_msgs__srv__BioGripperCtrl__FIELDS[] = {
  {
    {xarm_msgs__srv__BioGripperCtrl__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {xarm_msgs__srv__BioGripperCtrl_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {xarm_msgs__srv__BioGripperCtrl_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {xarm_msgs__srv__BioGripperCtrl_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription xarm_msgs__srv__BioGripperCtrl__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarm_msgs__srv__BioGripperCtrl__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarm_msgs__srv__BioGripperCtrl__TYPE_NAME, 28, 28},
      {xarm_msgs__srv__BioGripperCtrl__FIELDS, 3, 3},
    },
    {xarm_msgs__srv__BioGripperCtrl__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = xarm_msgs__srv__BioGripperCtrl_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = xarm_msgs__srv__BioGripperCtrl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = xarm_msgs__srv__BioGripperCtrl_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char xarm_msgs__srv__BioGripperCtrl_Request__FIELD_NAME__speed[] = "speed";
static char xarm_msgs__srv__BioGripperCtrl_Request__DEFAULT_VALUE__speed[] = "0";
static char xarm_msgs__srv__BioGripperCtrl_Request__FIELD_NAME__wait[] = "wait";
static char xarm_msgs__srv__BioGripperCtrl_Request__DEFAULT_VALUE__wait[] = "True";
static char xarm_msgs__srv__BioGripperCtrl_Request__FIELD_NAME__timeout[] = "timeout";
static char xarm_msgs__srv__BioGripperCtrl_Request__DEFAULT_VALUE__timeout[] = "5.0";

static rosidl_runtime_c__type_description__Field xarm_msgs__srv__BioGripperCtrl_Request__FIELDS[] = {
  {
    {xarm_msgs__srv__BioGripperCtrl_Request__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {xarm_msgs__srv__BioGripperCtrl_Request__DEFAULT_VALUE__speed, 1, 1},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl_Request__FIELD_NAME__wait, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {xarm_msgs__srv__BioGripperCtrl_Request__DEFAULT_VALUE__wait, 4, 4},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl_Request__FIELD_NAME__timeout, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {xarm_msgs__srv__BioGripperCtrl_Request__DEFAULT_VALUE__timeout, 3, 3},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarm_msgs__srv__BioGripperCtrl_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarm_msgs__srv__BioGripperCtrl_Request__TYPE_NAME, 36, 36},
      {xarm_msgs__srv__BioGripperCtrl_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char xarm_msgs__srv__BioGripperCtrl_Response__FIELD_NAME__ret[] = "ret";
static char xarm_msgs__srv__BioGripperCtrl_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field xarm_msgs__srv__BioGripperCtrl_Response__FIELDS[] = {
  {
    {xarm_msgs__srv__BioGripperCtrl_Response__FIELD_NAME__ret, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarm_msgs__srv__BioGripperCtrl_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarm_msgs__srv__BioGripperCtrl_Response__TYPE_NAME, 37, 37},
      {xarm_msgs__srv__BioGripperCtrl_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char xarm_msgs__srv__BioGripperCtrl_Event__FIELD_NAME__info[] = "info";
static char xarm_msgs__srv__BioGripperCtrl_Event__FIELD_NAME__request[] = "request";
static char xarm_msgs__srv__BioGripperCtrl_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field xarm_msgs__srv__BioGripperCtrl_Event__FIELDS[] = {
  {
    {xarm_msgs__srv__BioGripperCtrl_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {xarm_msgs__srv__BioGripperCtrl_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {xarm_msgs__srv__BioGripperCtrl_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription xarm_msgs__srv__BioGripperCtrl_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__BioGripperCtrl_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarm_msgs__srv__BioGripperCtrl_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarm_msgs__srv__BioGripperCtrl_Event__TYPE_NAME, 34, 34},
      {xarm_msgs__srv__BioGripperCtrl_Event__FIELDS, 3, 3},
    },
    {xarm_msgs__srv__BioGripperCtrl_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = xarm_msgs__srv__BioGripperCtrl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = xarm_msgs__srv__BioGripperCtrl_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This format is suitable for the following services\n"
  "#   - open_bio_gripper\n"
  "#   - close_bio_gripper\n"
  "\n"
  "int16 speed     0\n"
  "bool wait       true\n"
  "float32 timeout 5\n"
  "\n"
  "---\n"
  "\n"
  "int16 ret\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
xarm_msgs__srv__BioGripperCtrl__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarm_msgs__srv__BioGripperCtrl__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 189, 189},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
xarm_msgs__srv__BioGripperCtrl_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarm_msgs__srv__BioGripperCtrl_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
xarm_msgs__srv__BioGripperCtrl_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarm_msgs__srv__BioGripperCtrl_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
xarm_msgs__srv__BioGripperCtrl_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarm_msgs__srv__BioGripperCtrl_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarm_msgs__srv__BioGripperCtrl__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarm_msgs__srv__BioGripperCtrl__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *xarm_msgs__srv__BioGripperCtrl_Event__get_individual_type_description_source(NULL);
    sources[4] = *xarm_msgs__srv__BioGripperCtrl_Request__get_individual_type_description_source(NULL);
    sources[5] = *xarm_msgs__srv__BioGripperCtrl_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarm_msgs__srv__BioGripperCtrl_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarm_msgs__srv__BioGripperCtrl_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarm_msgs__srv__BioGripperCtrl_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarm_msgs__srv__BioGripperCtrl_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarm_msgs__srv__BioGripperCtrl_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarm_msgs__srv__BioGripperCtrl_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *xarm_msgs__srv__BioGripperCtrl_Request__get_individual_type_description_source(NULL);
    sources[4] = *xarm_msgs__srv__BioGripperCtrl_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
