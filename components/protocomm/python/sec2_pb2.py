# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: sec2.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import constants_pb2 as constants__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\nsec2.proto\x1a\x0f\x63onstants.proto\"?\n\rS2SessionCmd0\x12\x17\n\x0f\x63lient_username\x18\x01 \x01(\x0c\x12\x15\n\rclient_pubkey\x18\x02 \x01(\x0c\"U\n\x0eS2SessionResp0\x12\x17\n\x06status\x18\x01 \x01(\x0e\x32\x07.Status\x12\x15\n\rdevice_pubkey\x18\x02 \x01(\x0c\x12\x13\n\x0b\x64\x65vice_salt\x18\x03 \x01(\x0c\"%\n\rS2SessionCmd1\x12\x14\n\x0c\x63lient_proof\x18\x01 \x01(\x0c\"U\n\x0eS2SessionResp1\x12\x17\n\x06status\x18\x01 \x01(\x0e\x32\x07.Status\x12\x14\n\x0c\x64\x65vice_proof\x18\x02 \x01(\x0c\x12\x14\n\x0c\x64\x65vice_nonce\x18\x03 \x01(\x0c\"\xb1\x01\n\x0bSec2Payload\x12\x19\n\x03msg\x18\x01 \x01(\x0e\x32\x0c.Sec2MsgType\x12\x1d\n\x03sc0\x18\x14 \x01(\x0b\x32\x0e.S2SessionCmd0H\x00\x12\x1e\n\x03sr0\x18\x15 \x01(\x0b\x32\x0f.S2SessionResp0H\x00\x12\x1d\n\x03sc1\x18\x16 \x01(\x0b\x32\x0e.S2SessionCmd1H\x00\x12\x1e\n\x03sr1\x18\x17 \x01(\x0b\x32\x0f.S2SessionResp1H\x00\x42\t\n\x07payload*o\n\x0bSec2MsgType\x12\x16\n\x12S2Session_Command0\x10\x00\x12\x17\n\x13S2Session_Response0\x10\x01\x12\x16\n\x12S2Session_Command1\x10\x02\x12\x17\n\x13S2Session_Response1\x10\x03\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'sec2_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _SEC2MSGTYPE._serialized_start=489
  _SEC2MSGTYPE._serialized_end=600
  _S2SESSIONCMD0._serialized_start=31
  _S2SESSIONCMD0._serialized_end=94
  _S2SESSIONRESP0._serialized_start=96
  _S2SESSIONRESP0._serialized_end=181
  _S2SESSIONCMD1._serialized_start=183
  _S2SESSIONCMD1._serialized_end=220
  _S2SESSIONRESP1._serialized_start=222
  _S2SESSIONRESP1._serialized_end=307
  _SEC2PAYLOAD._serialized_start=310
  _SEC2PAYLOAD._serialized_end=487
# @@protoc_insertion_point(module_scope)
