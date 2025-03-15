// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from xarm_msgs:srv/SetFloat32.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "xarm_msgs/srv/detail/set_float32__functions.h"
#include "xarm_msgs/srv/detail/set_float32__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace xarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetFloat32_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetFloat32_Request_type_support_ids_t;

static const _SetFloat32_Request_type_support_ids_t _SetFloat32_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetFloat32_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetFloat32_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetFloat32_Request_type_support_symbol_names_t _SetFloat32_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, SetFloat32_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, SetFloat32_Request)),
  }
};

typedef struct _SetFloat32_Request_type_support_data_t
{
  void * data[2];
} _SetFloat32_Request_type_support_data_t;

static _SetFloat32_Request_type_support_data_t _SetFloat32_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetFloat32_Request_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_SetFloat32_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetFloat32_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetFloat32_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetFloat32_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetFloat32_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &xarm_msgs__srv__SetFloat32_Request__get_type_hash,
  &xarm_msgs__srv__SetFloat32_Request__get_type_description,
  &xarm_msgs__srv__SetFloat32_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarm_msgs::srv::SetFloat32_Request>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::SetFloat32_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, SetFloat32_Request)() {
  return get_message_type_support_handle<xarm_msgs::srv::SetFloat32_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarm_msgs/srv/detail/set_float32__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/set_float32__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetFloat32_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetFloat32_Response_type_support_ids_t;

static const _SetFloat32_Response_type_support_ids_t _SetFloat32_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetFloat32_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetFloat32_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetFloat32_Response_type_support_symbol_names_t _SetFloat32_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, SetFloat32_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, SetFloat32_Response)),
  }
};

typedef struct _SetFloat32_Response_type_support_data_t
{
  void * data[2];
} _SetFloat32_Response_type_support_data_t;

static _SetFloat32_Response_type_support_data_t _SetFloat32_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetFloat32_Response_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_SetFloat32_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetFloat32_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetFloat32_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetFloat32_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetFloat32_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &xarm_msgs__srv__SetFloat32_Response__get_type_hash,
  &xarm_msgs__srv__SetFloat32_Response__get_type_description,
  &xarm_msgs__srv__SetFloat32_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarm_msgs::srv::SetFloat32_Response>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::SetFloat32_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, SetFloat32_Response)() {
  return get_message_type_support_handle<xarm_msgs::srv::SetFloat32_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "xarm_msgs/srv/detail/set_float32__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/set_float32__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetFloat32_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetFloat32_Event_type_support_ids_t;

static const _SetFloat32_Event_type_support_ids_t _SetFloat32_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetFloat32_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetFloat32_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetFloat32_Event_type_support_symbol_names_t _SetFloat32_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, SetFloat32_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, SetFloat32_Event)),
  }
};

typedef struct _SetFloat32_Event_type_support_data_t
{
  void * data[2];
} _SetFloat32_Event_type_support_data_t;

static _SetFloat32_Event_type_support_data_t _SetFloat32_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetFloat32_Event_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_SetFloat32_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetFloat32_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetFloat32_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetFloat32_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetFloat32_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &xarm_msgs__srv__SetFloat32_Event__get_type_hash,
  &xarm_msgs__srv__SetFloat32_Event__get_type_description,
  &xarm_msgs__srv__SetFloat32_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarm_msgs::srv::SetFloat32_Event>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::SetFloat32_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, SetFloat32_Event)() {
  return get_message_type_support_handle<xarm_msgs::srv::SetFloat32_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "xarm_msgs/srv/detail/set_float32__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace xarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetFloat32_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetFloat32_type_support_ids_t;

static const _SetFloat32_type_support_ids_t _SetFloat32_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetFloat32_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetFloat32_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetFloat32_type_support_symbol_names_t _SetFloat32_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, SetFloat32)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, SetFloat32)),
  }
};

typedef struct _SetFloat32_type_support_data_t
{
  void * data[2];
} _SetFloat32_type_support_data_t;

static _SetFloat32_type_support_data_t _SetFloat32_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetFloat32_service_typesupport_map = {
  2,
  "xarm_msgs",
  &_SetFloat32_service_typesupport_ids.typesupport_identifier[0],
  &_SetFloat32_service_typesupport_symbol_names.symbol_name[0],
  &_SetFloat32_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetFloat32_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetFloat32_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<xarm_msgs::srv::SetFloat32_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<xarm_msgs::srv::SetFloat32_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<xarm_msgs::srv::SetFloat32_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<xarm_msgs::srv::SetFloat32>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<xarm_msgs::srv::SetFloat32>,
  &xarm_msgs__srv__SetFloat32__get_type_hash,
  &xarm_msgs__srv__SetFloat32__get_type_description,
  &xarm_msgs__srv__SetFloat32__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<xarm_msgs::srv::SetFloat32>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::SetFloat32_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, SetFloat32)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<xarm_msgs::srv::SetFloat32>();
}

#ifdef __cplusplus
}
#endif
