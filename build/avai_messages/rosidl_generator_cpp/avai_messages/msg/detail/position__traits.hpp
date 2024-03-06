// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from avai_messages:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef AVAI_MESSAGES__MSG__DETAIL__POSITION__TRAITS_HPP_
#define AVAI_MESSAGES__MSG__DETAIL__POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "avai_messages/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace avai_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Position & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: x_position
  {
    out << "x_position: ";
    rosidl_generator_traits::value_to_yaml(msg.x_position, out);
    out << ", ";
  }

  // member: y_position
  {
    out << "y_position: ";
    rosidl_generator_traits::value_to_yaml(msg.y_position, out);
    out << ", ";
  }

  // member: facing_direction
  {
    out << "facing_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.facing_direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Position & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: x_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_position: ";
    rosidl_generator_traits::value_to_yaml(msg.x_position, out);
    out << "\n";
  }

  // member: y_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_position: ";
    rosidl_generator_traits::value_to_yaml(msg.y_position, out);
    out << "\n";
  }

  // member: facing_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "facing_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.facing_direction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Position & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace avai_messages

namespace rosidl_generator_traits
{

[[deprecated("use avai_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const avai_messages::msg::Position & msg,
  std::ostream & out, size_t indentation = 0)
{
  avai_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use avai_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const avai_messages::msg::Position & msg)
{
  return avai_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<avai_messages::msg::Position>()
{
  return "avai_messages::msg::Position";
}

template<>
inline const char * name<avai_messages::msg::Position>()
{
  return "avai_messages/msg/Position";
}

template<>
struct has_fixed_size<avai_messages::msg::Position>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<avai_messages::msg::Position>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<avai_messages::msg::Position>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AVAI_MESSAGES__MSG__DETAIL__POSITION__TRAITS_HPP_
