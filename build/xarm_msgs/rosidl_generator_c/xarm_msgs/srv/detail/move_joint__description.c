// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from xarm_msgs:srv/MoveJoint.idl
// generated code does not contain a copyright notice

#include "xarm_msgs/srv/detail/move_joint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_xarm_msgs
const rosidl_type_hash_t *
xarm_msgs__srv__MoveJoint__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0xb0, 0xa2, 0x6e, 0x03, 0x98, 0x26, 0x1e,
      0x35, 0xf5, 0x61, 0xa4, 0x9d, 0x06, 0xd9, 0x42,
      0x9c, 0x50, 0x8c, 0x8a, 0xf0, 0x63, 0x05, 0x10,
      0x98, 0x09, 0x27, 0x5b, 0x65, 0x7b, 0xb4, 0xe9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_xarm_msgs
const rosidl_type_hash_t *
xarm_msgs__srv__MoveJoint_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0x4d, 0xf6, 0xfa, 0x08, 0x11, 0xcc, 0xf2,
      0xe4, 0x05, 0x27, 0xfd, 0x8d, 0xb0, 0x77, 0xe2,
      0x91, 0xa1, 0xef, 0xba, 0xc7, 0x2b, 0x0c, 0x2c,
      0x1f, 0x84, 0x23, 0x28, 0x94, 0x0a, 0xa1, 0x00,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_xarm_msgs
const rosidl_type_hash_t *
xarm_msgs__srv__MoveJoint_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0xb3, 0x8b, 0xfd, 0xd0, 0xea, 0x0a, 0xf8,
      0x47, 0xfd, 0xb2, 0x8f, 0x72, 0xdf, 0xd3, 0x2c,
      0x3b, 0xf0, 0xf4, 0x06, 0xae, 0xce, 0x80, 0xc1,
      0x38, 0xde, 0xbd, 0x0b, 0x9d, 0x54, 0x6a, 0xcc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_xarm_msgs
const rosidl_type_hash_t *
xarm_msgs__srv__MoveJoint_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0xfe, 0x6c, 0x07, 0xbb, 0x1e, 0x0f, 0xc1,
      0x4f, 0xce, 0x2c, 0x38, 0x02, 0xa0, 0xa5, 0x91,
      0x44, 0x92, 0x63, 0xb9, 0xbc, 0x19, 0x67, 0x58,
      0xf4, 0x3e, 0x9f, 0x48, 0x82, 0xa8, 0x1a, 0x66,
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

static char xarm_msgs__srv__MoveJoint__TYPE_NAME[] = "xarm_msgs/srv/MoveJoint";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char xarm_msgs__srv__MoveJoint_Event__TYPE_NAME[] = "xarm_msgs/srv/MoveJoint_Event";
static char xarm_msgs__srv__MoveJoint_Request__TYPE_NAME[] = "xarm_msgs/srv/MoveJoint_Request";
static char xarm_msgs__srv__MoveJoint_Response__TYPE_NAME[] = "xarm_msgs/srv/MoveJoint_Response";

// Define type names, field names, and default values
static char xarm_msgs__srv__MoveJoint__FIELD_NAME__request_message[] = "request_message";
static char xarm_msgs__srv__MoveJoint__FIELD_NAME__response_message[] = "response_message";
static char xarm_msgs__srv__MoveJoint__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field xarm_msgs__srv__MoveJoint__FIELDS[] = {
  {
    {xarm_msgs__srv__MoveJoint__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {xarm_msgs__srv__MoveJoint_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__MoveJoint__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {xarm_msgs__srv__MoveJoint_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__MoveJoint__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {xarm_msgs__srv__MoveJoint_Event__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription xarm_msgs__srv__MoveJoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__MoveJoint_Event__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__MoveJoint_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__MoveJoint_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarm_msgs__srv__MoveJoint__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarm_msgs__srv__MoveJoint__TYPE_NAME, 23, 23},
      {xarm_msgs__srv__MoveJoint__FIELDS, 3, 3},
    },
    {xarm_msgs__srv__MoveJoint__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = xarm_msgs__srv__MoveJoint_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = xarm_msgs__srv__MoveJoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = xarm_msgs__srv__MoveJoint_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__angles[] = "angles";
static char xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__speed[] = "speed";
static char xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__speed[] = "0.0";
static char xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__acc[] = "acc";
static char xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__acc[] = "0.0";
static char xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__mvtime[] = "mvtime";
static char xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__mvtime[] = "0.0";
static char xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__wait[] = "wait";
static char xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__wait[] = "False";
static char xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__timeout[] = "timeout";
static char xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__timeout[] = "-1.0";
static char xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__radius[] = "radius";
static char xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__radius[] = "-1.0";
static char xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__relative[] = "relative";
static char xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__relative[] = "False";

static rosidl_runtime_c__type_description__Field xarm_msgs__srv__MoveJoint_Request__FIELDS[] = {
  {
    {xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__angles, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__speed, 3, 3},
  },
  {
    {xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__acc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__acc, 3, 3},
  },
  {
    {xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__mvtime, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__mvtime, 3, 3},
  },
  {
    {xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__wait, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__wait, 5, 5},
  },
  {
    {xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__timeout, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__timeout, 4, 4},
  },
  {
    {xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__radius, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__radius, 4, 4},
  },
  {
    {xarm_msgs__srv__MoveJoint_Request__FIELD_NAME__relative, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {xarm_msgs__srv__MoveJoint_Request__DEFAULT_VALUE__relative, 5, 5},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarm_msgs__srv__MoveJoint_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarm_msgs__srv__MoveJoint_Request__TYPE_NAME, 31, 31},
      {xarm_msgs__srv__MoveJoint_Request__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char xarm_msgs__srv__MoveJoint_Response__FIELD_NAME__ret[] = "ret";
static char xarm_msgs__srv__MoveJoint_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field xarm_msgs__srv__MoveJoint_Response__FIELDS[] = {
  {
    {xarm_msgs__srv__MoveJoint_Response__FIELD_NAME__ret, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__MoveJoint_Response__FIELD_NAME__message, 7, 7},
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
xarm_msgs__srv__MoveJoint_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarm_msgs__srv__MoveJoint_Response__TYPE_NAME, 32, 32},
      {xarm_msgs__srv__MoveJoint_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char xarm_msgs__srv__MoveJoint_Event__FIELD_NAME__info[] = "info";
static char xarm_msgs__srv__MoveJoint_Event__FIELD_NAME__request[] = "request";
static char xarm_msgs__srv__MoveJoint_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field xarm_msgs__srv__MoveJoint_Event__FIELDS[] = {
  {
    {xarm_msgs__srv__MoveJoint_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__MoveJoint_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {xarm_msgs__srv__MoveJoint_Request__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__MoveJoint_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {xarm_msgs__srv__MoveJoint_Response__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription xarm_msgs__srv__MoveJoint_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__MoveJoint_Request__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {xarm_msgs__srv__MoveJoint_Response__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
xarm_msgs__srv__MoveJoint_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {xarm_msgs__srv__MoveJoint_Event__TYPE_NAME, 29, 29},
      {xarm_msgs__srv__MoveJoint_Event__FIELDS, 3, 3},
    },
    {xarm_msgs__srv__MoveJoint_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = xarm_msgs__srv__MoveJoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = xarm_msgs__srv__MoveJoint_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This format is suitable for the following services\n"
  "#   - set_servo_angle\n"
  "#   - set_servo_angle_j\n"
  "\n"
  "# set_servo_angle/set_servo_angle_j\n"
  "float32[] angles\n"
  "float32 speed       0\n"
  "float32 acc         0\n"
  "float32 mvtime      0\n"
  "\n"
  "# set_servo_angle\n"
  "bool wait           false\n"
  "float32 timeout     -1\n"
  "\n"
  "# set_servo_angle\n"
  "float32 radius      -1\n"
  "\n"
  "# set_servo_angle\n"
  "bool relative       false\n"
  "\n"
  "---\n"
  "\n"
  "int16 ret\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
xarm_msgs__srv__MoveJoint__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarm_msgs__srv__MoveJoint__TYPE_NAME, 23, 23},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 405, 405},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
xarm_msgs__srv__MoveJoint_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarm_msgs__srv__MoveJoint_Request__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
xarm_msgs__srv__MoveJoint_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarm_msgs__srv__MoveJoint_Response__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
xarm_msgs__srv__MoveJoint_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {xarm_msgs__srv__MoveJoint_Event__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarm_msgs__srv__MoveJoint__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarm_msgs__srv__MoveJoint__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *xarm_msgs__srv__MoveJoint_Event__get_individual_type_description_source(NULL);
    sources[4] = *xarm_msgs__srv__MoveJoint_Request__get_individual_type_description_source(NULL);
    sources[5] = *xarm_msgs__srv__MoveJoint_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarm_msgs__srv__MoveJoint_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarm_msgs__srv__MoveJoint_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarm_msgs__srv__MoveJoint_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarm_msgs__srv__MoveJoint_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
xarm_msgs__srv__MoveJoint_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *xarm_msgs__srv__MoveJoint_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *xarm_msgs__srv__MoveJoint_Request__get_individual_type_description_source(NULL);
    sources[4] = *xarm_msgs__srv__MoveJoint_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
