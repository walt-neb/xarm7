// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xarm_msgs:srv/SetTcpLoad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xarm_msgs/srv/detail/set_tcp_load__rosidl_typesupport_introspection_c.h"
#include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xarm_msgs/srv/detail/set_tcp_load__functions.h"
#include "xarm_msgs/srv/detail/set_tcp_load__struct.h"


// Include directives for member types
// Member `center_of_gravity`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__SetTcpLoad_Request__init(message_memory);
}

void xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_fini_function(void * message_memory)
{
  xarm_msgs__srv__SetTcpLoad_Request__fini(message_memory);
}

size_t xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__size_function__SetTcpLoad_Request__center_of_gravity(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__get_const_function__SetTcpLoad_Request__center_of_gravity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__get_function__SetTcpLoad_Request__center_of_gravity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__fetch_function__SetTcpLoad_Request__center_of_gravity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__get_const_function__SetTcpLoad_Request__center_of_gravity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__assign_function__SetTcpLoad_Request__center_of_gravity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__get_function__SetTcpLoad_Request__center_of_gravity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__resize_function__SetTcpLoad_Request__center_of_gravity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_message_member_array[2] = {
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__SetTcpLoad_Request, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center_of_gravity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__SetTcpLoad_Request, center_of_gravity),  // bytes offset in struct
    NULL,  // default value
    xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__size_function__SetTcpLoad_Request__center_of_gravity,  // size() function pointer
    xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__get_const_function__SetTcpLoad_Request__center_of_gravity,  // get_const(index) function pointer
    xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__get_function__SetTcpLoad_Request__center_of_gravity,  // get(index) function pointer
    xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__fetch_function__SetTcpLoad_Request__center_of_gravity,  // fetch(index, &value) function pointer
    xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__assign_function__SetTcpLoad_Request__center_of_gravity,  // assign(index, value) function pointer
    xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__resize_function__SetTcpLoad_Request__center_of_gravity  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_message_members = {
  "xarm_msgs__srv",  // message namespace
  "SetTcpLoad_Request",  // message name
  2,  // number of fields
  sizeof(xarm_msgs__srv__SetTcpLoad_Request),
  false,  // has_any_key_member_
  xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_message_member_array,  // message members
  xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_message_type_support_handle = {
  0,
  &xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_message_members,
  get_message_typesupport_handle_function,
  &xarm_msgs__srv__SetTcpLoad_Request__get_type_hash,
  &xarm_msgs__srv__SetTcpLoad_Request__get_type_description,
  &xarm_msgs__srv__SetTcpLoad_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad_Request)() {
  if (!xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_message_type_support_handle.typesupport_identifier) {
    xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "xarm_msgs/srv/detail/set_tcp_load__rosidl_typesupport_introspection_c.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "xarm_msgs/srv/detail/set_tcp_load__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/set_tcp_load__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__SetTcpLoad_Response__init(message_memory);
}

void xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_fini_function(void * message_memory)
{
  xarm_msgs__srv__SetTcpLoad_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_message_member_array[2] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__SetTcpLoad_Response, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__SetTcpLoad_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_message_members = {
  "xarm_msgs__srv",  // message namespace
  "SetTcpLoad_Response",  // message name
  2,  // number of fields
  sizeof(xarm_msgs__srv__SetTcpLoad_Response),
  false,  // has_any_key_member_
  xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_message_member_array,  // message members
  xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_message_type_support_handle = {
  0,
  &xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_message_members,
  get_message_typesupport_handle_function,
  &xarm_msgs__srv__SetTcpLoad_Response__get_type_hash,
  &xarm_msgs__srv__SetTcpLoad_Response__get_type_description,
  &xarm_msgs__srv__SetTcpLoad_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad_Response)() {
  if (!xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_message_type_support_handle.typesupport_identifier) {
    xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "xarm_msgs/srv/detail/set_tcp_load__rosidl_typesupport_introspection_c.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "xarm_msgs/srv/detail/set_tcp_load__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/set_tcp_load__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "xarm_msgs/srv/set_tcp_load.h"
// Member `request`
// Member `response`
// already included above
// #include "xarm_msgs/srv/detail/set_tcp_load__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__SetTcpLoad_Event__init(message_memory);
}

void xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_fini_function(void * message_memory)
{
  xarm_msgs__srv__SetTcpLoad_Event__fini(message_memory);
}

size_t xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__size_function__SetTcpLoad_Event__request(
  const void * untyped_member)
{
  const xarm_msgs__srv__SetTcpLoad_Request__Sequence * member =
    (const xarm_msgs__srv__SetTcpLoad_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_const_function__SetTcpLoad_Event__request(
  const void * untyped_member, size_t index)
{
  const xarm_msgs__srv__SetTcpLoad_Request__Sequence * member =
    (const xarm_msgs__srv__SetTcpLoad_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_function__SetTcpLoad_Event__request(
  void * untyped_member, size_t index)
{
  xarm_msgs__srv__SetTcpLoad_Request__Sequence * member =
    (xarm_msgs__srv__SetTcpLoad_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__fetch_function__SetTcpLoad_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const xarm_msgs__srv__SetTcpLoad_Request * item =
    ((const xarm_msgs__srv__SetTcpLoad_Request *)
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_const_function__SetTcpLoad_Event__request(untyped_member, index));
  xarm_msgs__srv__SetTcpLoad_Request * value =
    (xarm_msgs__srv__SetTcpLoad_Request *)(untyped_value);
  *value = *item;
}

void xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__assign_function__SetTcpLoad_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  xarm_msgs__srv__SetTcpLoad_Request * item =
    ((xarm_msgs__srv__SetTcpLoad_Request *)
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_function__SetTcpLoad_Event__request(untyped_member, index));
  const xarm_msgs__srv__SetTcpLoad_Request * value =
    (const xarm_msgs__srv__SetTcpLoad_Request *)(untyped_value);
  *item = *value;
}

bool xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__resize_function__SetTcpLoad_Event__request(
  void * untyped_member, size_t size)
{
  xarm_msgs__srv__SetTcpLoad_Request__Sequence * member =
    (xarm_msgs__srv__SetTcpLoad_Request__Sequence *)(untyped_member);
  xarm_msgs__srv__SetTcpLoad_Request__Sequence__fini(member);
  return xarm_msgs__srv__SetTcpLoad_Request__Sequence__init(member, size);
}

size_t xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__size_function__SetTcpLoad_Event__response(
  const void * untyped_member)
{
  const xarm_msgs__srv__SetTcpLoad_Response__Sequence * member =
    (const xarm_msgs__srv__SetTcpLoad_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_const_function__SetTcpLoad_Event__response(
  const void * untyped_member, size_t index)
{
  const xarm_msgs__srv__SetTcpLoad_Response__Sequence * member =
    (const xarm_msgs__srv__SetTcpLoad_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_function__SetTcpLoad_Event__response(
  void * untyped_member, size_t index)
{
  xarm_msgs__srv__SetTcpLoad_Response__Sequence * member =
    (xarm_msgs__srv__SetTcpLoad_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__fetch_function__SetTcpLoad_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const xarm_msgs__srv__SetTcpLoad_Response * item =
    ((const xarm_msgs__srv__SetTcpLoad_Response *)
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_const_function__SetTcpLoad_Event__response(untyped_member, index));
  xarm_msgs__srv__SetTcpLoad_Response * value =
    (xarm_msgs__srv__SetTcpLoad_Response *)(untyped_value);
  *value = *item;
}

void xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__assign_function__SetTcpLoad_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  xarm_msgs__srv__SetTcpLoad_Response * item =
    ((xarm_msgs__srv__SetTcpLoad_Response *)
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_function__SetTcpLoad_Event__response(untyped_member, index));
  const xarm_msgs__srv__SetTcpLoad_Response * value =
    (const xarm_msgs__srv__SetTcpLoad_Response *)(untyped_value);
  *item = *value;
}

bool xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__resize_function__SetTcpLoad_Event__response(
  void * untyped_member, size_t size)
{
  xarm_msgs__srv__SetTcpLoad_Response__Sequence * member =
    (xarm_msgs__srv__SetTcpLoad_Response__Sequence *)(untyped_member);
  xarm_msgs__srv__SetTcpLoad_Response__Sequence__fini(member);
  return xarm_msgs__srv__SetTcpLoad_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__SetTcpLoad_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(xarm_msgs__srv__SetTcpLoad_Event, request),  // bytes offset in struct
    NULL,  // default value
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__size_function__SetTcpLoad_Event__request,  // size() function pointer
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_const_function__SetTcpLoad_Event__request,  // get_const(index) function pointer
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_function__SetTcpLoad_Event__request,  // get(index) function pointer
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__fetch_function__SetTcpLoad_Event__request,  // fetch(index, &value) function pointer
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__assign_function__SetTcpLoad_Event__request,  // assign(index, value) function pointer
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__resize_function__SetTcpLoad_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(xarm_msgs__srv__SetTcpLoad_Event, response),  // bytes offset in struct
    NULL,  // default value
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__size_function__SetTcpLoad_Event__response,  // size() function pointer
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_const_function__SetTcpLoad_Event__response,  // get_const(index) function pointer
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__get_function__SetTcpLoad_Event__response,  // get(index) function pointer
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__fetch_function__SetTcpLoad_Event__response,  // fetch(index, &value) function pointer
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__assign_function__SetTcpLoad_Event__response,  // assign(index, value) function pointer
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__resize_function__SetTcpLoad_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_members = {
  "xarm_msgs__srv",  // message namespace
  "SetTcpLoad_Event",  // message name
  3,  // number of fields
  sizeof(xarm_msgs__srv__SetTcpLoad_Event),
  false,  // has_any_key_member_
  xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_member_array,  // message members
  xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_type_support_handle = {
  0,
  &xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_members,
  get_message_typesupport_handle_function,
  &xarm_msgs__srv__SetTcpLoad_Event__get_type_hash,
  &xarm_msgs__srv__SetTcpLoad_Event__get_type_description,
  &xarm_msgs__srv__SetTcpLoad_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad_Event)() {
  xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad_Request)();
  xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad_Response)();
  if (!xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_type_support_handle.typesupport_identifier) {
    xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "xarm_msgs/srv/detail/set_tcp_load__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers xarm_msgs__srv__detail__set_tcp_load__rosidl_typesupport_introspection_c__SetTcpLoad_service_members = {
  "xarm_msgs__srv",  // service namespace
  "SetTcpLoad",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // xarm_msgs__srv__detail__set_tcp_load__rosidl_typesupport_introspection_c__SetTcpLoad_Request_message_type_support_handle,
  NULL,  // response message
  // xarm_msgs__srv__detail__set_tcp_load__rosidl_typesupport_introspection_c__SetTcpLoad_Response_message_type_support_handle
  NULL  // event_message
  // xarm_msgs__srv__detail__set_tcp_load__rosidl_typesupport_introspection_c__SetTcpLoad_Response_message_type_support_handle
};


static rosidl_service_type_support_t xarm_msgs__srv__detail__set_tcp_load__rosidl_typesupport_introspection_c__SetTcpLoad_service_type_support_handle = {
  0,
  &xarm_msgs__srv__detail__set_tcp_load__rosidl_typesupport_introspection_c__SetTcpLoad_service_members,
  get_service_typesupport_handle_function,
  &xarm_msgs__srv__SetTcpLoad_Request__rosidl_typesupport_introspection_c__SetTcpLoad_Request_message_type_support_handle,
  &xarm_msgs__srv__SetTcpLoad_Response__rosidl_typesupport_introspection_c__SetTcpLoad_Response_message_type_support_handle,
  &xarm_msgs__srv__SetTcpLoad_Event__rosidl_typesupport_introspection_c__SetTcpLoad_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarm_msgs,
    srv,
    SetTcpLoad
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarm_msgs,
    srv,
    SetTcpLoad
  ),
  &xarm_msgs__srv__SetTcpLoad__get_type_hash,
  &xarm_msgs__srv__SetTcpLoad__get_type_description,
  &xarm_msgs__srv__SetTcpLoad__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad)(void) {
  if (!xarm_msgs__srv__detail__set_tcp_load__rosidl_typesupport_introspection_c__SetTcpLoad_service_type_support_handle.typesupport_identifier) {
    xarm_msgs__srv__detail__set_tcp_load__rosidl_typesupport_introspection_c__SetTcpLoad_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)xarm_msgs__srv__detail__set_tcp_load__rosidl_typesupport_introspection_c__SetTcpLoad_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, SetTcpLoad_Event)()->data;
  }

  return &xarm_msgs__srv__detail__set_tcp_load__rosidl_typesupport_introspection_c__SetTcpLoad_service_type_support_handle;
}
