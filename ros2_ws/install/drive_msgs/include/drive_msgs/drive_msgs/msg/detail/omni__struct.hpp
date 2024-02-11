// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/Omni.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__OMNI__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__OMNI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__Omni __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__Omni __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Omni_
{
  using Type = Omni_<ContainerAllocator>;

  explicit Omni_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->mfontright = 0.0;
      this->mfrontleft = 0.0;
      this->mbackright = 0.0;
      this->mbackleft = 0.0;
    }
  }

  explicit Omni_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->mfontright = 0.0;
      this->mfrontleft = 0.0;
      this->mbackright = 0.0;
      this->mbackleft = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _mfontright_type =
    double;
  _mfontright_type mfontright;
  using _mfrontleft_type =
    double;
  _mfrontleft_type mfrontleft;
  using _mbackright_type =
    double;
  _mbackright_type mbackright;
  using _mbackleft_type =
    double;
  _mbackleft_type mbackleft;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__mfontright(
    const double & _arg)
  {
    this->mfontright = _arg;
    return *this;
  }
  Type & set__mfrontleft(
    const double & _arg)
  {
    this->mfrontleft = _arg;
    return *this;
  }
  Type & set__mbackright(
    const double & _arg)
  {
    this->mbackright = _arg;
    return *this;
  }
  Type & set__mbackleft(
    const double & _arg)
  {
    this->mbackleft = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::Omni_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::Omni_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::Omni_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::Omni_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::Omni_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::Omni_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::Omni_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::Omni_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::Omni_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::Omni_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__Omni
    std::shared_ptr<drive_msgs::msg::Omni_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__Omni
    std::shared_ptr<drive_msgs::msg::Omni_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Omni_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->mfontright != other.mfontright) {
      return false;
    }
    if (this->mfrontleft != other.mfrontleft) {
      return false;
    }
    if (this->mbackright != other.mbackright) {
      return false;
    }
    if (this->mbackleft != other.mbackleft) {
      return false;
    }
    return true;
  }
  bool operator!=(const Omni_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Omni_

// alias to use template instance with default allocator
using Omni =
  drive_msgs::msg::Omni_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__OMNI__STRUCT_HPP_
