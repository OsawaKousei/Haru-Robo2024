// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from manip:action/State.idl
// generated code does not contain a copyright notice

#ifndef MANIP__ACTION__DETAIL__STATE__STRUCT_HPP_
#define MANIP__ACTION__DETAIL__STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__manip__action__State_Goal __attribute__((deprecated))
#else
# define DEPRECATED__manip__action__State_Goal __declspec(deprecated)
#endif

namespace manip
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct State_Goal_
{
  using Type = State_Goal_<ContainerAllocator>;

  explicit State_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit State_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _base1_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _base1_type base1;
  using _base2_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _base2_type base2;
  using _work_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _work_type work;

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
  Type & set__work(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->work = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manip::action::State_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const manip::action::State_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manip::action::State_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manip::action::State_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manip::action::State_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manip::action::State_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manip::action::State_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manip::action::State_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manip__action__State_Goal
    std::shared_ptr<manip::action::State_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manip__action__State_Goal
    std::shared_ptr<manip::action::State_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_Goal_ & other) const
  {
    if (this->base1 != other.base1) {
      return false;
    }
    if (this->base2 != other.base2) {
      return false;
    }
    if (this->work != other.work) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_Goal_

// alias to use template instance with default allocator
using State_Goal =
  manip::action::State_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace manip


#ifndef _WIN32
# define DEPRECATED__manip__action__State_Result __attribute__((deprecated))
#else
# define DEPRECATED__manip__action__State_Result __declspec(deprecated)
#endif

namespace manip
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct State_Result_
{
  using Type = State_Result_<ContainerAllocator>;

  explicit State_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = 0ll;
    }
  }

  explicit State_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = 0ll;
    }
  }

  // field types and members
  using _feedback_type =
    int64_t;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const int64_t & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manip::action::State_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const manip::action::State_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manip::action::State_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manip::action::State_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manip::action::State_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manip::action::State_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manip::action::State_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manip::action::State_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manip__action__State_Result
    std::shared_ptr<manip::action::State_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manip__action__State_Result
    std::shared_ptr<manip::action::State_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_Result_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_Result_

// alias to use template instance with default allocator
using State_Result =
  manip::action::State_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace manip


#ifndef _WIN32
# define DEPRECATED__manip__action__State_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__manip__action__State_Feedback __declspec(deprecated)
#endif

namespace manip
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct State_Feedback_
{
  using Type = State_Feedback_<ContainerAllocator>;

  explicit State_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit State_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _base1_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _base1_type base1;
  using _base2_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _base2_type base2;
  using _work_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _work_type work;

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
  Type & set__work(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->work = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manip::action::State_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const manip::action::State_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manip::action::State_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manip::action::State_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manip::action::State_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manip::action::State_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manip::action::State_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manip::action::State_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manip__action__State_Feedback
    std::shared_ptr<manip::action::State_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manip__action__State_Feedback
    std::shared_ptr<manip::action::State_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_Feedback_ & other) const
  {
    if (this->base1 != other.base1) {
      return false;
    }
    if (this->base2 != other.base2) {
      return false;
    }
    if (this->work != other.work) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_Feedback_

// alias to use template instance with default allocator
using State_Feedback =
  manip::action::State_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace manip


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "manip/action/detail/state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__manip__action__State_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__manip__action__State_SendGoal_Request __declspec(deprecated)
#endif

namespace manip
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct State_SendGoal_Request_
{
  using Type = State_SendGoal_Request_<ContainerAllocator>;

  explicit State_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit State_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    manip::action::State_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const manip::action::State_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manip::action::State_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const manip::action::State_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manip::action::State_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manip::action::State_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manip::action::State_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manip::action::State_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manip::action::State_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manip::action::State_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manip__action__State_SendGoal_Request
    std::shared_ptr<manip::action::State_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manip__action__State_SendGoal_Request
    std::shared_ptr<manip::action::State_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_SendGoal_Request_

// alias to use template instance with default allocator
using State_SendGoal_Request =
  manip::action::State_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace manip


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__manip__action__State_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__manip__action__State_SendGoal_Response __declspec(deprecated)
#endif

namespace manip
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct State_SendGoal_Response_
{
  using Type = State_SendGoal_Response_<ContainerAllocator>;

  explicit State_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit State_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manip::action::State_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const manip::action::State_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manip::action::State_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manip::action::State_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manip::action::State_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manip::action::State_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manip::action::State_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manip::action::State_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manip__action__State_SendGoal_Response
    std::shared_ptr<manip::action::State_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manip__action__State_SendGoal_Response
    std::shared_ptr<manip::action::State_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_SendGoal_Response_

// alias to use template instance with default allocator
using State_SendGoal_Response =
  manip::action::State_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace manip

namespace manip
{

namespace action
{

struct State_SendGoal
{
  using Request = manip::action::State_SendGoal_Request;
  using Response = manip::action::State_SendGoal_Response;
};

}  // namespace action

}  // namespace manip


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__manip__action__State_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__manip__action__State_GetResult_Request __declspec(deprecated)
#endif

namespace manip
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct State_GetResult_Request_
{
  using Type = State_GetResult_Request_<ContainerAllocator>;

  explicit State_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit State_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manip::action::State_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const manip::action::State_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manip::action::State_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manip::action::State_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manip::action::State_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manip::action::State_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manip::action::State_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manip::action::State_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manip__action__State_GetResult_Request
    std::shared_ptr<manip::action::State_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manip__action__State_GetResult_Request
    std::shared_ptr<manip::action::State_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_GetResult_Request_

// alias to use template instance with default allocator
using State_GetResult_Request =
  manip::action::State_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace manip


// Include directives for member types
// Member 'result'
// already included above
// #include "manip/action/detail/state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__manip__action__State_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__manip__action__State_GetResult_Response __declspec(deprecated)
#endif

namespace manip
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct State_GetResult_Response_
{
  using Type = State_GetResult_Response_<ContainerAllocator>;

  explicit State_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit State_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    manip::action::State_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const manip::action::State_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manip::action::State_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const manip::action::State_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manip::action::State_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manip::action::State_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manip::action::State_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manip::action::State_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manip::action::State_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manip::action::State_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manip__action__State_GetResult_Response
    std::shared_ptr<manip::action::State_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manip__action__State_GetResult_Response
    std::shared_ptr<manip::action::State_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_GetResult_Response_

// alias to use template instance with default allocator
using State_GetResult_Response =
  manip::action::State_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace manip

namespace manip
{

namespace action
{

struct State_GetResult
{
  using Request = manip::action::State_GetResult_Request;
  using Response = manip::action::State_GetResult_Response;
};

}  // namespace action

}  // namespace manip


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "manip/action/detail/state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__manip__action__State_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__manip__action__State_FeedbackMessage __declspec(deprecated)
#endif

namespace manip
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct State_FeedbackMessage_
{
  using Type = State_FeedbackMessage_<ContainerAllocator>;

  explicit State_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit State_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    manip::action::State_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const manip::action::State_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    manip::action::State_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const manip::action::State_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<manip::action::State_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<manip::action::State_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      manip::action::State_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      manip::action::State_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<manip::action::State_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<manip::action::State_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<manip::action::State_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__manip__action__State_FeedbackMessage
    std::shared_ptr<manip::action::State_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__manip__action__State_FeedbackMessage
    std::shared_ptr<manip::action::State_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_FeedbackMessage_

// alias to use template instance with default allocator
using State_FeedbackMessage =
  manip::action::State_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace manip

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace manip
{

namespace action
{

struct State
{
  /// The goal message defined in the action definition.
  using Goal = manip::action::State_Goal;
  /// The result message defined in the action definition.
  using Result = manip::action::State_Result;
  /// The feedback message defined in the action definition.
  using Feedback = manip::action::State_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = manip::action::State_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = manip::action::State_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = manip::action::State_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct State State;

}  // namespace action

}  // namespace manip

#endif  // MANIP__ACTION__DETAIL__STATE__STRUCT_HPP_
