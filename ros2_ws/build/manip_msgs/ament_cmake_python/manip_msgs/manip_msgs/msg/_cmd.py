# generated from rosidl_generator_py/resource/_idl.py.em
# with input from manip_msgs:msg/Cmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

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
            module = import_type_support('manip_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'manip_msgs.msg.Cmd')
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
        '_top_base_arm',
        '_top_base_hand',
        '_bottom_base_arm',
        '_bottom_base_hand',
        '_work_arm_deploy',
        '_work_arm',
        '_work_hand',
        '_num',
    ]

    _fields_and_field_types = {
        'top_base_arm': 'int64',
        'top_base_hand': 'int64',
        'bottom_base_arm': 'int64',
        'bottom_base_hand': 'int64',
        'work_arm_deploy': 'int64',
        'work_arm': 'int64',
        'work_hand': 'int64',
        'num': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.top_base_arm = kwargs.get('top_base_arm', int())
        self.top_base_hand = kwargs.get('top_base_hand', int())
        self.bottom_base_arm = kwargs.get('bottom_base_arm', int())
        self.bottom_base_hand = kwargs.get('bottom_base_hand', int())
        self.work_arm_deploy = kwargs.get('work_arm_deploy', int())
        self.work_arm = kwargs.get('work_arm', int())
        self.work_hand = kwargs.get('work_hand', int())
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
        if self.top_base_arm != other.top_base_arm:
            return False
        if self.top_base_hand != other.top_base_hand:
            return False
        if self.bottom_base_arm != other.bottom_base_arm:
            return False
        if self.bottom_base_hand != other.bottom_base_hand:
            return False
        if self.work_arm_deploy != other.work_arm_deploy:
            return False
        if self.work_arm != other.work_arm:
            return False
        if self.work_hand != other.work_hand:
            return False
        if self.num != other.num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def top_base_arm(self):
        """Message field 'top_base_arm'."""
        return self._top_base_arm

    @top_base_arm.setter
    def top_base_arm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'top_base_arm' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'top_base_arm' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._top_base_arm = value

    @builtins.property
    def top_base_hand(self):
        """Message field 'top_base_hand'."""
        return self._top_base_hand

    @top_base_hand.setter
    def top_base_hand(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'top_base_hand' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'top_base_hand' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._top_base_hand = value

    @builtins.property
    def bottom_base_arm(self):
        """Message field 'bottom_base_arm'."""
        return self._bottom_base_arm

    @bottom_base_arm.setter
    def bottom_base_arm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bottom_base_arm' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'bottom_base_arm' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._bottom_base_arm = value

    @builtins.property
    def bottom_base_hand(self):
        """Message field 'bottom_base_hand'."""
        return self._bottom_base_hand

    @bottom_base_hand.setter
    def bottom_base_hand(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bottom_base_hand' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'bottom_base_hand' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._bottom_base_hand = value

    @builtins.property
    def work_arm_deploy(self):
        """Message field 'work_arm_deploy'."""
        return self._work_arm_deploy

    @work_arm_deploy.setter
    def work_arm_deploy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'work_arm_deploy' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'work_arm_deploy' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._work_arm_deploy = value

    @builtins.property
    def work_arm(self):
        """Message field 'work_arm'."""
        return self._work_arm

    @work_arm.setter
    def work_arm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'work_arm' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'work_arm' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._work_arm = value

    @builtins.property
    def work_hand(self):
        """Message field 'work_hand'."""
        return self._work_hand

    @work_hand.setter
    def work_hand(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'work_hand' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'work_hand' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._work_hand = value

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
