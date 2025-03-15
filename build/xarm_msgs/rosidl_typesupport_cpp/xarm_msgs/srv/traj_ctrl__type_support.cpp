// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from xarm_msgs:srv/TrajCtrl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "xarm_msgs/srv/detail/traj_ctrl__functions.h"
#include "xarm_msgs/srv/detail/traj_ctrl__struct.hpp"
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

typedef struct _TrajCtrl_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajCtrl_Request_type_support_ids_t;

static const _TrajCtrl_Request_type_support_ids_t _TrajCtrl_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TrajCtrl_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajCtrl_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajCtrl_Request_type_support_symbol_names_t _TrajCtrl_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, TrajCtrl_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, TrajCtrl_Request)),
  }
};

typedef struct _TrajCtrl_Request_type_support_data_t
{
  void * data[2];
} _TrajCtrl_Request_type_support_data_t;

static _TrajCtrl_Request_type_support_data_t _TrajCtrl_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajCtrl_Request_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_TrajCtrl_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TrajCtrl_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TrajCtrl_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajCtrl_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajCtrl_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &xarm_msgs__srv__TrajCtrl_Request__get_type_hash,
  &xarm_msgs__srv__TrajCtrl_Request__get_type_description,
  &xarm_msgs__srv__TrajCtrl_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarm_msgs::srv::TrajCtrl_Request>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::TrajCtrl_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, TrajCtrl_Request)() {
  return get_message_type_support_handle<xarm_msgs::srv::TrajCtrl_Request>();
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
// #include "xarm_msgs/srv/detail/traj_ctrl__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/traj_ctrl__struct.hpp"
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

typedef struct _TrajCtrl_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajCtrl_Response_type_support_ids_t;

static const _TrajCtrl_Response_type_support_ids_t _TrajCtrl_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TrajCtrl_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajCtrl_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajCtrl_Response_type_support_symbol_names_t _TrajCtrl_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, TrajCtrl_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, TrajCtrl_Response)),
  }
};

typedef struct _TrajCtrl_Response_type_support_data_t
{
  void * data[2];
} _TrajCtrl_Response_type_support_data_t;

static _TrajCtrl_Response_type_support_data_t _TrajCtrl_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajCtrl_Response_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_TrajCtrl_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TrajCtrl_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TrajCtrl_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajCtrl_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajCtrl_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &xarm_msgs__srv__TrajCtrl_Response__get_type_hash,
  &xarm_msgs__srv__TrajCtrl_Response__get_type_description,
  &xarm_msgs__srv__TrajCtrl_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarm_msgs::srv::TrajCtrl_Response>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::TrajCtrl_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, TrajCtrl_Response)() {
  return get_message_type_support_handle<xarm_msgs::srv::TrajCtrl_Response>();
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
// #include "xarm_msgs/srv/detail/traj_ctrl__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/traj_ctrl__struct.hpp"
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

typedef struct _TrajCtrl_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajCtrl_Event_type_support_ids_t;

static const _TrajCtrl_Event_type_support_ids_t _TrajCtrl_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TrajCtrl_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajCtrl_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajCtrl_Event_type_support_symbol_names_t _TrajCtrl_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, TrajCtrl_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, TrajCtrl_Event)),
  }
};

typedef struct _TrajCtrl_Event_type_support_data_t
{
  void * data[2];
} _TrajCtrl_Event_type_support_data_t;

static _TrajCtrl_Event_type_support_data_t _TrajCtrl_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajCtrl_Event_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_TrajCtrl_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TrajCtrl_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TrajCtrl_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajCtrl_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajCtrl_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &xarm_msgs__srv__TrajCtrl_Event__get_type_hash,
  &xarm_msgs__srv__TrajCtrl_Event__get_type_description,
  &xarm_msgs__srv__TrajCtrl_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarm_msgs::srv::TrajCtrl_Event>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::TrajCtrl_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, TrajCtrl_Event)() {
  return get_message_type_support_handle<xarm_msgs::srv::TrajCtrl_Event>();
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
// #include "xarm_msgs/srv/detail/traj_ctrl__struct.hpp"
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

typedef struct _TrajCtrl_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajCtrl_type_support_ids_t;

static const _TrajCtrl_type_support_ids_t _TrajCtrl_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TrajCtrl_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajCtrl_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajCtrl_type_support_symbol_names_t _TrajCtrl_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, TrajCtrl)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, TrajCtrl)),
  }
};

typedef struct _TrajCtrl_type_support_data_t
{
  void * data[2];
} _TrajCtrl_type_support_data_t;

static _TrajCtrl_type_support_data_t _TrajCtrl_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajCtrl_service_typesupport_map = {
  2,
  "xarm_msgs",
  &_TrajCtrl_service_typesupport_ids.typesupport_identifier[0],
  &_TrajCtrl_service_typesupport_symbol_names.symbol_name[0],
  &_TrajCtrl_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TrajCtrl_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajCtrl_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<xarm_msgs::srv::TrajCtrl_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<xarm_msgs::srv::TrajCtrl_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<xarm_msgs::srv::TrajCtrl_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<xarm_msgs::srv::TrajCtrl>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<xarm_msgs::srv::TrajCtrl>,
  &xarm_msgs__srv__TrajCtrl__get_type_hash,
  &xarm_msgs__srv__TrajCtrl__get_type_description,
  &xarm_msgs__srv__TrajCtrl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<xarm_msgs::srv::TrajCtrl>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::TrajCtrl_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, TrajCtrl)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<xarm_msgs::srv::TrajCtrl>();
}

#ifdef __cplusplus
}
#endif
