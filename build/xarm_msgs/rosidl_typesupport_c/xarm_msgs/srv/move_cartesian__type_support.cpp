// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from xarm_msgs:srv/MoveCartesian.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "xarm_msgs/srv/detail/move_cartesian__struct.h"
#include "xarm_msgs/srv/detail/move_cartesian__type_support.h"
#include "xarm_msgs/srv/detail/move_cartesian__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace xarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveCartesian_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveCartesian_Request_type_support_ids_t;

static const _MoveCartesian_Request_type_support_ids_t _MoveCartesian_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveCartesian_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveCartesian_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveCartesian_Request_type_support_symbol_names_t _MoveCartesian_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, MoveCartesian_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, MoveCartesian_Request)),
  }
};

typedef struct _MoveCartesian_Request_type_support_data_t
{
  void * data[2];
} _MoveCartesian_Request_type_support_data_t;

static _MoveCartesian_Request_type_support_data_t _MoveCartesian_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveCartesian_Request_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_MoveCartesian_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveCartesian_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveCartesian_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveCartesian_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveCartesian_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarm_msgs__srv__MoveCartesian_Request__get_type_hash,
  &xarm_msgs__srv__MoveCartesian_Request__get_type_description,
  &xarm_msgs__srv__MoveCartesian_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarm_msgs, srv, MoveCartesian_Request)() {
  return &::xarm_msgs::srv::rosidl_typesupport_c::MoveCartesian_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarm_msgs/srv/detail/move_cartesian__struct.h"
// already included above
// #include "xarm_msgs/srv/detail/move_cartesian__type_support.h"
// already included above
// #include "xarm_msgs/srv/detail/move_cartesian__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveCartesian_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveCartesian_Response_type_support_ids_t;

static const _MoveCartesian_Response_type_support_ids_t _MoveCartesian_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveCartesian_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveCartesian_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveCartesian_Response_type_support_symbol_names_t _MoveCartesian_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, MoveCartesian_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, MoveCartesian_Response)),
  }
};

typedef struct _MoveCartesian_Response_type_support_data_t
{
  void * data[2];
} _MoveCartesian_Response_type_support_data_t;

static _MoveCartesian_Response_type_support_data_t _MoveCartesian_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveCartesian_Response_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_MoveCartesian_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveCartesian_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveCartesian_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveCartesian_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveCartesian_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarm_msgs__srv__MoveCartesian_Response__get_type_hash,
  &xarm_msgs__srv__MoveCartesian_Response__get_type_description,
  &xarm_msgs__srv__MoveCartesian_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarm_msgs, srv, MoveCartesian_Response)() {
  return &::xarm_msgs::srv::rosidl_typesupport_c::MoveCartesian_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarm_msgs/srv/detail/move_cartesian__struct.h"
// already included above
// #include "xarm_msgs/srv/detail/move_cartesian__type_support.h"
// already included above
// #include "xarm_msgs/srv/detail/move_cartesian__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MoveCartesian_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveCartesian_Event_type_support_ids_t;

static const _MoveCartesian_Event_type_support_ids_t _MoveCartesian_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveCartesian_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveCartesian_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveCartesian_Event_type_support_symbol_names_t _MoveCartesian_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, MoveCartesian_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, MoveCartesian_Event)),
  }
};

typedef struct _MoveCartesian_Event_type_support_data_t
{
  void * data[2];
} _MoveCartesian_Event_type_support_data_t;

static _MoveCartesian_Event_type_support_data_t _MoveCartesian_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveCartesian_Event_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_MoveCartesian_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveCartesian_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveCartesian_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveCartesian_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveCartesian_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarm_msgs__srv__MoveCartesian_Event__get_type_hash,
  &xarm_msgs__srv__MoveCartesian_Event__get_type_description,
  &xarm_msgs__srv__MoveCartesian_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarm_msgs, srv, MoveCartesian_Event)() {
  return &::xarm_msgs::srv::rosidl_typesupport_c::MoveCartesian_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xarm_msgs/srv/detail/move_cartesian__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace xarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _MoveCartesian_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveCartesian_type_support_ids_t;

static const _MoveCartesian_type_support_ids_t _MoveCartesian_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveCartesian_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveCartesian_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveCartesian_type_support_symbol_names_t _MoveCartesian_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, MoveCartesian)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, MoveCartesian)),
  }
};

typedef struct _MoveCartesian_type_support_data_t
{
  void * data[2];
} _MoveCartesian_type_support_data_t;

static _MoveCartesian_type_support_data_t _MoveCartesian_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveCartesian_service_typesupport_map = {
  2,
  "xarm_msgs",
  &_MoveCartesian_service_typesupport_ids.typesupport_identifier[0],
  &_MoveCartesian_service_typesupport_symbol_names.symbol_name[0],
  &_MoveCartesian_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveCartesian_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveCartesian_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveCartesian_Request_message_type_support_handle,
  &MoveCartesian_Response_message_type_support_handle,
  &MoveCartesian_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarm_msgs,
    srv,
    MoveCartesian
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarm_msgs,
    srv,
    MoveCartesian
  ),
  &xarm_msgs__srv__MoveCartesian__get_type_hash,
  &xarm_msgs__srv__MoveCartesian__get_type_description,
  &xarm_msgs__srv__MoveCartesian__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, xarm_msgs, srv, MoveCartesian)() {
  return &::xarm_msgs::srv::rosidl_typesupport_c::MoveCartesian_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
