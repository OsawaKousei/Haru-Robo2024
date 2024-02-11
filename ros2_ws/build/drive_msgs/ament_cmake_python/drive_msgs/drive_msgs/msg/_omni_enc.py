# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_msgs:msg/OmniEnc.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OmniEnc(type):
    """Metaclass of message 'OmniEnc'."""

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
                'drive_msgs.msg.OmniEnc')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__omni_enc
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__omni_enc
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__omni_enc
            cls._TYPE_SUPPORT = module.type_support_msg__msg__omni_enc
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__omni_enc

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OmniEnc(metaclass=Metaclass_OmniEnc):
    """Message class 'OmniEnc'."""

    __slots__ = [
        '_name',
        '_encfontright',
        '_encfrontleft',
        '_encbackright',
        '_encbackleft',
        '_enclx',
        '_encly',
        '_encadditional',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'encfontright': 'double',
        'encfrontleft': 'double',
        'encbackright': 'double',
        'encbackleft': 'double',
        'enclx': 'double',
        'encly': 'double',
        'encadditional': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.encfontright = kwargs.get('encfontright', float())
        self.encfrontleft = kwargs.get('encfrontleft', float())
        self.encbackright = kwargs.get('encbackright', float())
        self.encbackleft = kwargs.get('encbackleft', float())
        self.enclx = kwargs.get('enclx', float())
        self.encly = kwargs.get('encly', float())
        self.encadditional = kwargs.get('encadditional', float())

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
        if self.encfontright != other.encfontright:
            return False
        if self.encfrontleft != other.encfrontleft:
            return False
        if self.encbackright != other.encbackright:
            return False
        if self.encbackleft != other.encbackleft:
            return False
        if self.enclx != other.enclx:
            return False
        if self.encly != other.encly:
            return False
        if self.encadditional != other.encadditional:
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
    def encfontright(self):
        """Message field 'encfontright'."""
        return self._encfontright

    @encfontright.setter
    def encfontright(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'encfontright' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'encfontright' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._encfontright = value

    @builtins.property
    def encfrontleft(self):
        """Message field 'encfrontleft'."""
        return self._encfrontleft

    @encfrontleft.setter
    def encfrontleft(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'encfrontleft' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'encfrontleft' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._encfrontleft = value

    @builtins.property
    def encbackright(self):
        """Message field 'encbackright'."""
        return self._encbackright

    @encbackright.setter
    def encbackright(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'encbackright' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'encbackright' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._encbackright = value

    @builtins.property
    def encbackleft(self):
        """Message field 'encbackleft'."""
        return self._encbackleft

    @encbackleft.setter
    def encbackleft(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'encbackleft' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'encbackleft' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._encbackleft = value

    @builtins.property
    def enclx(self):
        """Message field 'enclx'."""
        return self._enclx

    @enclx.setter
    def enclx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'enclx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'enclx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._enclx = value

    @builtins.property
    def encly(self):
        """Message field 'encly'."""
        return self._encly

    @encly.setter
    def encly(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'encly' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'encly' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._encly = value

    @builtins.property
    def encadditional(self):
        """Message field 'encadditional'."""
        return self._encadditional

    @encadditional.setter
    def encadditional(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'encadditional' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'encadditional' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._encadditional = value
