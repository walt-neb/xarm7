// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xarm_msgs:srv/RobotiqReset.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarm_msgs/srv/robotiq_reset.hpp"


#ifndef XARM_MSGS__SRV__DETAIL__ROBOTIQ_RESET__BUILDER_HPP_
#define XARM_MSGS__SRV__DETAIL__ROBOTIQ_RESET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xarm_msgs/srv/detail/robotiq_reset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xarm_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarm_msgs::srv::RobotiqReset_Request>()
{
  return ::xarm_msgs::srv::RobotiqReset_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace xarm_msgs


namespace xarm_msgs
{

namespace srv
{

namespace builder
{

class Init_RobotiqReset_Response_ret_data
{
public:
  explicit Init_RobotiqReset_Response_ret_data(::xarm_msgs::srv::RobotiqReset_Response & msg)
  : msg_(msg)
  {}
  ::xarm_msgs::srv::RobotiqReset_Response ret_data(::xarm_msgs::srv::RobotiqReset_Response::_ret_data_type arg)
  {
    msg_.ret_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarm_msgs::srv::RobotiqReset_Response msg_;
};

class Init_RobotiqReset_Response_message
{
public:
  explicit Init_RobotiqReset_Response_message(::xarm_msgs::srv::RobotiqReset_Response & msg)
  : msg_(msg)
  {}
  Init_RobotiqReset_Response_ret_data message(::xarm_msgs::srv::RobotiqReset_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_RobotiqReset_Response_ret_data(msg_);
  }

private:
  ::xarm_msgs::srv::RobotiqReset_Response msg_;
};

class Init_RobotiqReset_Response_ret
{
public:
  Init_RobotiqReset_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotiqReset_Response_message ret(::xarm_msgs::srv::RobotiqReset_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return Init_RobotiqReset_Response_message(msg_);
  }

private:
  ::xarm_msgs::srv::RobotiqReset_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarm_msgs::srv::RobotiqReset_Response>()
{
  return xarm_msgs::srv::builder::Init_RobotiqReset_Response_ret();
}

}  // namespace xarm_msgs


namespace xarm_msgs
{

namespace srv
{

namespace builder
{

class Init_RobotiqReset_Event_response
{
public:
  explicit Init_RobotiqReset_Event_response(::xarm_msgs::srv::RobotiqReset_Event & msg)
  : msg_(msg)
  {}
  ::xarm_msgs::srv::RobotiqReset_Event response(::xarm_msgs::srv::RobotiqReset_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xarm_msgs::srv::RobotiqReset_Event msg_;
};

class Init_RobotiqReset_Event_request
{
public:
  explicit Init_RobotiqReset_Event_request(::xarm_msgs::srv::RobotiqReset_Event & msg)
  : msg_(msg)
  {}
  Init_RobotiqReset_Event_response request(::xarm_msgs::srv::RobotiqReset_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RobotiqReset_Event_response(msg_);
  }

private:
  ::xarm_msgs::srv::RobotiqReset_Event msg_;
};

class Init_RobotiqReset_Event_info
{
public:
  Init_RobotiqReset_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotiqReset_Event_request info(::xarm_msgs::srv::RobotiqReset_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RobotiqReset_Event_request(msg_);
  }

private:
  ::xarm_msgs::srv::RobotiqReset_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xarm_msgs::srv::RobotiqReset_Event>()
{
  return xarm_msgs::srv::builder::Init_RobotiqReset_Event_info();
}

}  // namespace xarm_msgs

#endif  // XARM_MSGS__SRV__DETAIL__ROBOTIQ_RESET__BUILDER_HPP_
