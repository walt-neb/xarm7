// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xarm_msgs:srv/RobotiqMove.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xarm_msgs/srv/detail/robotiq_move__rosidl_typesupport_introspection_c.h"
#include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xarm_msgs/srv/detail/robotiq_move__functions.h"
#include "xarm_msgs/srv/detail/robotiq_move__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__RobotiqMove_Request__init(message_memory);
}

void xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_fini_function(void * message_memory)
{
  xarm_msgs__srv__RobotiqMove_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_message_member_array[5] = {
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqMove_Request, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqMove_Request, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqMove_Request, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wait",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqMove_Request, wait),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqMove_Request, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_message_members = {
  "xarm_msgs__srv",  // message namespace
  "RobotiqMove_Request",  // message name
  5,  // number of fields
  sizeof(xarm_msgs__srv__RobotiqMove_Request),
  false,  // has_any_key_member_
  xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_message_member_array,  // message members
  xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_message_type_support_handle = {
  0,
  &xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_message_members,
  get_message_typesupport_handle_function,
  &xarm_msgs__srv__RobotiqMove_Request__get_type_hash,
  &xarm_msgs__srv__RobotiqMove_Request__get_type_description,
  &xarm_msgs__srv__RobotiqMove_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove_Request)() {
  if (!xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_message_type_support_handle.typesupport_identifier) {
    xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "xarm_msgs/srv/detail/robotiq_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_move__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_move__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `ret_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__RobotiqMove_Response__init(message_memory);
}

void xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_fini_function(void * message_memory)
{
  xarm_msgs__srv__RobotiqMove_Response__fini(message_memory);
}

size_t xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__size_function__RobotiqMove_Response__ret_data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__get_const_function__RobotiqMove_Response__ret_data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__get_function__RobotiqMove_Response__ret_data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__fetch_function__RobotiqMove_Response__ret_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__get_const_function__RobotiqMove_Response__ret_data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__assign_function__RobotiqMove_Response__ret_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__get_function__RobotiqMove_Response__ret_data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__resize_function__RobotiqMove_Response__ret_data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_message_member_array[3] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqMove_Response, ret),  // bytes offset in struct
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
    offsetof(xarm_msgs__srv__RobotiqMove_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ret_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqMove_Response, ret_data),  // bytes offset in struct
    NULL,  // default value
    xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__size_function__RobotiqMove_Response__ret_data,  // size() function pointer
    xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__get_const_function__RobotiqMove_Response__ret_data,  // get_const(index) function pointer
    xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__get_function__RobotiqMove_Response__ret_data,  // get(index) function pointer
    xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__fetch_function__RobotiqMove_Response__ret_data,  // fetch(index, &value) function pointer
    xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__assign_function__RobotiqMove_Response__ret_data,  // assign(index, value) function pointer
    xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__resize_function__RobotiqMove_Response__ret_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_message_members = {
  "xarm_msgs__srv",  // message namespace
  "RobotiqMove_Response",  // message name
  3,  // number of fields
  sizeof(xarm_msgs__srv__RobotiqMove_Response),
  false,  // has_any_key_member_
  xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_message_member_array,  // message members
  xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_message_type_support_handle = {
  0,
  &xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_message_members,
  get_message_typesupport_handle_function,
  &xarm_msgs__srv__RobotiqMove_Response__get_type_hash,
  &xarm_msgs__srv__RobotiqMove_Response__get_type_description,
  &xarm_msgs__srv__RobotiqMove_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove_Response)() {
  if (!xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_message_type_support_handle.typesupport_identifier) {
    xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "xarm_msgs/srv/detail/robotiq_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_move__functions.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_move__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "xarm_msgs/srv/robotiq_move.h"
// Member `request`
// Member `response`
// already included above
// #include "xarm_msgs/srv/detail/robotiq_move__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xarm_msgs__srv__RobotiqMove_Event__init(message_memory);
}

void xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_fini_function(void * message_memory)
{
  xarm_msgs__srv__RobotiqMove_Event__fini(message_memory);
}

size_t xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__size_function__RobotiqMove_Event__request(
  const void * untyped_member)
{
  const xarm_msgs__srv__RobotiqMove_Request__Sequence * member =
    (const xarm_msgs__srv__RobotiqMove_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_const_function__RobotiqMove_Event__request(
  const void * untyped_member, size_t index)
{
  const xarm_msgs__srv__RobotiqMove_Request__Sequence * member =
    (const xarm_msgs__srv__RobotiqMove_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_function__RobotiqMove_Event__request(
  void * untyped_member, size_t index)
{
  xarm_msgs__srv__RobotiqMove_Request__Sequence * member =
    (xarm_msgs__srv__RobotiqMove_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__fetch_function__RobotiqMove_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const xarm_msgs__srv__RobotiqMove_Request * item =
    ((const xarm_msgs__srv__RobotiqMove_Request *)
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_const_function__RobotiqMove_Event__request(untyped_member, index));
  xarm_msgs__srv__RobotiqMove_Request * value =
    (xarm_msgs__srv__RobotiqMove_Request *)(untyped_value);
  *value = *item;
}

void xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__assign_function__RobotiqMove_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  xarm_msgs__srv__RobotiqMove_Request * item =
    ((xarm_msgs__srv__RobotiqMove_Request *)
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_function__RobotiqMove_Event__request(untyped_member, index));
  const xarm_msgs__srv__RobotiqMove_Request * value =
    (const xarm_msgs__srv__RobotiqMove_Request *)(untyped_value);
  *item = *value;
}

bool xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__resize_function__RobotiqMove_Event__request(
  void * untyped_member, size_t size)
{
  xarm_msgs__srv__RobotiqMove_Request__Sequence * member =
    (xarm_msgs__srv__RobotiqMove_Request__Sequence *)(untyped_member);
  xarm_msgs__srv__RobotiqMove_Request__Sequence__fini(member);
  return xarm_msgs__srv__RobotiqMove_Request__Sequence__init(member, size);
}

size_t xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__size_function__RobotiqMove_Event__response(
  const void * untyped_member)
{
  const xarm_msgs__srv__RobotiqMove_Response__Sequence * member =
    (const xarm_msgs__srv__RobotiqMove_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_const_function__RobotiqMove_Event__response(
  const void * untyped_member, size_t index)
{
  const xarm_msgs__srv__RobotiqMove_Response__Sequence * member =
    (const xarm_msgs__srv__RobotiqMove_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_function__RobotiqMove_Event__response(
  void * untyped_member, size_t index)
{
  xarm_msgs__srv__RobotiqMove_Response__Sequence * member =
    (xarm_msgs__srv__RobotiqMove_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__fetch_function__RobotiqMove_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const xarm_msgs__srv__RobotiqMove_Response * item =
    ((const xarm_msgs__srv__RobotiqMove_Response *)
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_const_function__RobotiqMove_Event__response(untyped_member, index));
  xarm_msgs__srv__RobotiqMove_Response * value =
    (xarm_msgs__srv__RobotiqMove_Response *)(untyped_value);
  *value = *item;
}

void xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__assign_function__RobotiqMove_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  xarm_msgs__srv__RobotiqMove_Response * item =
    ((xarm_msgs__srv__RobotiqMove_Response *)
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_function__RobotiqMove_Event__response(untyped_member, index));
  const xarm_msgs__srv__RobotiqMove_Response * value =
    (const xarm_msgs__srv__RobotiqMove_Response *)(untyped_value);
  *item = *value;
}

bool xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__resize_function__RobotiqMove_Event__response(
  void * untyped_member, size_t size)
{
  xarm_msgs__srv__RobotiqMove_Response__Sequence * member =
    (xarm_msgs__srv__RobotiqMove_Response__Sequence *)(untyped_member);
  xarm_msgs__srv__RobotiqMove_Response__Sequence__fini(member);
  return xarm_msgs__srv__RobotiqMove_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xarm_msgs__srv__RobotiqMove_Event, info),  // bytes offset in struct
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
    offsetof(xarm_msgs__srv__RobotiqMove_Event, request),  // bytes offset in struct
    NULL,  // default value
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__size_function__RobotiqMove_Event__request,  // size() function pointer
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_const_function__RobotiqMove_Event__request,  // get_const(index) function pointer
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_function__RobotiqMove_Event__request,  // get(index) function pointer
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__fetch_function__RobotiqMove_Event__request,  // fetch(index, &value) function pointer
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__assign_function__RobotiqMove_Event__request,  // assign(index, value) function pointer
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__resize_function__RobotiqMove_Event__request  // resize(index) function pointer
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
    offsetof(xarm_msgs__srv__RobotiqMove_Event, response),  // bytes offset in struct
    NULL,  // default value
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__size_function__RobotiqMove_Event__response,  // size() function pointer
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_const_function__RobotiqMove_Event__response,  // get_const(index) function pointer
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__get_function__RobotiqMove_Event__response,  // get(index) function pointer
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__fetch_function__RobotiqMove_Event__response,  // fetch(index, &value) function pointer
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__assign_function__RobotiqMove_Event__response,  // assign(index, value) function pointer
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__resize_function__RobotiqMove_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_members = {
  "xarm_msgs__srv",  // message namespace
  "RobotiqMove_Event",  // message name
  3,  // number of fields
  sizeof(xarm_msgs__srv__RobotiqMove_Event),
  false,  // has_any_key_member_
  xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_member_array,  // message members
  xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_type_support_handle = {
  0,
  &xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_members,
  get_message_typesupport_handle_function,
  &xarm_msgs__srv__RobotiqMove_Event__get_type_hash,
  &xarm_msgs__srv__RobotiqMove_Event__get_type_description,
  &xarm_msgs__srv__RobotiqMove_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove_Event)() {
  xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove_Request)();
  xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove_Response)();
  if (!xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_type_support_handle.typesupport_identifier) {
    xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_move__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers xarm_msgs__srv__detail__robotiq_move__rosidl_typesupport_introspection_c__RobotiqMove_service_members = {
  "xarm_msgs__srv",  // service namespace
  "RobotiqMove",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // xarm_msgs__srv__detail__robotiq_move__rosidl_typesupport_introspection_c__RobotiqMove_Request_message_type_support_handle,
  NULL,  // response message
  // xarm_msgs__srv__detail__robotiq_move__rosidl_typesupport_introspection_c__RobotiqMove_Response_message_type_support_handle
  NULL  // event_message
  // xarm_msgs__srv__detail__robotiq_move__rosidl_typesupport_introspection_c__RobotiqMove_Response_message_type_support_handle
};


static rosidl_service_type_support_t xarm_msgs__srv__detail__robotiq_move__rosidl_typesupport_introspection_c__RobotiqMove_service_type_support_handle = {
  0,
  &xarm_msgs__srv__detail__robotiq_move__rosidl_typesupport_introspection_c__RobotiqMove_service_members,
  get_service_typesupport_handle_function,
  &xarm_msgs__srv__RobotiqMove_Request__rosidl_typesupport_introspection_c__RobotiqMove_Request_message_type_support_handle,
  &xarm_msgs__srv__RobotiqMove_Response__rosidl_typesupport_introspection_c__RobotiqMove_Response_message_type_support_handle,
  &xarm_msgs__srv__RobotiqMove_Event__rosidl_typesupport_introspection_c__RobotiqMove_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarm_msgs,
    srv,
    RobotiqMove
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarm_msgs,
    srv,
    RobotiqMove
  ),
  &xarm_msgs__srv__RobotiqMove__get_type_hash,
  &xarm_msgs__srv__RobotiqMove__get_type_description,
  &xarm_msgs__srv__RobotiqMove__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xarm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove)(void) {
  if (!xarm_msgs__srv__detail__robotiq_move__rosidl_typesupport_introspection_c__RobotiqMove_service_type_support_handle.typesupport_identifier) {
    xarm_msgs__srv__detail__robotiq_move__rosidl_typesupport_introspection_c__RobotiqMove_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)xarm_msgs__srv__detail__robotiq_move__rosidl_typesupport_introspection_c__RobotiqMove_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xarm_msgs, srv, RobotiqMove_Event)()->data;
  }

  return &xarm_msgs__srv__detail__robotiq_move__rosidl_typesupport_introspection_c__RobotiqMove_service_type_support_handle;
}
