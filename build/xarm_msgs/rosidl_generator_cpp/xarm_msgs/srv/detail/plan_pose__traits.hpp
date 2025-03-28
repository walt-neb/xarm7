// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xarm_msgs:srv/PlanPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "xarm_msgs/srv/plan_pose.hpp"


#ifndef XARM_MSGS__SRV__DETAIL__PLAN_POSE__TRAITS_HPP_
#define XARM_MSGS__SRV__DETAIL__PLAN_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xarm_msgs/srv/detail/plan_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace xarm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPose_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use xarm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarm_msgs::srv::PlanPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xarm_msgs::srv::PlanPose_Request & msg)
{
  return xarm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xarm_msgs::srv::PlanPose_Request>()
{
  return "xarm_msgs::srv::PlanPose_Request";
}

template<>
inline const char * name<xarm_msgs::srv::PlanPose_Request>()
{
  return "xarm_msgs/srv/PlanPose_Request";
}

template<>
struct has_fixed_size<xarm_msgs::srv::PlanPose_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<xarm_msgs::srv::PlanPose_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<xarm_msgs::srv::PlanPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace xarm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPose_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use xarm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarm_msgs::srv::PlanPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xarm_msgs::srv::PlanPose_Response & msg)
{
  return xarm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xarm_msgs::srv::PlanPose_Response>()
{
  return "xarm_msgs::srv::PlanPose_Response";
}

template<>
inline const char * name<xarm_msgs::srv::PlanPose_Response>()
{
  return "xarm_msgs/srv/PlanPose_Response";
}

template<>
struct has_fixed_size<xarm_msgs::srv::PlanPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xarm_msgs::srv::PlanPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xarm_msgs::srv::PlanPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace xarm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanPose_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPose_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPose_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xarm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use xarm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xarm_msgs::srv::PlanPose_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  xarm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xarm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const xarm_msgs::srv::PlanPose_Event & msg)
{
  return xarm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xarm_msgs::srv::PlanPose_Event>()
{
  return "xarm_msgs::srv::PlanPose_Event";
}

template<>
inline const char * name<xarm_msgs::srv::PlanPose_Event>()
{
  return "xarm_msgs/srv/PlanPose_Event";
}

template<>
struct has_fixed_size<xarm_msgs::srv::PlanPose_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xarm_msgs::srv::PlanPose_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<xarm_msgs::srv::PlanPose_Request>::value && has_bounded_size<xarm_msgs::srv::PlanPose_Response>::value> {};

template<>
struct is_message<xarm_msgs::srv::PlanPose_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xarm_msgs::srv::PlanPose>()
{
  return "xarm_msgs::srv::PlanPose";
}

template<>
inline const char * name<xarm_msgs::srv::PlanPose>()
{
  return "xarm_msgs/srv/PlanPose";
}

template<>
struct has_fixed_size<xarm_msgs::srv::PlanPose>
  : std::integral_constant<
    bool,
    has_fixed_size<xarm_msgs::srv::PlanPose_Request>::value &&
    has_fixed_size<xarm_msgs::srv::PlanPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<xarm_msgs::srv::PlanPose>
  : std::integral_constant<
    bool,
    has_bounded_size<xarm_msgs::srv::PlanPose_Request>::value &&
    has_bounded_size<xarm_msgs::srv::PlanPose_Response>::value
  >
{
};

template<>
struct is_service<xarm_msgs::srv::PlanPose>
  : std::true_type
{
};

template<>
struct is_service_request<xarm_msgs::srv::PlanPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xarm_msgs::srv::PlanPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // XARM_MSGS__SRV__DETAIL__PLAN_POSE__TRAITS_HPP_
