// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/DiffDriveEnc.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__DiffDriveEnc __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__DiffDriveEnc __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiffDriveEnc_
{
  using Type = DiffDriveEnc_<ContainerAllocator>;

  explicit DiffDriveEnc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->m1enc = 0.0;
      this->m2enc = 0.0;
      this->lxenc = 0.0;
      this->azenc = 0.0;
    }
  }

  explicit DiffDriveEnc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->m1enc = 0.0;
      this->m2enc = 0.0;
      this->lxenc = 0.0;
      this->azenc = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _m1enc_type =
    double;
  _m1enc_type m1enc;
  using _m2enc_type =
    double;
  _m2enc_type m2enc;
  using _lxenc_type =
    double;
  _lxenc_type lxenc;
  using _azenc_type =
    double;
  _azenc_type azenc;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__m1enc(
    const double & _arg)
  {
    this->m1enc = _arg;
    return *this;
  }
  Type & set__m2enc(
    const double & _arg)
  {
    this->m2enc = _arg;
    return *this;
  }
  Type & set__lxenc(
    const double & _arg)
  {
    this->lxenc = _arg;
    return *this;
  }
  Type & set__azenc(
    const double & _arg)
  {
    this->azenc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::DiffDriveEnc_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::DiffDriveEnc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::DiffDriveEnc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::DiffDriveEnc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::DiffDriveEnc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::DiffDriveEnc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::DiffDriveEnc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::DiffDriveEnc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::DiffDriveEnc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::DiffDriveEnc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__DiffDriveEnc
    std::shared_ptr<drive_msgs::msg::DiffDriveEnc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__DiffDriveEnc
    std::shared_ptr<drive_msgs::msg::DiffDriveEnc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiffDriveEnc_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->m1enc != other.m1enc) {
      return false;
    }
    if (this->m2enc != other.m2enc) {
      return false;
    }
    if (this->lxenc != other.lxenc) {
      return false;
    }
    if (this->azenc != other.azenc) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiffDriveEnc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiffDriveEnc_

// alias to use template instance with default allocator
using DiffDriveEnc =
  drive_msgs::msg::DiffDriveEnc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__DIFF_DRIVE_ENC__STRUCT_HPP_
