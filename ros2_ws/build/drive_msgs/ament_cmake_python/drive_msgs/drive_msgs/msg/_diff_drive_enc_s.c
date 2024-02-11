// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from drive_msgs:msg/DiffDriveEnc.idl
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
#include "drive_msgs/msg/detail/diff_drive_enc__struct.h"
#include "drive_msgs/msg/detail/diff_drive_enc__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool drive_msgs__msg__diff_drive_enc__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("drive_msgs.msg._diff_drive_enc.DiffDriveEnc", full_classname_dest, 43) == 0);
  }
  drive_msgs__msg__DiffDriveEnc * ros_message = _ros_message;
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
  {  // m1enc
    PyObject * field = PyObject_GetAttrString(_pymsg, "m1enc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m1enc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m2enc
    PyObject * field = PyObject_GetAttrString(_pymsg, "m2enc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m2enc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lxenc
    PyObject * field = PyObject_GetAttrString(_pymsg, "lxenc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lxenc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // azenc
    PyObject * field = PyObject_GetAttrString(_pymsg, "azenc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->azenc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * drive_msgs__msg__diff_drive_enc__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DiffDriveEnc */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("drive_msgs.msg._diff_drive_enc");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiffDriveEnc");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  drive_msgs__msg__DiffDriveEnc * ros_message = (drive_msgs__msg__DiffDriveEnc *)raw_ros_message;
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
  {  // m1enc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m1enc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m1enc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m2enc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m2enc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m2enc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lxenc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lxenc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lxenc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // azenc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->azenc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "azenc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
