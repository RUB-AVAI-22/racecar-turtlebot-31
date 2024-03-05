// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from avai_messages:msg/Cluster.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "avai_messages/msg/detail/cluster__rosidl_typesupport_introspection_c.h"
#include "avai_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "avai_messages/msg/detail/cluster__functions.h"
#include "avai_messages/msg/detail/cluster__struct.h"


// Include directives for member types
// Member `x_positions`
// Member `y_positions`
// Member `angles`
// Member `ranges`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  avai_messages__msg__Cluster__init(message_memory);
}

void avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_fini_function(void * message_memory)
{
  avai_messages__msg__Cluster__fini(message_memory);
}

size_t avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__size_function__Cluster__x_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__x_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__x_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__fetch_function__Cluster__x_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__x_positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__assign_function__Cluster__x_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__x_positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__resize_function__Cluster__x_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__size_function__Cluster__y_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__y_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__y_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__fetch_function__Cluster__y_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__y_positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__assign_function__Cluster__y_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__y_positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__resize_function__Cluster__y_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__size_function__Cluster__angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__fetch_function__Cluster__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__angles(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__assign_function__Cluster__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__angles(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__resize_function__Cluster__angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__size_function__Cluster__ranges(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__ranges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__ranges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__fetch_function__Cluster__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__ranges(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__assign_function__Cluster__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__ranges(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__resize_function__Cluster__ranges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_message_member_array[4] = {
  {
    "x_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(avai_messages__msg__Cluster, x_positions),  // bytes offset in struct
    NULL,  // default value
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__size_function__Cluster__x_positions,  // size() function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__x_positions,  // get_const(index) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__x_positions,  // get(index) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__fetch_function__Cluster__x_positions,  // fetch(index, &value) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__assign_function__Cluster__x_positions,  // assign(index, value) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__resize_function__Cluster__x_positions  // resize(index) function pointer
  },
  {
    "y_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(avai_messages__msg__Cluster, y_positions),  // bytes offset in struct
    NULL,  // default value
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__size_function__Cluster__y_positions,  // size() function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__y_positions,  // get_const(index) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__y_positions,  // get(index) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__fetch_function__Cluster__y_positions,  // fetch(index, &value) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__assign_function__Cluster__y_positions,  // assign(index, value) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__resize_function__Cluster__y_positions  // resize(index) function pointer
  },
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(avai_messages__msg__Cluster, angles),  // bytes offset in struct
    NULL,  // default value
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__size_function__Cluster__angles,  // size() function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__angles,  // get_const(index) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__angles,  // get(index) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__fetch_function__Cluster__angles,  // fetch(index, &value) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__assign_function__Cluster__angles,  // assign(index, value) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__resize_function__Cluster__angles  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(avai_messages__msg__Cluster, ranges),  // bytes offset in struct
    NULL,  // default value
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__size_function__Cluster__ranges,  // size() function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_const_function__Cluster__ranges,  // get_const(index) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__get_function__Cluster__ranges,  // get(index) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__fetch_function__Cluster__ranges,  // fetch(index, &value) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__assign_function__Cluster__ranges,  // assign(index, value) function pointer
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__resize_function__Cluster__ranges  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_message_members = {
  "avai_messages__msg",  // message namespace
  "Cluster",  // message name
  4,  // number of fields
  sizeof(avai_messages__msg__Cluster),
  avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_message_member_array,  // message members
  avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_init_function,  // function to initialize message memory (memory has to be allocated)
  avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_message_type_support_handle = {
  0,
  &avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_avai_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, avai_messages, msg, Cluster)() {
  if (!avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_message_type_support_handle.typesupport_identifier) {
    avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &avai_messages__msg__Cluster__rosidl_typesupport_introspection_c__Cluster_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
