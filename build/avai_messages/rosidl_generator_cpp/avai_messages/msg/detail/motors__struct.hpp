// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from avai_messages:msg/Motors.idl
// generated code does not contain a copyright notice

#ifndef AVAI_MESSAGES__MSG__DETAIL__MOTORS__STRUCT_HPP_
#define AVAI_MESSAGES__MSG__DETAIL__MOTORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'motors'
#include "avai_messages/msg/detail/motor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__avai_messages__msg__Motors __attribute__((deprecated))
#else
# define DEPRECATED__avai_messages__msg__Motors __declspec(deprecated)
#endif

namespace avai_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motors_
{
  using Type = Motors_<ContainerAllocator>;

  explicit Motors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Motors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _motors_type =
    std::vector<avai_messages::msg::Motor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<avai_messages::msg::Motor_<ContainerAllocator>>>;
  _motors_type motors;

  // setters for named parameter idiom
  Type & set__motors(
    const std::vector<avai_messages::msg::Motor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<avai_messages::msg::Motor_<ContainerAllocator>>> & _arg)
  {
    this->motors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    avai_messages::msg::Motors_<ContainerAllocator> *;
  using ConstRawPtr =
    const avai_messages::msg::Motors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<avai_messages::msg::Motors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<avai_messages::msg::Motors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      avai_messages::msg::Motors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<avai_messages::msg::Motors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      avai_messages::msg::Motors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<avai_messages::msg::Motors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<avai_messages::msg::Motors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<avai_messages::msg::Motors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__avai_messages__msg__Motors
    std::shared_ptr<avai_messages::msg::Motors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__avai_messages__msg__Motors
    std::shared_ptr<avai_messages::msg::Motors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motors_ & other) const
  {
    if (this->motors != other.motors) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motors_

// alias to use template instance with default allocator
using Motors =
  avai_messages::msg::Motors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace avai_messages

#endif  // AVAI_MESSAGES__MSG__DETAIL__MOTORS__STRUCT_HPP_
