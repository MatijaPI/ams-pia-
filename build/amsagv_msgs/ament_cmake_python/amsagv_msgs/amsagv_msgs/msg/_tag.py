# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amsagv_msgs:msg/Tag.idl
# generated code does not contain a copyright notice

from __future__ import annotations

import collections.abc
import os
import typing

import rosidl_pycommon.interface_base_classes

if typing.TYPE_CHECKING:
    from ctypes import Structure

    class PyCapsule(Structure):
        pass  # don't need to define the full structure


# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
ros_python_check_fields = os.getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tag(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'Tag'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class TagConstants(typing.TypedDict):
        pass

    __constants: TagConstants = {
    }

    @classmethod
    def __import_type_support__(cls) -> None:
        try:
            from rosidl_generator_py import import_type_support  # type: ignore[attr-defined]
            module = import_type_support('amsagv_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'amsagv_msgs.msg.Tag')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tag
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tag
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tag
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tag
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tag

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tag(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_Tag):
    """Message class 'Tag'."""

    __slots__ = [
        '_id',
        '_a',
        '_b',
        '_d',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'id': 'int64',
        'a': 'int64',
        'b': 'int64',
        'd': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, *,
                 id: typing.Optional[int] = None,  # noqa: E501, A002
                 a: typing.Optional[int] = None,  # noqa: E501
                 b: typing.Optional[int] = None,  # noqa: E501
                 d: typing.Optional[float] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        self.id = id if id is not None else int()
        self.a = a if a is not None else int()
        self.b = b if b is not None else int()
        self.d = d if d is not None else float()

    def __repr__(self) -> str:
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args: list[str] = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    from rosidl_buffer import Buffer as _RosidlBuffer
                    if not isinstance(field, _RosidlBuffer):
                        if self._check_fields:
                            assert fieldstr.startswith('array(')
                        prefix = "array('X', "
                        suffix = ')'
                        fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other: object) -> bool:
        if not isinstance(other, Tag):
            return False
        if self.id != other.id:
            return False
        if self.a != other.a:
            return False
        if self.b != other.b:
            return False
        if self.d != other.d:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self) -> int:  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value: int) -> None:  # noqa: A003

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'id' field must be of type 'int'"
                assert value >= -9223372036854775808 and value < 9223372036854775808, \
                    "The 'id' field must be an integer in [-9223372036854775808, 9223372036854775807]"

        self._id = value

    @builtins.property
    def a(self) -> int:
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'a' field must be of type 'int'"
                assert value >= -9223372036854775808 and value < 9223372036854775808, \
                    "The 'a' field must be an integer in [-9223372036854775808, 9223372036854775807]"

        self._a = value

    @builtins.property
    def b(self) -> int:
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value: int) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, int), \
                    "The 'b' field must be of type 'int'"
                assert value >= -9223372036854775808 and value < 9223372036854775808, \
                    "The 'b' field must be an integer in [-9223372036854775808, 9223372036854775807]"

        self._b = value

    @builtins.property
    def d(self) -> float:
        """Message field 'd'."""
        return self._d

    @d.setter
    def d(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'd' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._d = value
