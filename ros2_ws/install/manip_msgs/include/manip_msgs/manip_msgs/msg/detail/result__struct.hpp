// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from manip_msgs:msg/Result.idl
// generated code does not contain a copyright notice

#ifndef MANIP_MSGS__MSG__DETAIL__RESULT__STRUCT_HPP_
#define MANIP_MSGS__MSG__DETAIL__RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__manip_msgs__msg__Result __attribute__((deprecated))
#else
# define DEPRECATED__manip_msgs__msg__Result __declspec(deprecated)
#endif

namespace manip_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Result_
{
  using Type = Result_<ContainerAllocator>;

  explicit Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = 0ll;
      this->num = 0ll;
    }
  }

  explicit Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = 0ll;
      this->num = 0ll;
    }
  }

  // field types and members
  using _feedback_type =
    int64_t;
  _feedback_type feedback;
  using _num_type =
    int64_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__feedback(
    const int64_t & _arg)
  {
    this->feedback = _arg;
    return *this;
  }
  Type & set__num(
    const int64_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manip_msgs::msg::Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const manip_msgs::msg::Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manip_msgs::msg::Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manip_msgs::msg::Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manip_msgs::msg::Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manip_msgs::msg::Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manip_msgs::msg::Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manip_msgs::msg::Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manip_msgs::msg::Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manip_msgs::msg::Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manip_msgs__msg__Result
    std::shared_ptr<manip_msgs::msg::Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manip_msgs__msg__Result
    std::shared_ptr<manip_msgs::msg::Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Result_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Result_

// alias to use template instance with default allocator
using Result =
  manip_msgs::msg::Result_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace manip_msgs

#endif  // MANIP_MSGS__MSG__DETAIL__RESULT__STRUCT_HPP_
