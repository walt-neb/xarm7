// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from xarm_msgs:srv/PlanPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "xarm_msgs/srv/detail/plan_pose__functions.h"
#include "xarm_msgs/srv/detail/plan_pose__struct.hpp"
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

typedef struct _PlanPose_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanPose_Request_type_support_ids_t;

static const _PlanPose_Request_type_support_ids_t _PlanPose_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PlanPose_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanPose_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanPose_Request_type_support_symbol_names_t _PlanPose_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, PlanPose_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, PlanPose_Request)),
  }
};

typedef struct _PlanPose_Request_type_support_data_t
{
  void * data[2];
} _PlanPose_Request_type_support_data_t;

static _PlanPose_Request_type_support_data_t _PlanPose_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanPose_Request_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_PlanPose_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PlanPose_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PlanPose_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlanPose_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanPose_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &xarm_msgs__srv__PlanPose_Request__get_type_hash,
  &xarm_msgs__srv__PlanPose_Request__get_type_description,
  &xarm_msgs__srv__PlanPose_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarm_msgs::srv::PlanPose_Request>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::PlanPose_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, PlanPose_Request)() {
  return get_message_type_support_handle<xarm_msgs::srv::PlanPose_Request>();
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
// #include "xarm_msgs/srv/detail/plan_pose__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/plan_pose__struct.hpp"
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

typedef struct _PlanPose_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanPose_Response_type_support_ids_t;

static const _PlanPose_Response_type_support_ids_t _PlanPose_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PlanPose_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanPose_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanPose_Response_type_support_symbol_names_t _PlanPose_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, PlanPose_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, PlanPose_Response)),
  }
};

typedef struct _PlanPose_Response_type_support_data_t
{
  void * data[2];
} _PlanPose_Response_type_support_data_t;

static _PlanPose_Response_type_support_data_t _PlanPose_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanPose_Response_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_PlanPose_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PlanPose_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PlanPose_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlanPose_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanPose_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &xarm_msgs__srv__PlanPose_Response__get_type_hash,
  &xarm_msgs__srv__PlanPose_Response__get_type_description,
  &xarm_msgs__srv__PlanPose_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarm_msgs::srv::PlanPose_Response>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::PlanPose_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, PlanPose_Response)() {
  return get_message_type_support_handle<xarm_msgs::srv::PlanPose_Response>();
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
// #include "xarm_msgs/srv/detail/plan_pose__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/plan_pose__struct.hpp"
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

typedef struct _PlanPose_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanPose_Event_type_support_ids_t;

static const _PlanPose_Event_type_support_ids_t _PlanPose_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PlanPose_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanPose_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanPose_Event_type_support_symbol_names_t _PlanPose_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, PlanPose_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, PlanPose_Event)),
  }
};

typedef struct _PlanPose_Event_type_support_data_t
{
  void * data[2];
} _PlanPose_Event_type_support_data_t;

static _PlanPose_Event_type_support_data_t _PlanPose_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanPose_Event_message_typesupport_map = {
  2,
  "xarm_msgs",
  &_PlanPose_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PlanPose_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PlanPose_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlanPose_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanPose_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &xarm_msgs__srv__PlanPose_Event__get_type_hash,
  &xarm_msgs__srv__PlanPose_Event__get_type_description,
  &xarm_msgs__srv__PlanPose_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xarm_msgs::srv::PlanPose_Event>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::PlanPose_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, PlanPose_Event)() {
  return get_message_type_support_handle<xarm_msgs::srv::PlanPose_Event>();
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
// #include "xarm_msgs/srv/detail/plan_pose__struct.hpp"
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

typedef struct _PlanPose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanPose_type_support_ids_t;

static const _PlanPose_type_support_ids_t _PlanPose_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PlanPose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanPose_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanPose_type_support_symbol_names_t _PlanPose_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xarm_msgs, srv, PlanPose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xarm_msgs, srv, PlanPose)),
  }
};

typedef struct _PlanPose_type_support_data_t
{
  void * data[2];
} _PlanPose_type_support_data_t;

static _PlanPose_type_support_data_t _PlanPose_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanPose_service_typesupport_map = {
  2,
  "xarm_msgs",
  &_PlanPose_service_typesupport_ids.typesupport_identifier[0],
  &_PlanPose_service_typesupport_symbol_names.symbol_name[0],
  &_PlanPose_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PlanPose_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanPose_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<xarm_msgs::srv::PlanPose_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<xarm_msgs::srv::PlanPose_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<xarm_msgs::srv::PlanPose_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<xarm_msgs::srv::PlanPose>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<xarm_msgs::srv::PlanPose>,
  &xarm_msgs__srv__PlanPose__get_type_hash,
  &xarm_msgs__srv__PlanPose__get_type_description,
  &xarm_msgs__srv__PlanPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<xarm_msgs::srv::PlanPose>()
{
  return &::xarm_msgs::srv::rosidl_typesupport_cpp::PlanPose_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, xarm_msgs, srv, PlanPose)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<xarm_msgs::srv::PlanPose>();
}

#ifdef __cplusplus
}
#endif
