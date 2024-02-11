// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from manip:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef MANIP__MSG__DETAIL__CMD__STRUCT_HPP_
#define MANIP__MSG__DETAIL__CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__manip__msg__Cmd __attribute__((deprecated))
#else
# define DEPRECATED__manip__msg__Cmd __declspec(deprecated)
#endif

namespace manip
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
      this->num = 0ll;
    }
  }

  explicit Cmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  // field types and members
  using _base1_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _base1_type base1;
  using _base2_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _base2_type base2;
  using _work1_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _work1_type work1;
  using _work2_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _work2_type work2;
  using _num_type =
    int64_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__base1(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->base1 = _arg;
    return *this;
  }
  Type & set__base2(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->base2 = _arg;
    return *this;
  }
  Type & set__work1(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->work1 = _arg;
    return *this;
  }
  Type & set__work2(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->work2 = _arg;
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
    manip::msg::Cmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const manip::msg::Cmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manip::msg::Cmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manip::msg::Cmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manip::msg::Cmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manip::msg::Cmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manip::msg::Cmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manip::msg::Cmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manip::msg::Cmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manip::msg::Cmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manip__msg__Cmd
    std::shared_ptr<manip::msg::Cmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manip__msg__Cmd
    std::shared_ptr<manip::msg::Cmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cmd_ & other) const
  {
    if (this->base1 != other.base1) {
      return false;
    }
    if (this->base2 != other.base2) {
      return false;
    }
    if (this->work1 != other.work1) {
      return false;
    }
    if (this->work2 != other.work2) {
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
  manip::msg::Cmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace manip

#endif  // MANIP__MSG__DETAIL__CMD__STRUCT_HPP_
