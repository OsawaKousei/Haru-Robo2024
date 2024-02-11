// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from path_following:action/Path.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "path_following/action/detail/path__struct.h"
#include "path_following/action/detail/path__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace path_following
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Path_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Path_Goal_type_support_ids_t;

static const _Path_Goal_type_support_ids_t _Path_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Path_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Path_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Path_Goal_type_support_symbol_names_t _Path_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following, action, Path_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_Goal)),
  }
};

typedef struct _Path_Goal_type_support_data_t
{
  void * data[2];
} _Path_Goal_type_support_data_t;

static _Path_Goal_type_support_data_t _Path_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Path_Goal_message_typesupport_map = {
  2,
  "path_following",
  &_Path_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Path_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Path_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Path_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Path_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace path_following

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, path_following, action, Path_Goal)() {
  return &::path_following::action::rosidl_typesupport_c::Path_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "path_following/action/detail/path__struct.h"
// already included above
// #include "path_following/action/detail/path__type_support.h"
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

namespace path_following
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Path_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Path_Result_type_support_ids_t;

static const _Path_Result_type_support_ids_t _Path_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Path_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Path_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Path_Result_type_support_symbol_names_t _Path_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following, action, Path_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_Result)),
  }
};

typedef struct _Path_Result_type_support_data_t
{
  void * data[2];
} _Path_Result_type_support_data_t;

static _Path_Result_type_support_data_t _Path_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Path_Result_message_typesupport_map = {
  2,
  "path_following",
  &_Path_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Path_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Path_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Path_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Path_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace path_following

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, path_following, action, Path_Result)() {
  return &::path_following::action::rosidl_typesupport_c::Path_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "path_following/action/detail/path__struct.h"
// already included above
// #include "path_following/action/detail/path__type_support.h"
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

namespace path_following
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Path_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Path_Feedback_type_support_ids_t;

static const _Path_Feedback_type_support_ids_t _Path_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Path_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Path_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Path_Feedback_type_support_symbol_names_t _Path_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following, action, Path_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_Feedback)),
  }
};

typedef struct _Path_Feedback_type_support_data_t
{
  void * data[2];
} _Path_Feedback_type_support_data_t;

static _Path_Feedback_type_support_data_t _Path_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Path_Feedback_message_typesupport_map = {
  2,
  "path_following",
  &_Path_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Path_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Path_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Path_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Path_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace path_following

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, path_following, action, Path_Feedback)() {
  return &::path_following::action::rosidl_typesupport_c::Path_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "path_following/action/detail/path__struct.h"
// already included above
// #include "path_following/action/detail/path__type_support.h"
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

namespace path_following
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Path_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Path_SendGoal_Request_type_support_ids_t;

static const _Path_SendGoal_Request_type_support_ids_t _Path_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Path_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Path_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Path_SendGoal_Request_type_support_symbol_names_t _Path_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following, action, Path_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_SendGoal_Request)),
  }
};

typedef struct _Path_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Path_SendGoal_Request_type_support_data_t;

static _Path_SendGoal_Request_type_support_data_t _Path_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Path_SendGoal_Request_message_typesupport_map = {
  2,
  "path_following",
  &_Path_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Path_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Path_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Path_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Path_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace path_following

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, path_following, action, Path_SendGoal_Request)() {
  return &::path_following::action::rosidl_typesupport_c::Path_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "path_following/action/detail/path__struct.h"
// already included above
// #include "path_following/action/detail/path__type_support.h"
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

namespace path_following
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Path_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Path_SendGoal_Response_type_support_ids_t;

static const _Path_SendGoal_Response_type_support_ids_t _Path_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Path_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Path_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Path_SendGoal_Response_type_support_symbol_names_t _Path_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following, action, Path_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_SendGoal_Response)),
  }
};

typedef struct _Path_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Path_SendGoal_Response_type_support_data_t;

static _Path_SendGoal_Response_type_support_data_t _Path_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Path_SendGoal_Response_message_typesupport_map = {
  2,
  "path_following",
  &_Path_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Path_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Path_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Path_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Path_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace path_following

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, path_following, action, Path_SendGoal_Response)() {
  return &::path_following::action::rosidl_typesupport_c::Path_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "path_following/action/detail/path__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace path_following
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Path_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Path_SendGoal_type_support_ids_t;

static const _Path_SendGoal_type_support_ids_t _Path_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Path_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Path_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Path_SendGoal_type_support_symbol_names_t _Path_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following, action, Path_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_SendGoal)),
  }
};

typedef struct _Path_SendGoal_type_support_data_t
{
  void * data[2];
} _Path_SendGoal_type_support_data_t;

static _Path_SendGoal_type_support_data_t _Path_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Path_SendGoal_service_typesupport_map = {
  2,
  "path_following",
  &_Path_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Path_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Path_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Path_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Path_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace path_following

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, path_following, action, Path_SendGoal)() {
  return &::path_following::action::rosidl_typesupport_c::Path_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "path_following/action/detail/path__struct.h"
// already included above
// #include "path_following/action/detail/path__type_support.h"
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

namespace path_following
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Path_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Path_GetResult_Request_type_support_ids_t;

static const _Path_GetResult_Request_type_support_ids_t _Path_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Path_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Path_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Path_GetResult_Request_type_support_symbol_names_t _Path_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following, action, Path_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_GetResult_Request)),
  }
};

typedef struct _Path_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Path_GetResult_Request_type_support_data_t;

static _Path_GetResult_Request_type_support_data_t _Path_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Path_GetResult_Request_message_typesupport_map = {
  2,
  "path_following",
  &_Path_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Path_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Path_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Path_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Path_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace path_following

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, path_following, action, Path_GetResult_Request)() {
  return &::path_following::action::rosidl_typesupport_c::Path_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "path_following/action/detail/path__struct.h"
// already included above
// #include "path_following/action/detail/path__type_support.h"
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

namespace path_following
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Path_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Path_GetResult_Response_type_support_ids_t;

static const _Path_GetResult_Response_type_support_ids_t _Path_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Path_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Path_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Path_GetResult_Response_type_support_symbol_names_t _Path_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following, action, Path_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_GetResult_Response)),
  }
};

typedef struct _Path_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Path_GetResult_Response_type_support_data_t;

static _Path_GetResult_Response_type_support_data_t _Path_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Path_GetResult_Response_message_typesupport_map = {
  2,
  "path_following",
  &_Path_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Path_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Path_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Path_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Path_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace path_following

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, path_following, action, Path_GetResult_Response)() {
  return &::path_following::action::rosidl_typesupport_c::Path_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "path_following/action/detail/path__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace path_following
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Path_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Path_GetResult_type_support_ids_t;

static const _Path_GetResult_type_support_ids_t _Path_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Path_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Path_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Path_GetResult_type_support_symbol_names_t _Path_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following, action, Path_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_GetResult)),
  }
};

typedef struct _Path_GetResult_type_support_data_t
{
  void * data[2];
} _Path_GetResult_type_support_data_t;

static _Path_GetResult_type_support_data_t _Path_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Path_GetResult_service_typesupport_map = {
  2,
  "path_following",
  &_Path_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Path_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Path_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Path_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Path_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace path_following

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, path_following, action, Path_GetResult)() {
  return &::path_following::action::rosidl_typesupport_c::Path_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "path_following/action/detail/path__struct.h"
// already included above
// #include "path_following/action/detail/path__type_support.h"
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

namespace path_following
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Path_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Path_FeedbackMessage_type_support_ids_t;

static const _Path_FeedbackMessage_type_support_ids_t _Path_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Path_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Path_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Path_FeedbackMessage_type_support_symbol_names_t _Path_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, path_following, action, Path_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, path_following, action, Path_FeedbackMessage)),
  }
};

typedef struct _Path_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Path_FeedbackMessage_type_support_data_t;

static _Path_FeedbackMessage_type_support_data_t _Path_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Path_FeedbackMessage_message_typesupport_map = {
  2,
  "path_following",
  &_Path_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Path_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Path_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Path_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Path_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace path_following

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, path_following, action, Path_FeedbackMessage)() {
  return &::path_following::action::rosidl_typesupport_c::Path_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "path_following/action/path.h"
// already included above
// #include "path_following/action/detail/path__type_support.h"

static rosidl_action_type_support_t _path_following__action__Path__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, path_following, action, Path)()
{
  // Thread-safe by always writing the same values to the static struct
  _path_following__action__Path__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, path_following, action, Path_SendGoal)();
  _path_following__action__Path__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, path_following, action, Path_GetResult)();
  _path_following__action__Path__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _path_following__action__Path__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, path_following, action, Path_FeedbackMessage)();
  _path_following__action__Path__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_path_following__action__Path__typesupport_c;
}

#ifdef __cplusplus
}
#endif
