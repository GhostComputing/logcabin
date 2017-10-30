// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protocol/Snapshot/SnapshotMetadata.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Protocol/Snapshot/SnapshotMetadata.pb.h"

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
namespace Server {
namespace SnapshotMetadata {

namespace {

const ::google::protobuf::Descriptor* Header_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Header_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Protocol_2fSnapshot_2fSnapshotMetadata_2eproto() {
  protobuf_AddDesc_Protocol_2fSnapshot_2fSnapshotMetadata_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Protocol/Snapshot/SnapshotMetadata.proto");
  GOOGLE_CHECK(file != NULL);
  Header_descriptor_ = file->message_type(0);
  static const int Header_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, last_included_index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, last_included_term_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, last_cluster_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, configuration_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, configuration_index_),
  };
  Header_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Header_descriptor_,
      Header::default_instance_,
      Header_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Header));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Protocol_2fSnapshot_2fSnapshotMetadata_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Header_descriptor_, &Header::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Protocol_2fSnapshot_2fSnapshotMetadata_2eproto() {
  delete Header::default_instance_;
  delete Header_reflection_;
}

void protobuf_AddDesc_Protocol_2fSnapshot_2fSnapshotMetadata_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::LogCabin::Protocol::Raft::protobuf_AddDesc_Protocol_2fRaft_2fRaft_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n(Protocol/Snapshot/SnapshotMetadata.pro"
    "to\022 LogCabin.Server.SnapshotMetadata\032\030Pr"
    "otocol/Raft/Raft.proto\"\267\001\n\006Header\022\033\n\023las"
    "t_included_index\030\001 \002(\004\022\032\n\022last_included_"
    "term\030\004 \002(\004\022\031\n\021last_cluster_time\030\005 \001(\004\022<\n"
    "\rconfiguration\030\002 \001(\0132%.LogCabin.Protocol"
    ".Raft.Configuration\022\033\n\023configuration_ind"
    "ex\030\003 \001(\004", 288);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Protocol/Snapshot/SnapshotMetadata.proto", &protobuf_RegisterTypes);
  Header::default_instance_ = new Header();
  Header::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Protocol_2fSnapshot_2fSnapshotMetadata_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Protocol_2fSnapshot_2fSnapshotMetadata_2eproto {
  StaticDescriptorInitializer_Protocol_2fSnapshot_2fSnapshotMetadata_2eproto() {
    protobuf_AddDesc_Protocol_2fSnapshot_2fSnapshotMetadata_2eproto();
  }
} static_descriptor_initializer_Protocol_2fSnapshot_2fSnapshotMetadata_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Header::kLastIncludedIndexFieldNumber;
const int Header::kLastIncludedTermFieldNumber;
const int Header::kLastClusterTimeFieldNumber;
const int Header::kConfigurationFieldNumber;
const int Header::kConfigurationIndexFieldNumber;
#endif  // !_MSC_VER

Header::Header()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LogCabin.Server.SnapshotMetadata.Header)
}

void Header::InitAsDefaultInstance() {
  configuration_ = const_cast< ::LogCabin::Protocol::Raft::Configuration*>(&::LogCabin::Protocol::Raft::Configuration::default_instance());
}

Header::Header(const Header& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LogCabin.Server.SnapshotMetadata.Header)
}

void Header::SharedCtor() {
  _cached_size_ = 0;
  last_included_index_ = GOOGLE_ULONGLONG(0);
  last_included_term_ = GOOGLE_ULONGLONG(0);
  last_cluster_time_ = GOOGLE_ULONGLONG(0);
  configuration_ = NULL;
  configuration_index_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Header::~Header() {
  // @@protoc_insertion_point(destructor:LogCabin.Server.SnapshotMetadata.Header)
  SharedDtor();
}

void Header::SharedDtor() {
  if (this != default_instance_) {
    delete configuration_;
  }
}

void Header::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Header::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Header_descriptor_;
}

const Header& Header::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Protocol_2fSnapshot_2fSnapshotMetadata_2eproto();
  return *default_instance_;
}

Header* Header::default_instance_ = NULL;

Header* Header::New() const {
  return new Header;
}

void Header::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Header*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(last_included_index_, last_cluster_time_);
    if (has_configuration()) {
      if (configuration_ != NULL) configuration_->::LogCabin::Protocol::Raft::Configuration::Clear();
    }
    configuration_index_ = GOOGLE_ULONGLONG(0);
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Header::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LogCabin.Server.SnapshotMetadata.Header)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 last_included_index = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &last_included_index_)));
          set_has_last_included_index();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_configuration;
        break;
      }

      // optional .LogCabin.Protocol.Raft.Configuration configuration = 2;
      case 2: {
        if (tag == 18) {
         parse_configuration:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_configuration()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_configuration_index;
        break;
      }

      // optional uint64 configuration_index = 3;
      case 3: {
        if (tag == 24) {
         parse_configuration_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &configuration_index_)));
          set_has_configuration_index();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_last_included_term;
        break;
      }

      // required uint64 last_included_term = 4;
      case 4: {
        if (tag == 32) {
         parse_last_included_term:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &last_included_term_)));
          set_has_last_included_term();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_last_cluster_time;
        break;
      }

      // optional uint64 last_cluster_time = 5;
      case 5: {
        if (tag == 40) {
         parse_last_cluster_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &last_cluster_time_)));
          set_has_last_cluster_time();
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
  // @@protoc_insertion_point(parse_success:LogCabin.Server.SnapshotMetadata.Header)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LogCabin.Server.SnapshotMetadata.Header)
  return false;
#undef DO_
}

void Header::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LogCabin.Server.SnapshotMetadata.Header)
  // required uint64 last_included_index = 1;
  if (has_last_included_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->last_included_index(), output);
  }

  // optional .LogCabin.Protocol.Raft.Configuration configuration = 2;
  if (has_configuration()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->configuration(), output);
  }

  // optional uint64 configuration_index = 3;
  if (has_configuration_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->configuration_index(), output);
  }

  // required uint64 last_included_term = 4;
  if (has_last_included_term()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->last_included_term(), output);
  }

  // optional uint64 last_cluster_time = 5;
  if (has_last_cluster_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->last_cluster_time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LogCabin.Server.SnapshotMetadata.Header)
}

::google::protobuf::uint8* Header::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LogCabin.Server.SnapshotMetadata.Header)
  // required uint64 last_included_index = 1;
  if (has_last_included_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->last_included_index(), target);
  }

  // optional .LogCabin.Protocol.Raft.Configuration configuration = 2;
  if (has_configuration()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->configuration(), target);
  }

  // optional uint64 configuration_index = 3;
  if (has_configuration_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->configuration_index(), target);
  }

  // required uint64 last_included_term = 4;
  if (has_last_included_term()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->last_included_term(), target);
  }

  // optional uint64 last_cluster_time = 5;
  if (has_last_cluster_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->last_cluster_time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LogCabin.Server.SnapshotMetadata.Header)
  return target;
}

int Header::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 last_included_index = 1;
    if (has_last_included_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->last_included_index());
    }

    // required uint64 last_included_term = 4;
    if (has_last_included_term()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->last_included_term());
    }

    // optional uint64 last_cluster_time = 5;
    if (has_last_cluster_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->last_cluster_time());
    }

    // optional .LogCabin.Protocol.Raft.Configuration configuration = 2;
    if (has_configuration()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->configuration());
    }

    // optional uint64 configuration_index = 3;
    if (has_configuration_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->configuration_index());
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

void Header::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Header* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Header*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Header::MergeFrom(const Header& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_last_included_index()) {
      set_last_included_index(from.last_included_index());
    }
    if (from.has_last_included_term()) {
      set_last_included_term(from.last_included_term());
    }
    if (from.has_last_cluster_time()) {
      set_last_cluster_time(from.last_cluster_time());
    }
    if (from.has_configuration()) {
      mutable_configuration()->::LogCabin::Protocol::Raft::Configuration::MergeFrom(from.configuration());
    }
    if (from.has_configuration_index()) {
      set_configuration_index(from.configuration_index());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Header::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header::CopyFrom(const Header& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_configuration()) {
    if (!this->configuration().IsInitialized()) return false;
  }
  return true;
}

void Header::Swap(Header* other) {
  if (other != this) {
    std::swap(last_included_index_, other->last_included_index_);
    std::swap(last_included_term_, other->last_included_term_);
    std::swap(last_cluster_time_, other->last_cluster_time_);
    std::swap(configuration_, other->configuration_);
    std::swap(configuration_index_, other->configuration_index_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Header::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Header_descriptor_;
  metadata.reflection = Header_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace SnapshotMetadata
}  // namespace Server
}  // namespace LogCabin

// @@protoc_insertion_point(global_scope)