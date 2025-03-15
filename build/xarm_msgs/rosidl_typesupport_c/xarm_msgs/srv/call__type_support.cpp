// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from xarm_msgs:srv/Call.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "xarm_msgs/srv/detail/call__struct.h"
#include "xarm_msgs/srv/detail/call__type_support.h"
#include "xarm_msgs/srv/detail/call__functions.h"
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

typedef struct _Call_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Call_Request_type_support_ids_t;

static const _Call_Request_type_support_ids_t _Call_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Call_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Call_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Call_Request_type_support_symbol_names_t _Call_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, Call_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, Call_Request)),
  }
};

typedef struct _Call_Request_type_support_data_t
{
  void * data[2];
} _Call_Request_type_support_data_t;

static _Call_Request_type_support_data_t _Call_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Call_Request_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_Call_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Call_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Call_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Call_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Call_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarm_msgs__srv__Call_Request__get_type_hash,
  &xarm_msgs__srv__Call_Request__get_type_description,
  &xarm_msgs__srv__Call_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarm_msgs, srv, Call_Request)() {
  return &::xarm_msgs::srv::rosidl_typesupport_c::Call_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarm_msgs/srv/detail/call__struct.h"
// already included above
// #include "xarm_msgs/srv/detail/call__type_support.h"
// already included above
// #include "xarm_msgs/srv/detail/call__functions.h"
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

typedef struct _Call_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Call_Response_type_support_ids_t;

static const _Call_Response_type_support_ids_t _Call_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Call_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Call_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Call_Response_type_support_symbol_names_t _Call_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, Call_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, Call_Response)),
  }
};

typedef struct _Call_Response_type_support_data_t
{
  void * data[2];
} _Call_Response_type_support_data_t;

static _Call_Response_type_support_data_t _Call_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Call_Response_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_Call_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Call_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Call_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Call_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Call_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarm_msgs__srv__Call_Response__get_type_hash,
  &xarm_msgs__srv__Call_Response__get_type_description,
  &xarm_msgs__srv__Call_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarm_msgs, srv, Call_Response)() {
  return &::xarm_msgs::srv::rosidl_typesupport_c::Call_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarm_msgs/srv/detail/call__struct.h"
// already included above
// #include "xarm_msgs/srv/detail/call__type_support.h"
// already included above
// #include "xarm_msgs/srv/detail/call__functions.h"
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

typedef struct _Call_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Call_Event_type_support_ids_t;

static const _Call_Event_type_support_ids_t _Call_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Call_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Call_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Call_Event_type_support_symbol_names_t _Call_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, Call_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, Call_Event)),
  }
};

typedef struct _Call_Event_type_support_data_t
{
  void * data[2];
} _Call_Event_type_support_data_t;

static _Call_Event_type_support_data_t _Call_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Call_Event_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_Call_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Call_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Call_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Call_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Call_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &xarm_msgs__srv__Call_Event__get_type_hash,
  &xarm_msgs__srv__Call_Event__get_type_description,
  &xarm_msgs__srv__Call_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, xarm_msgs, srv, Call_Event)() {
  return &::xarm_msgs::srv::rosidl_typesupport_c::Call_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xarm_msgs/srv/detail/call__type_support.h"
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
typedef struct _Call_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Call_type_support_ids_t;

static const _Call_type_support_ids_t _Call_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Call_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Call_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Call_type_support_symbol_names_t _Call_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, Call)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, Call)),
  }
};

typedef struct _Call_type_support_data_t
{
  void * data[2];
} _Call_type_support_data_t;

static _Call_type_support_data_t _Call_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Call_service_typesupport_map = {
  2,
  "xarm_msgs",
  &_Call_service_typesupport_ids.typesupport_identifier[0],
  &_Call_service_typesupport_symbol_names.symbol_name[0],
  &_Call_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Call_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Call_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Call_Request_message_type_support_handle,
  &Call_Response_message_type_support_handle,
  &Call_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarm_msgs,
    srv,
    Call
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarm_msgs,
    srv,
    Call
  ),
  &xarm_msgs__srv__Call__get_type_hash,
  &xarm_msgs__srv__Call__get_type_description,
  &xarm_msgs__srv__Call__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace xarm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, xarm_msgs, srv, Call)() {
  return &::xarm_msgs::srv::rosidl_typesupport_c::Call_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
