// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amsagv_msgs:msg/Tag.idl
// generated code does not contain a copyright notice
#include "amsagv_msgs/msg/detail/tag__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
amsagv_msgs__msg__Tag__init(amsagv_msgs__msg__Tag * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // a
  // b
  // d
  return true;
}

void
amsagv_msgs__msg__Tag__fini(amsagv_msgs__msg__Tag * msg)
{
  if (!msg) {
    return;
  }
  // id
  // a
  // b
  // d
}

bool
amsagv_msgs__msg__Tag__are_equal(const amsagv_msgs__msg__Tag * lhs, const amsagv_msgs__msg__Tag * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  return true;
}

bool
amsagv_msgs__msg__Tag__copy(
  const amsagv_msgs__msg__Tag * input,
  amsagv_msgs__msg__Tag * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // d
  output->d = input->d;
  return true;
}

amsagv_msgs__msg__Tag *
amsagv_msgs__msg__Tag__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__Tag * msg = (amsagv_msgs__msg__Tag *)allocator.allocate(sizeof(amsagv_msgs__msg__Tag), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amsagv_msgs__msg__Tag));
  bool success = amsagv_msgs__msg__Tag__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amsagv_msgs__msg__Tag__destroy(amsagv_msgs__msg__Tag * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amsagv_msgs__msg__Tag__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amsagv_msgs__msg__Tag__Sequence__init(amsagv_msgs__msg__Tag__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__Tag * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amsagv_msgs__msg__Tag)) {
      return false;
    }
    data = (amsagv_msgs__msg__Tag *)allocator.zero_allocate(size, sizeof(amsagv_msgs__msg__Tag), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amsagv_msgs__msg__Tag__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amsagv_msgs__msg__Tag__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
amsagv_msgs__msg__Tag__Sequence__fini(amsagv_msgs__msg__Tag__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      amsagv_msgs__msg__Tag__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

amsagv_msgs__msg__Tag__Sequence *
amsagv_msgs__msg__Tag__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__Tag__Sequence * array = (amsagv_msgs__msg__Tag__Sequence *)allocator.allocate(sizeof(amsagv_msgs__msg__Tag__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amsagv_msgs__msg__Tag__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amsagv_msgs__msg__Tag__Sequence__destroy(amsagv_msgs__msg__Tag__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amsagv_msgs__msg__Tag__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amsagv_msgs__msg__Tag__Sequence__are_equal(const amsagv_msgs__msg__Tag__Sequence * lhs, const amsagv_msgs__msg__Tag__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amsagv_msgs__msg__Tag__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amsagv_msgs__msg__Tag__Sequence__copy(
  const amsagv_msgs__msg__Tag__Sequence * input,
  amsagv_msgs__msg__Tag__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amsagv_msgs__msg__Tag)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amsagv_msgs__msg__Tag);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amsagv_msgs__msg__Tag * data =
      (amsagv_msgs__msg__Tag *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amsagv_msgs__msg__Tag__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amsagv_msgs__msg__Tag__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amsagv_msgs__msg__Tag__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
