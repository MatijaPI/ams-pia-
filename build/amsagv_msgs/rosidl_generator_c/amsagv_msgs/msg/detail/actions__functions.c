// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amsagv_msgs:msg/Actions.idl
// generated code does not contain a copyright notice
#include "amsagv_msgs/msg/detail/actions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `actions`
#include "amsagv_msgs/msg/detail/action__functions.h"

bool
amsagv_msgs__msg__Actions__init(amsagv_msgs__msg__Actions * msg)
{
  if (!msg) {
    return false;
  }
  // actions
  if (!amsagv_msgs__msg__Action__Sequence__init(&msg->actions, 0)) {
    amsagv_msgs__msg__Actions__fini(msg);
    return false;
  }
  return true;
}

void
amsagv_msgs__msg__Actions__fini(amsagv_msgs__msg__Actions * msg)
{
  if (!msg) {
    return;
  }
  // actions
  amsagv_msgs__msg__Action__Sequence__fini(&msg->actions);
}

bool
amsagv_msgs__msg__Actions__are_equal(const amsagv_msgs__msg__Actions * lhs, const amsagv_msgs__msg__Actions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // actions
  if (!amsagv_msgs__msg__Action__Sequence__are_equal(
      &(lhs->actions), &(rhs->actions)))
  {
    return false;
  }
  return true;
}

bool
amsagv_msgs__msg__Actions__copy(
  const amsagv_msgs__msg__Actions * input,
  amsagv_msgs__msg__Actions * output)
{
  if (!input || !output) {
    return false;
  }
  // actions
  if (!amsagv_msgs__msg__Action__Sequence__copy(
      &(input->actions), &(output->actions)))
  {
    return false;
  }
  return true;
}

amsagv_msgs__msg__Actions *
amsagv_msgs__msg__Actions__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__Actions * msg = (amsagv_msgs__msg__Actions *)allocator.allocate(sizeof(amsagv_msgs__msg__Actions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amsagv_msgs__msg__Actions));
  bool success = amsagv_msgs__msg__Actions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amsagv_msgs__msg__Actions__destroy(amsagv_msgs__msg__Actions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amsagv_msgs__msg__Actions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amsagv_msgs__msg__Actions__Sequence__init(amsagv_msgs__msg__Actions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__Actions * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amsagv_msgs__msg__Actions)) {
      return false;
    }
    data = (amsagv_msgs__msg__Actions *)allocator.zero_allocate(size, sizeof(amsagv_msgs__msg__Actions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amsagv_msgs__msg__Actions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amsagv_msgs__msg__Actions__fini(&data[i - 1]);
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
amsagv_msgs__msg__Actions__Sequence__fini(amsagv_msgs__msg__Actions__Sequence * array)
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
      amsagv_msgs__msg__Actions__fini(&array->data[i]);
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

amsagv_msgs__msg__Actions__Sequence *
amsagv_msgs__msg__Actions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__Actions__Sequence * array = (amsagv_msgs__msg__Actions__Sequence *)allocator.allocate(sizeof(amsagv_msgs__msg__Actions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amsagv_msgs__msg__Actions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amsagv_msgs__msg__Actions__Sequence__destroy(amsagv_msgs__msg__Actions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amsagv_msgs__msg__Actions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amsagv_msgs__msg__Actions__Sequence__are_equal(const amsagv_msgs__msg__Actions__Sequence * lhs, const amsagv_msgs__msg__Actions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amsagv_msgs__msg__Actions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amsagv_msgs__msg__Actions__Sequence__copy(
  const amsagv_msgs__msg__Actions__Sequence * input,
  amsagv_msgs__msg__Actions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amsagv_msgs__msg__Actions)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amsagv_msgs__msg__Actions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amsagv_msgs__msg__Actions * data =
      (amsagv_msgs__msg__Actions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amsagv_msgs__msg__Actions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amsagv_msgs__msg__Actions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amsagv_msgs__msg__Actions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
