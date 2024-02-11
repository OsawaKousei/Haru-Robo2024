// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from path_following:action/Path.idl
// generated code does not contain a copyright notice

#ifndef PATH_FOLLOWING__ACTION__DETAIL__PATH__BUILDER_HPP_
#define PATH_FOLLOWING__ACTION__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "path_following/action/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace path_following
{

namespace action
{

namespace builder
{

class Init_Path_Goal_head
{
public:
  explicit Init_Path_Goal_head(::path_following::action::Path_Goal & msg)
  : msg_(msg)
  {}
  ::path_following::action::Path_Goal head(::path_following::action::Path_Goal::_head_type arg)
  {
    msg_.head = std::move(arg);
    return std::move(msg_);
  }

private:
  ::path_following::action::Path_Goal msg_;
};

class Init_Path_Goal_goal
{
public:
  explicit Init_Path_Goal_goal(::path_following::action::Path_Goal & msg)
  : msg_(msg)
  {}
  Init_Path_Goal_head goal(::path_following::action::Path_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_Path_Goal_head(msg_);
  }

private:
  ::path_following::action::Path_Goal msg_;
};

class Init_Path_Goal_start
{
public:
  Init_Path_Goal_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_Goal_goal start(::path_following::action::Path_Goal::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_Path_Goal_goal(msg_);
  }

private:
  ::path_following::action::Path_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::path_following::action::Path_Goal>()
{
  return path_following::action::builder::Init_Path_Goal_start();
}

}  // namespace path_following


namespace path_following
{

namespace action
{

namespace builder
{

class Init_Path_Result_feedback
{
public:
  Init_Path_Result_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::path_following::action::Path_Result feedback(::path_following::action::Path_Result::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::path_following::action::Path_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::path_following::action::Path_Result>()
{
  return path_following::action::builder::Init_Path_Result_feedback();
}

}  // namespace path_following


namespace path_following
{

namespace action
{

namespace builder
{

class Init_Path_Feedback_head
{
public:
  explicit Init_Path_Feedback_head(::path_following::action::Path_Feedback & msg)
  : msg_(msg)
  {}
  ::path_following::action::Path_Feedback head(::path_following::action::Path_Feedback::_head_type arg)
  {
    msg_.head = std::move(arg);
    return std::move(msg_);
  }

private:
  ::path_following::action::Path_Feedback msg_;
};

class Init_Path_Feedback_posi
{
public:
  Init_Path_Feedback_posi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_Feedback_head posi(::path_following::action::Path_Feedback::_posi_type arg)
  {
    msg_.posi = std::move(arg);
    return Init_Path_Feedback_head(msg_);
  }

private:
  ::path_following::action::Path_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::path_following::action::Path_Feedback>()
{
  return path_following::action::builder::Init_Path_Feedback_posi();
}

}  // namespace path_following


namespace path_following
{

namespace action
{

namespace builder
{

class Init_Path_SendGoal_Request_goal
{
public:
  explicit Init_Path_SendGoal_Request_goal(::path_following::action::Path_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::path_following::action::Path_SendGoal_Request goal(::path_following::action::Path_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::path_following::action::Path_SendGoal_Request msg_;
};

class Init_Path_SendGoal_Request_goal_id
{
public:
  Init_Path_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_SendGoal_Request_goal goal_id(::path_following::action::Path_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Path_SendGoal_Request_goal(msg_);
  }

private:
  ::path_following::action::Path_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::path_following::action::Path_SendGoal_Request>()
{
  return path_following::action::builder::Init_Path_SendGoal_Request_goal_id();
}

}  // namespace path_following


namespace path_following
{

namespace action
{

namespace builder
{

class Init_Path_SendGoal_Response_stamp
{
public:
  explicit Init_Path_SendGoal_Response_stamp(::path_following::action::Path_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::path_following::action::Path_SendGoal_Response stamp(::path_following::action::Path_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::path_following::action::Path_SendGoal_Response msg_;
};

class Init_Path_SendGoal_Response_accepted
{
public:
  Init_Path_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_SendGoal_Response_stamp accepted(::path_following::action::Path_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Path_SendGoal_Response_stamp(msg_);
  }

private:
  ::path_following::action::Path_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::path_following::action::Path_SendGoal_Response>()
{
  return path_following::action::builder::Init_Path_SendGoal_Response_accepted();
}

}  // namespace path_following


namespace path_following
{

namespace action
{

namespace builder
{

class Init_Path_GetResult_Request_goal_id
{
public:
  Init_Path_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::path_following::action::Path_GetResult_Request goal_id(::path_following::action::Path_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::path_following::action::Path_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::path_following::action::Path_GetResult_Request>()
{
  return path_following::action::builder::Init_Path_GetResult_Request_goal_id();
}

}  // namespace path_following


namespace path_following
{

namespace action
{

namespace builder
{

class Init_Path_GetResult_Response_result
{
public:
  explicit Init_Path_GetResult_Response_result(::path_following::action::Path_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::path_following::action::Path_GetResult_Response result(::path_following::action::Path_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::path_following::action::Path_GetResult_Response msg_;
};

class Init_Path_GetResult_Response_status
{
public:
  Init_Path_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_GetResult_Response_result status(::path_following::action::Path_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Path_GetResult_Response_result(msg_);
  }

private:
  ::path_following::action::Path_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::path_following::action::Path_GetResult_Response>()
{
  return path_following::action::builder::Init_Path_GetResult_Response_status();
}

}  // namespace path_following


namespace path_following
{

namespace action
{

namespace builder
{

class Init_Path_FeedbackMessage_feedback
{
public:
  explicit Init_Path_FeedbackMessage_feedback(::path_following::action::Path_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::path_following::action::Path_FeedbackMessage feedback(::path_following::action::Path_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::path_following::action::Path_FeedbackMessage msg_;
};

class Init_Path_FeedbackMessage_goal_id
{
public:
  Init_Path_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_FeedbackMessage_feedback goal_id(::path_following::action::Path_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Path_FeedbackMessage_feedback(msg_);
  }

private:
  ::path_following::action::Path_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::path_following::action::Path_FeedbackMessage>()
{
  return path_following::action::builder::Init_Path_FeedbackMessage_goal_id();
}

}  // namespace path_following

#endif  // PATH_FOLLOWING__ACTION__DETAIL__PATH__BUILDER_HPP_
