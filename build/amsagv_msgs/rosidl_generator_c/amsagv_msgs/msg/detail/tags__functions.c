// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amsagv_msgs:msg/Tags.idl
// generated code does not contain a copyright notice
#include "amsagv_msgs/msg/detail/tags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tags`
#include "amsagv_msgs/msg/detail/tag__functions.h"

bool
amsagv_msgs__msg__Tags__init(amsagv_msgs__msg__Tags * msg)
{
  if (!msg) {
    return false;
  }
  // tags
  if (!amsagv_msgs__msg__Tag__Sequence__init(&msg->tags, 0)) {
    amsagv_msgs__msg__Tags__fini(msg);
    return false;
  }
  return true;
}

void
amsagv_msgs__msg__Tags__fini(amsagv_msgs__msg__Tags * msg)
{
  if (!msg) {
    return;
  }
  // tags
  amsagv_msgs__msg__Tag__Sequence__fini(&msg->tags);
}

bool
amsagv_msgs__msg__Tags__are_equal(const amsagv_msgs__msg__Tags * lhs, const amsagv_msgs__msg__Tags * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tags
  if (!amsagv_msgs__msg__Tag__Sequence__are_equal(
      &(lhs->tags), &(rhs->tags)))
  {
    return false;
  }
  return true;
}

bool
amsagv_msgs__msg__Tags__copy(
  const amsagv_msgs__msg__Tags * input,
  amsagv_msgs__msg__Tags * output)
{
  if (!input || !output) {
    return false;
  }
  // tags
  if (!amsagv_msgs__msg__Tag__Sequence__copy(
      &(input->tags), &(output->tags)))
  {
    return false;
  }
  return true;
}

amsagv_msgs__msg__Tags *
amsagv_msgs__msg__Tags__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__Tags * msg = (amsagv_msgs__msg__Tags *)allocator.allocate(sizeof(amsagv_msgs__msg__Tags), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amsagv_msgs__msg__Tags));
  bool success = amsagv_msgs__msg__Tags__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amsagv_msgs__msg__Tags__destroy(amsagv_msgs__msg__Tags * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amsagv_msgs__msg__Tags__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amsagv_msgs__msg__Tags__Sequence__init(amsagv_msgs__msg__Tags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__Tags * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(amsagv_msgs__msg__Tags)) {
      return false;
    }
    data = (amsagv_msgs__msg__Tags *)allocator.zero_allocate(size, sizeof(amsagv_msgs__msg__Tags), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amsagv_msgs__msg__Tags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amsagv_msgs__msg__Tags__fini(&data[i - 1]);
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
amsagv_msgs__msg__Tags__Sequence__fini(amsagv_msgs__msg__Tags__Sequence * array)
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
      amsagv_msgs__msg__Tags__fini(&array->data[i]);
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

amsagv_msgs__msg__Tags__Sequence *
amsagv_msgs__msg__Tags__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amsagv_msgs__msg__Tags__Sequence * array = (amsagv_msgs__msg__Tags__Sequence *)allocator.allocate(sizeof(amsagv_msgs__msg__Tags__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amsagv_msgs__msg__Tags__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amsagv_msgs__msg__Tags__Sequence__destroy(amsagv_msgs__msg__Tags__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amsagv_msgs__msg__Tags__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amsagv_msgs__msg__Tags__Sequence__are_equal(const amsagv_msgs__msg__Tags__Sequence * lhs, const amsagv_msgs__msg__Tags__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amsagv_msgs__msg__Tags__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amsagv_msgs__msg__Tags__Sequence__copy(
  const amsagv_msgs__msg__Tags__Sequence * input,
  amsagv_msgs__msg__Tags__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(amsagv_msgs__msg__Tags)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(amsagv_msgs__msg__Tags);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amsagv_msgs__msg__Tags * data =
      (amsagv_msgs__msg__Tags *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amsagv_msgs__msg__Tags__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amsagv_msgs__msg__Tags__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amsagv_msgs__msg__Tags__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
