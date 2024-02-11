// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from manip:action/State.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "manip/action/detail/state__struct.h"
#include "manip/action/detail/state__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace manip
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _State_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _State_Goal_type_support_ids_t;

static const _State_Goal_type_support_ids_t _State_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _State_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _State_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _State_Goal_type_support_symbol_names_t _State_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manip, action, State_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_Goal)),
  }
};

typedef struct _State_Goal_type_support_data_t
{
  void * data[2];
} _State_Goal_type_support_data_t;

static _State_Goal_type_support_data_t _State_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _State_Goal_message_typesupport_map = {
  2,
  "manip",
  &_State_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_State_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_State_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t State_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_State_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace manip

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manip, action, State_Goal)() {
  return &::manip::action::rosidl_typesupport_c::State_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "manip/action/detail/state__struct.h"
// already included above
// #include "manip/action/detail/state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manip
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _State_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _State_Result_type_support_ids_t;

static const _State_Result_type_support_ids_t _State_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _State_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _State_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _State_Result_type_support_symbol_names_t _State_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manip, action, State_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_Result)),
  }
};

typedef struct _State_Result_type_support_data_t
{
  void * data[2];
} _State_Result_type_support_data_t;

static _State_Result_type_support_data_t _State_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _State_Result_message_typesupport_map = {
  2,
  "manip",
  &_State_Result_message_typesupport_ids.typesupport_identifier[0],
  &_State_Result_message_typesupport_symbol_names.symbol_name[0],
  &_State_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t State_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_State_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace manip

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manip, action, State_Result)() {
  return &::manip::action::rosidl_typesupport_c::State_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "manip/action/detail/state__struct.h"
// already included above
// #include "manip/action/detail/state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manip
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _State_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _State_Feedback_type_support_ids_t;

static const _State_Feedback_type_support_ids_t _State_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _State_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _State_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _State_Feedback_type_support_symbol_names_t _State_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manip, action, State_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_Feedback)),
  }
};

typedef struct _State_Feedback_type_support_data_t
{
  void * data[2];
} _State_Feedback_type_support_data_t;

static _State_Feedback_type_support_data_t _State_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _State_Feedback_message_typesupport_map = {
  2,
  "manip",
  &_State_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_State_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_State_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t State_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_State_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace manip

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manip, action, State_Feedback)() {
  return &::manip::action::rosidl_typesupport_c::State_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "manip/action/detail/state__struct.h"
// already included above
// #include "manip/action/detail/state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manip
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _State_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _State_SendGoal_Request_type_support_ids_t;

static const _State_SendGoal_Request_type_support_ids_t _State_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _State_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _State_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _State_SendGoal_Request_type_support_symbol_names_t _State_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manip, action, State_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_SendGoal_Request)),
  }
};

typedef struct _State_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _State_SendGoal_Request_type_support_data_t;

static _State_SendGoal_Request_type_support_data_t _State_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _State_SendGoal_Request_message_typesupport_map = {
  2,
  "manip",
  &_State_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_State_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_State_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t State_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_State_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace manip

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manip, action, State_SendGoal_Request)() {
  return &::manip::action::rosidl_typesupport_c::State_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "manip/action/detail/state__struct.h"
// already included above
// #include "manip/action/detail/state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manip
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _State_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _State_SendGoal_Response_type_support_ids_t;

static const _State_SendGoal_Response_type_support_ids_t _State_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _State_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _State_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _State_SendGoal_Response_type_support_symbol_names_t _State_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manip, action, State_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_SendGoal_Response)),
  }
};

typedef struct _State_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _State_SendGoal_Response_type_support_data_t;

static _State_SendGoal_Response_type_support_data_t _State_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _State_SendGoal_Response_message_typesupport_map = {
  2,
  "manip",
  &_State_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_State_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_State_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t State_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_State_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace manip

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manip, action, State_SendGoal_Response)() {
  return &::manip::action::rosidl_typesupport_c::State_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "manip/action/detail/state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manip
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _State_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _State_SendGoal_type_support_ids_t;

static const _State_SendGoal_type_support_ids_t _State_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _State_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _State_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _State_SendGoal_type_support_symbol_names_t _State_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manip, action, State_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_SendGoal)),
  }
};

typedef struct _State_SendGoal_type_support_data_t
{
  void * data[2];
} _State_SendGoal_type_support_data_t;

static _State_SendGoal_type_support_data_t _State_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _State_SendGoal_service_typesupport_map = {
  2,
  "manip",
  &_State_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_State_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_State_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t State_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_State_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace manip

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, manip, action, State_SendGoal)() {
  return &::manip::action::rosidl_typesupport_c::State_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "manip/action/detail/state__struct.h"
// already included above
// #include "manip/action/detail/state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manip
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _State_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _State_GetResult_Request_type_support_ids_t;

static const _State_GetResult_Request_type_support_ids_t _State_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _State_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _State_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _State_GetResult_Request_type_support_symbol_names_t _State_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manip, action, State_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_GetResult_Request)),
  }
};

typedef struct _State_GetResult_Request_type_support_data_t
{
  void * data[2];
} _State_GetResult_Request_type_support_data_t;

static _State_GetResult_Request_type_support_data_t _State_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _State_GetResult_Request_message_typesupport_map = {
  2,
  "manip",
  &_State_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_State_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_State_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t State_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_State_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace manip

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manip, action, State_GetResult_Request)() {
  return &::manip::action::rosidl_typesupport_c::State_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "manip/action/detail/state__struct.h"
// already included above
// #include "manip/action/detail/state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manip
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _State_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _State_GetResult_Response_type_support_ids_t;

static const _State_GetResult_Response_type_support_ids_t _State_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _State_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _State_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _State_GetResult_Response_type_support_symbol_names_t _State_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manip, action, State_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_GetResult_Response)),
  }
};

typedef struct _State_GetResult_Response_type_support_data_t
{
  void * data[2];
} _State_GetResult_Response_type_support_data_t;

static _State_GetResult_Response_type_support_data_t _State_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _State_GetResult_Response_message_typesupport_map = {
  2,
  "manip",
  &_State_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_State_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_State_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t State_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_State_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace manip

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manip, action, State_GetResult_Response)() {
  return &::manip::action::rosidl_typesupport_c::State_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "manip/action/detail/state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manip
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _State_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _State_GetResult_type_support_ids_t;

static const _State_GetResult_type_support_ids_t _State_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _State_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _State_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _State_GetResult_type_support_symbol_names_t _State_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manip, action, State_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_GetResult)),
  }
};

typedef struct _State_GetResult_type_support_data_t
{
  void * data[2];
} _State_GetResult_type_support_data_t;

static _State_GetResult_type_support_data_t _State_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _State_GetResult_service_typesupport_map = {
  2,
  "manip",
  &_State_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_State_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_State_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t State_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_State_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace manip

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, manip, action, State_GetResult)() {
  return &::manip::action::rosidl_typesupport_c::State_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "manip/action/detail/state__struct.h"
// already included above
// #include "manip/action/detail/state__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace manip
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _State_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _State_FeedbackMessage_type_support_ids_t;

static const _State_FeedbackMessage_type_support_ids_t _State_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _State_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _State_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _State_FeedbackMessage_type_support_symbol_names_t _State_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, manip, action, State_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, manip, action, State_FeedbackMessage)),
  }
};

typedef struct _State_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _State_FeedbackMessage_type_support_data_t;

static _State_FeedbackMessage_type_support_data_t _State_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _State_FeedbackMessage_message_typesupport_map = {
  2,
  "manip",
  &_State_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_State_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_State_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t State_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_State_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace manip

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, manip, action, State_FeedbackMessage)() {
  return &::manip::action::rosidl_typesupport_c::State_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "manip/action/state.h"
// already included above
// #include "manip/action/detail/state__type_support.h"

static rosidl_action_type_support_t _manip__action__State__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, manip, action, State)()
{
  // Thread-safe by always writing the same values to the static struct
  _manip__action__State__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, manip, action, State_SendGoal)();
  _manip__action__State__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, manip, action, State_GetResult)();
  _manip__action__State__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _manip__action__State__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, manip, action, State_FeedbackMessage)();
  _manip__action__State__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_manip__action__State__typesupport_c;
}

#ifdef __cplusplus
}
#endif
