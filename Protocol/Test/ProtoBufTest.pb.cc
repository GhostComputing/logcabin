// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protocol/Test/ProtoBufTest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Protocol/Test/ProtoBufTest.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace LogCabin {
namespace ProtoBuf {

namespace {

const ::google::protobuf::Descriptor* TestMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* MissingOld_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MissingOld_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MissingOld_TestEnum_descriptor_ = NULL;
const ::google::protobuf::Descriptor* MissingNew_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MissingNew_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MissingNew_TestEnum_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Protocol_2fTest_2fProtoBufTest_2eproto() {
  protobuf_AddDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Protocol/Test/ProtoBufTest.proto");
  GOOGLE_CHECK(file != NULL);
  TestMessage_descriptor_ = file->message_type(0);
  static const int TestMessage_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, field_a_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, field_b_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, field_c_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, field_d_),
  };
  TestMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TestMessage_descriptor_,
      TestMessage::default_instance_,
      TestMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TestMessage));
  MissingOld_descriptor_ = file->message_type(1);
  static const int MissingOld_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MissingOld, which_),
  };
  MissingOld_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MissingOld_descriptor_,
      MissingOld::default_instance_,
      MissingOld_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MissingOld, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MissingOld, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MissingOld));
  MissingOld_TestEnum_descriptor_ = MissingOld_descriptor_->enum_type(0);
  MissingNew_descriptor_ = file->message_type(2);
  static const int MissingNew_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MissingNew, which_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MissingNew, primitive_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MissingNew, msg_),
  };
  MissingNew_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MissingNew_descriptor_,
      MissingNew::default_instance_,
      MissingNew_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MissingNew, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MissingNew, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MissingNew));
  MissingNew_TestEnum_descriptor_ = MissingNew_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Protocol_2fTest_2fProtoBufTest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TestMessage_descriptor_, &TestMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MissingOld_descriptor_, &MissingOld::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MissingNew_descriptor_, &MissingNew::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Protocol_2fTest_2fProtoBufTest_2eproto() {
  delete TestMessage::default_instance_;
  delete TestMessage_reflection_;
  delete MissingOld::default_instance_;
  delete MissingOld_reflection_;
  delete MissingNew::default_instance_;
  delete MissingNew_reflection_;
}

void protobuf_AddDesc_Protocol_2fTest_2fProtoBufTest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n Protocol/Test/ProtoBufTest.proto\022\021LogC"
    "abin.ProtoBuf\"Q\n\013TestMessage\022\017\n\007field_a\030"
    "\001 \002(\004\022\017\n\007field_b\030\002 \002(\004\022\017\n\007field_c\030\003 \003(\004\022"
    "\017\n\007field_d\030\004 \001(\014\"y\n\nMissingOld\0225\n\005which\030"
    "\001 \001(\0162&.LogCabin.ProtoBuf.MissingOld.Tes"
    "tEnum\"4\n\010TestEnum\022\013\n\007UNKNOWN\020Z\022\t\n\005THREE\020"
    "\003\022\007\n\003TWO\020\002\022\007\n\003ONE\020\001\"\266\001\n\nMissingNew\0225\n\005wh"
    "ich\030\001 \001(\0162&.LogCabin.ProtoBuf.MissingNew"
    ".TestEnum\022\021\n\tprimitive\030\002 \001(\004\022+\n\003msg\030\003 \001("
    "\0132\036.LogCabin.ProtoBuf.TestMessage\"1\n\010Tes"
    "tEnum\022\007\n\003ONE\020\001\022\007\n\003TWO\020\002\022\t\n\005THREE\020\003\022\010\n\004FO"
    "UR\020\004", 444);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Protocol/Test/ProtoBufTest.proto", &protobuf_RegisterTypes);
  TestMessage::default_instance_ = new TestMessage();
  MissingOld::default_instance_ = new MissingOld();
  MissingNew::default_instance_ = new MissingNew();
  TestMessage::default_instance_->InitAsDefaultInstance();
  MissingOld::default_instance_->InitAsDefaultInstance();
  MissingNew::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Protocol_2fTest_2fProtoBufTest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Protocol_2fTest_2fProtoBufTest_2eproto {
  StaticDescriptorInitializer_Protocol_2fTest_2fProtoBufTest_2eproto() {
    protobuf_AddDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
  }
} static_descriptor_initializer_Protocol_2fTest_2fProtoBufTest_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TestMessage::kFieldAFieldNumber;
const int TestMessage::kFieldBFieldNumber;
const int TestMessage::kFieldCFieldNumber;
const int TestMessage::kFieldDFieldNumber;
#endif  // !_MSC_VER

TestMessage::TestMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LogCabin.ProtoBuf.TestMessage)
}

void TestMessage::InitAsDefaultInstance() {
}

TestMessage::TestMessage(const TestMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LogCabin.ProtoBuf.TestMessage)
}

void TestMessage::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  field_a_ = GOOGLE_ULONGLONG(0);
  field_b_ = GOOGLE_ULONGLONG(0);
  field_d_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TestMessage::~TestMessage() {
  // @@protoc_insertion_point(destructor:LogCabin.ProtoBuf.TestMessage)
  SharedDtor();
}

void TestMessage::SharedDtor() {
  if (field_d_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete field_d_;
  }
  if (this != default_instance_) {
  }
}

void TestMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestMessage_descriptor_;
}

const TestMessage& TestMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
  return *default_instance_;
}

TestMessage* TestMessage::default_instance_ = NULL;

TestMessage* TestMessage::New() const {
  return new TestMessage;
}

void TestMessage::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<TestMessage*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 11) {
    ZR_(field_a_, field_b_);
    if (has_field_d()) {
      if (field_d_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        field_d_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  field_c_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TestMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LogCabin.ProtoBuf.TestMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 field_a = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &field_a_)));
          set_has_field_a();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_field_b;
        break;
      }

      // required uint64 field_b = 2;
      case 2: {
        if (tag == 16) {
         parse_field_b:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &field_b_)));
          set_has_field_b();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_field_c;
        break;
      }

      // repeated uint64 field_c = 3;
      case 3: {
        if (tag == 24) {
         parse_field_c:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 24, input, this->mutable_field_c())));
        } else if (tag == 26) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_field_c())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_field_c;
        if (input->ExpectTag(34)) goto parse_field_d;
        break;
      }

      // optional bytes field_d = 4;
      case 4: {
        if (tag == 34) {
         parse_field_d:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_field_d()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LogCabin.ProtoBuf.TestMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LogCabin.ProtoBuf.TestMessage)
  return false;
#undef DO_
}

void TestMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LogCabin.ProtoBuf.TestMessage)
  // required uint64 field_a = 1;
  if (has_field_a()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->field_a(), output);
  }

  // required uint64 field_b = 2;
  if (has_field_b()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->field_b(), output);
  }

  // repeated uint64 field_c = 3;
  for (int i = 0; i < this->field_c_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(
      3, this->field_c(i), output);
  }

  // optional bytes field_d = 4;
  if (has_field_d()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->field_d(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LogCabin.ProtoBuf.TestMessage)
}

::google::protobuf::uint8* TestMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LogCabin.ProtoBuf.TestMessage)
  // required uint64 field_a = 1;
  if (has_field_a()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->field_a(), target);
  }

  // required uint64 field_b = 2;
  if (has_field_b()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->field_b(), target);
  }

  // repeated uint64 field_c = 3;
  for (int i = 0; i < this->field_c_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64ToArray(3, this->field_c(i), target);
  }

  // optional bytes field_d = 4;
  if (has_field_d()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->field_d(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LogCabin.ProtoBuf.TestMessage)
  return target;
}

int TestMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 field_a = 1;
    if (has_field_a()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->field_a());
    }

    // required uint64 field_b = 2;
    if (has_field_b()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->field_b());
    }

    // optional bytes field_d = 4;
    if (has_field_d()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->field_d());
    }

  }
  // repeated uint64 field_c = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->field_c_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt64Size(this->field_c(i));
    }
    total_size += 1 * this->field_c_size() + data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TestMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TestMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TestMessage::MergeFrom(const TestMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  field_c_.MergeFrom(from.field_c_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_field_a()) {
      set_field_a(from.field_a());
    }
    if (from.has_field_b()) {
      set_field_b(from.field_b());
    }
    if (from.has_field_d()) {
      set_field_d(from.field_d());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TestMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMessage::CopyFrom(const TestMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void TestMessage::Swap(TestMessage* other) {
  if (other != this) {
    std::swap(field_a_, other->field_a_);
    std::swap(field_b_, other->field_b_);
    field_c_.Swap(&other->field_c_);
    std::swap(field_d_, other->field_d_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TestMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestMessage_descriptor_;
  metadata.reflection = TestMessage_reflection_;
  return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* MissingOld_TestEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MissingOld_TestEnum_descriptor_;
}
bool MissingOld_TestEnum_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 90:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const MissingOld_TestEnum MissingOld::UNKNOWN;
const MissingOld_TestEnum MissingOld::THREE;
const MissingOld_TestEnum MissingOld::TWO;
const MissingOld_TestEnum MissingOld::ONE;
const MissingOld_TestEnum MissingOld::TestEnum_MIN;
const MissingOld_TestEnum MissingOld::TestEnum_MAX;
const int MissingOld::TestEnum_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int MissingOld::kWhichFieldNumber;
#endif  // !_MSC_VER

MissingOld::MissingOld()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LogCabin.ProtoBuf.MissingOld)
}

void MissingOld::InitAsDefaultInstance() {
}

MissingOld::MissingOld(const MissingOld& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LogCabin.ProtoBuf.MissingOld)
}

void MissingOld::SharedCtor() {
  _cached_size_ = 0;
  which_ = 90;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MissingOld::~MissingOld() {
  // @@protoc_insertion_point(destructor:LogCabin.ProtoBuf.MissingOld)
  SharedDtor();
}

void MissingOld::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MissingOld::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MissingOld::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MissingOld_descriptor_;
}

const MissingOld& MissingOld::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
  return *default_instance_;
}

MissingOld* MissingOld::default_instance_ = NULL;

MissingOld* MissingOld::New() const {
  return new MissingOld;
}

void MissingOld::Clear() {
  which_ = 90;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MissingOld::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LogCabin.ProtoBuf.MissingOld)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .LogCabin.ProtoBuf.MissingOld.TestEnum which = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::LogCabin::ProtoBuf::MissingOld_TestEnum_IsValid(value)) {
            set_which(static_cast< ::LogCabin::ProtoBuf::MissingOld_TestEnum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LogCabin.ProtoBuf.MissingOld)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LogCabin.ProtoBuf.MissingOld)
  return false;
#undef DO_
}

void MissingOld::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LogCabin.ProtoBuf.MissingOld)
  // optional .LogCabin.ProtoBuf.MissingOld.TestEnum which = 1;
  if (has_which()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->which(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LogCabin.ProtoBuf.MissingOld)
}

::google::protobuf::uint8* MissingOld::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LogCabin.ProtoBuf.MissingOld)
  // optional .LogCabin.ProtoBuf.MissingOld.TestEnum which = 1;
  if (has_which()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->which(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LogCabin.ProtoBuf.MissingOld)
  return target;
}

int MissingOld::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .LogCabin.ProtoBuf.MissingOld.TestEnum which = 1;
    if (has_which()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->which());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MissingOld::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MissingOld* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MissingOld*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MissingOld::MergeFrom(const MissingOld& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_which()) {
      set_which(from.which());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MissingOld::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MissingOld::CopyFrom(const MissingOld& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MissingOld::IsInitialized() const {

  return true;
}

void MissingOld::Swap(MissingOld* other) {
  if (other != this) {
    std::swap(which_, other->which_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MissingOld::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MissingOld_descriptor_;
  metadata.reflection = MissingOld_reflection_;
  return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* MissingNew_TestEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MissingNew_TestEnum_descriptor_;
}
bool MissingNew_TestEnum_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const MissingNew_TestEnum MissingNew::ONE;
const MissingNew_TestEnum MissingNew::TWO;
const MissingNew_TestEnum MissingNew::THREE;
const MissingNew_TestEnum MissingNew::FOUR;
const MissingNew_TestEnum MissingNew::TestEnum_MIN;
const MissingNew_TestEnum MissingNew::TestEnum_MAX;
const int MissingNew::TestEnum_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int MissingNew::kWhichFieldNumber;
const int MissingNew::kPrimitiveFieldNumber;
const int MissingNew::kMsgFieldNumber;
#endif  // !_MSC_VER

MissingNew::MissingNew()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LogCabin.ProtoBuf.MissingNew)
}

void MissingNew::InitAsDefaultInstance() {
  msg_ = const_cast< ::LogCabin::ProtoBuf::TestMessage*>(&::LogCabin::ProtoBuf::TestMessage::default_instance());
}

MissingNew::MissingNew(const MissingNew& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LogCabin.ProtoBuf.MissingNew)
}

void MissingNew::SharedCtor() {
  _cached_size_ = 0;
  which_ = 1;
  primitive_ = GOOGLE_ULONGLONG(0);
  msg_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MissingNew::~MissingNew() {
  // @@protoc_insertion_point(destructor:LogCabin.ProtoBuf.MissingNew)
  SharedDtor();
}

void MissingNew::SharedDtor() {
  if (this != default_instance_) {
    delete msg_;
  }
}

void MissingNew::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MissingNew::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MissingNew_descriptor_;
}

const MissingNew& MissingNew::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Protocol_2fTest_2fProtoBufTest_2eproto();
  return *default_instance_;
}

MissingNew* MissingNew::default_instance_ = NULL;

MissingNew* MissingNew::New() const {
  return new MissingNew;
}

void MissingNew::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    which_ = 1;
    primitive_ = GOOGLE_ULONGLONG(0);
    if (has_msg()) {
      if (msg_ != NULL) msg_->::LogCabin::ProtoBuf::TestMessage::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MissingNew::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LogCabin.ProtoBuf.MissingNew)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .LogCabin.ProtoBuf.MissingNew.TestEnum which = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::LogCabin::ProtoBuf::MissingNew_TestEnum_IsValid(value)) {
            set_which(static_cast< ::LogCabin::ProtoBuf::MissingNew_TestEnum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_primitive;
        break;
      }

      // optional uint64 primitive = 2;
      case 2: {
        if (tag == 16) {
         parse_primitive:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &primitive_)));
          set_has_primitive();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_msg;
        break;
      }

      // optional .LogCabin.ProtoBuf.TestMessage msg = 3;
      case 3: {
        if (tag == 26) {
         parse_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_msg()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LogCabin.ProtoBuf.MissingNew)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LogCabin.ProtoBuf.MissingNew)
  return false;
#undef DO_
}

void MissingNew::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LogCabin.ProtoBuf.MissingNew)
  // optional .LogCabin.ProtoBuf.MissingNew.TestEnum which = 1;
  if (has_which()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->which(), output);
  }

  // optional uint64 primitive = 2;
  if (has_primitive()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->primitive(), output);
  }

  // optional .LogCabin.ProtoBuf.TestMessage msg = 3;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->msg(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LogCabin.ProtoBuf.MissingNew)
}

::google::protobuf::uint8* MissingNew::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LogCabin.ProtoBuf.MissingNew)
  // optional .LogCabin.ProtoBuf.MissingNew.TestEnum which = 1;
  if (has_which()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->which(), target);
  }

  // optional uint64 primitive = 2;
  if (has_primitive()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->primitive(), target);
  }

  // optional .LogCabin.ProtoBuf.TestMessage msg = 3;
  if (has_msg()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->msg(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LogCabin.ProtoBuf.MissingNew)
  return target;
}

int MissingNew::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .LogCabin.ProtoBuf.MissingNew.TestEnum which = 1;
    if (has_which()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->which());
    }

    // optional uint64 primitive = 2;
    if (has_primitive()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->primitive());
    }

    // optional .LogCabin.ProtoBuf.TestMessage msg = 3;
    if (has_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->msg());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MissingNew::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MissingNew* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MissingNew*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MissingNew::MergeFrom(const MissingNew& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_which()) {
      set_which(from.which());
    }
    if (from.has_primitive()) {
      set_primitive(from.primitive());
    }
    if (from.has_msg()) {
      mutable_msg()->::LogCabin::ProtoBuf::TestMessage::MergeFrom(from.msg());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MissingNew::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MissingNew::CopyFrom(const MissingNew& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MissingNew::IsInitialized() const {

  if (has_msg()) {
    if (!this->msg().IsInitialized()) return false;
  }
  return true;
}

void MissingNew::Swap(MissingNew* other) {
  if (other != this) {
    std::swap(which_, other->which_);
    std::swap(primitive_, other->primitive_);
    std::swap(msg_, other->msg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MissingNew::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MissingNew_descriptor_;
  metadata.reflection = MissingNew_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtoBuf
}  // namespace LogCabin

// @@protoc_insertion_point(global_scope)
