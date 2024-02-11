// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from drive_msgs:msg/OmniEnc.idl
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
#include "drive_msgs/msg/detail/omni_enc__struct.h"
#include "drive_msgs/msg/detail/omni_enc__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool drive_msgs__msg__omni_enc__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("drive_msgs.msg._omni_enc.OmniEnc", full_classname_dest, 32) == 0);
  }
  drive_msgs__msg__OmniEnc * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // encfontright
    PyObject * field = PyObject_GetAttrString(_pymsg, "encfontright");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->encfontright = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // encfrontleft
    PyObject * field = PyObject_GetAttrString(_pymsg, "encfrontleft");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->encfrontleft = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // encbackright
    PyObject * field = PyObject_GetAttrString(_pymsg, "encbackright");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->encbackright = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // encbackleft
    PyObject * field = PyObject_GetAttrString(_pymsg, "encbackleft");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->encbackleft = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enclx
    PyObject * field = PyObject_GetAttrString(_pymsg, "enclx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->enclx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // encly
    PyObject * field = PyObject_GetAttrString(_pymsg, "encly");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->encly = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // encadditional
    PyObject * field = PyObject_GetAttrString(_pymsg, "encadditional");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->encadditional = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * drive_msgs__msg__omni_enc__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OmniEnc */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("drive_msgs.msg._omni_enc");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OmniEnc");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  drive_msgs__msg__OmniEnc * ros_message = (drive_msgs__msg__OmniEnc *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encfontright
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->encfontright);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encfontright", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encfrontleft
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->encfrontleft);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encfrontleft", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encbackright
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->encbackright);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encbackright", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encbackleft
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->encbackleft);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encbackleft", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enclx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->enclx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enclx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encly
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->encly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encadditional
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->encadditional);
    {
      int rc = PyObject_SetAttrString(_pymessage, "encadditional", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
