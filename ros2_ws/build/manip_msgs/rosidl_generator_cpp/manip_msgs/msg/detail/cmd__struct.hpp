// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from manip_msgs:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef MANIP_MSGS__MSG__DETAIL__CMD__STRUCT_HPP_
#define MANIP_MSGS__MSG__DETAIL__CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__manip_msgs__msg__Cmd __attribute__((deprecated))
#else
# define DEPRECATED__manip_msgs__msg__Cmd __declspec(deprecated)
#endif

namespace manip_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Cmd_
{
  using Type = Cmd_<ContainerAllocator>;

  explicit Cmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->top_base_arm = 0ll;
      this->top_base_hand = 0ll;
      this->bottom_base_arm = 0ll;
      this->bottom_base_hand = 0ll;
      this->work_arm_deploy = 0ll;
      this->work_arm = 0ll;
      this->work_hand = 0ll;
      this->num = 0ll;
    }
  }

  explicit Cmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->top_base_arm = 0ll;
      this->top_base_hand = 0ll;
      this->bottom_base_arm = 0ll;
      this->bottom_base_hand = 0ll;
      this->work_arm_deploy = 0ll;
      this->work_arm = 0ll;
      this->work_hand = 0ll;
      this->num = 0ll;
    }
  }

  // field types and members
  using _top_base_arm_type =
    int64_t;
  _top_base_arm_type top_base_arm;
  using _top_base_hand_type =
    int64_t;
  _top_base_hand_type top_base_hand;
  using _bottom_base_arm_type =
    int64_t;
  _bottom_base_arm_type bottom_base_arm;
  using _bottom_base_hand_type =
    int64_t;
  _bottom_base_hand_type bottom_base_hand;
  using _work_arm_deploy_type =
    int64_t;
  _work_arm_deploy_type work_arm_deploy;
  using _work_arm_type =
    int64_t;
  _work_arm_type work_arm;
  using _work_hand_type =
    int64_t;
  _work_hand_type work_hand;
  using _num_type =
    int64_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__top_base_arm(
    const int64_t & _arg)
  {
    this->top_base_arm = _arg;
    return *this;
  }
  Type & set__top_base_hand(
    const int64_t & _arg)
  {
    this->top_base_hand = _arg;
    return *this;
  }
  Type & set__bottom_base_arm(
    const int64_t & _arg)
  {
    this->bottom_base_arm = _arg;
    return *this;
  }
  Type & set__bottom_base_hand(
    const int64_t & _arg)
  {
    this->bottom_base_hand = _arg;
    return *this;
  }
  Type & set__work_arm_deploy(
    const int64_t & _arg)
  {
    this->work_arm_deploy = _arg;
    return *this;
  }
  Type & set__work_arm(
    const int64_t & _arg)
  {
    this->work_arm = _arg;
    return *this;
  }
  Type & set__work_hand(
    const int64_t & _arg)
  {
    this->work_hand = _arg;
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
    manip_msgs::msg::Cmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const manip_msgs::msg::Cmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manip_msgs::msg::Cmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manip_msgs::msg::Cmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manip_msgs::msg::Cmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manip_msgs::msg::Cmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manip_msgs::msg::Cmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manip_msgs::msg::Cmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manip_msgs::msg::Cmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manip_msgs::msg::Cmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manip_msgs__msg__Cmd
    std::shared_ptr<manip_msgs::msg::Cmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manip_msgs__msg__Cmd
    std::shared_ptr<manip_msgs::msg::Cmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cmd_ & other) const
  {
    if (this->top_base_arm != other.top_base_arm) {
      return false;
    }
    if (this->top_base_hand != other.top_base_hand) {
      return false;
    }
    if (this->bottom_base_arm != other.bottom_base_arm) {
      return false;
    }
    if (this->bottom_base_hand != other.bottom_base_hand) {
      return false;
    }
    if (this->work_arm_deploy != other.work_arm_deploy) {
      return false;
    }
    if (this->work_arm != other.work_arm) {
      return false;
    }
    if (this->work_hand != other.work_hand) {
      return false;
    }
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cmd_

// alias to use template instance with default allocator
using Cmd =
  manip_msgs::msg::Cmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace manip_msgs

#endif  // MANIP_MSGS__MSG__DETAIL__CMD__STRUCT_HPP_
