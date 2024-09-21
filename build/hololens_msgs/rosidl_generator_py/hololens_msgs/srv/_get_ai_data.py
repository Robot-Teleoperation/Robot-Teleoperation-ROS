# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hololens_msgs:srv/GetAIData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetAIData_Request(type):
    """Metaclass of message 'GetAIData_Request'."""

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
            module = import_type_support('hololens_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hololens_msgs.srv.GetAIData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_ai_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_ai_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_ai_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_ai_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_ai_data__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAIData_Request(metaclass=Metaclass_GetAIData_Request):
    """Message class 'GetAIData_Request'."""

    __slots__ = [
        '_point_x',
        '_point_y',
    ]

    _fields_and_field_types = {
        'point_x': 'int64',
        'point_y': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.point_x = kwargs.get('point_x', int())
        self.point_y = kwargs.get('point_y', int())

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
        if self.point_x != other.point_x:
            return False
        if self.point_y != other.point_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def point_x(self):
        """Message field 'point_x'."""
        return self._point_x

    @point_x.setter
    def point_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'point_x' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'point_x' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._point_x = value

    @property
    def point_y(self):
        """Message field 'point_y'."""
        return self._point_y

    @point_y.setter
    def point_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'point_y' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'point_y' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._point_y = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetAIData_Response(type):
    """Metaclass of message 'GetAIData_Response'."""

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
            module = import_type_support('hololens_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hololens_msgs.srv.GetAIData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_ai_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_ai_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_ai_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_ai_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_ai_data__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetAIData_Response(metaclass=Metaclass_GetAIData_Response):
    """Message class 'GetAIData_Response'."""

    __slots__ = [
        '_scene_names',
    ]

    _fields_and_field_types = {
        'scene_names': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.scene_names = kwargs.get('scene_names', [])

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
        if self.scene_names != other.scene_names:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def scene_names(self):
        """Message field 'scene_names'."""
        return self._scene_names

    @scene_names.setter
    def scene_names(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'scene_names' field must be a set or sequence and each value of type 'str'"
        self._scene_names = value


class Metaclass_GetAIData(type):
    """Metaclass of service 'GetAIData'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hololens_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hololens_msgs.srv.GetAIData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_ai_data

            from hololens_msgs.srv import _get_ai_data
            if _get_ai_data.Metaclass_GetAIData_Request._TYPE_SUPPORT is None:
                _get_ai_data.Metaclass_GetAIData_Request.__import_type_support__()
            if _get_ai_data.Metaclass_GetAIData_Response._TYPE_SUPPORT is None:
                _get_ai_data.Metaclass_GetAIData_Response.__import_type_support__()


class GetAIData(metaclass=Metaclass_GetAIData):
    from hololens_msgs.srv._get_ai_data import GetAIData_Request as Request
    from hololens_msgs.srv._get_ai_data import GetAIData_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
