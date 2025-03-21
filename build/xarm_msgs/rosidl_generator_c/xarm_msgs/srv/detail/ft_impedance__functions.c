// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xarm_msgs:srv/FtImpedance.idl
// generated code does not contain a copyright notice
#include "xarm_msgs/srv/detail/ft_impedance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `c_axis`
// Member `m`
// Member `k`
// Member `b`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
xarm_msgs__srv__FtImpedance_Request__init(xarm_msgs__srv__FtImpedance_Request * msg)
{
  if (!msg) {
    return false;
  }
  // coord
  // c_axis
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->c_axis, 0)) {
    xarm_msgs__srv__FtImpedance_Request__fini(msg);
    return false;
  }
  // m
  if (!rosidl_runtime_c__float__Sequence__init(&msg->m, 0)) {
    xarm_msgs__srv__FtImpedance_Request__fini(msg);
    return false;
  }
  // k
  if (!rosidl_runtime_c__float__Sequence__init(&msg->k, 0)) {
    xarm_msgs__srv__FtImpedance_Request__fini(msg);
    return false;
  }
  // b
  if (!rosidl_runtime_c__float__Sequence__init(&msg->b, 0)) {
    xarm_msgs__srv__FtImpedance_Request__fini(msg);
    return false;
  }
  return true;
}

void
xarm_msgs__srv__FtImpedance_Request__fini(xarm_msgs__srv__FtImpedance_Request * msg)
{
  if (!msg) {
    return;
  }
  // coord
  // c_axis
  rosidl_runtime_c__int16__Sequence__fini(&msg->c_axis);
  // m
  rosidl_runtime_c__float__Sequence__fini(&msg->m);
  // k
  rosidl_runtime_c__float__Sequence__fini(&msg->k);
  // b
  rosidl_runtime_c__float__Sequence__fini(&msg->b);
}

bool
xarm_msgs__srv__FtImpedance_Request__are_equal(const xarm_msgs__srv__FtImpedance_Request * lhs, const xarm_msgs__srv__FtImpedance_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // coord
  if (lhs->coord != rhs->coord) {
    return false;
  }
  // c_axis
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->c_axis), &(rhs->c_axis)))
  {
    return false;
  }
  // m
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->m), &(rhs->m)))
  {
    return false;
  }
  // k
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->k), &(rhs->k)))
  {
    return false;
  }
  // b
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->b), &(rhs->b)))
  {
    return false;
  }
  return true;
}

bool
xarm_msgs__srv__FtImpedance_Request__copy(
  const xarm_msgs__srv__FtImpedance_Request * input,
  xarm_msgs__srv__FtImpedance_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // coord
  output->coord = input->coord;
  // c_axis
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->c_axis), &(output->c_axis)))
  {
    return false;
  }
  // m
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->m), &(output->m)))
  {
    return false;
  }
  // k
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->k), &(output->k)))
  {
    return false;
  }
  // b
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->b), &(output->b)))
  {
    return false;
  }
  return true;
}

xarm_msgs__srv__FtImpedance_Request *
xarm_msgs__srv__FtImpedance_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__FtImpedance_Request * msg = (xarm_msgs__srv__FtImpedance_Request *)allocator.allocate(sizeof(xarm_msgs__srv__FtImpedance_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarm_msgs__srv__FtImpedance_Request));
  bool success = xarm_msgs__srv__FtImpedance_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarm_msgs__srv__FtImpedance_Request__destroy(xarm_msgs__srv__FtImpedance_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarm_msgs__srv__FtImpedance_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarm_msgs__srv__FtImpedance_Request__Sequence__init(xarm_msgs__srv__FtImpedance_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__FtImpedance_Request * data = NULL;

  if (size) {
    data = (xarm_msgs__srv__FtImpedance_Request *)allocator.zero_allocate(size, sizeof(xarm_msgs__srv__FtImpedance_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarm_msgs__srv__FtImpedance_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarm_msgs__srv__FtImpedance_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
xarm_msgs__srv__FtImpedance_Request__Sequence__fini(xarm_msgs__srv__FtImpedance_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xarm_msgs__srv__FtImpedance_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

xarm_msgs__srv__FtImpedance_Request__Sequence *
xarm_msgs__srv__FtImpedance_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__FtImpedance_Request__Sequence * array = (xarm_msgs__srv__FtImpedance_Request__Sequence *)allocator.allocate(sizeof(xarm_msgs__srv__FtImpedance_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarm_msgs__srv__FtImpedance_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarm_msgs__srv__FtImpedance_Request__Sequence__destroy(xarm_msgs__srv__FtImpedance_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarm_msgs__srv__FtImpedance_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarm_msgs__srv__FtImpedance_Request__Sequence__are_equal(const xarm_msgs__srv__FtImpedance_Request__Sequence * lhs, const xarm_msgs__srv__FtImpedance_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarm_msgs__srv__FtImpedance_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarm_msgs__srv__FtImpedance_Request__Sequence__copy(
  const xarm_msgs__srv__FtImpedance_Request__Sequence * input,
  xarm_msgs__srv__FtImpedance_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarm_msgs__srv__FtImpedance_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarm_msgs__srv__FtImpedance_Request * data =
      (xarm_msgs__srv__FtImpedance_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarm_msgs__srv__FtImpedance_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarm_msgs__srv__FtImpedance_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarm_msgs__srv__FtImpedance_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
xarm_msgs__srv__FtImpedance_Response__init(xarm_msgs__srv__FtImpedance_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ret
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    xarm_msgs__srv__FtImpedance_Response__fini(msg);
    return false;
  }
  return true;
}

void
xarm_msgs__srv__FtImpedance_Response__fini(xarm_msgs__srv__FtImpedance_Response * msg)
{
  if (!msg) {
    return;
  }
  // ret
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
xarm_msgs__srv__FtImpedance_Response__are_equal(const xarm_msgs__srv__FtImpedance_Response * lhs, const xarm_msgs__srv__FtImpedance_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ret
  if (lhs->ret != rhs->ret) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
xarm_msgs__srv__FtImpedance_Response__copy(
  const xarm_msgs__srv__FtImpedance_Response * input,
  xarm_msgs__srv__FtImpedance_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ret
  output->ret = input->ret;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

xarm_msgs__srv__FtImpedance_Response *
xarm_msgs__srv__FtImpedance_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__FtImpedance_Response * msg = (xarm_msgs__srv__FtImpedance_Response *)allocator.allocate(sizeof(xarm_msgs__srv__FtImpedance_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarm_msgs__srv__FtImpedance_Response));
  bool success = xarm_msgs__srv__FtImpedance_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarm_msgs__srv__FtImpedance_Response__destroy(xarm_msgs__srv__FtImpedance_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarm_msgs__srv__FtImpedance_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarm_msgs__srv__FtImpedance_Response__Sequence__init(xarm_msgs__srv__FtImpedance_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__FtImpedance_Response * data = NULL;

  if (size) {
    data = (xarm_msgs__srv__FtImpedance_Response *)allocator.zero_allocate(size, sizeof(xarm_msgs__srv__FtImpedance_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarm_msgs__srv__FtImpedance_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarm_msgs__srv__FtImpedance_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
xarm_msgs__srv__FtImpedance_Response__Sequence__fini(xarm_msgs__srv__FtImpedance_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xarm_msgs__srv__FtImpedance_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

xarm_msgs__srv__FtImpedance_Response__Sequence *
xarm_msgs__srv__FtImpedance_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__FtImpedance_Response__Sequence * array = (xarm_msgs__srv__FtImpedance_Response__Sequence *)allocator.allocate(sizeof(xarm_msgs__srv__FtImpedance_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarm_msgs__srv__FtImpedance_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarm_msgs__srv__FtImpedance_Response__Sequence__destroy(xarm_msgs__srv__FtImpedance_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarm_msgs__srv__FtImpedance_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarm_msgs__srv__FtImpedance_Response__Sequence__are_equal(const xarm_msgs__srv__FtImpedance_Response__Sequence * lhs, const xarm_msgs__srv__FtImpedance_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarm_msgs__srv__FtImpedance_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarm_msgs__srv__FtImpedance_Response__Sequence__copy(
  const xarm_msgs__srv__FtImpedance_Response__Sequence * input,
  xarm_msgs__srv__FtImpedance_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarm_msgs__srv__FtImpedance_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarm_msgs__srv__FtImpedance_Response * data =
      (xarm_msgs__srv__FtImpedance_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarm_msgs__srv__FtImpedance_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarm_msgs__srv__FtImpedance_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarm_msgs__srv__FtImpedance_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "xarm_msgs/srv/detail/ft_impedance__functions.h"

bool
xarm_msgs__srv__FtImpedance_Event__init(xarm_msgs__srv__FtImpedance_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    xarm_msgs__srv__FtImpedance_Event__fini(msg);
    return false;
  }
  // request
  if (!xarm_msgs__srv__FtImpedance_Request__Sequence__init(&msg->request, 0)) {
    xarm_msgs__srv__FtImpedance_Event__fini(msg);
    return false;
  }
  // response
  if (!xarm_msgs__srv__FtImpedance_Response__Sequence__init(&msg->response, 0)) {
    xarm_msgs__srv__FtImpedance_Event__fini(msg);
    return false;
  }
  return true;
}

void
xarm_msgs__srv__FtImpedance_Event__fini(xarm_msgs__srv__FtImpedance_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  xarm_msgs__srv__FtImpedance_Request__Sequence__fini(&msg->request);
  // response
  xarm_msgs__srv__FtImpedance_Response__Sequence__fini(&msg->response);
}

bool
xarm_msgs__srv__FtImpedance_Event__are_equal(const xarm_msgs__srv__FtImpedance_Event * lhs, const xarm_msgs__srv__FtImpedance_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!xarm_msgs__srv__FtImpedance_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!xarm_msgs__srv__FtImpedance_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
xarm_msgs__srv__FtImpedance_Event__copy(
  const xarm_msgs__srv__FtImpedance_Event * input,
  xarm_msgs__srv__FtImpedance_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!xarm_msgs__srv__FtImpedance_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!xarm_msgs__srv__FtImpedance_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

xarm_msgs__srv__FtImpedance_Event *
xarm_msgs__srv__FtImpedance_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__FtImpedance_Event * msg = (xarm_msgs__srv__FtImpedance_Event *)allocator.allocate(sizeof(xarm_msgs__srv__FtImpedance_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xarm_msgs__srv__FtImpedance_Event));
  bool success = xarm_msgs__srv__FtImpedance_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xarm_msgs__srv__FtImpedance_Event__destroy(xarm_msgs__srv__FtImpedance_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xarm_msgs__srv__FtImpedance_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xarm_msgs__srv__FtImpedance_Event__Sequence__init(xarm_msgs__srv__FtImpedance_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__FtImpedance_Event * data = NULL;

  if (size) {
    data = (xarm_msgs__srv__FtImpedance_Event *)allocator.zero_allocate(size, sizeof(xarm_msgs__srv__FtImpedance_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xarm_msgs__srv__FtImpedance_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xarm_msgs__srv__FtImpedance_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
xarm_msgs__srv__FtImpedance_Event__Sequence__fini(xarm_msgs__srv__FtImpedance_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xarm_msgs__srv__FtImpedance_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

xarm_msgs__srv__FtImpedance_Event__Sequence *
xarm_msgs__srv__FtImpedance_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xarm_msgs__srv__FtImpedance_Event__Sequence * array = (xarm_msgs__srv__FtImpedance_Event__Sequence *)allocator.allocate(sizeof(xarm_msgs__srv__FtImpedance_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xarm_msgs__srv__FtImpedance_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xarm_msgs__srv__FtImpedance_Event__Sequence__destroy(xarm_msgs__srv__FtImpedance_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xarm_msgs__srv__FtImpedance_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xarm_msgs__srv__FtImpedance_Event__Sequence__are_equal(const xarm_msgs__srv__FtImpedance_Event__Sequence * lhs, const xarm_msgs__srv__FtImpedance_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xarm_msgs__srv__FtImpedance_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xarm_msgs__srv__FtImpedance_Event__Sequence__copy(
  const xarm_msgs__srv__FtImpedance_Event__Sequence * input,
  xarm_msgs__srv__FtImpedance_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xarm_msgs__srv__FtImpedance_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xarm_msgs__srv__FtImpedance_Event * data =
      (xarm_msgs__srv__FtImpedance_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xarm_msgs__srv__FtImpedance_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xarm_msgs__srv__FtImpedance_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xarm_msgs__srv__FtImpedance_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
