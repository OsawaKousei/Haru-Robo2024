// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from manip_msgs:msg/Cmd.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "manip_msgs/msg/detail/cmd__struct.h"
#include "manip_msgs/msg/detail/cmd__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool manip_msgs__msg__cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[24];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("manip_msgs.msg._cmd.Cmd", full_classname_dest, 23) == 0);
  }
  manip_msgs__msg__Cmd * ros_message = _ros_message;
  {  // top_base_arm
    PyObject * field = PyObject_GetAttrString(_pymsg, "top_base_arm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->top_base_arm = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // top_base_hand
    PyObject * field = PyObject_GetAttrString(_pymsg, "top_base_hand");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->top_base_hand = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // bottom_base_arm
    PyObject * field = PyObject_GetAttrString(_pymsg, "bottom_base_arm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bottom_base_arm = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // bottom_base_hand
    PyObject * field = PyObject_GetAttrString(_pymsg, "bottom_base_hand");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bottom_base_hand = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // work_arm_deploy
    PyObject * field = PyObject_GetAttrString(_pymsg, "work_arm_deploy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->work_arm_deploy = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // work_arm
    PyObject * field = PyObject_GetAttrString(_pymsg, "work_arm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->work_arm = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // work_hand
    PyObject * field = PyObject_GetAttrString(_pymsg, "work_hand");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->work_hand = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // num
    PyObject * field = PyObject_GetAttrString(_pymsg, "num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * manip_msgs__msg__cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Cmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("manip_msgs.msg._cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Cmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  manip_msgs__msg__Cmd * ros_message = (manip_msgs__msg__Cmd *)raw_ros_message;
  {  // top_base_arm
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->top_base_arm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "top_base_arm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // top_base_hand
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->top_base_hand);
    {
      int rc = PyObject_SetAttrString(_pymessage, "top_base_hand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bottom_base_arm
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->bottom_base_arm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bottom_base_arm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bottom_base_hand
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->bottom_base_hand);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bottom_base_hand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // work_arm_deploy
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->work_arm_deploy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "work_arm_deploy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // work_arm
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->work_arm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "work_arm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // work_hand
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->work_hand);
    {
      int rc = PyObject_SetAttrString(_pymessage, "work_hand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
