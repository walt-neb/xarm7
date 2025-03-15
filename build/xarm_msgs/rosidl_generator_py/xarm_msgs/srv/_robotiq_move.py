# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xarm_msgs:srv/RobotiqMove.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotiqMove_Request(type):
    """Metaclass of message 'RobotiqMove_Request'."""

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
            module = import_type_support('xarm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarm_msgs.srv.RobotiqMove_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robotiq_move__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robotiq_move__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robotiq_move__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robotiq_move__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robotiq_move__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SPEED__DEFAULT': 255,
            'FORCE__DEFAULT': 255,
            'WAIT__DEFAULT': True,
            'TIMEOUT__DEFAULT': 5.0,
        }

    @property
    def SPEED__DEFAULT(cls):
        """Return default value for message field 'speed'."""
        return 255

    @property
    def FORCE__DEFAULT(cls):
        """Return default value for message field 'force'."""
        return 255

    @property
    def WAIT__DEFAULT(cls):
        """Return default value for message field 'wait'."""
        return True

    @property
    def TIMEOUT__DEFAULT(cls):
        """Return default value for message field 'timeout'."""
        return 5.0


class RobotiqMove_Request(metaclass=Metaclass_RobotiqMove_Request):
    """Message class 'RobotiqMove_Request'."""

    __slots__ = [
        '_pos',
        '_speed',
        '_force',
        '_wait',
        '_timeout',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'pos': 'uint8',
        'speed': 'uint8',
        'force': 'uint8',
        'wait': 'boolean',
        'timeout': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pos = kwargs.get('pos', int())
        self.speed = kwargs.get(
            'speed', RobotiqMove_Request.SPEED__DEFAULT)
        self.force = kwargs.get(
            'force', RobotiqMove_Request.FORCE__DEFAULT)
        self.wait = kwargs.get(
            'wait', RobotiqMove_Request.WAIT__DEFAULT)
        self.timeout = kwargs.get(
            'timeout', RobotiqMove_Request.TIMEOUT__DEFAULT)

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.pos != other.pos:
            return False
        if self.speed != other.speed:
            return False
        if self.force != other.force:
            return False
        if self.wait != other.wait:
            return False
        if self.timeout != other.timeout:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pos' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pos' field must be an unsigned integer in [0, 255]"
        self._pos = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speed' field must be an unsigned integer in [0, 255]"
        self._speed = value

    @builtins.property
    def force(self):
        """Message field 'force'."""
        return self._force

    @force.setter
    def force(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'force' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'force' field must be an unsigned integer in [0, 255]"
        self._force = value

    @builtins.property
    def wait(self):
        """Message field 'wait'."""
        return self._wait

    @wait.setter
    def wait(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'wait' field must be of type 'bool'"
        self._wait = value

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'timeout' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'timeout' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._timeout = value


# Import statements for member types

# Member 'ret_data'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotiqMove_Response(type):
    """Metaclass of message 'RobotiqMove_Response'."""

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
            module = import_type_support('xarm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarm_msgs.srv.RobotiqMove_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robotiq_move__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robotiq_move__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robotiq_move__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robotiq_move__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robotiq_move__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotiqMove_Response(metaclass=Metaclass_RobotiqMove_Response):
    """Message class 'RobotiqMove_Response'."""

    __slots__ = [
        '_ret',
        '_message',
        '_ret_data',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'ret': 'int16',
        'message': 'string',
        'ret_data': 'sequence<uint8>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ret = kwargs.get('ret', int())
        self.message = kwargs.get('message', str())
        self.ret_data = array.array('B', kwargs.get('ret_data', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ret != other.ret:
            return False
        if self.message != other.message:
            return False
        if self.ret_data != other.ret_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ret(self):
        """Message field 'ret'."""
        return self._ret

    @ret.setter
    def ret(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ret' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'ret' field must be an integer in [-32768, 32767]"
        self._ret = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def ret_data(self):
        """Message field 'ret_data'."""
        return self._ret_data

    @ret_data.setter
    def ret_data(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'ret_data' array.array() must have the type code of 'B'"
                self._ret_data = value
                return
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'ret_data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._ret_data = array.array('B', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotiqMove_Event(type):
    """Metaclass of message 'RobotiqMove_Event'."""

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
            module = import_type_support('xarm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarm_msgs.srv.RobotiqMove_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robotiq_move__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robotiq_move__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robotiq_move__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robotiq_move__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robotiq_move__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotiqMove_Event(metaclass=Metaclass_RobotiqMove_Event):
    """Message class 'RobotiqMove_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<xarm_msgs/RobotiqMove_Request, 1>',
        'response': 'sequence<xarm_msgs/RobotiqMove_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['xarm_msgs', 'srv'], 'RobotiqMove_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['xarm_msgs', 'srv'], 'RobotiqMove_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from xarm_msgs.srv import RobotiqMove_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, RobotiqMove_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'RobotiqMove_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from xarm_msgs.srv import RobotiqMove_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, RobotiqMove_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'RobotiqMove_Response'"
        self._response = value


class Metaclass_RobotiqMove(type):
    """Metaclass of service 'RobotiqMove'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xarm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xarm_msgs.srv.RobotiqMove')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robotiq_move

            from xarm_msgs.srv import _robotiq_move
            if _robotiq_move.Metaclass_RobotiqMove_Request._TYPE_SUPPORT is None:
                _robotiq_move.Metaclass_RobotiqMove_Request.__import_type_support__()
            if _robotiq_move.Metaclass_RobotiqMove_Response._TYPE_SUPPORT is None:
                _robotiq_move.Metaclass_RobotiqMove_Response.__import_type_support__()
            if _robotiq_move.Metaclass_RobotiqMove_Event._TYPE_SUPPORT is None:
                _robotiq_move.Metaclass_RobotiqMove_Event.__import_type_support__()


class RobotiqMove(metaclass=Metaclass_RobotiqMove):
    from xarm_msgs.srv._robotiq_move import RobotiqMove_Request as Request
    from xarm_msgs.srv._robotiq_move import RobotiqMove_Response as Response
    from xarm_msgs.srv._robotiq_move import RobotiqMove_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
