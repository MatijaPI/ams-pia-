// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from amsagv_msgs:msg/ActionsStamped.idl
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
#include "amsagv_msgs/msg/detail/actions_stamped__struct.h"
#include "amsagv_msgs/msg/detail/actions_stamped__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "amsagv_msgs/msg/detail/action_stamped__functions.h"
// end nested array functions include
bool amsagv_msgs__msg__action_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * amsagv_msgs__msg__action_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool amsagv_msgs__msg__actions_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("amsagv_msgs.msg._actions_stamped", (char *)PyUnicode_1BYTE_DATA(module_attr), 32) == 0);
    assert(strncmp("ActionsStamped", (char *)PyUnicode_1BYTE_DATA(name_attr), 14) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  amsagv_msgs__msg__ActionsStamped * ros_message = _ros_message;
  {  // actions
    PyObject * field = PyObject_GetAttrString(_pymsg, "actions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'actions'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!amsagv_msgs__msg__ActionStamped__Sequence__init(&(ros_message->actions), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create amsagv_msgs__msg__ActionStamped__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    amsagv_msgs__msg__ActionStamped * dest = ros_message->actions.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!amsagv_msgs__msg__action_stamped__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amsagv_msgs__msg__actions_stamped__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ActionsStamped */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amsagv_msgs.msg._actions_stamped");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ActionsStamped");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amsagv_msgs__msg__ActionsStamped * ros_message = (amsagv_msgs__msg__ActionsStamped *)raw_ros_message;
  {  // actions
    PyObject * field = NULL;
    size_t size = ros_message->actions.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    amsagv_msgs__msg__ActionStamped * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->actions.data[i]);
      PyObject * pyitem = amsagv_msgs__msg__action_stamped__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "actions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
