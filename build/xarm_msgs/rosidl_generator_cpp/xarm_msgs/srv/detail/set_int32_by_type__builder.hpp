// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xarm_msgs:srv/SetInt32ByType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarm_msgs/srv/set_int32_by_type.hpp"


#ifndef XARM_MSGS__SRV__DETAIL__SET_INT32_BY_TYPE__BUILDER_HPP_
#define XARM_MSGS__SRV__DETAIL__SET_INT32_BY_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xarm_msgs/srv/detail/set_int32_by_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xarm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetInt32ByType_Request_data
{
public:
  explicit Init_SetInt32ByType_Request_data(::xarm_msgs::srv::SetInt32ByType_Request & msg)
  : msg_(msg)
  {}
  ::xarm_msgs::srv::SetInt32ByType_Request data(::xarm_msgs::srv::SetInt32ByType_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarm_msgs::srv::SetInt32ByType_Request msg_;
};

class Init_SetInt32ByType_Request_type
{
public:
  Init_SetInt32ByType_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetInt32ByType_Request_data type(::xarm_msgs::srv::SetInt32ByType_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SetInt32ByType_Request_data(msg_);
  }

private:
  ::xarm_msgs::srv::SetInt32ByType_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarm_msgs::srv::SetInt32ByType_Request>()
{
  return xarm_msgs::srv::builder::Init_SetInt32ByType_Request_type();
}

}  // namespace xarm_msgs


namespace xarm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetInt32ByType_Response_message
{
public:
  explicit Init_SetInt32ByType_Response_message(::xarm_msgs::srv::SetInt32ByType_Response & msg)
  : msg_(msg)
  {}
  ::xarm_msgs::srv::SetInt32ByType_Response message(::xarm_msgs::srv::SetInt32ByType_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarm_msgs::srv::SetInt32ByType_Response msg_;
};

class Init_SetInt32ByType_Response_ret
{
public:
  Init_SetInt32ByType_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetInt32ByType_Response_message ret(::xarm_msgs::srv::SetInt32ByType_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return Init_SetInt32ByType_Response_message(msg_);
  }

private:
  ::xarm_msgs::srv::SetInt32ByType_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarm_msgs::srv::SetInt32ByType_Response>()
{
  return xarm_msgs::srv::builder::Init_SetInt32ByType_Response_ret();
}

}  // namespace xarm_msgs


namespace xarm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetInt32ByType_Event_response
{
public:
  explicit Init_SetInt32ByType_Event_response(::xarm_msgs::srv::SetInt32ByType_Event & msg)
  : msg_(msg)
  {}
  ::xarm_msgs::srv::SetInt32ByType_Event response(::xarm_msgs::srv::SetInt32ByType_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarm_msgs::srv::SetInt32ByType_Event msg_;
};

class Init_SetInt32ByType_Event_request
{
public:
  explicit Init_SetInt32ByType_Event_request(::xarm_msgs::srv::SetInt32ByType_Event & msg)
  : msg_(msg)
  {}
  Init_SetInt32ByType_Event_response request(::xarm_msgs::srv::SetInt32ByType_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetInt32ByType_Event_response(msg_);
  }

private:
  ::xarm_msgs::srv::SetInt32ByType_Event msg_;
};

class Init_SetInt32ByType_Event_info
{
public:
  Init_SetInt32ByType_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetInt32ByType_Event_request info(::xarm_msgs::srv::SetInt32ByType_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetInt32ByType_Event_request(msg_);
  }

private:
  ::xarm_msgs::srv::SetInt32ByType_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarm_msgs::srv::SetInt32ByType_Event>()
{
  return xarm_msgs::srv::builder::Init_SetInt32ByType_Event_info();
}

}  // namespace xarm_msgs

#endif  // XARM_MSGS__SRV__DETAIL__SET_INT32_BY_TYPE__BUILDER_HPP_
