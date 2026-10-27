// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amsagv_msgs:msg/ActionStamped.idl
// generated code does not contain a copyright notice
#include "amsagv_msgs/msg/detail/action_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `action`
#include "amsagv_msgs/msg/detail/action__functions.h"

bool
amsagv_msgs__msg__ActionStamped__init(amsagv_msgs__msg__ActionStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amsagv_msgs__msg__ActionStamped__fini(msg);
    return false;
  }
  // action
  if (!amsagv_msgs__msg__Action__init(&msg->action)) {
    amsagv_msgs__msg__ActionStamped__fini(msg);
    return false;
  }
  return true;
}

void
amsagv_msgs__msg__ActionStamped__fini(amsagv_msgs__msg__ActionStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // action
  amsagv_msgs__msg__Action__fini(&msg->action);
}

bool
amsagv_msgs__msg__ActionStamped__are_equal(const amsagv_msgs__msg__ActionStamped * lhs, const amsagv_msgs__msg__ActionStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // action
  if (!amsagv_msgs__msg__Action__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  return true;
}

bool
amsagv_msgs__msg__ActionStamped__copy(
  const amsagv_msgs__msg__ActionStamped * input,
  amsagv_msgs__msg__ActionStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // action
  if (!amsagv_msgs__msg__Action__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  return true;
}

amsagv_msgs__msg__ActionStamped *
amsagv_msgs__msg__ActionStamped__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__ActionStamped * msg = (amsagv_msgs__msg__ActionStamped *)allocator.allocate(sizeof(amsagv_msgs__msg__ActionStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amsagv_msgs__msg__ActionStamped));
  bool success = amsagv_msgs__msg__ActionStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amsagv_msgs__msg__ActionStamped__destroy(amsagv_msgs__msg__ActionStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amsagv_msgs__msg__ActionStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amsagv_msgs__msg__ActionStamped__Sequence__init(amsagv_msgs__msg__ActionStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__ActionStamped * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amsagv_msgs__msg__ActionStamped)) {
      return false;
    }
    data = (amsagv_msgs__msg__ActionStamped *)allocator.zero_allocate(size, sizeof(amsagv_msgs__msg__ActionStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amsagv_msgs__msg__ActionStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amsagv_msgs__msg__ActionStamped__fini(&data[i - 1]);
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
amsagv_msgs__msg__ActionStamped__Sequence__fini(amsagv_msgs__msg__ActionStamped__Sequence * array)
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
      amsagv_msgs__msg__ActionStamped__fini(&array->data[i]);
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

amsagv_msgs__msg__ActionStamped__Sequence *
amsagv_msgs__msg__ActionStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__ActionStamped__Sequence * array = (amsagv_msgs__msg__ActionStamped__Sequence *)allocator.allocate(sizeof(amsagv_msgs__msg__ActionStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amsagv_msgs__msg__ActionStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amsagv_msgs__msg__ActionStamped__Sequence__destroy(amsagv_msgs__msg__ActionStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amsagv_msgs__msg__ActionStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amsagv_msgs__msg__ActionStamped__Sequence__are_equal(const amsagv_msgs__msg__ActionStamped__Sequence * lhs, const amsagv_msgs__msg__ActionStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amsagv_msgs__msg__ActionStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amsagv_msgs__msg__ActionStamped__Sequence__copy(
  const amsagv_msgs__msg__ActionStamped__Sequence * input,
  amsagv_msgs__msg__ActionStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amsagv_msgs__msg__ActionStamped)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amsagv_msgs__msg__ActionStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amsagv_msgs__msg__ActionStamped * data =
      (amsagv_msgs__msg__ActionStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amsagv_msgs__msg__ActionStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amsagv_msgs__msg__ActionStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amsagv_msgs__msg__ActionStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
