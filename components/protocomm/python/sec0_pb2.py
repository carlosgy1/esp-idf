# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: sec0.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import constants_pb2 as constants__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\nsec0.proto\x1a\x0f\x63onstants.proto\"\x0e\n\x0cS0SessionCmd\"(\n\rS0SessionResp\x12\x17\n\x06status\x18\x01 \x01(\x0e\x32\x07.Status\"n\n\x0bSec0Payload\x12\x19\n\x03msg\x18\x01 \x01(\x0e\x32\x0c.Sec0MsgType\x12\x1b\n\x02sc\x18\x14 \x01(\x0b\x32\r.S0SessionCmdH\x00\x12\x1c\n\x02sr\x18\x15 \x01(\x0b\x32\x0e.S0SessionRespH\x00\x42\t\n\x07payload*>\n\x0bSec0MsgType\x12\x16\n\x12S0_Session_Command\x10\x00\x12\x17\n\x13S0_Session_Response\x10\x01\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'sec0_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _SEC0MSGTYPE._serialized_start=201
  _SEC0MSGTYPE._serialized_end=263
  _S0SESSIONCMD._serialized_start=31
  _S0SESSIONCMD._serialized_end=45
  _S0SESSIONRESP._serialized_start=47
  _S0SESSIONRESP._serialized_end=87
  _SEC0PAYLOAD._serialized_start=89
  _SEC0PAYLOAD._serialized_end=199
# @@protoc_insertion_point(module_scope)
