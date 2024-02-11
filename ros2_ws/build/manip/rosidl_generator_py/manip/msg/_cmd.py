# generated from rosidl_generator_py/resource/_idl.py.em
# with input from manip:msg/Cmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'base1'
# Member 'base2'
# Member 'work1'
# Member 'work2'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Cmd(type):
    """Metaclass of message 'Cmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('manip')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'manip.msg.Cmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Cmd(metaclass=Metaclass_Cmd):
    """Message class 'Cmd'."""

    __slots__ = [
        '_base1',
        '_base2',
        '_work1',
        '_work2',
        '_num',
    ]

    _fields_and_field_types = {
        'base1': 'sequence<int64>',
        'base2': 'sequence<int64>',
        'work1': 'sequence<int64>',
        'work2': 'sequence<int64>',
        'num': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.base1 = array.array('q', kwargs.get('base1', []))
        self.base2 = array.array('q', kwargs.get('base2', []))
        self.work1 = array.array('q', kwargs.get('work1', []))
        self.work2 = array.array('q', kwargs.get('work2', []))
        self.num = kwargs.get('num', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.base1 != other.base1:
            return False
        if self.base2 != other.base2:
            return False
        if self.work1 != other.work1:
            return False
        if self.work2 != other.work2:
            return False
        if self.num != other.num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def base1(self):
        """Message field 'base1'."""
        return self._base1

    @base1.setter
    def base1(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'base1' array.array() must have the type code of 'q'"
            self._base1 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'base1' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._base1 = array.array('q', value)

    @builtins.property
    def base2(self):
        """Message field 'base2'."""
        return self._base2

    @base2.setter
    def base2(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'base2' array.array() must have the type code of 'q'"
            self._base2 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'base2' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._base2 = array.array('q', value)

    @builtins.property
    def work1(self):
        """Message field 'work1'."""
        return self._work1

    @work1.setter
    def work1(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'work1' array.array() must have the type code of 'q'"
            self._work1 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'work1' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._work1 = array.array('q', value)

    @builtins.property
    def work2(self):
        """Message field 'work2'."""
        return self._work2

    @work2.setter
    def work2(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'work2' array.array() must have the type code of 'q'"
            self._work2 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'work2' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._work2 = array.array('q', value)

    @builtins.property
    def num(self):
        """Message field 'num'."""
        return self._num

    @num.setter
    def num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num = value
