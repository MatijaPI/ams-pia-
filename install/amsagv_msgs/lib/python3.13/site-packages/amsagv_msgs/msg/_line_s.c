// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from amsagv_msgs:msg/Line.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#include <stdint.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "amsagv_msgs/msg/detail/line__struct.h"
#include "amsagv_msgs/msg/detail/line__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool amsagv_msgs__msg__line__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("amsagv_msgs.msg._line", (char *)PyUnicode_1BYTE_DATA(module_attr), 21) == 0);
    assert(strncmp("Line", (char *)PyUnicode_1BYTE_DATA(name_attr), 4) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  amsagv_msgs__msg__Line * ros_message = _ros_message;
  {  // values
    PyObject * field = PyObject_GetAttrString(_pymsg, "values");
    if (!field) {
      return false;
    }
    // Check if the field is an rosidl_buffer.Buffer with a non-CPU backend
    {
      PyObject * backend_attr = PyObject_GetAttrString(field, "backend_type");
      if (backend_attr != NULL) {
        const char * backend_str = PyUnicode_AsUTF8(backend_attr);
        if (backend_str != NULL && strcmp(backend_str, "cpu") != 0) {
          // Non-CPU backend: set is_rosidl_buffer flag instead of copying data
          PyObject * rosidl_buffer_mod = PyImport_ImportModule("rosidl_buffer");
          if (rosidl_buffer_mod != NULL) {
            PyObject * get_ptr_func = PyObject_GetAttrString(rosidl_buffer_mod, "_get_buffer_ptr");
            if (get_ptr_func != NULL) {
              PyObject * ptr_result = PyObject_CallFunctionObjArgs(get_ptr_func, field, NULL);
              if (ptr_result != NULL) {
                uintptr_t buffer_ptr = (uintptr_t)PyLong_AsUnsignedLongLong(ptr_result);
                ros_message->values.data = (uint8_t *)buffer_ptr;
                ros_message->values.size = 0;
                ros_message->values.capacity = 0;
                ros_message->values.is_rosidl_buffer = true;
                ros_message->values.owns_rosidl_buffer = false;
                Py_DECREF(ptr_result);
              }
              Py_DECREF(get_ptr_func);
            }
            Py_DECREF(rosidl_buffer_mod);
          }
          Py_DECREF(backend_attr);
          Py_DECREF(field);
          // Sentinel is set, skip normal conversion for this field
          goto values__done;
        }
        Py_DECREF(backend_attr);
      } else {
        PyErr_Clear();
      }
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->values), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->values.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'values'");
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
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->values), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->values.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
values__done:
  ;
  {  // left
    PyObject * field = PyObject_GetAttrString(_pymsg, "left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right
    PyObject * field = PyObject_GetAttrString(_pymsg, "right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amsagv_msgs__msg__line__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Line */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amsagv_msgs.msg._line");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Line");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amsagv_msgs__msg__Line * ros_message = (amsagv_msgs__msg__Line *)raw_ros_message;
  {  // values
    PyObject * field = NULL;
    if (ros_message->values.is_rosidl_buffer) {
      // The RMW deserialized into a vendor-backed buffer — wrap it in a Python Buffer.
      // All C++ operations go through the rosidl_buffer._rosidl_buffer_py module since this
      // file is compiled as C.
      PyObject * rosidl_buffer_internal = PyImport_ImportModule("rosidl_buffer");
      if (rosidl_buffer_internal != NULL) {
        PyObject * take_func = PyObject_GetAttrString(rosidl_buffer_internal, "_take_buffer_from_ptr");
        if (take_func != NULL) {
          PyObject * ptr_arg = PyLong_FromUnsignedLongLong(
            (uint64_t)(uintptr_t)ros_message->values.data);
          field = PyObject_CallFunctionObjArgs(take_func, ptr_arg, NULL);
          Py_XDECREF(ptr_arg);
          Py_DECREF(take_func);
          if (field != NULL) {
            // Ownership transferred to Python — clear the C sequence immediately
            ros_message->values.data = NULL;
            ros_message->values.size = 0;
            ros_message->values.capacity = 0;
            ros_message->values.is_rosidl_buffer = false;
            ros_message->values.owns_rosidl_buffer = false;
          }
        }
        Py_DECREF(rosidl_buffer_internal);
      }
      if (field == NULL) {
        return NULL;
      }
      // Set the Buffer on the Python message object
      if (PyObject_SetAttrString(_pymessage, "values", field) == -1) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(field);
    } else {
      field = PyObject_GetAttrString(_pymessage, "values");
      if (!field) {
        return NULL;
      }
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
      // ensure that itemsize matches the sizeof of the ROS message field
      PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
      assert(itemsize_attr != NULL);
      size_t itemsize = PyLong_AsSize_t(itemsize_attr);
      Py_DECREF(itemsize_attr);
      if (itemsize != sizeof(uint8_t)) {
        PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
        Py_DECREF(field);
        return NULL;
      }
      // clear the array, poor approach to remove potential default values
      Py_ssize_t length = PyObject_Length(field);
      if (-1 == length) {
        Py_DECREF(field);
        return NULL;
      }
      if (length > 0) {
        PyObject * pop = PyObject_GetAttrString(field, "pop");
        assert(pop != NULL);
        for (Py_ssize_t i = 0; i < length; ++i) {
          PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
          if (!ret) {
            Py_DECREF(pop);
            Py_DECREF(field);
            return NULL;
          }
          Py_DECREF(ret);
        }
        Py_DECREF(pop);
      }
      if (ros_message->values.size > 0) {
        // populating the array.array using the frombytes method
        PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
        assert(frombytes != NULL);
        uint8_t * src = &(ros_message->values.data[0]);
        PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->values.size * sizeof(uint8_t));
        assert(data != NULL);
        PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
        Py_DECREF(data);
        Py_DECREF(frombytes);
        if (!ret) {
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(field);
    }  // end else (non-buffer path)
  }
  {  // left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
