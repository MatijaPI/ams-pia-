# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amsagv_msgs:msg/Line.idl
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

# Member 'values'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Line(rosidl_pycommon.interface_base_classes.MessageTypeSupportMeta):
    """Metaclass of message 'Line'."""

    _CREATE_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_FROM_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _CONVERT_TO_PY: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _DESTROY_ROS_MESSAGE: typing.ClassVar[typing.Optional[PyCapsule]] = None
    _TYPE_SUPPORT: typing.ClassVar[typing.Optional[PyCapsule]] = None

    class LineConstants(typing.TypedDict):
        pass

    __constants: LineConstants = {
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
                'amsagv_msgs.msg.Line')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__line
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__line
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__line
            cls._TYPE_SUPPORT = module.type_support_msg__msg__line
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__line

    @classmethod
    def __prepare__(metacls, name: str, bases: tuple[type[typing.Any], ...], /, **kwds: typing.Any) -> collections.abc.MutableMapping[str, object]:
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Line(rosidl_pycommon.interface_base_classes.BaseMessage, metaclass=Metaclass_Line):
    """Message class 'Line'."""

    __slots__ = [
        '_values',
        '_left',
        '_right',
        '_heading',
        '_distance',
        '_check_fields',
    ]

    _fields_and_field_types: dict[str, str] = {
        'values': 'sequence<uint8>',
        'left': 'float',
        'right': 'float',
        'heading': 'float',
        'distance': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES: tuple[rosidl_parser.definition.AbstractType, ...] = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, *,
                 values: typing.Optional[collections.abc.Sequence[int]] = None,  # noqa: E501
                 left: typing.Optional[float] = None,  # noqa: E501
                 right: typing.Optional[float] = None,  # noqa: E501
                 heading: typing.Optional[float] = None,  # noqa: E501
                 distance: typing.Optional[float] = None,  # noqa: E501
                 check_fields: typing.Optional[bool] = None) -> None:
        if check_fields is not None:
            self._check_fields = check_fields
        else:
            self._check_fields = ros_python_check_fields == '1'
        self.values = values if values is not None else array.array('B', [])
        self.left = left if left is not None else float()
        self.right = right if right is not None else float()
        self.heading = heading if heading is not None else float()
        self.distance = distance if distance is not None else float()

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
        if not isinstance(other, Line):
            return False
        if self.values != other.values:
            return False
        if self.left != other.left:
            return False
        if self.right != other.right:
            return False
        if self.heading != other.heading:
            return False
        if self.distance != other.distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls) -> dict[str, str]:
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def values(self) -> typing.Annotated[typing.Any, array.array[int]]:   # typing.Annotated can be remove after mypy 1.16+ see mypy#3004
        """Message field 'values'."""
        return self._values

    @values.setter
    def values(self, value: collections.abc.Sequence[int]) -> None:
        if isinstance(value, collections.abc.Set):
            import warnings
            warnings.warn(
                'Using set or subclass of set is deprecated,'
                ' please use a subclass of collections.abc.Sequence like list',
                DeprecationWarning)
        from rosidl_buffer import Buffer as _RosidlBuffer
        if isinstance(value, _RosidlBuffer):
            self._values = value  # type: ignore[assignment]
            return

        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'values' array.array() must have the type code of 'B'"
            else:
                assert \
                    ((isinstance(value, collections.abc.Sequence) or
                     isinstance(value, collections.abc.Set)) and
                     not isinstance(value, str) and
                     not isinstance(value, collections.UserString) and
                     all(isinstance(v, int) for v in value) and
                     all(val >= 0 and val < 256 for val in value)), \
                    "The 'values' field must be sequence and each value of type 'int' and each unsigned integer in [0, 255]"

        if isinstance(value, array.array):
            self._values = value  # type: ignore[assignment]
            return
        # type ignore below fixed in mypy 1.17+ see mypy#19421
        self._values = array.array('B', value)  # type: ignore[assignment]

    @builtins.property
    def left(self) -> float:
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'left' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'left' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._left = value

    @builtins.property
    def right(self) -> float:
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'right' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'right' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._right = value

    @builtins.property
    def heading(self) -> float:
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'heading' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._heading = value

    @builtins.property
    def distance(self) -> float:
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value: float) -> None:

        if self._check_fields:
            if False:  # Done for templating alignment
                pass
            else:
                assert \
                    isinstance(value, float), \
                    "The 'distance' field must be of type 'float'"
                assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                    "The 'distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"

        self._distance = value
