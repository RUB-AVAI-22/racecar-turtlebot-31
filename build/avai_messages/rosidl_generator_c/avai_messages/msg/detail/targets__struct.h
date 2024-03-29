// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from avai_messages:msg/Targets.idl
// generated code does not contain a copyright notice

#ifndef AVAI_MESSAGES__MSG__DETAIL__TARGETS__STRUCT_H_
#define AVAI_MESSAGES__MSG__DETAIL__TARGETS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Targets in the package avai_messages.
typedef struct avai_messages__msg__Targets
{
  double x_position;
  double y_position;
  int8_t round;
} avai_messages__msg__Targets;

// Struct for a sequence of avai_messages__msg__Targets.
typedef struct avai_messages__msg__Targets__Sequence
{
  avai_messages__msg__Targets * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} avai_messages__msg__Targets__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AVAI_MESSAGES__MSG__DETAIL__TARGETS__STRUCT_H_
