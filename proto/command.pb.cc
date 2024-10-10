// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: command.proto

#include "command.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace fira_message {
namespace sim_to_ref {
constexpr Command::Command(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : id_(0u)
  , yellowteam_(false)
  , wheel_left_(0)
  , wheel_right_(0){}
struct CommandDefaultTypeInternal {
  constexpr CommandDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CommandDefaultTypeInternal() {}
  union {
    Command _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CommandDefaultTypeInternal _Command_default_instance_;
constexpr Commands::Commands(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : robot_commands_(){}
struct CommandsDefaultTypeInternal {
  constexpr CommandsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CommandsDefaultTypeInternal() {}
  union {
    Commands _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CommandsDefaultTypeInternal _Commands_default_instance_;
}  // namespace sim_to_ref
}  // namespace fira_message
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_command_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_command_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_command_2eproto = nullptr;

const uint32_t TableStruct_command_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::fira_message::sim_to_ref::Command, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::fira_message::sim_to_ref::Command, id_),
  PROTOBUF_FIELD_OFFSET(::fira_message::sim_to_ref::Command, yellowteam_),
  PROTOBUF_FIELD_OFFSET(::fira_message::sim_to_ref::Command, wheel_left_),
  PROTOBUF_FIELD_OFFSET(::fira_message::sim_to_ref::Command, wheel_right_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::fira_message::sim_to_ref::Commands, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::fira_message::sim_to_ref::Commands, robot_commands_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::fira_message::sim_to_ref::Command)},
  { 10, -1, -1, sizeof(::fira_message::sim_to_ref::Commands)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::fira_message::sim_to_ref::_Command_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::fira_message::sim_to_ref::_Commands_default_instance_),
};

const char descriptor_table_protodef_command_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rcommand.proto\022\027fira_message.sim_to_ref"
  "\"R\n\007Command\022\n\n\002id\030\001 \001(\r\022\022\n\nyellowteam\030\002 "
  "\001(\010\022\022\n\nwheel_left\030\006 \001(\001\022\023\n\013wheel_right\030\007"
  " \001(\001\"D\n\010Commands\0228\n\016robot_commands\030\001 \003(\013"
  "2 .fira_message.sim_to_ref.Commandb\006prot"
  "o3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_command_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_command_2eproto = {
  false, false, 202, descriptor_table_protodef_command_2eproto, "command.proto", 
  &descriptor_table_command_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_command_2eproto::offsets,
  file_level_metadata_command_2eproto, file_level_enum_descriptors_command_2eproto, file_level_service_descriptors_command_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_command_2eproto_getter() {
  return &descriptor_table_command_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_command_2eproto(&descriptor_table_command_2eproto);
namespace fira_message {
namespace sim_to_ref {

// ===================================================================

class Command::_Internal {
 public:
};

Command::Command(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:fira_message.sim_to_ref.Command)
}
Command::Command(const Command& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&wheel_right_) -
    reinterpret_cast<char*>(&id_)) + sizeof(wheel_right_));
  // @@protoc_insertion_point(copy_constructor:fira_message.sim_to_ref.Command)
}

inline void Command::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&wheel_right_) -
    reinterpret_cast<char*>(&id_)) + sizeof(wheel_right_));
}

Command::~Command() {
  // @@protoc_insertion_point(destructor:fira_message.sim_to_ref.Command)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Command::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Command::ArenaDtor(void* object) {
  Command* _this = reinterpret_cast< Command* >(object);
  (void)_this;
}
void Command::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Command::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Command::Clear() {
// @@protoc_insertion_point(message_clear_start:fira_message.sim_to_ref.Command)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&wheel_right_) -
      reinterpret_cast<char*>(&id_)) + sizeof(wheel_right_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Command::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool yellowteam = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          yellowteam_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // double wheel_left = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 49)) {
          wheel_left_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // double wheel_right = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 57)) {
          wheel_right_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Command::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:fira_message.sim_to_ref.Command)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // bool yellowteam = 2;
  if (this->_internal_yellowteam() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_yellowteam(), target);
  }

  // double wheel_left = 6;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_wheel_left = this->_internal_wheel_left();
  uint64_t raw_wheel_left;
  memcpy(&raw_wheel_left, &tmp_wheel_left, sizeof(tmp_wheel_left));
  if (raw_wheel_left != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_wheel_left(), target);
  }

  // double wheel_right = 7;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_wheel_right = this->_internal_wheel_right();
  uint64_t raw_wheel_right;
  memcpy(&raw_wheel_right, &tmp_wheel_right, sizeof(tmp_wheel_right));
  if (raw_wheel_right != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(7, this->_internal_wheel_right(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fira_message.sim_to_ref.Command)
  return target;
}

size_t Command::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fira_message.sim_to_ref.Command)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_id());
  }

  // bool yellowteam = 2;
  if (this->_internal_yellowteam() != 0) {
    total_size += 1 + 1;
  }

  // double wheel_left = 6;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_wheel_left = this->_internal_wheel_left();
  uint64_t raw_wheel_left;
  memcpy(&raw_wheel_left, &tmp_wheel_left, sizeof(tmp_wheel_left));
  if (raw_wheel_left != 0) {
    total_size += 1 + 8;
  }

  // double wheel_right = 7;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_wheel_right = this->_internal_wheel_right();
  uint64_t raw_wheel_right;
  memcpy(&raw_wheel_right, &tmp_wheel_right, sizeof(tmp_wheel_right));
  if (raw_wheel_right != 0) {
    total_size += 1 + 8;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Command::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Command::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Command::GetClassData() const { return &_class_data_; }

void Command::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Command *>(to)->MergeFrom(
      static_cast<const Command &>(from));
}


void Command::MergeFrom(const Command& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fira_message.sim_to_ref.Command)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_id() != 0) {
    _internal_set_id(from._internal_id());
  }
  if (from._internal_yellowteam() != 0) {
    _internal_set_yellowteam(from._internal_yellowteam());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_wheel_left = from._internal_wheel_left();
  uint64_t raw_wheel_left;
  memcpy(&raw_wheel_left, &tmp_wheel_left, sizeof(tmp_wheel_left));
  if (raw_wheel_left != 0) {
    _internal_set_wheel_left(from._internal_wheel_left());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_wheel_right = from._internal_wheel_right();
  uint64_t raw_wheel_right;
  memcpy(&raw_wheel_right, &tmp_wheel_right, sizeof(tmp_wheel_right));
  if (raw_wheel_right != 0) {
    _internal_set_wheel_right(from._internal_wheel_right());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Command::CopyFrom(const Command& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fira_message.sim_to_ref.Command)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Command::IsInitialized() const {
  return true;
}

void Command::InternalSwap(Command* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Command, wheel_right_)
      + sizeof(Command::wheel_right_)
      - PROTOBUF_FIELD_OFFSET(Command, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Command::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_command_2eproto_getter, &descriptor_table_command_2eproto_once,
      file_level_metadata_command_2eproto[0]);
}

// ===================================================================

class Commands::_Internal {
 public:
};

Commands::Commands(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  robot_commands_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:fira_message.sim_to_ref.Commands)
}
Commands::Commands(const Commands& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      robot_commands_(from.robot_commands_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:fira_message.sim_to_ref.Commands)
}

inline void Commands::SharedCtor() {
}

Commands::~Commands() {
  // @@protoc_insertion_point(destructor:fira_message.sim_to_ref.Commands)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Commands::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Commands::ArenaDtor(void* object) {
  Commands* _this = reinterpret_cast< Commands* >(object);
  (void)_this;
}
void Commands::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Commands::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Commands::Clear() {
// @@protoc_insertion_point(message_clear_start:fira_message.sim_to_ref.Commands)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  robot_commands_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Commands::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .fira_message.sim_to_ref.Command robot_commands = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_robot_commands(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Commands::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:fira_message.sim_to_ref.Commands)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .fira_message.sim_to_ref.Command robot_commands = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_robot_commands_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_robot_commands(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fira_message.sim_to_ref.Commands)
  return target;
}

size_t Commands::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fira_message.sim_to_ref.Commands)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .fira_message.sim_to_ref.Command robot_commands = 1;
  total_size += 1UL * this->_internal_robot_commands_size();
  for (const auto& msg : this->robot_commands_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Commands::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Commands::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Commands::GetClassData() const { return &_class_data_; }

void Commands::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Commands *>(to)->MergeFrom(
      static_cast<const Commands &>(from));
}


void Commands::MergeFrom(const Commands& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fira_message.sim_to_ref.Commands)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  robot_commands_.MergeFrom(from.robot_commands_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Commands::CopyFrom(const Commands& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fira_message.sim_to_ref.Commands)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Commands::IsInitialized() const {
  return true;
}

void Commands::InternalSwap(Commands* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  robot_commands_.InternalSwap(&other->robot_commands_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Commands::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_command_2eproto_getter, &descriptor_table_command_2eproto_once,
      file_level_metadata_command_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace sim_to_ref
}  // namespace fira_message
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::fira_message::sim_to_ref::Command* Arena::CreateMaybeMessage< ::fira_message::sim_to_ref::Command >(Arena* arena) {
  return Arena::CreateMessageInternal< ::fira_message::sim_to_ref::Command >(arena);
}
template<> PROTOBUF_NOINLINE ::fira_message::sim_to_ref::Commands* Arena::CreateMaybeMessage< ::fira_message::sim_to_ref::Commands >(Arena* arena) {
  return Arena::CreateMessageInternal< ::fira_message::sim_to_ref::Commands >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
