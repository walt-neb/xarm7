// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xarm_msgs:srv/SetFloat32List.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarm_msgs/srv/set_float32_list.h"


#ifndef XARM_MSGS__SRV__DETAIL__SET_FLOAT32_LIST__STRUCT_H_
#define XARM_MSGS__SRV__DETAIL__SET_FLOAT32_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'datas'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetFloat32List in the package xarm_msgs.
typedef struct xarm_msgs__srv__SetFloat32List_Request
{
  rosidl_runtime_c__float__Sequence datas;
} xarm_msgs__srv__SetFloat32List_Request;

// Struct for a sequence of xarm_msgs__srv__SetFloat32List_Request.
typedef struct xarm_msgs__srv__SetFloat32List_Request__Sequence
{
  xarm_msgs__srv__SetFloat32List_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarm_msgs__srv__SetFloat32List_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetFloat32List in the package xarm_msgs.
typedef struct xarm_msgs__srv__SetFloat32List_Response
{
  int16_t ret;
  rosidl_runtime_c__String message;
} xarm_msgs__srv__SetFloat32List_Response;

// Struct for a sequence of xarm_msgs__srv__SetFloat32List_Response.
typedef struct xarm_msgs__srv__SetFloat32List_Response__Sequence
{
  xarm_msgs__srv__SetFloat32List_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarm_msgs__srv__SetFloat32List_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  xarm_msgs__srv__SetFloat32List_Event__request__MAX_SIZE = 1
};
// response
enum
{
  xarm_msgs__srv__SetFloat32List_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetFloat32List in the package xarm_msgs.
typedef struct xarm_msgs__srv__SetFloat32List_Event
{
  service_msgs__msg__ServiceEventInfo info;
  xarm_msgs__srv__SetFloat32List_Request__Sequence request;
  xarm_msgs__srv__SetFloat32List_Response__Sequence response;
} xarm_msgs__srv__SetFloat32List_Event;

// Struct for a sequence of xarm_msgs__srv__SetFloat32List_Event.
typedef struct xarm_msgs__srv__SetFloat32List_Event__Sequence
{
  xarm_msgs__srv__SetFloat32List_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarm_msgs__srv__SetFloat32List_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XARM_MSGS__SRV__DETAIL__SET_FLOAT32_LIST__STRUCT_H_
