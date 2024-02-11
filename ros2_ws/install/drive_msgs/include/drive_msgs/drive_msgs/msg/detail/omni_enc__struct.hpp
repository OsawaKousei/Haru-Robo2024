// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_msgs:msg/OmniEnc.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__STRUCT_HPP_
#define DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drive_msgs__msg__OmniEnc __attribute__((deprecated))
#else
# define DEPRECATED__drive_msgs__msg__OmniEnc __declspec(deprecated)
#endif

namespace drive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OmniEnc_
{
  using Type = OmniEnc_<ContainerAllocator>;

  explicit OmniEnc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->encfontright = 0.0;
      this->encfrontleft = 0.0;
      this->encbackright = 0.0;
      this->encbackleft = 0.0;
      this->enclx = 0.0;
      this->encly = 0.0;
      this->encadditional = 0.0;
    }
  }

  explicit OmniEnc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->encfontright = 0.0;
      this->encfrontleft = 0.0;
      this->encbackright = 0.0;
      this->encbackleft = 0.0;
      this->enclx = 0.0;
      this->encly = 0.0;
      this->encadditional = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _encfontright_type =
    double;
  _encfontright_type encfontright;
  using _encfrontleft_type =
    double;
  _encfrontleft_type encfrontleft;
  using _encbackright_type =
    double;
  _encbackright_type encbackright;
  using _encbackleft_type =
    double;
  _encbackleft_type encbackleft;
  using _enclx_type =
    double;
  _enclx_type enclx;
  using _encly_type =
    double;
  _encly_type encly;
  using _encadditional_type =
    double;
  _encadditional_type encadditional;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__encfontright(
    const double & _arg)
  {
    this->encfontright = _arg;
    return *this;
  }
  Type & set__encfrontleft(
    const double & _arg)
  {
    this->encfrontleft = _arg;
    return *this;
  }
  Type & set__encbackright(
    const double & _arg)
  {
    this->encbackright = _arg;
    return *this;
  }
  Type & set__encbackleft(
    const double & _arg)
  {
    this->encbackleft = _arg;
    return *this;
  }
  Type & set__enclx(
    const double & _arg)
  {
    this->enclx = _arg;
    return *this;
  }
  Type & set__encly(
    const double & _arg)
  {
    this->encly = _arg;
    return *this;
  }
  Type & set__encadditional(
    const double & _arg)
  {
    this->encadditional = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_msgs::msg::OmniEnc_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_msgs::msg::OmniEnc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_msgs::msg::OmniEnc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_msgs::msg::OmniEnc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::OmniEnc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::OmniEnc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_msgs::msg::OmniEnc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_msgs::msg::OmniEnc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_msgs::msg::OmniEnc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_msgs::msg::OmniEnc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_msgs__msg__OmniEnc
    std::shared_ptr<drive_msgs::msg::OmniEnc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_msgs__msg__OmniEnc
    std::shared_ptr<drive_msgs::msg::OmniEnc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OmniEnc_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->encfontright != other.encfontright) {
      return false;
    }
    if (this->encfrontleft != other.encfrontleft) {
      return false;
    }
    if (this->encbackright != other.encbackright) {
      return false;
    }
    if (this->encbackleft != other.encbackleft) {
      return false;
    }
    if (this->enclx != other.enclx) {
      return false;
    }
    if (this->encly != other.encly) {
      return false;
    }
    if (this->encadditional != other.encadditional) {
      return false;
    }
    return true;
  }
  bool operator!=(const OmniEnc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OmniEnc_

// alias to use template instance with default allocator
using OmniEnc =
  drive_msgs::msg::OmniEnc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_msgs

#endif  // DRIVE_MSGS__MSG__DETAIL__OMNI_ENC__STRUCT_HPP_
