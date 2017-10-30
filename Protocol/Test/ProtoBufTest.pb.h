// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protocol/Test/ProtoBufTest.proto

#ifndef PROTOBUF_Protocol_2fTest_2fProtoBufTest_2eproto__INCLUDED
#define PROTOBUF_Protocol_2fTest_2fProtoBufTest_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace LogCabin {
namespace ProtoBuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
void protobuf_AssignDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
void protobuf_ShutdownFile_Protocol_2fTest_2fProtoBufTest_2eproto();

class TestMessage;
class MissingOld;
class MissingNew;

enum MissingOld_TestEnum {
  MissingOld_TestEnum_UNKNOWN = 90,
  MissingOld_TestEnum_THREE = 3,
  MissingOld_TestEnum_TWO = 2,
  MissingOld_TestEnum_ONE = 1
};
bool MissingOld_TestEnum_IsValid(int value);
const MissingOld_TestEnum MissingOld_TestEnum_TestEnum_MIN = MissingOld_TestEnum_ONE;
const MissingOld_TestEnum MissingOld_TestEnum_TestEnum_MAX = MissingOld_TestEnum_UNKNOWN;
const int MissingOld_TestEnum_TestEnum_ARRAYSIZE = MissingOld_TestEnum_TestEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* MissingOld_TestEnum_descriptor();
inline const ::std::string& MissingOld_TestEnum_Name(MissingOld_TestEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    MissingOld_TestEnum_descriptor(), value);
}
inline bool MissingOld_TestEnum_Parse(
    const ::std::string& name, MissingOld_TestEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MissingOld_TestEnum>(
    MissingOld_TestEnum_descriptor(), name, value);
}
enum MissingNew_TestEnum {
  MissingNew_TestEnum_ONE = 1,
  MissingNew_TestEnum_TWO = 2,
  MissingNew_TestEnum_THREE = 3,
  MissingNew_TestEnum_FOUR = 4
};
bool MissingNew_TestEnum_IsValid(int value);
const MissingNew_TestEnum MissingNew_TestEnum_TestEnum_MIN = MissingNew_TestEnum_ONE;
const MissingNew_TestEnum MissingNew_TestEnum_TestEnum_MAX = MissingNew_TestEnum_FOUR;
const int MissingNew_TestEnum_TestEnum_ARRAYSIZE = MissingNew_TestEnum_TestEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* MissingNew_TestEnum_descriptor();
inline const ::std::string& MissingNew_TestEnum_Name(MissingNew_TestEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    MissingNew_TestEnum_descriptor(), value);
}
inline bool MissingNew_TestEnum_Parse(
    const ::std::string& name, MissingNew_TestEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MissingNew_TestEnum>(
    MissingNew_TestEnum_descriptor(), name, value);
}
// ===================================================================

class TestMessage : public ::google::protobuf::Message {
 public:
  TestMessage();
  virtual ~TestMessage();

  TestMessage(const TestMessage& from);

  inline TestMessage& operator=(const TestMessage& from) {
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
  static const TestMessage& default_instance();

  void Swap(TestMessage* other);

  // implements Message ----------------------------------------------

  TestMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestMessage& from);
  void MergeFrom(const TestMessage& from);
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

  // required uint64 field_a = 1;
  inline bool has_field_a() const;
  inline void clear_field_a();
  static const int kFieldAFieldNumber = 1;
  inline ::google::protobuf::uint64 field_a() const;
  inline void set_field_a(::google::protobuf::uint64 value);

  // required uint64 field_b = 2;
  inline bool has_field_b() const;
  inline void clear_field_b();
  static const int kFieldBFieldNumber = 2;
  inline ::google::protobuf::uint64 field_b() const;
  inline void set_field_b(::google::protobuf::uint64 value);

  // repeated uint64 field_c = 3;
  inline int field_c_size() const;
  inline void clear_field_c();
  static const int kFieldCFieldNumber = 3;
  inline ::google::protobuf::uint64 field_c(int index) const;
  inline void set_field_c(int index, ::google::protobuf::uint64 value);
  inline void add_field_c(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      field_c() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_field_c();

  // optional bytes field_d = 4;
  inline bool has_field_d() const;
  inline void clear_field_d();
  static const int kFieldDFieldNumber = 4;
  inline const ::std::string& field_d() const;
  inline void set_field_d(const ::std::string& value);
  inline void set_field_d(const char* value);
  inline void set_field_d(const void* value, size_t size);
  inline ::std::string* mutable_field_d();
  inline ::std::string* release_field_d();
  inline void set_allocated_field_d(::std::string* field_d);

  // @@protoc_insertion_point(class_scope:LogCabin.ProtoBuf.TestMessage)
 private:
  inline void set_has_field_a();
  inline void clear_has_field_a();
  inline void set_has_field_b();
  inline void clear_has_field_b();
  inline void set_has_field_d();
  inline void clear_has_field_d();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 field_a_;
  ::google::protobuf::uint64 field_b_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > field_c_;
  ::std::string* field_d_;
  friend void  protobuf_AddDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
  friend void protobuf_AssignDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
  friend void protobuf_ShutdownFile_Protocol_2fTest_2fProtoBufTest_2eproto();

  void InitAsDefaultInstance();
  static TestMessage* default_instance_;
};
// -------------------------------------------------------------------

class MissingOld : public ::google::protobuf::Message {
 public:
  MissingOld();
  virtual ~MissingOld();

  MissingOld(const MissingOld& from);

  inline MissingOld& operator=(const MissingOld& from) {
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
  static const MissingOld& default_instance();

  void Swap(MissingOld* other);

  // implements Message ----------------------------------------------

  MissingOld* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MissingOld& from);
  void MergeFrom(const MissingOld& from);
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

  typedef MissingOld_TestEnum TestEnum;
  static const TestEnum UNKNOWN = MissingOld_TestEnum_UNKNOWN;
  static const TestEnum THREE = MissingOld_TestEnum_THREE;
  static const TestEnum TWO = MissingOld_TestEnum_TWO;
  static const TestEnum ONE = MissingOld_TestEnum_ONE;
  static inline bool TestEnum_IsValid(int value) {
    return MissingOld_TestEnum_IsValid(value);
  }
  static const TestEnum TestEnum_MIN =
    MissingOld_TestEnum_TestEnum_MIN;
  static const TestEnum TestEnum_MAX =
    MissingOld_TestEnum_TestEnum_MAX;
  static const int TestEnum_ARRAYSIZE =
    MissingOld_TestEnum_TestEnum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  TestEnum_descriptor() {
    return MissingOld_TestEnum_descriptor();
  }
  static inline const ::std::string& TestEnum_Name(TestEnum value) {
    return MissingOld_TestEnum_Name(value);
  }
  static inline bool TestEnum_Parse(const ::std::string& name,
      TestEnum* value) {
    return MissingOld_TestEnum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .LogCabin.ProtoBuf.MissingOld.TestEnum which = 1;
  inline bool has_which() const;
  inline void clear_which();
  static const int kWhichFieldNumber = 1;
  inline ::LogCabin::ProtoBuf::MissingOld_TestEnum which() const;
  inline void set_which(::LogCabin::ProtoBuf::MissingOld_TestEnum value);

  // @@protoc_insertion_point(class_scope:LogCabin.ProtoBuf.MissingOld)
 private:
  inline void set_has_which();
  inline void clear_has_which();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int which_;
  friend void  protobuf_AddDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
  friend void protobuf_AssignDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
  friend void protobuf_ShutdownFile_Protocol_2fTest_2fProtoBufTest_2eproto();

  void InitAsDefaultInstance();
  static MissingOld* default_instance_;
};
// -------------------------------------------------------------------

class MissingNew : public ::google::protobuf::Message {
 public:
  MissingNew();
  virtual ~MissingNew();

  MissingNew(const MissingNew& from);

  inline MissingNew& operator=(const MissingNew& from) {
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
  static const MissingNew& default_instance();

  void Swap(MissingNew* other);

  // implements Message ----------------------------------------------

  MissingNew* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MissingNew& from);
  void MergeFrom(const MissingNew& from);
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

  typedef MissingNew_TestEnum TestEnum;
  static const TestEnum ONE = MissingNew_TestEnum_ONE;
  static const TestEnum TWO = MissingNew_TestEnum_TWO;
  static const TestEnum THREE = MissingNew_TestEnum_THREE;
  static const TestEnum FOUR = MissingNew_TestEnum_FOUR;
  static inline bool TestEnum_IsValid(int value) {
    return MissingNew_TestEnum_IsValid(value);
  }
  static const TestEnum TestEnum_MIN =
    MissingNew_TestEnum_TestEnum_MIN;
  static const TestEnum TestEnum_MAX =
    MissingNew_TestEnum_TestEnum_MAX;
  static const int TestEnum_ARRAYSIZE =
    MissingNew_TestEnum_TestEnum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  TestEnum_descriptor() {
    return MissingNew_TestEnum_descriptor();
  }
  static inline const ::std::string& TestEnum_Name(TestEnum value) {
    return MissingNew_TestEnum_Name(value);
  }
  static inline bool TestEnum_Parse(const ::std::string& name,
      TestEnum* value) {
    return MissingNew_TestEnum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .LogCabin.ProtoBuf.MissingNew.TestEnum which = 1;
  inline bool has_which() const;
  inline void clear_which();
  static const int kWhichFieldNumber = 1;
  inline ::LogCabin::ProtoBuf::MissingNew_TestEnum which() const;
  inline void set_which(::LogCabin::ProtoBuf::MissingNew_TestEnum value);

  // optional uint64 primitive = 2;
  inline bool has_primitive() const;
  inline void clear_primitive();
  static const int kPrimitiveFieldNumber = 2;
  inline ::google::protobuf::uint64 primitive() const;
  inline void set_primitive(::google::protobuf::uint64 value);

  // optional .LogCabin.ProtoBuf.TestMessage msg = 3;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 3;
  inline const ::LogCabin::ProtoBuf::TestMessage& msg() const;
  inline ::LogCabin::ProtoBuf::TestMessage* mutable_msg();
  inline ::LogCabin::ProtoBuf::TestMessage* release_msg();
  inline void set_allocated_msg(::LogCabin::ProtoBuf::TestMessage* msg);

  // @@protoc_insertion_point(class_scope:LogCabin.ProtoBuf.MissingNew)
 private:
  inline void set_has_which();
  inline void clear_has_which();
  inline void set_has_primitive();
  inline void clear_has_primitive();
  inline void set_has_msg();
  inline void clear_has_msg();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 primitive_;
  ::LogCabin::ProtoBuf::TestMessage* msg_;
  int which_;
  friend void  protobuf_AddDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
  friend void protobuf_AssignDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
  friend void protobuf_ShutdownFile_Protocol_2fTest_2fProtoBufTest_2eproto();

  void InitAsDefaultInstance();
  static MissingNew* default_instance_;
};
// ===================================================================


// ===================================================================

// TestMessage

// required uint64 field_a = 1;
inline bool TestMessage::has_field_a() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestMessage::set_has_field_a() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestMessage::clear_has_field_a() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestMessage::clear_field_a() {
  field_a_ = GOOGLE_ULONGLONG(0);
  clear_has_field_a();
}
inline ::google::protobuf::uint64 TestMessage::field_a() const {
  // @@protoc_insertion_point(field_get:LogCabin.ProtoBuf.TestMessage.field_a)
  return field_a_;
}
inline void TestMessage::set_field_a(::google::protobuf::uint64 value) {
  set_has_field_a();
  field_a_ = value;
  // @@protoc_insertion_point(field_set:LogCabin.ProtoBuf.TestMessage.field_a)
}

// required uint64 field_b = 2;
inline bool TestMessage::has_field_b() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TestMessage::set_has_field_b() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TestMessage::clear_has_field_b() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TestMessage::clear_field_b() {
  field_b_ = GOOGLE_ULONGLONG(0);
  clear_has_field_b();
}
inline ::google::protobuf::uint64 TestMessage::field_b() const {
  // @@protoc_insertion_point(field_get:LogCabin.ProtoBuf.TestMessage.field_b)
  return field_b_;
}
inline void TestMessage::set_field_b(::google::protobuf::uint64 value) {
  set_has_field_b();
  field_b_ = value;
  // @@protoc_insertion_point(field_set:LogCabin.ProtoBuf.TestMessage.field_b)
}

// repeated uint64 field_c = 3;
inline int TestMessage::field_c_size() const {
  return field_c_.size();
}
inline void TestMessage::clear_field_c() {
  field_c_.Clear();
}
inline ::google::protobuf::uint64 TestMessage::field_c(int index) const {
  // @@protoc_insertion_point(field_get:LogCabin.ProtoBuf.TestMessage.field_c)
  return field_c_.Get(index);
}
inline void TestMessage::set_field_c(int index, ::google::protobuf::uint64 value) {
  field_c_.Set(index, value);
  // @@protoc_insertion_point(field_set:LogCabin.ProtoBuf.TestMessage.field_c)
}
inline void TestMessage::add_field_c(::google::protobuf::uint64 value) {
  field_c_.Add(value);
  // @@protoc_insertion_point(field_add:LogCabin.ProtoBuf.TestMessage.field_c)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
TestMessage::field_c() const {
  // @@protoc_insertion_point(field_list:LogCabin.ProtoBuf.TestMessage.field_c)
  return field_c_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
TestMessage::mutable_field_c() {
  // @@protoc_insertion_point(field_mutable_list:LogCabin.ProtoBuf.TestMessage.field_c)
  return &field_c_;
}

// optional bytes field_d = 4;
inline bool TestMessage::has_field_d() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TestMessage::set_has_field_d() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TestMessage::clear_has_field_d() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TestMessage::clear_field_d() {
  if (field_d_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    field_d_->clear();
  }
  clear_has_field_d();
}
inline const ::std::string& TestMessage::field_d() const {
  // @@protoc_insertion_point(field_get:LogCabin.ProtoBuf.TestMessage.field_d)
  return *field_d_;
}
inline void TestMessage::set_field_d(const ::std::string& value) {
  set_has_field_d();
  if (field_d_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    field_d_ = new ::std::string;
  }
  field_d_->assign(value);
  // @@protoc_insertion_point(field_set:LogCabin.ProtoBuf.TestMessage.field_d)
}
inline void TestMessage::set_field_d(const char* value) {
  set_has_field_d();
  if (field_d_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    field_d_ = new ::std::string;
  }
  field_d_->assign(value);
  // @@protoc_insertion_point(field_set_char:LogCabin.ProtoBuf.TestMessage.field_d)
}
inline void TestMessage::set_field_d(const void* value, size_t size) {
  set_has_field_d();
  if (field_d_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    field_d_ = new ::std::string;
  }
  field_d_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:LogCabin.ProtoBuf.TestMessage.field_d)
}
inline ::std::string* TestMessage::mutable_field_d() {
  set_has_field_d();
  if (field_d_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    field_d_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:LogCabin.ProtoBuf.TestMessage.field_d)
  return field_d_;
}
inline ::std::string* TestMessage::release_field_d() {
  clear_has_field_d();
  if (field_d_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = field_d_;
    field_d_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void TestMessage::set_allocated_field_d(::std::string* field_d) {
  if (field_d_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete field_d_;
  }
  if (field_d) {
    set_has_field_d();
    field_d_ = field_d;
  } else {
    clear_has_field_d();
    field_d_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:LogCabin.ProtoBuf.TestMessage.field_d)
}

// -------------------------------------------------------------------

// MissingOld

// optional .LogCabin.ProtoBuf.MissingOld.TestEnum which = 1;
inline bool MissingOld::has_which() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MissingOld::set_has_which() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MissingOld::clear_has_which() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MissingOld::clear_which() {
  which_ = 90;
  clear_has_which();
}
inline ::LogCabin::ProtoBuf::MissingOld_TestEnum MissingOld::which() const {
  // @@protoc_insertion_point(field_get:LogCabin.ProtoBuf.MissingOld.which)
  return static_cast< ::LogCabin::ProtoBuf::MissingOld_TestEnum >(which_);
}
inline void MissingOld::set_which(::LogCabin::ProtoBuf::MissingOld_TestEnum value) {
  assert(::LogCabin::ProtoBuf::MissingOld_TestEnum_IsValid(value));
  set_has_which();
  which_ = value;
  // @@protoc_insertion_point(field_set:LogCabin.ProtoBuf.MissingOld.which)
}

// -------------------------------------------------------------------

// MissingNew

// optional .LogCabin.ProtoBuf.MissingNew.TestEnum which = 1;
inline bool MissingNew::has_which() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MissingNew::set_has_which() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MissingNew::clear_has_which() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MissingNew::clear_which() {
  which_ = 1;
  clear_has_which();
}
inline ::LogCabin::ProtoBuf::MissingNew_TestEnum MissingNew::which() const {
  // @@protoc_insertion_point(field_get:LogCabin.ProtoBuf.MissingNew.which)
  return static_cast< ::LogCabin::ProtoBuf::MissingNew_TestEnum >(which_);
}
inline void MissingNew::set_which(::LogCabin::ProtoBuf::MissingNew_TestEnum value) {
  assert(::LogCabin::ProtoBuf::MissingNew_TestEnum_IsValid(value));
  set_has_which();
  which_ = value;
  // @@protoc_insertion_point(field_set:LogCabin.ProtoBuf.MissingNew.which)
}

// optional uint64 primitive = 2;
inline bool MissingNew::has_primitive() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MissingNew::set_has_primitive() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MissingNew::clear_has_primitive() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MissingNew::clear_primitive() {
  primitive_ = GOOGLE_ULONGLONG(0);
  clear_has_primitive();
}
inline ::google::protobuf::uint64 MissingNew::primitive() const {
  // @@protoc_insertion_point(field_get:LogCabin.ProtoBuf.MissingNew.primitive)
  return primitive_;
}
inline void MissingNew::set_primitive(::google::protobuf::uint64 value) {
  set_has_primitive();
  primitive_ = value;
  // @@protoc_insertion_point(field_set:LogCabin.ProtoBuf.MissingNew.primitive)
}

// optional .LogCabin.ProtoBuf.TestMessage msg = 3;
inline bool MissingNew::has_msg() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MissingNew::set_has_msg() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MissingNew::clear_has_msg() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MissingNew::clear_msg() {
  if (msg_ != NULL) msg_->::LogCabin::ProtoBuf::TestMessage::Clear();
  clear_has_msg();
}
inline const ::LogCabin::ProtoBuf::TestMessage& MissingNew::msg() const {
  // @@protoc_insertion_point(field_get:LogCabin.ProtoBuf.MissingNew.msg)
  return msg_ != NULL ? *msg_ : *default_instance_->msg_;
}
inline ::LogCabin::ProtoBuf::TestMessage* MissingNew::mutable_msg() {
  set_has_msg();
  if (msg_ == NULL) msg_ = new ::LogCabin::ProtoBuf::TestMessage;
  // @@protoc_insertion_point(field_mutable:LogCabin.ProtoBuf.MissingNew.msg)
  return msg_;
}
inline ::LogCabin::ProtoBuf::TestMessage* MissingNew::release_msg() {
  clear_has_msg();
  ::LogCabin::ProtoBuf::TestMessage* temp = msg_;
  msg_ = NULL;
  return temp;
}
inline void MissingNew::set_allocated_msg(::LogCabin::ProtoBuf::TestMessage* msg) {
  delete msg_;
  msg_ = msg;
  if (msg) {
    set_has_msg();
  } else {
    clear_has_msg();
  }
  // @@protoc_insertion_point(field_set_allocated:LogCabin.ProtoBuf.MissingNew.msg)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtoBuf
}  // namespace LogCabin

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::LogCabin::ProtoBuf::MissingOld_TestEnum> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::LogCabin::ProtoBuf::MissingOld_TestEnum>() {
  return ::LogCabin::ProtoBuf::MissingOld_TestEnum_descriptor();
}
template <> struct is_proto_enum< ::LogCabin::ProtoBuf::MissingNew_TestEnum> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::LogCabin::ProtoBuf::MissingNew_TestEnum>() {
  return ::LogCabin::ProtoBuf::MissingNew_TestEnum_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Protocol_2fTest_2fProtoBufTest_2eproto__INCLUDED