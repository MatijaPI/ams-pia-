// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amsagv_msgs:msg/LineStamped.idl
// generated code does not contain a copyright notice
#include "amsagv_msgs/msg/detail/line_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `line`
#include "amsagv_msgs/msg/detail/line__functions.h"

bool
amsagv_msgs__msg__LineStamped__init(amsagv_msgs__msg__LineStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    amsagv_msgs__msg__LineStamped__fini(msg);
    return false;
  }
  // line
  if (!amsagv_msgs__msg__Line__init(&msg->line)) {
    amsagv_msgs__msg__LineStamped__fini(msg);
    return false;
  }
  return true;
}

void
amsagv_msgs__msg__LineStamped__fini(amsagv_msgs__msg__LineStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // line
  amsagv_msgs__msg__Line__fini(&msg->line);
}

bool
amsagv_msgs__msg__LineStamped__are_equal(const amsagv_msgs__msg__LineStamped * lhs, const amsagv_msgs__msg__LineStamped * rhs)
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
  // line
  if (!amsagv_msgs__msg__Line__are_equal(
      &(lhs->line), &(rhs->line)))
  {
    return false;
  }
  return true;
}

bool
amsagv_msgs__msg__LineStamped__copy(
  const amsagv_msgs__msg__LineStamped * input,
  amsagv_msgs__msg__LineStamped * output)
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
  // line
  if (!amsagv_msgs__msg__Line__copy(
      &(input->line), &(output->line)))
  {
    return false;
  }
  return true;
}

amsagv_msgs__msg__LineStamped *
amsagv_msgs__msg__LineStamped__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__LineStamped * msg = (amsagv_msgs__msg__LineStamped *)allocator.allocate(sizeof(amsagv_msgs__msg__LineStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amsagv_msgs__msg__LineStamped));
  bool success = amsagv_msgs__msg__LineStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amsagv_msgs__msg__LineStamped__destroy(amsagv_msgs__msg__LineStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amsagv_msgs__msg__LineStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amsagv_msgs__msg__LineStamped__Sequence__init(amsagv_msgs__msg__LineStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__LineStamped * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amsagv_msgs__msg__LineStamped)) {
      return false;
    }
    data = (amsagv_msgs__msg__LineStamped *)allocator.zero_allocate(size, sizeof(amsagv_msgs__msg__LineStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amsagv_msgs__msg__LineStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amsagv_msgs__msg__LineStamped__fini(&data[i - 1]);
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
amsagv_msgs__msg__LineStamped__Sequence__fini(amsagv_msgs__msg__LineStamped__Sequence * array)
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
      amsagv_msgs__msg__LineStamped__fini(&array->data[i]);
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

amsagv_msgs__msg__LineStamped__Sequence *
amsagv_msgs__msg__LineStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__LineStamped__Sequence * array = (amsagv_msgs__msg__LineStamped__Sequence *)allocator.allocate(sizeof(amsagv_msgs__msg__LineStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amsagv_msgs__msg__LineStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amsagv_msgs__msg__LineStamped__Sequence__destroy(amsagv_msgs__msg__LineStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amsagv_msgs__msg__LineStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amsagv_msgs__msg__LineStamped__Sequence__are_equal(const amsagv_msgs__msg__LineStamped__Sequence * lhs, const amsagv_msgs__msg__LineStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amsagv_msgs__msg__LineStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amsagv_msgs__msg__LineStamped__Sequence__copy(
  const amsagv_msgs__msg__LineStamped__Sequence * input,
  amsagv_msgs__msg__LineStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amsagv_msgs__msg__LineStamped)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amsagv_msgs__msg__LineStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amsagv_msgs__msg__LineStamped * data =
      (amsagv_msgs__msg__LineStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amsagv_msgs__msg__LineStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amsagv_msgs__msg__LineStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amsagv_msgs__msg__LineStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
