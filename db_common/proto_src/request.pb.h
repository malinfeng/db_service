// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request.proto

#ifndef PROTOBUF_request_2eproto__INCLUDED
#define PROTOBUF_request_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2007000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)

namespace proto {
namespace db {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_request_2eproto();
void protobuf_AssignDesc_request_2eproto();
void protobuf_ShutdownFile_request_2eproto();

class request;

// ===================================================================

class request : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.db.request) */ {
 public:
  request();
  virtual ~request();

  request(const request& from);

  inline request& operator=(const request& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const request& default_instance();

  void Swap(request* other);

  // implements Message ----------------------------------------------

  inline request* New() const { return New(NULL); }

  request* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const request& from);
  void MergeFrom(const request& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint64 session_id = 1;
  bool has_session_id() const;
  void clear_session_id();
  static const int kSessionIdFieldNumber = 1;
  ::google::protobuf::uint64 session_id() const;
  void set_session_id(::google::protobuf::uint64 value);

  // required uint32 associate_id = 2;
  bool has_associate_id() const;
  void clear_associate_id();
  static const int kAssociateIdFieldNumber = 2;
  ::google::protobuf::uint32 associate_id() const;
  void set_associate_id(::google::protobuf::uint32 value);

  // required uint32 type = 3;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::google::protobuf::uint32 type() const;
  void set_type(::google::protobuf::uint32 value);

  // required uint32 timeout = 4;
  bool has_timeout() const;
  void clear_timeout();
  static const int kTimeoutFieldNumber = 4;
  ::google::protobuf::uint32 timeout() const;
  void set_timeout(::google::protobuf::uint32 value);

  // required .google.protobuf.Any content = 5;
  bool has_content() const;
  void clear_content();
  static const int kContentFieldNumber = 5;
  const ::google::protobuf::Any& content() const;
  ::google::protobuf::Any* mutable_content();
  ::google::protobuf::Any* release_content();
  void set_allocated_content(::google::protobuf::Any* content);

  // @@protoc_insertion_point(class_scope:proto.db.request)
 private:
  inline void set_has_session_id();
  inline void clear_has_session_id();
  inline void set_has_associate_id();
  inline void clear_has_associate_id();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_timeout();
  inline void clear_has_timeout();
  inline void set_has_content();
  inline void clear_has_content();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 session_id_;
  ::google::protobuf::uint32 associate_id_;
  ::google::protobuf::uint32 type_;
  ::google::protobuf::Any* content_;
  ::google::protobuf::uint32 timeout_;
  friend void  protobuf_AddDesc_request_2eproto();
  friend void protobuf_AssignDesc_request_2eproto();
  friend void protobuf_ShutdownFile_request_2eproto();

  void InitAsDefaultInstance();
  static request* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// request

// required uint64 session_id = 1;
inline bool request::has_session_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void request::set_has_session_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void request::clear_has_session_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void request::clear_session_id() {
  session_id_ = GOOGLE_ULONGLONG(0);
  clear_has_session_id();
}
inline ::google::protobuf::uint64 request::session_id() const {
  // @@protoc_insertion_point(field_get:proto.db.request.session_id)
  return session_id_;
}
inline void request::set_session_id(::google::protobuf::uint64 value) {
  set_has_session_id();
  session_id_ = value;
  // @@protoc_insertion_point(field_set:proto.db.request.session_id)
}

// required uint32 associate_id = 2;
inline bool request::has_associate_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void request::set_has_associate_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void request::clear_has_associate_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void request::clear_associate_id() {
  associate_id_ = 0u;
  clear_has_associate_id();
}
inline ::google::protobuf::uint32 request::associate_id() const {
  // @@protoc_insertion_point(field_get:proto.db.request.associate_id)
  return associate_id_;
}
inline void request::set_associate_id(::google::protobuf::uint32 value) {
  set_has_associate_id();
  associate_id_ = value;
  // @@protoc_insertion_point(field_set:proto.db.request.associate_id)
}

// required uint32 type = 3;
inline bool request::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void request::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void request::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void request::clear_type() {
  type_ = 0u;
  clear_has_type();
}
inline ::google::protobuf::uint32 request::type() const {
  // @@protoc_insertion_point(field_get:proto.db.request.type)
  return type_;
}
inline void request::set_type(::google::protobuf::uint32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:proto.db.request.type)
}

// required uint32 timeout = 4;
inline bool request::has_timeout() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void request::set_has_timeout() {
  _has_bits_[0] |= 0x00000008u;
}
inline void request::clear_has_timeout() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void request::clear_timeout() {
  timeout_ = 0u;
  clear_has_timeout();
}
inline ::google::protobuf::uint32 request::timeout() const {
  // @@protoc_insertion_point(field_get:proto.db.request.timeout)
  return timeout_;
}
inline void request::set_timeout(::google::protobuf::uint32 value) {
  set_has_timeout();
  timeout_ = value;
  // @@protoc_insertion_point(field_set:proto.db.request.timeout)
}

// required .google.protobuf.Any content = 5;
inline bool request::has_content() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void request::set_has_content() {
  _has_bits_[0] |= 0x00000010u;
}
inline void request::clear_has_content() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void request::clear_content() {
  if (content_ != NULL) content_->::google::protobuf::Any::Clear();
  clear_has_content();
}
inline const ::google::protobuf::Any& request::content() const {
  // @@protoc_insertion_point(field_get:proto.db.request.content)
  return content_ != NULL ? *content_ : *default_instance_->content_;
}
inline ::google::protobuf::Any* request::mutable_content() {
  set_has_content();
  if (content_ == NULL) {
    content_ = new ::google::protobuf::Any;
  }
  // @@protoc_insertion_point(field_mutable:proto.db.request.content)
  return content_;
}
inline ::google::protobuf::Any* request::release_content() {
  // @@protoc_insertion_point(field_release:proto.db.request.content)
  clear_has_content();
  ::google::protobuf::Any* temp = content_;
  content_ = NULL;
  return temp;
}
inline void request::set_allocated_content(::google::protobuf::Any* content) {
  delete content_;
  content_ = content;
  if (content) {
    set_has_content();
  } else {
    clear_has_content();
  }
  // @@protoc_insertion_point(field_set_allocated:proto.db.request.content)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace db
}  // namespace proto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_request_2eproto__INCLUDED
