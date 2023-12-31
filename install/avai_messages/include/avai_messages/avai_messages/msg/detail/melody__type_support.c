// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from avai_messages:msg/Melody.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "avai_messages/msg/detail/melody__rosidl_typesupport_introspection_c.h"
#include "avai_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "avai_messages/msg/detail/melody__functions.h"
#include "avai_messages/msg/detail/melody__struct.h"


// Include directives for member types
// Member `pitch`
// Member `duration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  avai_messages__msg__Melody__init(message_memory);
}

void avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_fini_function(void * message_memory)
{
  avai_messages__msg__Melody__fini(message_memory);
}

size_t avai_messages__msg__Melody__rosidl_typesupport_introspection_c__size_function__Melody__pitch(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_const_function__Melody__pitch(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_function__Melody__pitch(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void avai_messages__msg__Melody__rosidl_typesupport_introspection_c__fetch_function__Melody__pitch(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_const_function__Melody__pitch(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void avai_messages__msg__Melody__rosidl_typesupport_introspection_c__assign_function__Melody__pitch(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_function__Melody__pitch(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool avai_messages__msg__Melody__rosidl_typesupport_introspection_c__resize_function__Melody__pitch(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t avai_messages__msg__Melody__rosidl_typesupport_introspection_c__size_function__Melody__duration(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_const_function__Melody__duration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_function__Melody__duration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void avai_messages__msg__Melody__rosidl_typesupport_introspection_c__fetch_function__Melody__duration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_const_function__Melody__duration(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void avai_messages__msg__Melody__rosidl_typesupport_introspection_c__assign_function__Melody__duration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_function__Melody__duration(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool avai_messages__msg__Melody__rosidl_typesupport_introspection_c__resize_function__Melody__duration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_message_member_array[3] = {
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(avai_messages__msg__Melody, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(avai_messages__msg__Melody, pitch),  // bytes offset in struct
    NULL,  // default value
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__size_function__Melody__pitch,  // size() function pointer
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_const_function__Melody__pitch,  // get_const(index) function pointer
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_function__Melody__pitch,  // get(index) function pointer
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__fetch_function__Melody__pitch,  // fetch(index, &value) function pointer
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__assign_function__Melody__pitch,  // assign(index, value) function pointer
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__resize_function__Melody__pitch  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(avai_messages__msg__Melody, duration),  // bytes offset in struct
    NULL,  // default value
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__size_function__Melody__duration,  // size() function pointer
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_const_function__Melody__duration,  // get_const(index) function pointer
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__get_function__Melody__duration,  // get(index) function pointer
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__fetch_function__Melody__duration,  // fetch(index, &value) function pointer
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__assign_function__Melody__duration,  // assign(index, value) function pointer
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__resize_function__Melody__duration  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_message_members = {
  "avai_messages__msg",  // message namespace
  "Melody",  // message name
  3,  // number of fields
  sizeof(avai_messages__msg__Melody),
  avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_message_member_array,  // message members
  avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_init_function,  // function to initialize message memory (memory has to be allocated)
  avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_message_type_support_handle = {
  0,
  &avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_avai_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, avai_messages, msg, Melody)() {
  if (!avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_message_type_support_handle.typesupport_identifier) {
    avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &avai_messages__msg__Melody__rosidl_typesupport_introspection_c__Melody_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
