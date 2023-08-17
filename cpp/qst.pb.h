// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: qst.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_qst_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_qst_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4023000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4023004 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_bases.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_qst_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_qst_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_qst_2eproto;
namespace qst {
class AppInfo;
struct AppInfoDefaultTypeInternal;
extern AppInfoDefaultTypeInternal _AppInfo_default_instance_;
class Empty;
struct EmptyDefaultTypeInternal;
extern EmptyDefaultTypeInternal _Empty_default_instance_;
class Input;
struct InputDefaultTypeInternal;
extern InputDefaultTypeInternal _Input_default_instance_;
}  // namespace qst
PROTOBUF_NAMESPACE_OPEN
template <>
::qst::AppInfo* Arena::CreateMaybeMessage<::qst::AppInfo>(Arena*);
template <>
::qst::Empty* Arena::CreateMaybeMessage<::qst::Empty>(Arena*);
template <>
::qst::Input* Arena::CreateMaybeMessage<::qst::Input>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace qst {

// ===================================================================


// -------------------------------------------------------------------

class Input final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:qst.Input) */ {
 public:
  inline Input() : Input(nullptr) {}
  ~Input() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Input(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Input(const Input& from);
  Input(Input&& from) noexcept
    : Input() {
    *this = ::std::move(from);
  }

  inline Input& operator=(const Input& from) {
    CopyFrom(from);
    return *this;
  }
  inline Input& operator=(Input&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Input& default_instance() {
    return *internal_default_instance();
  }
  static inline const Input* internal_default_instance() {
    return reinterpret_cast<const Input*>(
               &_Input_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Input& a, Input& b) {
    a.Swap(&b);
  }
  inline void Swap(Input* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Input* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Input* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Input>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Input& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Input& from) {
    Input::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Input* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "qst.Input";
  }
  protected:
  explicit Input(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStrFieldNumber = 1,
  };
  // string str = 1;
  void clear_str() ;
  const std::string& str() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_str(Arg_&& arg, Args_... args);
  std::string* mutable_str();
  PROTOBUF_NODISCARD std::string* release_str();
  void set_allocated_str(std::string* ptr);

  private:
  const std::string& _internal_str() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_str(
      const std::string& value);
  std::string* _internal_mutable_str();

  public:
  // @@protoc_insertion_point(class_scope:qst.Input)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr str_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_qst_2eproto;
};// -------------------------------------------------------------------

class AppInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:qst.AppInfo) */ {
 public:
  inline AppInfo() : AppInfo(nullptr) {}
  ~AppInfo() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR AppInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AppInfo(const AppInfo& from);
  AppInfo(AppInfo&& from) noexcept
    : AppInfo() {
    *this = ::std::move(from);
  }

  inline AppInfo& operator=(const AppInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline AppInfo& operator=(AppInfo&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AppInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const AppInfo* internal_default_instance() {
    return reinterpret_cast<const AppInfo*>(
               &_AppInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(AppInfo& a, AppInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(AppInfo* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AppInfo* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AppInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AppInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AppInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const AppInfo& from) {
    AppInfo::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AppInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "qst.AppInfo";
  }
  protected:
  explicit AppInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kExecFieldNumber = 2,
  };
  // string name = 1;
  void clear_name() ;
  const std::string& name() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* ptr);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // string exec = 2;
  void clear_exec() ;
  const std::string& exec() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_exec(Arg_&& arg, Args_... args);
  std::string* mutable_exec();
  PROTOBUF_NODISCARD std::string* release_exec();
  void set_allocated_exec(std::string* ptr);

  private:
  const std::string& _internal_exec() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_exec(
      const std::string& value);
  std::string* _internal_mutable_exec();

  public:
  // @@protoc_insertion_point(class_scope:qst.AppInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr exec_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_qst_2eproto;
};// -------------------------------------------------------------------

class Empty final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:qst.Empty) */ {
 public:
  inline Empty() : Empty(nullptr) {}
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Empty(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Empty(const Empty& from);
  Empty(Empty&& from) noexcept
    : Empty() {
    *this = ::std::move(from);
  }

  inline Empty& operator=(const Empty& from) {
    CopyFrom(from);
    return *this;
  }
  inline Empty& operator=(Empty&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Empty& default_instance() {
    return *internal_default_instance();
  }
  static inline const Empty* internal_default_instance() {
    return reinterpret_cast<const Empty*>(
               &_Empty_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Empty& a, Empty& b) {
    a.Swap(&b);
  }
  inline void Swap(Empty* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Empty* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Empty* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Empty>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const Empty& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const Empty& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "qst.Empty";
  }
  protected:
  explicit Empty(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:qst.Empty)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_qst_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Input

// string str = 1;
inline void Input::clear_str() {
  _impl_.str_.ClearToEmpty();
}
inline const std::string& Input::str() const {
  // @@protoc_insertion_point(field_get:qst.Input.str)
  return _internal_str();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Input::set_str(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.str_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:qst.Input.str)
}
inline std::string* Input::mutable_str() {
  std::string* _s = _internal_mutable_str();
  // @@protoc_insertion_point(field_mutable:qst.Input.str)
  return _s;
}
inline const std::string& Input::_internal_str() const {
  return _impl_.str_.Get();
}
inline void Input::_internal_set_str(const std::string& value) {
  ;


  _impl_.str_.Set(value, GetArenaForAllocation());
}
inline std::string* Input::_internal_mutable_str() {
  ;
  return _impl_.str_.Mutable( GetArenaForAllocation());
}
inline std::string* Input::release_str() {
  // @@protoc_insertion_point(field_release:qst.Input.str)
  return _impl_.str_.Release();
}
inline void Input::set_allocated_str(std::string* value) {
  _impl_.str_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.str_.IsDefault()) {
          _impl_.str_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:qst.Input.str)
}

// -------------------------------------------------------------------

// AppInfo

// string name = 1;
inline void AppInfo::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& AppInfo::name() const {
  // @@protoc_insertion_point(field_get:qst.AppInfo.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void AppInfo::set_name(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:qst.AppInfo.name)
}
inline std::string* AppInfo::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:qst.AppInfo.name)
  return _s;
}
inline const std::string& AppInfo::_internal_name() const {
  return _impl_.name_.Get();
}
inline void AppInfo::_internal_set_name(const std::string& value) {
  ;


  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* AppInfo::_internal_mutable_name() {
  ;
  return _impl_.name_.Mutable( GetArenaForAllocation());
}
inline std::string* AppInfo::release_name() {
  // @@protoc_insertion_point(field_release:qst.AppInfo.name)
  return _impl_.name_.Release();
}
inline void AppInfo::set_allocated_name(std::string* value) {
  _impl_.name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:qst.AppInfo.name)
}

// string exec = 2;
inline void AppInfo::clear_exec() {
  _impl_.exec_.ClearToEmpty();
}
inline const std::string& AppInfo::exec() const {
  // @@protoc_insertion_point(field_get:qst.AppInfo.exec)
  return _internal_exec();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void AppInfo::set_exec(Arg_&& arg,
                                                     Args_... args) {
  ;
  _impl_.exec_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:qst.AppInfo.exec)
}
inline std::string* AppInfo::mutable_exec() {
  std::string* _s = _internal_mutable_exec();
  // @@protoc_insertion_point(field_mutable:qst.AppInfo.exec)
  return _s;
}
inline const std::string& AppInfo::_internal_exec() const {
  return _impl_.exec_.Get();
}
inline void AppInfo::_internal_set_exec(const std::string& value) {
  ;


  _impl_.exec_.Set(value, GetArenaForAllocation());
}
inline std::string* AppInfo::_internal_mutable_exec() {
  ;
  return _impl_.exec_.Mutable( GetArenaForAllocation());
}
inline std::string* AppInfo::release_exec() {
  // @@protoc_insertion_point(field_release:qst.AppInfo.exec)
  return _impl_.exec_.Release();
}
inline void AppInfo::set_allocated_exec(std::string* value) {
  _impl_.exec_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.exec_.IsDefault()) {
          _impl_.exec_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:qst.AppInfo.exec)
}

// -------------------------------------------------------------------

// Empty

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace qst


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_qst_2eproto_2epb_2eh
