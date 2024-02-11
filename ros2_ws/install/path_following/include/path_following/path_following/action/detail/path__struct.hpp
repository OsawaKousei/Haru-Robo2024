// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from path_following:action/Path.idl
// generated code does not contain a copyright notice

#ifndef PATH_FOLLOWING__ACTION__DETAIL__PATH__STRUCT_HPP_
#define PATH_FOLLOWING__ACTION__DETAIL__PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__path_following__action__Path_Goal __attribute__((deprecated))
#else
# define DEPRECATED__path_following__action__Path_Goal __declspec(deprecated)
#endif

namespace path_following
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Path_Goal_
{
  using Type = Path_Goal_<ContainerAllocator>;

  explicit Path_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->head = 0ll;
    }
  }

  explicit Path_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->head = 0ll;
    }
  }

  // field types and members
  using _start_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _start_type start;
  using _goal_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _goal_type goal;
  using _head_type =
    int64_t;
  _head_type head;

  // setters for named parameter idiom
  Type & set__start(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__goal(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__head(
    const int64_t & _arg)
  {
    this->head = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    path_following::action::Path_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const path_following::action::Path_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<path_following::action::Path_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<path_following::action::Path_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<path_following::action::Path_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<path_following::action::Path_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__path_following__action__Path_Goal
    std::shared_ptr<path_following::action::Path_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__path_following__action__Path_Goal
    std::shared_ptr<path_following::action::Path_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_Goal_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->head != other.head) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_Goal_

// alias to use template instance with default allocator
using Path_Goal =
  path_following::action::Path_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace path_following


#ifndef _WIN32
# define DEPRECATED__path_following__action__Path_Result __attribute__((deprecated))
#else
# define DEPRECATED__path_following__action__Path_Result __declspec(deprecated)
#endif

namespace path_following
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Path_Result_
{
  using Type = Path_Result_<ContainerAllocator>;

  explicit Path_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = 0ll;
    }
  }

  explicit Path_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    path_following::action::Path_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const path_following::action::Path_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<path_following::action::Path_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<path_following::action::Path_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<path_following::action::Path_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<path_following::action::Path_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__path_following__action__Path_Result
    std::shared_ptr<path_following::action::Path_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__path_following__action__Path_Result
    std::shared_ptr<path_following::action::Path_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_Result_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_Result_

// alias to use template instance with default allocator
using Path_Result =
  path_following::action::Path_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace path_following


#ifndef _WIN32
# define DEPRECATED__path_following__action__Path_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__path_following__action__Path_Feedback __declspec(deprecated)
#endif

namespace path_following
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Path_Feedback_
{
  using Type = Path_Feedback_<ContainerAllocator>;

  explicit Path_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->head = 0ll;
    }
  }

  explicit Path_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->head = 0ll;
    }
  }

  // field types and members
  using _posi_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _posi_type posi;
  using _head_type =
    int64_t;
  _head_type head;

  // setters for named parameter idiom
  Type & set__posi(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->posi = _arg;
    return *this;
  }
  Type & set__head(
    const int64_t & _arg)
  {
    this->head = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    path_following::action::Path_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const path_following::action::Path_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<path_following::action::Path_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<path_following::action::Path_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<path_following::action::Path_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<path_following::action::Path_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__path_following__action__Path_Feedback
    std::shared_ptr<path_following::action::Path_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__path_following__action__Path_Feedback
    std::shared_ptr<path_following::action::Path_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_Feedback_ & other) const
  {
    if (this->posi != other.posi) {
      return false;
    }
    if (this->head != other.head) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_Feedback_

// alias to use template instance with default allocator
using Path_Feedback =
  path_following::action::Path_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace path_following


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "path_following/action/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__path_following__action__Path_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__path_following__action__Path_SendGoal_Request __declspec(deprecated)
#endif

namespace path_following
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Path_SendGoal_Request_
{
  using Type = Path_SendGoal_Request_<ContainerAllocator>;

  explicit Path_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Path_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    path_following::action::Path_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const path_following::action::Path_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    path_following::action::Path_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const path_following::action::Path_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<path_following::action::Path_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<path_following::action::Path_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<path_following::action::Path_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<path_following::action::Path_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__path_following__action__Path_SendGoal_Request
    std::shared_ptr<path_following::action::Path_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__path_following__action__Path_SendGoal_Request
    std::shared_ptr<path_following::action::Path_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_SendGoal_Request_

// alias to use template instance with default allocator
using Path_SendGoal_Request =
  path_following::action::Path_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace path_following


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__path_following__action__Path_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__path_following__action__Path_SendGoal_Response __declspec(deprecated)
#endif

namespace path_following
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Path_SendGoal_Response_
{
  using Type = Path_SendGoal_Response_<ContainerAllocator>;

  explicit Path_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Path_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    path_following::action::Path_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const path_following::action::Path_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<path_following::action::Path_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<path_following::action::Path_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<path_following::action::Path_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<path_following::action::Path_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__path_following__action__Path_SendGoal_Response
    std::shared_ptr<path_following::action::Path_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__path_following__action__Path_SendGoal_Response
    std::shared_ptr<path_following::action::Path_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_SendGoal_Response_

// alias to use template instance with default allocator
using Path_SendGoal_Response =
  path_following::action::Path_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace path_following

namespace path_following
{

namespace action
{

struct Path_SendGoal
{
  using Request = path_following::action::Path_SendGoal_Request;
  using Response = path_following::action::Path_SendGoal_Response;
};

}  // namespace action

}  // namespace path_following


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__path_following__action__Path_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__path_following__action__Path_GetResult_Request __declspec(deprecated)
#endif

namespace path_following
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Path_GetResult_Request_
{
  using Type = Path_GetResult_Request_<ContainerAllocator>;

  explicit Path_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Path_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    path_following::action::Path_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const path_following::action::Path_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<path_following::action::Path_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<path_following::action::Path_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<path_following::action::Path_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<path_following::action::Path_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__path_following__action__Path_GetResult_Request
    std::shared_ptr<path_following::action::Path_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__path_following__action__Path_GetResult_Request
    std::shared_ptr<path_following::action::Path_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_GetResult_Request_

// alias to use template instance with default allocator
using Path_GetResult_Request =
  path_following::action::Path_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace path_following


// Include directives for member types
// Member 'result'
// already included above
// #include "path_following/action/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__path_following__action__Path_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__path_following__action__Path_GetResult_Response __declspec(deprecated)
#endif

namespace path_following
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Path_GetResult_Response_
{
  using Type = Path_GetResult_Response_<ContainerAllocator>;

  explicit Path_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Path_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    path_following::action::Path_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const path_following::action::Path_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    path_following::action::Path_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const path_following::action::Path_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<path_following::action::Path_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<path_following::action::Path_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<path_following::action::Path_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<path_following::action::Path_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__path_following__action__Path_GetResult_Response
    std::shared_ptr<path_following::action::Path_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__path_following__action__Path_GetResult_Response
    std::shared_ptr<path_following::action::Path_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_GetResult_Response_

// alias to use template instance with default allocator
using Path_GetResult_Response =
  path_following::action::Path_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace path_following

namespace path_following
{

namespace action
{

struct Path_GetResult
{
  using Request = path_following::action::Path_GetResult_Request;
  using Response = path_following::action::Path_GetResult_Response;
};

}  // namespace action

}  // namespace path_following


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "path_following/action/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__path_following__action__Path_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__path_following__action__Path_FeedbackMessage __declspec(deprecated)
#endif

namespace path_following
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Path_FeedbackMessage_
{
  using Type = Path_FeedbackMessage_<ContainerAllocator>;

  explicit Path_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Path_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    path_following::action::Path_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const path_following::action::Path_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    path_following::action::Path_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const path_following::action::Path_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<path_following::action::Path_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<path_following::action::Path_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      path_following::action::Path_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<path_following::action::Path_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<path_following::action::Path_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<path_following::action::Path_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__path_following__action__Path_FeedbackMessage
    std::shared_ptr<path_following::action::Path_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__path_following__action__Path_FeedbackMessage
    std::shared_ptr<path_following::action::Path_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Path_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Path_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Path_FeedbackMessage_

// alias to use template instance with default allocator
using Path_FeedbackMessage =
  path_following::action::Path_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace path_following

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace path_following
{

namespace action
{

struct Path
{
  /// The goal message defined in the action definition.
  using Goal = path_following::action::Path_Goal;
  /// The result message defined in the action definition.
  using Result = path_following::action::Path_Result;
  /// The feedback message defined in the action definition.
  using Feedback = path_following::action::Path_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = path_following::action::Path_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = path_following::action::Path_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = path_following::action::Path_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Path Path;

}  // namespace action

}  // namespace path_following

#endif  // PATH_FOLLOWING__ACTION__DETAIL__PATH__STRUCT_HPP_
