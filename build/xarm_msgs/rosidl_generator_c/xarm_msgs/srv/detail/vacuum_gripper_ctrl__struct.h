// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xarm_msgs:srv/VacuumGripperCtrl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarm_msgs/srv/vacuum_gripper_ctrl.h"


#ifndef XARM_MSGS__SRV__DETAIL__VACUUM_GRIPPER_CTRL__STRUCT_H_
#define XARM_MSGS__SRV__DETAIL__VACUUM_GRIPPER_CTRL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/VacuumGripperCtrl in the package xarm_msgs.
typedef struct xarm_msgs__srv__VacuumGripperCtrl_Request
{
  bool on;
  bool wait;
  float timeout;
  float delay_sec;
} xarm_msgs__srv__VacuumGripperCtrl_Request;

// Struct for a sequence of xarm_msgs__srv__VacuumGripperCtrl_Request.
typedef struct xarm_msgs__srv__VacuumGripperCtrl_Request__Sequence
{
  xarm_msgs__srv__VacuumGripperCtrl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarm_msgs__srv__VacuumGripperCtrl_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/VacuumGripperCtrl in the package xarm_msgs.
typedef struct xarm_msgs__srv__VacuumGripperCtrl_Response
{
  int16_t ret;
  rosidl_runtime_c__String message;
} xarm_msgs__srv__VacuumGripperCtrl_Response;

// Struct for a sequence of xarm_msgs__srv__VacuumGripperCtrl_Response.
typedef struct xarm_msgs__srv__VacuumGripperCtrl_Response__Sequence
{
  xarm_msgs__srv__VacuumGripperCtrl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarm_msgs__srv__VacuumGripperCtrl_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  xarm_msgs__srv__VacuumGripperCtrl_Event__request__MAX_SIZE = 1
};
// response
enum
{
  xarm_msgs__srv__VacuumGripperCtrl_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/VacuumGripperCtrl in the package xarm_msgs.
typedef struct xarm_msgs__srv__VacuumGripperCtrl_Event
{
  service_msgs__msg__ServiceEventInfo info;
  xarm_msgs__srv__VacuumGripperCtrl_Request__Sequence request;
  xarm_msgs__srv__VacuumGripperCtrl_Response__Sequence response;
} xarm_msgs__srv__VacuumGripperCtrl_Event;

// Struct for a sequence of xarm_msgs__srv__VacuumGripperCtrl_Event.
typedef struct xarm_msgs__srv__VacuumGripperCtrl_Event__Sequence
{
  xarm_msgs__srv__VacuumGripperCtrl_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xarm_msgs__srv__VacuumGripperCtrl_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XARM_MSGS__SRV__DETAIL__VACUUM_GRIPPER_CTRL__STRUCT_H_
