// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/instance.proto

#ifndef PROTOBUF_proto_2finstance_2eproto__INCLUDED
#define PROTOBUF_proto_2finstance_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include "proto/range.pb.h"
// @@protoc_insertion_point(includes)

namespace PS {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_proto_2finstance_2eproto();
void protobuf_AssignDesc_proto_2finstance_2eproto();
void protobuf_ShutdownFile_proto_2finstance_2eproto();

class InstanceInfo;
class FeatureGroupInfo;
class Instance;

enum InstanceInfo_LabelType {
  InstanceInfo_LabelType_EMPTY = 1,
  InstanceInfo_LabelType_BINARY = 2,
  InstanceInfo_LabelType_MULTICLASS = 3,
  InstanceInfo_LabelType_CONTINUOUS = 4
};
bool InstanceInfo_LabelType_IsValid(int value);
const InstanceInfo_LabelType InstanceInfo_LabelType_LabelType_MIN = InstanceInfo_LabelType_EMPTY;
const InstanceInfo_LabelType InstanceInfo_LabelType_LabelType_MAX = InstanceInfo_LabelType_CONTINUOUS;
const int InstanceInfo_LabelType_LabelType_ARRAYSIZE = InstanceInfo_LabelType_LabelType_MAX + 1;

const ::google::protobuf::EnumDescriptor* InstanceInfo_LabelType_descriptor();
inline const ::std::string& InstanceInfo_LabelType_Name(InstanceInfo_LabelType value) {
  return ::google::protobuf::internal::NameOfEnum(
    InstanceInfo_LabelType_descriptor(), value);
}
inline bool InstanceInfo_LabelType_Parse(
    const ::std::string& name, InstanceInfo_LabelType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<InstanceInfo_LabelType>(
    InstanceInfo_LabelType_descriptor(), name, value);
}
enum FeatureGroupInfo_FeatureType {
  FeatureGroupInfo_FeatureType_DENSE = 1,
  FeatureGroupInfo_FeatureType_SPARSE = 2,
  FeatureGroupInfo_FeatureType_SPARSE_BINARY = 3
};
bool FeatureGroupInfo_FeatureType_IsValid(int value);
const FeatureGroupInfo_FeatureType FeatureGroupInfo_FeatureType_FeatureType_MIN = FeatureGroupInfo_FeatureType_DENSE;
const FeatureGroupInfo_FeatureType FeatureGroupInfo_FeatureType_FeatureType_MAX = FeatureGroupInfo_FeatureType_SPARSE_BINARY;
const int FeatureGroupInfo_FeatureType_FeatureType_ARRAYSIZE = FeatureGroupInfo_FeatureType_FeatureType_MAX + 1;

const ::google::protobuf::EnumDescriptor* FeatureGroupInfo_FeatureType_descriptor();
inline const ::std::string& FeatureGroupInfo_FeatureType_Name(FeatureGroupInfo_FeatureType value) {
  return ::google::protobuf::internal::NameOfEnum(
    FeatureGroupInfo_FeatureType_descriptor(), value);
}
inline bool FeatureGroupInfo_FeatureType_Parse(
    const ::std::string& name, FeatureGroupInfo_FeatureType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<FeatureGroupInfo_FeatureType>(
    FeatureGroupInfo_FeatureType_descriptor(), name, value);
}
// ===================================================================

class InstanceInfo : public ::google::protobuf::Message {
 public:
  InstanceInfo();
  virtual ~InstanceInfo();

  InstanceInfo(const InstanceInfo& from);

  inline InstanceInfo& operator=(const InstanceInfo& from) {
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
  static const InstanceInfo& default_instance();

  void Swap(InstanceInfo* other);

  // implements Message ----------------------------------------------

  InstanceInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const InstanceInfo& from);
  void MergeFrom(const InstanceInfo& from);
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

  typedef InstanceInfo_LabelType LabelType;
  static const LabelType EMPTY = InstanceInfo_LabelType_EMPTY;
  static const LabelType BINARY = InstanceInfo_LabelType_BINARY;
  static const LabelType MULTICLASS = InstanceInfo_LabelType_MULTICLASS;
  static const LabelType CONTINUOUS = InstanceInfo_LabelType_CONTINUOUS;
  static inline bool LabelType_IsValid(int value) {
    return InstanceInfo_LabelType_IsValid(value);
  }
  static const LabelType LabelType_MIN =
    InstanceInfo_LabelType_LabelType_MIN;
  static const LabelType LabelType_MAX =
    InstanceInfo_LabelType_LabelType_MAX;
  static const int LabelType_ARRAYSIZE =
    InstanceInfo_LabelType_LabelType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  LabelType_descriptor() {
    return InstanceInfo_LabelType_descriptor();
  }
  static inline const ::std::string& LabelType_Name(LabelType value) {
    return InstanceInfo_LabelType_Name(value);
  }
  static inline bool LabelType_Parse(const ::std::string& name,
      LabelType* value) {
    return InstanceInfo_LabelType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .PS.InstanceInfo.LabelType label_type = 1;
  inline bool has_label_type() const;
  inline void clear_label_type();
  static const int kLabelTypeFieldNumber = 1;
  inline ::PS::InstanceInfo_LabelType label_type() const;
  inline void set_label_type(::PS::InstanceInfo_LabelType value);

  // required .PS.FeatureGroupInfo all_group = 2;
  inline bool has_all_group() const;
  inline void clear_all_group();
  static const int kAllGroupFieldNumber = 2;
  inline const ::PS::FeatureGroupInfo& all_group() const;
  inline ::PS::FeatureGroupInfo* mutable_all_group();
  inline ::PS::FeatureGroupInfo* release_all_group();
  inline void set_allocated_all_group(::PS::FeatureGroupInfo* all_group);

  // repeated .PS.FeatureGroupInfo individual_groups = 3;
  inline int individual_groups_size() const;
  inline void clear_individual_groups();
  static const int kIndividualGroupsFieldNumber = 3;
  inline const ::PS::FeatureGroupInfo& individual_groups(int index) const;
  inline ::PS::FeatureGroupInfo* mutable_individual_groups(int index);
  inline ::PS::FeatureGroupInfo* add_individual_groups();
  inline const ::google::protobuf::RepeatedPtrField< ::PS::FeatureGroupInfo >&
      individual_groups() const;
  inline ::google::protobuf::RepeatedPtrField< ::PS::FeatureGroupInfo >*
      mutable_individual_groups();

  // @@protoc_insertion_point(class_scope:PS.InstanceInfo)
 private:
  inline void set_has_label_type();
  inline void clear_has_label_type();
  inline void set_has_all_group();
  inline void clear_has_all_group();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::PS::FeatureGroupInfo* all_group_;
  ::google::protobuf::RepeatedPtrField< ::PS::FeatureGroupInfo > individual_groups_;
  int label_type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_proto_2finstance_2eproto();
  friend void protobuf_AssignDesc_proto_2finstance_2eproto();
  friend void protobuf_ShutdownFile_proto_2finstance_2eproto();

  void InitAsDefaultInstance();
  static InstanceInfo* default_instance_;
};
// -------------------------------------------------------------------

class FeatureGroupInfo : public ::google::protobuf::Message {
 public:
  FeatureGroupInfo();
  virtual ~FeatureGroupInfo();

  FeatureGroupInfo(const FeatureGroupInfo& from);

  inline FeatureGroupInfo& operator=(const FeatureGroupInfo& from) {
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
  static const FeatureGroupInfo& default_instance();

  void Swap(FeatureGroupInfo* other);

  // implements Message ----------------------------------------------

  FeatureGroupInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FeatureGroupInfo& from);
  void MergeFrom(const FeatureGroupInfo& from);
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

  typedef FeatureGroupInfo_FeatureType FeatureType;
  static const FeatureType DENSE = FeatureGroupInfo_FeatureType_DENSE;
  static const FeatureType SPARSE = FeatureGroupInfo_FeatureType_SPARSE;
  static const FeatureType SPARSE_BINARY = FeatureGroupInfo_FeatureType_SPARSE_BINARY;
  static inline bool FeatureType_IsValid(int value) {
    return FeatureGroupInfo_FeatureType_IsValid(value);
  }
  static const FeatureType FeatureType_MIN =
    FeatureGroupInfo_FeatureType_FeatureType_MIN;
  static const FeatureType FeatureType_MAX =
    FeatureGroupInfo_FeatureType_FeatureType_MAX;
  static const int FeatureType_ARRAYSIZE =
    FeatureGroupInfo_FeatureType_FeatureType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  FeatureType_descriptor() {
    return FeatureGroupInfo_FeatureType_descriptor();
  }
  static inline const ::std::string& FeatureType_Name(FeatureType value) {
    return FeatureGroupInfo_FeatureType_Name(value);
  }
  static inline bool FeatureType_Parse(const ::std::string& name,
      FeatureType* value) {
    return FeatureGroupInfo_FeatureType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required int32 group_id = 1;
  inline bool has_group_id() const;
  inline void clear_group_id();
  static const int kGroupIdFieldNumber = 1;
  inline ::google::protobuf::int32 group_id() const;
  inline void set_group_id(::google::protobuf::int32 value);

  // required .PS.FeatureGroupInfo.FeatureType feature_type = 2;
  inline bool has_feature_type() const;
  inline void clear_feature_type();
  static const int kFeatureTypeFieldNumber = 2;
  inline ::PS::FeatureGroupInfo_FeatureType feature_type() const;
  inline void set_feature_type(::PS::FeatureGroupInfo_FeatureType value);

  // required uint64 feature_begin = 3 [default = 18446744073709551615];
  inline bool has_feature_begin() const;
  inline void clear_feature_begin();
  static const int kFeatureBeginFieldNumber = 3;
  inline ::google::protobuf::uint64 feature_begin() const;
  inline void set_feature_begin(::google::protobuf::uint64 value);

  // required uint64 feature_end = 4;
  inline bool has_feature_end() const;
  inline void clear_feature_end();
  static const int kFeatureEndFieldNumber = 4;
  inline ::google::protobuf::uint64 feature_end() const;
  inline void set_feature_end(::google::protobuf::uint64 value);

  // required uint64 num_instances = 5;
  inline bool has_num_instances() const;
  inline void clear_num_instances();
  static const int kNumInstancesFieldNumber = 5;
  inline ::google::protobuf::uint64 num_instances() const;
  inline void set_num_instances(::google::protobuf::uint64 value);

  // required uint64 num_entries = 6;
  inline bool has_num_entries() const;
  inline void clear_num_entries();
  static const int kNumEntriesFieldNumber = 6;
  inline ::google::protobuf::uint64 num_entries() const;
  inline void set_num_entries(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:PS.FeatureGroupInfo)
 private:
  inline void set_has_group_id();
  inline void clear_has_group_id();
  inline void set_has_feature_type();
  inline void clear_has_feature_type();
  inline void set_has_feature_begin();
  inline void clear_has_feature_begin();
  inline void set_has_feature_end();
  inline void clear_has_feature_end();
  inline void set_has_num_instances();
  inline void clear_has_num_instances();
  inline void set_has_num_entries();
  inline void clear_has_num_entries();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 group_id_;
  int feature_type_;
  ::google::protobuf::uint64 feature_begin_;
  ::google::protobuf::uint64 feature_end_;
  ::google::protobuf::uint64 num_instances_;
  ::google::protobuf::uint64 num_entries_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_proto_2finstance_2eproto();
  friend void protobuf_AssignDesc_proto_2finstance_2eproto();
  friend void protobuf_ShutdownFile_proto_2finstance_2eproto();

  void InitAsDefaultInstance();
  static FeatureGroupInfo* default_instance_;
};
// -------------------------------------------------------------------

class Instance : public ::google::protobuf::Message {
 public:
  Instance();
  virtual ~Instance();

  Instance(const Instance& from);

  inline Instance& operator=(const Instance& from) {
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
  static const Instance& default_instance();

  void Swap(Instance* other);

  // implements Message ----------------------------------------------

  Instance* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Instance& from);
  void MergeFrom(const Instance& from);
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

  // optional float label = 1;
  inline bool has_label() const;
  inline void clear_label();
  static const int kLabelFieldNumber = 1;
  inline float label() const;
  inline void set_label(float value);

  // repeated uint64 feature_id = 2;
  inline int feature_id_size() const;
  inline void clear_feature_id();
  static const int kFeatureIdFieldNumber = 2;
  inline ::google::protobuf::uint64 feature_id(int index) const;
  inline void set_feature_id(int index, ::google::protobuf::uint64 value);
  inline void add_feature_id(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      feature_id() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_feature_id();

  // repeated float value = 3;
  inline int value_size() const;
  inline void clear_value();
  static const int kValueFieldNumber = 3;
  inline float value(int index) const;
  inline void set_value(int index, float value);
  inline void add_value(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      value() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_value();

  // @@protoc_insertion_point(class_scope:PS.Instance)
 private:
  inline void set_has_label();
  inline void clear_has_label();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > feature_id_;
  ::google::protobuf::RepeatedField< float > value_;
  float label_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_proto_2finstance_2eproto();
  friend void protobuf_AssignDesc_proto_2finstance_2eproto();
  friend void protobuf_ShutdownFile_proto_2finstance_2eproto();

  void InitAsDefaultInstance();
  static Instance* default_instance_;
};
// ===================================================================


// ===================================================================

// InstanceInfo

// required .PS.InstanceInfo.LabelType label_type = 1;
inline bool InstanceInfo::has_label_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InstanceInfo::set_has_label_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InstanceInfo::clear_has_label_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InstanceInfo::clear_label_type() {
  label_type_ = 1;
  clear_has_label_type();
}
inline ::PS::InstanceInfo_LabelType InstanceInfo::label_type() const {
  return static_cast< ::PS::InstanceInfo_LabelType >(label_type_);
}
inline void InstanceInfo::set_label_type(::PS::InstanceInfo_LabelType value) {
  assert(::PS::InstanceInfo_LabelType_IsValid(value));
  set_has_label_type();
  label_type_ = value;
}

// required .PS.FeatureGroupInfo all_group = 2;
inline bool InstanceInfo::has_all_group() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InstanceInfo::set_has_all_group() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InstanceInfo::clear_has_all_group() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void InstanceInfo::clear_all_group() {
  if (all_group_ != NULL) all_group_->::PS::FeatureGroupInfo::Clear();
  clear_has_all_group();
}
inline const ::PS::FeatureGroupInfo& InstanceInfo::all_group() const {
  return all_group_ != NULL ? *all_group_ : *default_instance_->all_group_;
}
inline ::PS::FeatureGroupInfo* InstanceInfo::mutable_all_group() {
  set_has_all_group();
  if (all_group_ == NULL) all_group_ = new ::PS::FeatureGroupInfo;
  return all_group_;
}
inline ::PS::FeatureGroupInfo* InstanceInfo::release_all_group() {
  clear_has_all_group();
  ::PS::FeatureGroupInfo* temp = all_group_;
  all_group_ = NULL;
  return temp;
}
inline void InstanceInfo::set_allocated_all_group(::PS::FeatureGroupInfo* all_group) {
  delete all_group_;
  all_group_ = all_group;
  if (all_group) {
    set_has_all_group();
  } else {
    clear_has_all_group();
  }
}

// repeated .PS.FeatureGroupInfo individual_groups = 3;
inline int InstanceInfo::individual_groups_size() const {
  return individual_groups_.size();
}
inline void InstanceInfo::clear_individual_groups() {
  individual_groups_.Clear();
}
inline const ::PS::FeatureGroupInfo& InstanceInfo::individual_groups(int index) const {
  return individual_groups_.Get(index);
}
inline ::PS::FeatureGroupInfo* InstanceInfo::mutable_individual_groups(int index) {
  return individual_groups_.Mutable(index);
}
inline ::PS::FeatureGroupInfo* InstanceInfo::add_individual_groups() {
  return individual_groups_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PS::FeatureGroupInfo >&
InstanceInfo::individual_groups() const {
  return individual_groups_;
}
inline ::google::protobuf::RepeatedPtrField< ::PS::FeatureGroupInfo >*
InstanceInfo::mutable_individual_groups() {
  return &individual_groups_;
}

// -------------------------------------------------------------------

// FeatureGroupInfo

// required int32 group_id = 1;
inline bool FeatureGroupInfo::has_group_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FeatureGroupInfo::set_has_group_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FeatureGroupInfo::clear_has_group_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FeatureGroupInfo::clear_group_id() {
  group_id_ = 0;
  clear_has_group_id();
}
inline ::google::protobuf::int32 FeatureGroupInfo::group_id() const {
  return group_id_;
}
inline void FeatureGroupInfo::set_group_id(::google::protobuf::int32 value) {
  set_has_group_id();
  group_id_ = value;
}

// required .PS.FeatureGroupInfo.FeatureType feature_type = 2;
inline bool FeatureGroupInfo::has_feature_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FeatureGroupInfo::set_has_feature_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FeatureGroupInfo::clear_has_feature_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FeatureGroupInfo::clear_feature_type() {
  feature_type_ = 1;
  clear_has_feature_type();
}
inline ::PS::FeatureGroupInfo_FeatureType FeatureGroupInfo::feature_type() const {
  return static_cast< ::PS::FeatureGroupInfo_FeatureType >(feature_type_);
}
inline void FeatureGroupInfo::set_feature_type(::PS::FeatureGroupInfo_FeatureType value) {
  assert(::PS::FeatureGroupInfo_FeatureType_IsValid(value));
  set_has_feature_type();
  feature_type_ = value;
}

// required uint64 feature_begin = 3 [default = 18446744073709551615];
inline bool FeatureGroupInfo::has_feature_begin() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FeatureGroupInfo::set_has_feature_begin() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FeatureGroupInfo::clear_has_feature_begin() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FeatureGroupInfo::clear_feature_begin() {
  feature_begin_ = GOOGLE_ULONGLONG(18446744073709551615);
  clear_has_feature_begin();
}
inline ::google::protobuf::uint64 FeatureGroupInfo::feature_begin() const {
  return feature_begin_;
}
inline void FeatureGroupInfo::set_feature_begin(::google::protobuf::uint64 value) {
  set_has_feature_begin();
  feature_begin_ = value;
}

// required uint64 feature_end = 4;
inline bool FeatureGroupInfo::has_feature_end() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FeatureGroupInfo::set_has_feature_end() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FeatureGroupInfo::clear_has_feature_end() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FeatureGroupInfo::clear_feature_end() {
  feature_end_ = GOOGLE_ULONGLONG(0);
  clear_has_feature_end();
}
inline ::google::protobuf::uint64 FeatureGroupInfo::feature_end() const {
  return feature_end_;
}
inline void FeatureGroupInfo::set_feature_end(::google::protobuf::uint64 value) {
  set_has_feature_end();
  feature_end_ = value;
}

// required uint64 num_instances = 5;
inline bool FeatureGroupInfo::has_num_instances() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void FeatureGroupInfo::set_has_num_instances() {
  _has_bits_[0] |= 0x00000010u;
}
inline void FeatureGroupInfo::clear_has_num_instances() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void FeatureGroupInfo::clear_num_instances() {
  num_instances_ = GOOGLE_ULONGLONG(0);
  clear_has_num_instances();
}
inline ::google::protobuf::uint64 FeatureGroupInfo::num_instances() const {
  return num_instances_;
}
inline void FeatureGroupInfo::set_num_instances(::google::protobuf::uint64 value) {
  set_has_num_instances();
  num_instances_ = value;
}

// required uint64 num_entries = 6;
inline bool FeatureGroupInfo::has_num_entries() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void FeatureGroupInfo::set_has_num_entries() {
  _has_bits_[0] |= 0x00000020u;
}
inline void FeatureGroupInfo::clear_has_num_entries() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void FeatureGroupInfo::clear_num_entries() {
  num_entries_ = GOOGLE_ULONGLONG(0);
  clear_has_num_entries();
}
inline ::google::protobuf::uint64 FeatureGroupInfo::num_entries() const {
  return num_entries_;
}
inline void FeatureGroupInfo::set_num_entries(::google::protobuf::uint64 value) {
  set_has_num_entries();
  num_entries_ = value;
}

// -------------------------------------------------------------------

// Instance

// optional float label = 1;
inline bool Instance::has_label() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Instance::set_has_label() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Instance::clear_has_label() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Instance::clear_label() {
  label_ = 0;
  clear_has_label();
}
inline float Instance::label() const {
  return label_;
}
inline void Instance::set_label(float value) {
  set_has_label();
  label_ = value;
}

// repeated uint64 feature_id = 2;
inline int Instance::feature_id_size() const {
  return feature_id_.size();
}
inline void Instance::clear_feature_id() {
  feature_id_.Clear();
}
inline ::google::protobuf::uint64 Instance::feature_id(int index) const {
  return feature_id_.Get(index);
}
inline void Instance::set_feature_id(int index, ::google::protobuf::uint64 value) {
  feature_id_.Set(index, value);
}
inline void Instance::add_feature_id(::google::protobuf::uint64 value) {
  feature_id_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
Instance::feature_id() const {
  return feature_id_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
Instance::mutable_feature_id() {
  return &feature_id_;
}

// repeated float value = 3;
inline int Instance::value_size() const {
  return value_.size();
}
inline void Instance::clear_value() {
  value_.Clear();
}
inline float Instance::value(int index) const {
  return value_.Get(index);
}
inline void Instance::set_value(int index, float value) {
  value_.Set(index, value);
}
inline void Instance::add_value(float value) {
  value_.Add(value);
}
inline const ::google::protobuf::RepeatedField< float >&
Instance::value() const {
  return value_;
}
inline ::google::protobuf::RepeatedField< float >*
Instance::mutable_value() {
  return &value_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PS

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PS::InstanceInfo_LabelType>() {
  return ::PS::InstanceInfo_LabelType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PS::FeatureGroupInfo_FeatureType>() {
  return ::PS::FeatureGroupInfo_FeatureType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2finstance_2eproto__INCLUDED
