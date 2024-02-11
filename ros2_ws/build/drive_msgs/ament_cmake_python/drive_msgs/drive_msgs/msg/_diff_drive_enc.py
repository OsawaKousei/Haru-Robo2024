# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_msgs:msg/DiffDriveEnc.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DiffDriveEnc(type):
    """Metaclass of message 'DiffDriveEnc'."""

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
            module = import_type_support('drive_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drive_msgs.msg.DiffDriveEnc')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__diff_drive_enc
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__diff_drive_enc
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__diff_drive_enc
            cls._TYPE_SUPPORT = module.type_support_msg__msg__diff_drive_enc
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__diff_drive_enc

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DiffDriveEnc(metaclass=Metaclass_DiffDriveEnc):
    """Message class 'DiffDriveEnc'."""

    __slots__ = [
        '_name',
        '_m1enc',
        '_m2enc',
        '_lxenc',
        '_azenc',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'm1enc': 'double',
        'm2enc': 'double',
        'lxenc': 'double',
        'azenc': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.m1enc = kwargs.get('m1enc', float())
        self.m2enc = kwargs.get('m2enc', float())
        self.lxenc = kwargs.get('lxenc', float())
        self.azenc = kwargs.get('azenc', float())

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
        if self.name != other.name:
            return False
        if self.m1enc != other.m1enc:
            return False
        if self.m2enc != other.m2enc:
            return False
        if self.lxenc != other.lxenc:
            return False
        if self.azenc != other.azenc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def m1enc(self):
        """Message field 'm1enc'."""
        return self._m1enc

    @m1enc.setter
    def m1enc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm1enc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm1enc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m1enc = value

    @builtins.property
    def m2enc(self):
        """Message field 'm2enc'."""
        return self._m2enc

    @m2enc.setter
    def m2enc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm2enc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm2enc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m2enc = value

    @builtins.property
    def lxenc(self):
        """Message field 'lxenc'."""
        return self._lxenc

    @lxenc.setter
    def lxenc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lxenc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lxenc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lxenc = value

    @builtins.property
    def azenc(self):
        """Message field 'azenc'."""
        return self._azenc

    @azenc.setter
    def azenc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'azenc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'azenc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._azenc = value
