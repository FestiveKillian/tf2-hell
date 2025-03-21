// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages.proto

#ifndef PROTOBUF_steammessages_2eproto__INCLUDED
#define PROTOBUF_steammessages_2eproto__INCLUDED

// VALVE - Disable some warnings that this code generates, but we wish to leave on in our projects
#if _MSC_VER >= 1300
#pragma warning(push)
#pragma warning(disable : 4530)        // warning C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc (disabled due to std headers having exception syntax)
#pragma warning(disable : 4244)        // warning C4244:  warning C4244: '=' : conversion from '__w64 int' to 'int', possible loss of data
#pragma warning(disable : 4267)        // warning C4267: 'argument' : conversion from 'size_t' to 'int', possible loss of data
#pragma warning(disable : 4125)        // warning C4125: decimal digit terminates octal escape sequence
#pragma warning(disable : 4127)        // warning C4127: conditional expression is constant
#pragma warning(disable : 4100)        // warning C4100: 'op' : unreferenced formal parameter
#pragma warning(disable : 4512)        // warning C4512: assignment operator could not be generated
#endif // _MSC_VER
#if _GNUC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif // _GNUC
// VALVE

// VALVE - Disable some warnings that this code generates, but we wish to leave on in our projects
#if _MSC_VER >= 1300
#pragma warning(push)
#pragma warning(disable : 4530)        // warning C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc (disabled due to std headers having exception syntax)
#pragma warning(disable : 4244)        // warning C4244:  warning C4244: '=' : conversion from '__w64 int' to 'int', possible loss of data
#pragma warning(disable : 4267)        // warning C4267: 'argument' : conversion from 'size_t' to 'int', possible loss of data
#pragma warning(disable : 4125)        // warning C4125: decimal digit terminates octal escape sequence
#pragma warning(disable : 4127)        // warning C4127: conditional expression is constant
#pragma warning(disable : 4100)        // warning C4100: 'op' : unreferenced formal parameter
#pragma warning(disable : 4512)        // warning C4512: assignment operator could not be generated
#endif // _MSC_VER
#if _GNUC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif // _GNUC
// VALVE

// VALVE - Disable some warnings that this code generates, but we wish to leave on in our projects
#if _MSC_VER >= 1300
#pragma warning(push)
#pragma warning(disable : 4530)        // warning C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc (disabled due to std headers having exception syntax)
#pragma warning(disable : 4244)        // warning C4244:  warning C4244: '=' : conversion from '__w64 int' to 'int', possible loss of data
#pragma warning(disable : 4267)        // warning C4267: 'argument' : conversion from 'size_t' to 'int', possible loss of data
#pragma warning(disable : 4125)        // warning C4125: decimal digit terminates octal escape sequence
#pragma warning(disable : 4127)        // warning C4127: conditional expression is constant
#pragma warning(disable : 4100)        // warning C4100: 'op' : unreferenced formal parameter
#pragma warning(disable : 4512)        // warning C4512: assignment operator could not be generated
#endif // _MSC_VER
#if _GNUC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif // _GNUC
// VALVE

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_steammessages_2eproto();
void protobuf_AssignDesc_steammessages_2eproto();
void protobuf_ShutdownFile_steammessages_2eproto();

class CMsgProtoBufHeader;

enum GCProtoBufMsgSrc {
  GCProtoBufMsgSrc_Unspecified = 0
};
bool GCProtoBufMsgSrc_IsValid(int value);
const GCProtoBufMsgSrc GCProtoBufMsgSrc_MIN = GCProtoBufMsgSrc_Unspecified;
const GCProtoBufMsgSrc GCProtoBufMsgSrc_MAX = GCProtoBufMsgSrc_Unspecified;
const int GCProtoBufMsgSrc_ARRAYSIZE = GCProtoBufMsgSrc_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCProtoBufMsgSrc_descriptor();
inline const ::std::string& GCProtoBufMsgSrc_Name(GCProtoBufMsgSrc value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCProtoBufMsgSrc_descriptor(), value);
}
inline bool GCProtoBufMsgSrc_Parse(
    const ::std::string& name, GCProtoBufMsgSrc* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCProtoBufMsgSrc>(
    GCProtoBufMsgSrc_descriptor(), name, value);
}
// ===================================================================

class CMsgProtoBufHeader : public ::google::protobuf::Message {
 public:
  CMsgProtoBufHeader();
  virtual ~CMsgProtoBufHeader();

  CMsgProtoBufHeader(const CMsgProtoBufHeader& from);

  inline CMsgProtoBufHeader& operator=(const CMsgProtoBufHeader& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CMsgProtoBufHeader& default_instance();

  void Swap(CMsgProtoBufHeader* other);

  // implements Message ----------------------------------------------

  CMsgProtoBufHeader* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CMsgProtoBufHeader& from);
  void MergeFrom(const CMsgProtoBufHeader& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional fixed64 client_steam_id = 1;
  inline bool has_client_steam_id() const;
  inline void clear_client_steam_id();
  static const int kClientSteamIdFieldNumber = 1;
  inline ::google::protobuf::uint64 client_steam_id() const;
  inline void set_client_steam_id(::google::protobuf::uint64 value);

  // optional int32 client_session_id = 2;
  inline bool has_client_session_id() const;
  inline void clear_client_session_id();
  static const int kClientSessionIdFieldNumber = 2;
  inline ::google::protobuf::int32 client_session_id() const;
  inline void set_client_session_id(::google::protobuf::int32 value);

  // optional uint32 source_app_id = 3;
  inline bool has_source_app_id() const;
  inline void clear_source_app_id();
  static const int kSourceAppIdFieldNumber = 3;
  inline ::google::protobuf::uint32 source_app_id() const;
  inline void set_source_app_id(::google::protobuf::uint32 value);

  // optional fixed64 job_id_source = 10 [default = 18446744073709551615];
  inline bool has_job_id_source() const;
  inline void clear_job_id_source();
  static const int kJobIdSourceFieldNumber = 10;
  inline ::google::protobuf::uint64 job_id_source() const;
  inline void set_job_id_source(::google::protobuf::uint64 value);

  // optional fixed64 job_id_target = 11 [default = 18446744073709551615];
  inline bool has_job_id_target() const;
  inline void clear_job_id_target();
  static const int kJobIdTargetFieldNumber = 11;
  inline ::google::protobuf::uint64 job_id_target() const;
  inline void set_job_id_target(::google::protobuf::uint64 value);

  // optional string target_job_name = 12;
  inline bool has_target_job_name() const;
  inline void clear_target_job_name();
  static const int kTargetJobNameFieldNumber = 12;
  inline const ::std::string& target_job_name() const;
  inline void set_target_job_name(const ::std::string& value);
  inline void set_target_job_name(const char* value);
  inline void set_target_job_name(const char* value, size_t size);
  inline ::std::string* mutable_target_job_name();
  inline ::std::string* release_target_job_name();
  inline void set_allocated_target_job_name(::std::string* target_job_name);

  // optional int32 eresult = 13 [default = 2];
  inline bool has_eresult() const;
  inline void clear_eresult();
  static const int kEresultFieldNumber = 13;
  inline ::google::protobuf::int32 eresult() const;
  inline void set_eresult(::google::protobuf::int32 value);

  // optional string error_message = 14;
  inline bool has_error_message() const;
  inline void clear_error_message();
  static const int kErrorMessageFieldNumber = 14;
  inline const ::std::string& error_message() const;
  inline void set_error_message(const ::std::string& value);
  inline void set_error_message(const char* value);
  inline void set_error_message(const char* value, size_t size);
  inline ::std::string* mutable_error_message();
  inline ::std::string* release_error_message();
  inline void set_allocated_error_message(::std::string* error_message);

  // optional .GCProtoBufMsgSrc gc_msg_src = 200;
  inline bool has_gc_msg_src() const;
  inline void clear_gc_msg_src();
  static const int kGcMsgSrcFieldNumber = 200;
  inline ::GCProtoBufMsgSrc gc_msg_src() const;
  inline void set_gc_msg_src(::GCProtoBufMsgSrc value);

  // optional uint32 gc_dir_index_source = 201;
  inline bool has_gc_dir_index_source() const;
  inline void clear_gc_dir_index_source();
  static const int kGcDirIndexSourceFieldNumber = 201;
  inline ::google::protobuf::uint32 gc_dir_index_source() const;
  inline void set_gc_dir_index_source(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:CMsgProtoBufHeader)
 private:
  inline void set_has_client_steam_id();
  inline void clear_has_client_steam_id();
  inline void set_has_client_session_id();
  inline void clear_has_client_session_id();
  inline void set_has_source_app_id();
  inline void clear_has_source_app_id();
  inline void set_has_job_id_source();
  inline void clear_has_job_id_source();
  inline void set_has_job_id_target();
  inline void clear_has_job_id_target();
  inline void set_has_target_job_name();
  inline void clear_has_target_job_name();
  inline void set_has_eresult();
  inline void clear_has_eresult();
  inline void set_has_error_message();
  inline void clear_has_error_message();
  inline void set_has_gc_msg_src();
  inline void clear_has_gc_msg_src();
  inline void set_has_gc_dir_index_source();
  inline void clear_has_gc_dir_index_source();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 client_steam_id_;
  ::google::protobuf::int32 client_session_id_;
  ::google::protobuf::uint32 source_app_id_;
  ::google::protobuf::uint64 job_id_source_;
  ::google::protobuf::uint64 job_id_target_;
  ::std::string* target_job_name_;
  ::std::string* error_message_;
  ::google::protobuf::int32 eresult_;
  int gc_msg_src_;
  ::google::protobuf::uint32 gc_dir_index_source_;
  friend void  protobuf_AddDesc_steammessages_2eproto();
  friend void protobuf_AssignDesc_steammessages_2eproto();
  friend void protobuf_ShutdownFile_steammessages_2eproto();

  void InitAsDefaultInstance();
  static CMsgProtoBufHeader* default_instance_;
};
// ===================================================================

static const int kKeyFieldFieldNumber = 60000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  key_field;
static const int kMsgpoolSoftLimitFieldNumber = 60000;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  msgpool_soft_limit;
static const int kMsgpoolHardLimitFieldNumber = 60001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  msgpool_hard_limit;

// ===================================================================

// CMsgProtoBufHeader

// optional fixed64 client_steam_id = 1;
inline bool CMsgProtoBufHeader::has_client_steam_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CMsgProtoBufHeader::set_has_client_steam_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CMsgProtoBufHeader::clear_has_client_steam_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CMsgProtoBufHeader::clear_client_steam_id() {
  client_steam_id_ = GOOGLE_ULONGLONG(0);
  clear_has_client_steam_id();
}
inline ::google::protobuf::uint64 CMsgProtoBufHeader::client_steam_id() const {
  // @@protoc_insertion_point(field_get:CMsgProtoBufHeader.client_steam_id)
  return client_steam_id_;
}
inline void CMsgProtoBufHeader::set_client_steam_id(::google::protobuf::uint64 value) {
  set_has_client_steam_id();
  client_steam_id_ = value;
  // @@protoc_insertion_point(field_set:CMsgProtoBufHeader.client_steam_id)
}

// optional int32 client_session_id = 2;
inline bool CMsgProtoBufHeader::has_client_session_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CMsgProtoBufHeader::set_has_client_session_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CMsgProtoBufHeader::clear_has_client_session_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CMsgProtoBufHeader::clear_client_session_id() {
  client_session_id_ = 0;
  clear_has_client_session_id();
}
inline ::google::protobuf::int32 CMsgProtoBufHeader::client_session_id() const {
  // @@protoc_insertion_point(field_get:CMsgProtoBufHeader.client_session_id)
  return client_session_id_;
}
inline void CMsgProtoBufHeader::set_client_session_id(::google::protobuf::int32 value) {
  set_has_client_session_id();
  client_session_id_ = value;
  // @@protoc_insertion_point(field_set:CMsgProtoBufHeader.client_session_id)
}

// optional uint32 source_app_id = 3;
inline bool CMsgProtoBufHeader::has_source_app_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CMsgProtoBufHeader::set_has_source_app_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CMsgProtoBufHeader::clear_has_source_app_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CMsgProtoBufHeader::clear_source_app_id() {
  source_app_id_ = 0u;
  clear_has_source_app_id();
}
inline ::google::protobuf::uint32 CMsgProtoBufHeader::source_app_id() const {
  // @@protoc_insertion_point(field_get:CMsgProtoBufHeader.source_app_id)
  return source_app_id_;
}
inline void CMsgProtoBufHeader::set_source_app_id(::google::protobuf::uint32 value) {
  set_has_source_app_id();
  source_app_id_ = value;
  // @@protoc_insertion_point(field_set:CMsgProtoBufHeader.source_app_id)
}

// optional fixed64 job_id_source = 10 [default = 18446744073709551615];
inline bool CMsgProtoBufHeader::has_job_id_source() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CMsgProtoBufHeader::set_has_job_id_source() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CMsgProtoBufHeader::clear_has_job_id_source() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CMsgProtoBufHeader::clear_job_id_source() {
  job_id_source_ = GOOGLE_ULONGLONG(18446744073709551615);
  clear_has_job_id_source();
}
inline ::google::protobuf::uint64 CMsgProtoBufHeader::job_id_source() const {
  // @@protoc_insertion_point(field_get:CMsgProtoBufHeader.job_id_source)
  return job_id_source_;
}
inline void CMsgProtoBufHeader::set_job_id_source(::google::protobuf::uint64 value) {
  set_has_job_id_source();
  job_id_source_ = value;
  // @@protoc_insertion_point(field_set:CMsgProtoBufHeader.job_id_source)
}

// optional fixed64 job_id_target = 11 [default = 18446744073709551615];
inline bool CMsgProtoBufHeader::has_job_id_target() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CMsgProtoBufHeader::set_has_job_id_target() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CMsgProtoBufHeader::clear_has_job_id_target() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CMsgProtoBufHeader::clear_job_id_target() {
  job_id_target_ = GOOGLE_ULONGLONG(18446744073709551615);
  clear_has_job_id_target();
}
inline ::google::protobuf::uint64 CMsgProtoBufHeader::job_id_target() const {
  // @@protoc_insertion_point(field_get:CMsgProtoBufHeader.job_id_target)
  return job_id_target_;
}
inline void CMsgProtoBufHeader::set_job_id_target(::google::protobuf::uint64 value) {
  set_has_job_id_target();
  job_id_target_ = value;
  // @@protoc_insertion_point(field_set:CMsgProtoBufHeader.job_id_target)
}

// optional string target_job_name = 12;
inline bool CMsgProtoBufHeader::has_target_job_name() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CMsgProtoBufHeader::set_has_target_job_name() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CMsgProtoBufHeader::clear_has_target_job_name() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CMsgProtoBufHeader::clear_target_job_name() {
  if (target_job_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    target_job_name_->clear();
  }
  clear_has_target_job_name();
}
inline const ::std::string& CMsgProtoBufHeader::target_job_name() const {
  // @@protoc_insertion_point(field_get:CMsgProtoBufHeader.target_job_name)
  return *target_job_name_;
}
inline void CMsgProtoBufHeader::set_target_job_name(const ::std::string& value) {
  set_has_target_job_name();
  if (target_job_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    target_job_name_ = new ::std::string;
  }
  target_job_name_->assign(value);
  // @@protoc_insertion_point(field_set:CMsgProtoBufHeader.target_job_name)
}
inline void CMsgProtoBufHeader::set_target_job_name(const char* value) {
  set_has_target_job_name();
  if (target_job_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    target_job_name_ = new ::std::string;
  }
  target_job_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:CMsgProtoBufHeader.target_job_name)
}
inline void CMsgProtoBufHeader::set_target_job_name(const char* value, size_t size) {
  set_has_target_job_name();
  if (target_job_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    target_job_name_ = new ::std::string;
  }
  target_job_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:CMsgProtoBufHeader.target_job_name)
}
inline ::std::string* CMsgProtoBufHeader::mutable_target_job_name() {
  set_has_target_job_name();
  if (target_job_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    target_job_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:CMsgProtoBufHeader.target_job_name)
  return target_job_name_;
}
inline ::std::string* CMsgProtoBufHeader::release_target_job_name() {
  clear_has_target_job_name();
  if (target_job_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = target_job_name_;
    target_job_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CMsgProtoBufHeader::set_allocated_target_job_name(::std::string* target_job_name) {
  if (target_job_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete target_job_name_;
  }
  if (target_job_name) {
    set_has_target_job_name();
    target_job_name_ = target_job_name;
  } else {
    clear_has_target_job_name();
    target_job_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:CMsgProtoBufHeader.target_job_name)
}

// optional int32 eresult = 13 [default = 2];
inline bool CMsgProtoBufHeader::has_eresult() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CMsgProtoBufHeader::set_has_eresult() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CMsgProtoBufHeader::clear_has_eresult() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CMsgProtoBufHeader::clear_eresult() {
  eresult_ = 2;
  clear_has_eresult();
}
inline ::google::protobuf::int32 CMsgProtoBufHeader::eresult() const {
  // @@protoc_insertion_point(field_get:CMsgProtoBufHeader.eresult)
  return eresult_;
}
inline void CMsgProtoBufHeader::set_eresult(::google::protobuf::int32 value) {
  set_has_eresult();
  eresult_ = value;
  // @@protoc_insertion_point(field_set:CMsgProtoBufHeader.eresult)
}

// optional string error_message = 14;
inline bool CMsgProtoBufHeader::has_error_message() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void CMsgProtoBufHeader::set_has_error_message() {
  _has_bits_[0] |= 0x00000080u;
}
inline void CMsgProtoBufHeader::clear_has_error_message() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void CMsgProtoBufHeader::clear_error_message() {
  if (error_message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_message_->clear();
  }
  clear_has_error_message();
}
inline const ::std::string& CMsgProtoBufHeader::error_message() const {
  // @@protoc_insertion_point(field_get:CMsgProtoBufHeader.error_message)
  return *error_message_;
}
inline void CMsgProtoBufHeader::set_error_message(const ::std::string& value) {
  set_has_error_message();
  if (error_message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_message_ = new ::std::string;
  }
  error_message_->assign(value);
  // @@protoc_insertion_point(field_set:CMsgProtoBufHeader.error_message)
}
inline void CMsgProtoBufHeader::set_error_message(const char* value) {
  set_has_error_message();
  if (error_message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_message_ = new ::std::string;
  }
  error_message_->assign(value);
  // @@protoc_insertion_point(field_set_char:CMsgProtoBufHeader.error_message)
}
inline void CMsgProtoBufHeader::set_error_message(const char* value, size_t size) {
  set_has_error_message();
  if (error_message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_message_ = new ::std::string;
  }
  error_message_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:CMsgProtoBufHeader.error_message)
}
inline ::std::string* CMsgProtoBufHeader::mutable_error_message() {
  set_has_error_message();
  if (error_message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    error_message_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:CMsgProtoBufHeader.error_message)
  return error_message_;
}
inline ::std::string* CMsgProtoBufHeader::release_error_message() {
  clear_has_error_message();
  if (error_message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = error_message_;
    error_message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CMsgProtoBufHeader::set_allocated_error_message(::std::string* error_message) {
  if (error_message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete error_message_;
  }
  if (error_message) {
    set_has_error_message();
    error_message_ = error_message;
  } else {
    clear_has_error_message();
    error_message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:CMsgProtoBufHeader.error_message)
}

// optional .GCProtoBufMsgSrc gc_msg_src = 200;
inline bool CMsgProtoBufHeader::has_gc_msg_src() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void CMsgProtoBufHeader::set_has_gc_msg_src() {
  _has_bits_[0] |= 0x00000100u;
}
inline void CMsgProtoBufHeader::clear_has_gc_msg_src() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void CMsgProtoBufHeader::clear_gc_msg_src() {
  gc_msg_src_ = 0;
  clear_has_gc_msg_src();
}
inline ::GCProtoBufMsgSrc CMsgProtoBufHeader::gc_msg_src() const {
  // @@protoc_insertion_point(field_get:CMsgProtoBufHeader.gc_msg_src)
  return static_cast< ::GCProtoBufMsgSrc >(gc_msg_src_);
}
inline void CMsgProtoBufHeader::set_gc_msg_src(::GCProtoBufMsgSrc value) {
  assert(::GCProtoBufMsgSrc_IsValid(value));
  set_has_gc_msg_src();
  gc_msg_src_ = value;
  // @@protoc_insertion_point(field_set:CMsgProtoBufHeader.gc_msg_src)
}

// optional uint32 gc_dir_index_source = 201;
inline bool CMsgProtoBufHeader::has_gc_dir_index_source() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void CMsgProtoBufHeader::set_has_gc_dir_index_source() {
  _has_bits_[0] |= 0x00000200u;
}
inline void CMsgProtoBufHeader::clear_has_gc_dir_index_source() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void CMsgProtoBufHeader::clear_gc_dir_index_source() {
  gc_dir_index_source_ = 0u;
  clear_has_gc_dir_index_source();
}
inline ::google::protobuf::uint32 CMsgProtoBufHeader::gc_dir_index_source() const {
  // @@protoc_insertion_point(field_get:CMsgProtoBufHeader.gc_dir_index_source)
  return gc_dir_index_source_;
}
inline void CMsgProtoBufHeader::set_gc_dir_index_source(::google::protobuf::uint32 value) {
  set_has_gc_dir_index_source();
  gc_dir_index_source_ = value;
  // @@protoc_insertion_point(field_set:CMsgProtoBufHeader.gc_dir_index_source)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::GCProtoBufMsgSrc> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::GCProtoBufMsgSrc>() {
  return ::GCProtoBufMsgSrc_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

// VALVE
#if _MSC_VER >= 1300
#pragma warning( pop )
#endif // _MSC_VER
#if _GNUC
#pragma GCC diagnostic pop
#endif // _GNUC

// VALVE

// VALVE
#if _MSC_VER >= 1300
#pragma warning( pop )
#endif // _MSC_VER
#if _GNUC
#pragma GCC diagnostic pop
#endif // _GNUC

// VALVE

// VALVE
#if _MSC_VER >= 1300
#pragma warning( pop )
#endif // _MSC_VER
#if _GNUC
#pragma GCC diagnostic pop
#endif // _GNUC

// VALVE

#endif  // PROTOBUF_steammessages_2eproto__INCLUDED
