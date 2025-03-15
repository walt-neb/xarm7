// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xarm_msgs:srv/RobotiqActivate.idl
// generated code does not contain a copyright notice
#include "xarm_msgs/srv/detail/robotiq_activate__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xarm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xarm_msgs/srv/detail/robotiq_activate__struct.h"
#include "xarm_msgs/srv/detail/robotiq_activate__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RobotiqActivate_Request__ros_msg_type = xarm_msgs__srv__RobotiqActivate_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
bool cdr_serialize_xarm_msgs__srv__RobotiqActivate_Request(
  const xarm_msgs__srv__RobotiqActivate_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: wait
  {
    cdr << (ros_message->wait ? true : false);
  }

  // Field name: timeout
  {
    cdr << ros_message->timeout;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
bool cdr_deserialize_xarm_msgs__srv__RobotiqActivate_Request(
  eprosima::fastcdr::Cdr & cdr,
  xarm_msgs__srv__RobotiqActivate_Request * ros_message)
{
  // Field name: wait
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wait = tmp ? true : false;
  }

  // Field name: timeout
  {
    cdr >> ros_message->timeout;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t get_serialized_size_xarm_msgs__srv__RobotiqActivate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotiqActivate_Request__ros_msg_type * ros_message = static_cast<const _RobotiqActivate_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: wait
  {
    size_t item_size = sizeof(ros_message->wait);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: timeout
  {
    size_t item_size = sizeof(ros_message->timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t max_serialized_size_xarm_msgs__srv__RobotiqActivate_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: wait
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: timeout
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarm_msgs__srv__RobotiqActivate_Request;
    is_plain =
      (
      offsetof(DataType, timeout) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
bool cdr_serialize_key_xarm_msgs__srv__RobotiqActivate_Request(
  const xarm_msgs__srv__RobotiqActivate_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: wait
  {
    cdr << (ros_message->wait ? true : false);
  }

  // Field name: timeout
  {
    cdr << ros_message->timeout;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t get_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotiqActivate_Request__ros_msg_type * ros_message = static_cast<const _RobotiqActivate_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: wait
  {
    size_t item_size = sizeof(ros_message->wait);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: timeout
  {
    size_t item_size = sizeof(ros_message->timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t max_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: wait
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: timeout
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarm_msgs__srv__RobotiqActivate_Request;
    is_plain =
      (
      offsetof(DataType, timeout) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RobotiqActivate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const xarm_msgs__srv__RobotiqActivate_Request * ros_message = static_cast<const xarm_msgs__srv__RobotiqActivate_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_xarm_msgs__srv__RobotiqActivate_Request(ros_message, cdr);
}

static bool _RobotiqActivate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  xarm_msgs__srv__RobotiqActivate_Request * ros_message = static_cast<xarm_msgs__srv__RobotiqActivate_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_xarm_msgs__srv__RobotiqActivate_Request(cdr, ros_message);
}

static uint32_t _RobotiqActivate_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xarm_msgs__srv__RobotiqActivate_Request(
      untyped_ros_message, 0));
}

static size_t _RobotiqActivate_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xarm_msgs__srv__RobotiqActivate_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotiqActivate_Request = {
  "xarm_msgs::srv",
  "RobotiqActivate_Request",
  _RobotiqActivate_Request__cdr_serialize,
  _RobotiqActivate_Request__cdr_deserialize,
  _RobotiqActivate_Request__get_serialized_size,
  _RobotiqActivate_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RobotiqActivate_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotiqActivate_Request,
  get_message_typesupport_handle_function,
  &xarm_msgs__srv__RobotiqActivate_Request__get_type_hash,
  &xarm_msgs__srv__RobotiqActivate_Request__get_type_description,
  &xarm_msgs__srv__RobotiqActivate_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, RobotiqActivate_Request)() {
  return &_RobotiqActivate_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_activate__struct.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_activate__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // ret_data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // ret_data
#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _RobotiqActivate_Response__ros_msg_type = xarm_msgs__srv__RobotiqActivate_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
bool cdr_serialize_xarm_msgs__srv__RobotiqActivate_Response(
  const xarm_msgs__srv__RobotiqActivate_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: ret
  {
    cdr << ros_message->ret;
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ret_data
  {
    size_t size = ros_message->ret_data.size;
    auto array_ptr = ros_message->ret_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
bool cdr_deserialize_xarm_msgs__srv__RobotiqActivate_Response(
  eprosima::fastcdr::Cdr & cdr,
  xarm_msgs__srv__RobotiqActivate_Response * ros_message)
{
  // Field name: ret
  {
    cdr >> ros_message->ret;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  // Field name: ret_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ret_data.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->ret_data);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->ret_data, size)) {
      fprintf(stderr, "failed to create array for field 'ret_data'");
      return false;
    }
    auto array_ptr = ros_message->ret_data.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t get_serialized_size_xarm_msgs__srv__RobotiqActivate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotiqActivate_Response__ros_msg_type * ros_message = static_cast<const _RobotiqActivate_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: ret
  {
    size_t item_size = sizeof(ros_message->ret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  // Field name: ret_data
  {
    size_t array_size = ros_message->ret_data.size;
    auto array_ptr = ros_message->ret_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t max_serialized_size_xarm_msgs__srv__RobotiqActivate_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: ret
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: ret_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarm_msgs__srv__RobotiqActivate_Response;
    is_plain =
      (
      offsetof(DataType, ret_data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
bool cdr_serialize_key_xarm_msgs__srv__RobotiqActivate_Response(
  const xarm_msgs__srv__RobotiqActivate_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: ret
  {
    cdr << ros_message->ret;
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: ret_data
  {
    size_t size = ros_message->ret_data.size;
    auto array_ptr = ros_message->ret_data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t get_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotiqActivate_Response__ros_msg_type * ros_message = static_cast<const _RobotiqActivate_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: ret
  {
    size_t item_size = sizeof(ros_message->ret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  // Field name: ret_data
  {
    size_t array_size = ros_message->ret_data.size;
    auto array_ptr = ros_message->ret_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t max_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: ret
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: message
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: ret_data
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarm_msgs__srv__RobotiqActivate_Response;
    is_plain =
      (
      offsetof(DataType, ret_data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RobotiqActivate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const xarm_msgs__srv__RobotiqActivate_Response * ros_message = static_cast<const xarm_msgs__srv__RobotiqActivate_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_xarm_msgs__srv__RobotiqActivate_Response(ros_message, cdr);
}

static bool _RobotiqActivate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  xarm_msgs__srv__RobotiqActivate_Response * ros_message = static_cast<xarm_msgs__srv__RobotiqActivate_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_xarm_msgs__srv__RobotiqActivate_Response(cdr, ros_message);
}

static uint32_t _RobotiqActivate_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xarm_msgs__srv__RobotiqActivate_Response(
      untyped_ros_message, 0));
}

static size_t _RobotiqActivate_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xarm_msgs__srv__RobotiqActivate_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotiqActivate_Response = {
  "xarm_msgs::srv",
  "RobotiqActivate_Response",
  _RobotiqActivate_Response__cdr_serialize,
  _RobotiqActivate_Response__cdr_deserialize,
  _RobotiqActivate_Response__get_serialized_size,
  _RobotiqActivate_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RobotiqActivate_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotiqActivate_Response,
  get_message_typesupport_handle_function,
  &xarm_msgs__srv__RobotiqActivate_Response__get_type_hash,
  &xarm_msgs__srv__RobotiqActivate_Response__get_type_description,
  &xarm_msgs__srv__RobotiqActivate_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, RobotiqActivate_Response)() {
  return &_RobotiqActivate_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_activate__struct.h"
// already included above
// #include "xarm_msgs/srv/detail/robotiq_activate__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarm_msgs
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarm_msgs
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarm_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarm_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarm_msgs
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarm_msgs
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarm_msgs
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_xarm_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();

bool cdr_serialize_xarm_msgs__srv__RobotiqActivate_Request(
  const xarm_msgs__srv__RobotiqActivate_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_xarm_msgs__srv__RobotiqActivate_Request(
  eprosima::fastcdr::Cdr & cdr,
  xarm_msgs__srv__RobotiqActivate_Request * ros_message);

size_t get_serialized_size_xarm_msgs__srv__RobotiqActivate_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_xarm_msgs__srv__RobotiqActivate_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_xarm_msgs__srv__RobotiqActivate_Request(
  const xarm_msgs__srv__RobotiqActivate_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, RobotiqActivate_Request)();

bool cdr_serialize_xarm_msgs__srv__RobotiqActivate_Response(
  const xarm_msgs__srv__RobotiqActivate_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_xarm_msgs__srv__RobotiqActivate_Response(
  eprosima::fastcdr::Cdr & cdr,
  xarm_msgs__srv__RobotiqActivate_Response * ros_message);

size_t get_serialized_size_xarm_msgs__srv__RobotiqActivate_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_xarm_msgs__srv__RobotiqActivate_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_xarm_msgs__srv__RobotiqActivate_Response(
  const xarm_msgs__srv__RobotiqActivate_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, RobotiqActivate_Response)();


using _RobotiqActivate_Event__ros_msg_type = xarm_msgs__srv__RobotiqActivate_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
bool cdr_serialize_xarm_msgs__srv__RobotiqActivate_Event(
  const xarm_msgs__srv__RobotiqActivate_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_xarm_msgs__srv__RobotiqActivate_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_xarm_msgs__srv__RobotiqActivate_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
bool cdr_deserialize_xarm_msgs__srv__RobotiqActivate_Event(
  eprosima::fastcdr::Cdr & cdr,
  xarm_msgs__srv__RobotiqActivate_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      xarm_msgs__srv__RobotiqActivate_Request__Sequence__fini(&ros_message->request);
    }
    if (!xarm_msgs__srv__RobotiqActivate_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_xarm_msgs__srv__RobotiqActivate_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      xarm_msgs__srv__RobotiqActivate_Response__Sequence__fini(&ros_message->response);
    }
    if (!xarm_msgs__srv__RobotiqActivate_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_xarm_msgs__srv__RobotiqActivate_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t get_serialized_size_xarm_msgs__srv__RobotiqActivate_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotiqActivate_Event__ros_msg_type * ros_message = static_cast<const _RobotiqActivate_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_xarm_msgs__srv__RobotiqActivate_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_xarm_msgs__srv__RobotiqActivate_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t max_serialized_size_xarm_msgs__srv__RobotiqActivate_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_xarm_msgs__srv__RobotiqActivate_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_xarm_msgs__srv__RobotiqActivate_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarm_msgs__srv__RobotiqActivate_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
bool cdr_serialize_key_xarm_msgs__srv__RobotiqActivate_Event(
  const xarm_msgs__srv__RobotiqActivate_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_xarm_msgs__srv__RobotiqActivate_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_xarm_msgs__srv__RobotiqActivate_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t get_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotiqActivate_Event__ros_msg_type * ros_message = static_cast<const _RobotiqActivate_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xarm_msgs
size_t max_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_xarm_msgs__srv__RobotiqActivate_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xarm_msgs__srv__RobotiqActivate_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RobotiqActivate_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const xarm_msgs__srv__RobotiqActivate_Event * ros_message = static_cast<const xarm_msgs__srv__RobotiqActivate_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_xarm_msgs__srv__RobotiqActivate_Event(ros_message, cdr);
}

static bool _RobotiqActivate_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  xarm_msgs__srv__RobotiqActivate_Event * ros_message = static_cast<xarm_msgs__srv__RobotiqActivate_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_xarm_msgs__srv__RobotiqActivate_Event(cdr, ros_message);
}

static uint32_t _RobotiqActivate_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xarm_msgs__srv__RobotiqActivate_Event(
      untyped_ros_message, 0));
}

static size_t _RobotiqActivate_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xarm_msgs__srv__RobotiqActivate_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotiqActivate_Event = {
  "xarm_msgs::srv",
  "RobotiqActivate_Event",
  _RobotiqActivate_Event__cdr_serialize,
  _RobotiqActivate_Event__cdr_deserialize,
  _RobotiqActivate_Event__get_serialized_size,
  _RobotiqActivate_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RobotiqActivate_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotiqActivate_Event,
  get_message_typesupport_handle_function,
  &xarm_msgs__srv__RobotiqActivate_Event__get_type_hash,
  &xarm_msgs__srv__RobotiqActivate_Event__get_type_description,
  &xarm_msgs__srv__RobotiqActivate_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, RobotiqActivate_Event)() {
  return &_RobotiqActivate_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "xarm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xarm_msgs/srv/robotiq_activate.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RobotiqActivate__callbacks = {
  "xarm_msgs::srv",
  "RobotiqActivate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, RobotiqActivate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, RobotiqActivate_Response)(),
};

static rosidl_service_type_support_t RobotiqActivate__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RobotiqActivate__callbacks,
  get_service_typesupport_handle_function,
  &_RobotiqActivate_Request__type_support,
  &_RobotiqActivate_Response__type_support,
  &_RobotiqActivate_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarm_msgs,
    srv,
    RobotiqActivate
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    xarm_msgs,
    srv,
    RobotiqActivate
  ),
  &xarm_msgs__srv__RobotiqActivate__get_type_hash,
  &xarm_msgs__srv__RobotiqActivate__get_type_description,
  &xarm_msgs__srv__RobotiqActivate__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xarm_msgs, srv, RobotiqActivate)() {
  return &RobotiqActivate__handle;
}

#if defined(__cplusplus)
}
#endif
