// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from manip:action/State.idl
// generated code does not contain a copyright notice

#ifndef MANIP__ACTION__DETAIL__STATE__BUILDER_HPP_
#define MANIP__ACTION__DETAIL__STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "manip/action/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace manip
{

namespace action
{

namespace builder
{

class Init_State_Goal_work
{
public:
  explicit Init_State_Goal_work(::manip::action::State_Goal & msg)
  : msg_(msg)
  {}
  ::manip::action::State_Goal work(::manip::action::State_Goal::_work_type arg)
  {
    msg_.work = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip::action::State_Goal msg_;
};

class Init_State_Goal_base2
{
public:
  explicit Init_State_Goal_base2(::manip::action::State_Goal & msg)
  : msg_(msg)
  {}
  Init_State_Goal_work base2(::manip::action::State_Goal::_base2_type arg)
  {
    msg_.base2 = std::move(arg);
    return Init_State_Goal_work(msg_);
  }

private:
  ::manip::action::State_Goal msg_;
};

class Init_State_Goal_base1
{
public:
  Init_State_Goal_base1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_Goal_base2 base1(::manip::action::State_Goal::_base1_type arg)
  {
    msg_.base1 = std::move(arg);
    return Init_State_Goal_base2(msg_);
  }

private:
  ::manip::action::State_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip::action::State_Goal>()
{
  return manip::action::builder::Init_State_Goal_base1();
}

}  // namespace manip


namespace manip
{

namespace action
{

namespace builder
{

class Init_State_Result_feedback
{
public:
  Init_State_Result_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manip::action::State_Result feedback(::manip::action::State_Result::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip::action::State_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip::action::State_Result>()
{
  return manip::action::builder::Init_State_Result_feedback();
}

}  // namespace manip


namespace manip
{

namespace action
{

namespace builder
{

class Init_State_Feedback_work
{
public:
  explicit Init_State_Feedback_work(::manip::action::State_Feedback & msg)
  : msg_(msg)
  {}
  ::manip::action::State_Feedback work(::manip::action::State_Feedback::_work_type arg)
  {
    msg_.work = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip::action::State_Feedback msg_;
};

class Init_State_Feedback_base2
{
public:
  explicit Init_State_Feedback_base2(::manip::action::State_Feedback & msg)
  : msg_(msg)
  {}
  Init_State_Feedback_work base2(::manip::action::State_Feedback::_base2_type arg)
  {
    msg_.base2 = std::move(arg);
    return Init_State_Feedback_work(msg_);
  }

private:
  ::manip::action::State_Feedback msg_;
};

class Init_State_Feedback_base1
{
public:
  Init_State_Feedback_base1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_Feedback_base2 base1(::manip::action::State_Feedback::_base1_type arg)
  {
    msg_.base1 = std::move(arg);
    return Init_State_Feedback_base2(msg_);
  }

private:
  ::manip::action::State_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip::action::State_Feedback>()
{
  return manip::action::builder::Init_State_Feedback_base1();
}

}  // namespace manip


namespace manip
{

namespace action
{

namespace builder
{

class Init_State_SendGoal_Request_goal
{
public:
  explicit Init_State_SendGoal_Request_goal(::manip::action::State_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::manip::action::State_SendGoal_Request goal(::manip::action::State_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip::action::State_SendGoal_Request msg_;
};

class Init_State_SendGoal_Request_goal_id
{
public:
  Init_State_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_SendGoal_Request_goal goal_id(::manip::action::State_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_State_SendGoal_Request_goal(msg_);
  }

private:
  ::manip::action::State_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip::action::State_SendGoal_Request>()
{
  return manip::action::builder::Init_State_SendGoal_Request_goal_id();
}

}  // namespace manip


namespace manip
{

namespace action
{

namespace builder
{

class Init_State_SendGoal_Response_stamp
{
public:
  explicit Init_State_SendGoal_Response_stamp(::manip::action::State_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::manip::action::State_SendGoal_Response stamp(::manip::action::State_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip::action::State_SendGoal_Response msg_;
};

class Init_State_SendGoal_Response_accepted
{
public:
  Init_State_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_SendGoal_Response_stamp accepted(::manip::action::State_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_State_SendGoal_Response_stamp(msg_);
  }

private:
  ::manip::action::State_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip::action::State_SendGoal_Response>()
{
  return manip::action::builder::Init_State_SendGoal_Response_accepted();
}

}  // namespace manip


namespace manip
{

namespace action
{

namespace builder
{

class Init_State_GetResult_Request_goal_id
{
public:
  Init_State_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::manip::action::State_GetResult_Request goal_id(::manip::action::State_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip::action::State_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip::action::State_GetResult_Request>()
{
  return manip::action::builder::Init_State_GetResult_Request_goal_id();
}

}  // namespace manip


namespace manip
{

namespace action
{

namespace builder
{

class Init_State_GetResult_Response_result
{
public:
  explicit Init_State_GetResult_Response_result(::manip::action::State_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::manip::action::State_GetResult_Response result(::manip::action::State_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip::action::State_GetResult_Response msg_;
};

class Init_State_GetResult_Response_status
{
public:
  Init_State_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_GetResult_Response_result status(::manip::action::State_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_State_GetResult_Response_result(msg_);
  }

private:
  ::manip::action::State_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip::action::State_GetResult_Response>()
{
  return manip::action::builder::Init_State_GetResult_Response_status();
}

}  // namespace manip


namespace manip
{

namespace action
{

namespace builder
{

class Init_State_FeedbackMessage_feedback
{
public:
  explicit Init_State_FeedbackMessage_feedback(::manip::action::State_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::manip::action::State_FeedbackMessage feedback(::manip::action::State_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::manip::action::State_FeedbackMessage msg_;
};

class Init_State_FeedbackMessage_goal_id
{
public:
  Init_State_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_FeedbackMessage_feedback goal_id(::manip::action::State_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_State_FeedbackMessage_feedback(msg_);
  }

private:
  ::manip::action::State_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::manip::action::State_FeedbackMessage>()
{
  return manip::action::builder::Init_State_FeedbackMessage_goal_id();
}

}  // namespace manip

#endif  // MANIP__ACTION__DETAIL__STATE__BUILDER_HPP_
