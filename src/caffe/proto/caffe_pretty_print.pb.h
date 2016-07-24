// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: caffe_pretty_print.proto

#ifndef PROTOBUF_caffe_5fpretty_5fprint_2eproto__INCLUDED
#define PROTOBUF_caffe_5fpretty_5fprint_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include "caffe.pb.h"
// @@protoc_insertion_point(includes)

namespace caffe {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_caffe_5fpretty_5fprint_2eproto();
void protobuf_AssignDesc_caffe_5fpretty_5fprint_2eproto();
void protobuf_ShutdownFile_caffe_5fpretty_5fprint_2eproto();

class NetParameterPrettyPrint;

// ===================================================================

class NetParameterPrettyPrint : public ::google::protobuf::Message {
 public:
  NetParameterPrettyPrint();
  virtual ~NetParameterPrettyPrint();

  NetParameterPrettyPrint(const NetParameterPrettyPrint& from);

  inline NetParameterPrettyPrint& operator=(const NetParameterPrettyPrint& from) {
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
  static const NetParameterPrettyPrint& default_instance();

  void Swap(NetParameterPrettyPrint* other);

  // implements Message ----------------------------------------------

  NetParameterPrettyPrint* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NetParameterPrettyPrint& from);
  void MergeFrom(const NetParameterPrettyPrint& from);
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

  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional bool force_backward = 2 [default = false];
  inline bool has_force_backward() const;
  inline void clear_force_backward();
  static const int kForceBackwardFieldNumber = 2;
  inline bool force_backward() const;
  inline void set_force_backward(bool value);

  // repeated string input = 3;
  inline int input_size() const;
  inline void clear_input();
  static const int kInputFieldNumber = 3;
  inline const ::std::string& input(int index) const;
  inline ::std::string* mutable_input(int index);
  inline void set_input(int index, const ::std::string& value);
  inline void set_input(int index, const char* value);
  inline void set_input(int index, const char* value, size_t size);
  inline ::std::string* add_input();
  inline void add_input(const ::std::string& value);
  inline void add_input(const char* value);
  inline void add_input(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& input() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_input();

  // repeated int32 input_dim = 4;
  inline int input_dim_size() const;
  inline void clear_input_dim();
  static const int kInputDimFieldNumber = 4;
  inline ::google::protobuf::int32 input_dim(int index) const;
  inline void set_input_dim(int index, ::google::protobuf::int32 value);
  inline void add_input_dim(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      input_dim() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_input_dim();

  // repeated .caffe.LayerParameter layers = 5;
  inline int layers_size() const;
  inline void clear_layers();
  static const int kLayersFieldNumber = 5;
  inline const ::caffe::LayerParameter& layers(int index) const;
  inline ::caffe::LayerParameter* mutable_layers(int index);
  inline ::caffe::LayerParameter* add_layers();
  inline const ::google::protobuf::RepeatedPtrField< ::caffe::LayerParameter >&
      layers() const;
  inline ::google::protobuf::RepeatedPtrField< ::caffe::LayerParameter >*
      mutable_layers();

  // @@protoc_insertion_point(class_scope:caffe.NetParameterPrettyPrint)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_force_backward();
  inline void clear_has_force_backward();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::google::protobuf::RepeatedPtrField< ::std::string> input_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > input_dim_;
  ::google::protobuf::RepeatedPtrField< ::caffe::LayerParameter > layers_;
  bool force_backward_;
  friend void  protobuf_AddDesc_caffe_5fpretty_5fprint_2eproto();
  friend void protobuf_AssignDesc_caffe_5fpretty_5fprint_2eproto();
  friend void protobuf_ShutdownFile_caffe_5fpretty_5fprint_2eproto();

  void InitAsDefaultInstance();
  static NetParameterPrettyPrint* default_instance_;
};
// ===================================================================


// ===================================================================

// NetParameterPrettyPrint

// optional string name = 1;
inline bool NetParameterPrettyPrint::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NetParameterPrettyPrint::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NetParameterPrettyPrint::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NetParameterPrettyPrint::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& NetParameterPrettyPrint::name() const {
  // @@protoc_insertion_point(field_get:caffe.NetParameterPrettyPrint.name)
  return *name_;
}
inline void NetParameterPrettyPrint::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:caffe.NetParameterPrettyPrint.name)
}
inline void NetParameterPrettyPrint::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:caffe.NetParameterPrettyPrint.name)
}
inline void NetParameterPrettyPrint::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:caffe.NetParameterPrettyPrint.name)
}
inline ::std::string* NetParameterPrettyPrint::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:caffe.NetParameterPrettyPrint.name)
  return name_;
}
inline ::std::string* NetParameterPrettyPrint::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void NetParameterPrettyPrint::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:caffe.NetParameterPrettyPrint.name)
}

// optional bool force_backward = 2 [default = false];
inline bool NetParameterPrettyPrint::has_force_backward() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NetParameterPrettyPrint::set_has_force_backward() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NetParameterPrettyPrint::clear_has_force_backward() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NetParameterPrettyPrint::clear_force_backward() {
  force_backward_ = false;
  clear_has_force_backward();
}
inline bool NetParameterPrettyPrint::force_backward() const {
  // @@protoc_insertion_point(field_get:caffe.NetParameterPrettyPrint.force_backward)
  return force_backward_;
}
inline void NetParameterPrettyPrint::set_force_backward(bool value) {
  set_has_force_backward();
  force_backward_ = value;
  // @@protoc_insertion_point(field_set:caffe.NetParameterPrettyPrint.force_backward)
}

// repeated string input = 3;
inline int NetParameterPrettyPrint::input_size() const {
  return input_.size();
}
inline void NetParameterPrettyPrint::clear_input() {
  input_.Clear();
}
inline const ::std::string& NetParameterPrettyPrint::input(int index) const {
  // @@protoc_insertion_point(field_get:caffe.NetParameterPrettyPrint.input)
  return input_.Get(index);
}
inline ::std::string* NetParameterPrettyPrint::mutable_input(int index) {
  // @@protoc_insertion_point(field_mutable:caffe.NetParameterPrettyPrint.input)
  return input_.Mutable(index);
}
inline void NetParameterPrettyPrint::set_input(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:caffe.NetParameterPrettyPrint.input)
  input_.Mutable(index)->assign(value);
}
inline void NetParameterPrettyPrint::set_input(int index, const char* value) {
  input_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:caffe.NetParameterPrettyPrint.input)
}
inline void NetParameterPrettyPrint::set_input(int index, const char* value, size_t size) {
  input_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:caffe.NetParameterPrettyPrint.input)
}
inline ::std::string* NetParameterPrettyPrint::add_input() {
  return input_.Add();
}
inline void NetParameterPrettyPrint::add_input(const ::std::string& value) {
  input_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:caffe.NetParameterPrettyPrint.input)
}
inline void NetParameterPrettyPrint::add_input(const char* value) {
  input_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:caffe.NetParameterPrettyPrint.input)
}
inline void NetParameterPrettyPrint::add_input(const char* value, size_t size) {
  input_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:caffe.NetParameterPrettyPrint.input)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
NetParameterPrettyPrint::input() const {
  // @@protoc_insertion_point(field_list:caffe.NetParameterPrettyPrint.input)
  return input_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
NetParameterPrettyPrint::mutable_input() {
  // @@protoc_insertion_point(field_mutable_list:caffe.NetParameterPrettyPrint.input)
  return &input_;
}

// repeated int32 input_dim = 4;
inline int NetParameterPrettyPrint::input_dim_size() const {
  return input_dim_.size();
}
inline void NetParameterPrettyPrint::clear_input_dim() {
  input_dim_.Clear();
}
inline ::google::protobuf::int32 NetParameterPrettyPrint::input_dim(int index) const {
  // @@protoc_insertion_point(field_get:caffe.NetParameterPrettyPrint.input_dim)
  return input_dim_.Get(index);
}
inline void NetParameterPrettyPrint::set_input_dim(int index, ::google::protobuf::int32 value) {
  input_dim_.Set(index, value);
  // @@protoc_insertion_point(field_set:caffe.NetParameterPrettyPrint.input_dim)
}
inline void NetParameterPrettyPrint::add_input_dim(::google::protobuf::int32 value) {
  input_dim_.Add(value);
  // @@protoc_insertion_point(field_add:caffe.NetParameterPrettyPrint.input_dim)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
NetParameterPrettyPrint::input_dim() const {
  // @@protoc_insertion_point(field_list:caffe.NetParameterPrettyPrint.input_dim)
  return input_dim_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
NetParameterPrettyPrint::mutable_input_dim() {
  // @@protoc_insertion_point(field_mutable_list:caffe.NetParameterPrettyPrint.input_dim)
  return &input_dim_;
}

// repeated .caffe.LayerParameter layers = 5;
inline int NetParameterPrettyPrint::layers_size() const {
  return layers_.size();
}
inline void NetParameterPrettyPrint::clear_layers() {
  layers_.Clear();
}
inline const ::caffe::LayerParameter& NetParameterPrettyPrint::layers(int index) const {
  // @@protoc_insertion_point(field_get:caffe.NetParameterPrettyPrint.layers)
  return layers_.Get(index);
}
inline ::caffe::LayerParameter* NetParameterPrettyPrint::mutable_layers(int index) {
  // @@protoc_insertion_point(field_mutable:caffe.NetParameterPrettyPrint.layers)
  return layers_.Mutable(index);
}
inline ::caffe::LayerParameter* NetParameterPrettyPrint::add_layers() {
  // @@protoc_insertion_point(field_add:caffe.NetParameterPrettyPrint.layers)
  return layers_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::caffe::LayerParameter >&
NetParameterPrettyPrint::layers() const {
  // @@protoc_insertion_point(field_list:caffe.NetParameterPrettyPrint.layers)
  return layers_;
}
inline ::google::protobuf::RepeatedPtrField< ::caffe::LayerParameter >*
NetParameterPrettyPrint::mutable_layers() {
  // @@protoc_insertion_point(field_mutable_list:caffe.NetParameterPrettyPrint.layers)
  return &layers_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace caffe

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_caffe_5fpretty_5fprint_2eproto__INCLUDED
