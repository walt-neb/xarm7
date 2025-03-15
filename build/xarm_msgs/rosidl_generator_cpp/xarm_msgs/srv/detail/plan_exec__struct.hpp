// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xarm_msgs:srv/PlanExec.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarm_msgs/srv/plan_exec.hpp"


#ifndef XARM_MSGS__SRV__DETAIL__PLAN_EXEC__STRUCT_HPP_
#define XARM_MSGS__SRV__DETAIL__PLAN_EXEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xarm_msgs__srv__PlanExec_Request __attribute__((deprecated))
#else
# define DEPRECATED__xarm_msgs__srv__PlanExec_Request __declspec(deprecated)
#endif

namespace xarm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanExec_Request_
{
  using Type = PlanExec_Request_<ContainerAllocator>;

  explicit PlanExec_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wait = false;
    }
  }

  explicit PlanExec_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wait = false;
    }
  }

  // field types and members
  using _wait_type =
    bool;
  _wait_type wait;

  // setters for named parameter idiom
  Type & set__wait(
    const bool & _arg)
  {
    this->wait = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xarm_msgs::srv::PlanExec_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const xarm_msgs::srv::PlanExec_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xarm_msgs::srv::PlanExec_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xarm_msgs::srv::PlanExec_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xarm_msgs__srv__PlanExec_Request
    std::shared_ptr<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xarm_msgs__srv__PlanExec_Request
    std::shared_ptr<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanExec_Request_ & other) const
  {
    if (this->wait != other.wait) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanExec_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanExec_Request_

// alias to use template instance with default allocator
using PlanExec_Request =
  xarm_msgs::srv::PlanExec_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xarm_msgs


#ifndef _WIN32
# define DEPRECATED__xarm_msgs__srv__PlanExec_Response __attribute__((deprecated))
#else
# define DEPRECATED__xarm_msgs__srv__PlanExec_Response __declspec(deprecated)
#endif

namespace xarm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanExec_Response_
{
  using Type = PlanExec_Response_<ContainerAllocator>;

  explicit PlanExec_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit PlanExec_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xarm_msgs::srv::PlanExec_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const xarm_msgs::srv::PlanExec_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xarm_msgs::srv::PlanExec_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xarm_msgs::srv::PlanExec_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xarm_msgs__srv__PlanExec_Response
    std::shared_ptr<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xarm_msgs__srv__PlanExec_Response
    std::shared_ptr<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanExec_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanExec_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanExec_Response_

// alias to use template instance with default allocator
using PlanExec_Response =
  xarm_msgs::srv::PlanExec_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xarm_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xarm_msgs__srv__PlanExec_Event __attribute__((deprecated))
#else
# define DEPRECATED__xarm_msgs__srv__PlanExec_Event __declspec(deprecated)
#endif

namespace xarm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanExec_Event_
{
  using Type = PlanExec_Event_<ContainerAllocator>;

  explicit PlanExec_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PlanExec_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<xarm_msgs::srv::PlanExec_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<xarm_msgs::srv::PlanExec_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xarm_msgs::srv::PlanExec_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const xarm_msgs::srv::PlanExec_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xarm_msgs::srv::PlanExec_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xarm_msgs::srv::PlanExec_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xarm_msgs::srv::PlanExec_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xarm_msgs::srv::PlanExec_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xarm_msgs::srv::PlanExec_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xarm_msgs::srv::PlanExec_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xarm_msgs::srv::PlanExec_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xarm_msgs::srv::PlanExec_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xarm_msgs__srv__PlanExec_Event
    std::shared_ptr<xarm_msgs::srv::PlanExec_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xarm_msgs__srv__PlanExec_Event
    std::shared_ptr<xarm_msgs::srv::PlanExec_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanExec_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanExec_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanExec_Event_

// alias to use template instance with default allocator
using PlanExec_Event =
  xarm_msgs::srv::PlanExec_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xarm_msgs

namespace xarm_msgs
{

namespace srv
{

struct PlanExec
{
  using Request = xarm_msgs::srv::PlanExec_Request;
  using Response = xarm_msgs::srv::PlanExec_Response;
  using Event = xarm_msgs::srv::PlanExec_Event;
};

}  // namespace srv

}  // namespace xarm_msgs

#endif  // XARM_MSGS__SRV__DETAIL__PLAN_EXEC__STRUCT_HPP_
