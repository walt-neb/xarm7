// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xarm_msgs:srv/RobotiqActivate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarm_msgs/srv/robotiq_activate.h"


#ifndef XARM_MSGS__SRV__DETAIL__ROBOTIQ_ACTIVATE__STRUCT_H_
#define XARM_MSGS__SRV__DETAIL__ROBOTIQ_ACTIVATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RobotiqActivate in the package xarm_msgs.
typedef struct xarm_msgs__srv__RobotiqActivate_Request
{
  bool wait;
  float timeout;
} xarm_msgs__srv__RobotiqActivate_Request;

// Struct for a sequence of xarm_msgs__srv__RobotiqActivate_Request.
typedef struct xarm_msgs__srv__RobotiqActivate_Request__Sequence
{
  xarm_msgs__srv__RobotiqActivate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarm_msgs__srv__RobotiqActivate_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'ret_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/RobotiqActivate in the package xarm_msgs.
typedef struct xarm_msgs__srv__RobotiqActivate_Response
{
  int16_t ret;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__uint8__Sequence ret_data;
} xarm_msgs__srv__RobotiqActivate_Response;

// Struct for a sequence of xarm_msgs__srv__RobotiqActivate_Response.
typedef struct xarm_msgs__srv__RobotiqActivate_Response__Sequence
{
  xarm_msgs__srv__RobotiqActivate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarm_msgs__srv__RobotiqActivate_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  xarm_msgs__srv__RobotiqActivate_Event__request__MAX_SIZE = 1
};
// response
enum
{
  xarm_msgs__srv__RobotiqActivate_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/RobotiqActivate in the package xarm_msgs.
typedef struct xarm_msgs__srv__RobotiqActivate_Event
{
  service_msgs__msg__ServiceEventInfo info;
  xarm_msgs__srv__RobotiqActivate_Request__Sequence request;
  xarm_msgs__srv__RobotiqActivate_Response__Sequence response;
} xarm_msgs__srv__RobotiqActivate_Event;

// Struct for a sequence of xarm_msgs__srv__RobotiqActivate_Event.
typedef struct xarm_msgs__srv__RobotiqActivate_Event__Sequence
{
  xarm_msgs__srv__RobotiqActivate_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarm_msgs__srv__RobotiqActivate_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XARM_MSGS__SRV__DETAIL__ROBOTIQ_ACTIVATE__STRUCT_H_
