/* -*- C++ -*- */
/* Generated by D:\OpenDDS-3.23.1\bin\opendds_idl version 3.23.1 (ACE version 6.2a_p27) running on input file Foo.idl */
#ifndef OPENDDS_IDL_GENERATED_FOOTYPESUPPORTIMPL_H_M2JLTT
#define OPENDDS_IDL_GENERATED_FOOTYPESUPPORTIMPL_H_M2JLTT

#include <dds/Version.h>
#if !OPENDDS_VERSION_EXACTLY(3, 23, 1)
#  error "This file should be regenerated with opendds_idl"
#endif
#include <dds/DCPS/Definitions.h>

#include <dds/DdsDcpsC.h>

#include "FooC.h"
#include "FooTypeSupportC.h"
#include "dds/DCPS/Serializer.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/TypeSupportImpl.h"
#include "dds/DCPS/Util.h"
#include "dds/DCPS/ValueDispatcher.h"
#include "dds/DCPS/ValueReader.h"
#include "dds/DCPS/ValueWriter.h"
#include "dds/DCPS/XTypes/TypeObject.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: OpenDDS */


/* End MODULE: OpenDDS */


/* Begin MODULE: OpenDDS */


/* End MODULE: OpenDDS */


/* Begin MODULE: Baz */



/* Begin STRUCT: Bar */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

struct Baz_Bar_xtag {};
template<> Foo_Export
const XTypes::TypeIdentifier& getMinimalTypeIdentifier<Baz_Bar_xtag>();

template<> Foo_Export
const XTypes::TypeMap& getMinimalTypeMap<Baz_Bar_xtag>();

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

Foo_Export
bool vread(OpenDDS::DCPS::ValueReader& value_reader,  ::Baz::Bar& value);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

Foo_Export
void vwrite(OpenDDS::DCPS::ValueWriter& value_writer, const  ::Baz::Bar& value);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> Foo_Export
void set_default( ::Baz::Bar& stru);

Foo_Export
void serialized_size(const Encoding& encoding, size_t& size, const ::Baz::Bar& stru);

Foo_Export
bool operator<<(Serializer& strm, const ::Baz::Bar& stru);

Foo_Export
bool operator>>(Serializer& strm,  ::Baz::Bar& stru);

Foo_Export
void serialized_size(const Encoding& encoding, size_t& size, const NestedKeyOnly<const ::Baz::Bar>& stru);

Foo_Export
bool operator<<(Serializer& strm, const NestedKeyOnly<const ::Baz::Bar>& stru);

Foo_Export
bool operator>>(Serializer& strm, const NestedKeyOnly< ::Baz::Bar>& stru);

Foo_Export
void serialized_size(const Encoding& encoding, size_t& size, const KeyOnly<const ::Baz::Bar>& stru);

Foo_Export
bool operator<<(Serializer& strm, const KeyOnly<const ::Baz::Bar>& stru);

Foo_Export
bool operator>>(Serializer& strm, const KeyOnly< ::Baz::Bar>& stru);

template <>
struct MarshalTraits< ::Baz::Bar> {
  static void representations_allowed_by_type(DDS::DataRepresentationIdSeq& seq)
  {
    seq.length(4);
    seq[0] = DDS::XCDR_DATA_REPRESENTATION;
    seq[1] = DDS::XCDR2_DATA_REPRESENTATION;
    seq[2] = DDS::XML_DATA_REPRESENTATION;
    seq[3] = OpenDDS::DCPS::UNALIGNED_CDR_DATA_REPRESENTATION;
  }

  static SerializedSizeBound serialized_size_bound(const Encoding& encoding)
  {
    switch (encoding.kind()) {
    case Encoding::KIND_UNALIGNED_CDR:
      return SerializedSizeBound(4);
    case Encoding::KIND_XCDR1:
      return SerializedSizeBound();
    case Encoding::KIND_XCDR2:
      return SerializedSizeBound();
    default:
      OPENDDS_ASSERT(false);
      return SerializedSizeBound();
    }
  }

  static SerializedSizeBound key_only_serialized_size_bound(const Encoding& encoding)
  {
    switch (encoding.kind()) {
    case Encoding::KIND_UNALIGNED_CDR:
      return SerializedSizeBound(0);
    case Encoding::KIND_XCDR1:
      return SerializedSizeBound();
    case Encoding::KIND_XCDR2:
      return SerializedSizeBound();
    default:
      OPENDDS_ASSERT(false);
      return SerializedSizeBound();
    }
  }

  static bool to_message_block(ACE_Message_Block&, const  ::Baz::Bar&) { return false; }
  static bool from_message_block( ::Baz::Bar&, const ACE_Message_Block&) { return false; }
  static Extensibility extensibility() { return APPENDABLE; }
  static Extensibility max_extensibility_level() { return APPENDABLE; }
};
} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Baz {
/// This structure supports use of std::map with one or more keys.
struct Foo_Export Bar_OpenDDS_KeyLessThan {
  bool operator()(const  ::Baz::Bar&, const  ::Baz::Bar&) const
  {
    // With no keys, return false to allow use of
    // map with just one entry
    return false;
  }
};
}


namespace Baz {
class BarTypeSupportImpl;
}

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS {
namespace DCPS {
template <>
struct DDSTraits< ::Baz::Bar> {
  typedef  ::Baz::Bar MessageType;
  typedef  ::Baz::BarSeq MessageSequenceType;
  typedef  ::Baz::BarSeq::PrivateMemberAccess MessageSequenceAdapterType;
  typedef  ::Baz::BarTypeSupport TypeSupportType;
  typedef  ::Baz::BarTypeSupportImpl TypeSupportImplType;
  typedef  ::Baz::BarDataWriter DataWriterType;
  typedef  ::Baz::BarDataReader DataReaderType;
  typedef  ::Baz::Bar_OpenDDS_KeyLessThan LessThanType;
  typedef OpenDDS::DCPS::KeyOnly<const  ::Baz::Bar> KeyOnlyType;
  typedef OpenDDS::DCPS::Baz_Bar_xtag XtagType;

  static const char* type_name() { return "Baz::Bar"; }
  static bool gen_has_key() { return false; }
  static size_t key_count() { return 0; }
};
} // namespace DCPS
} // namespace OpenDDS
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace Baz {
class Foo_Export BarTypeSupportImpl
  : public virtual OpenDDS::DCPS::LocalObject<BarTypeSupport>
  , public virtual OpenDDS::DCPS::TypeSupportImpl_T<Bar>
  , public virtual OpenDDS::DCPS::ValueDispatcher_T<Bar>
{
public:
  typedef BarTypeSupport TypeSupportType;
  typedef BarTypeSupport::_var_type _var_type;
  typedef BarTypeSupport::_ptr_type _ptr_type;

  BarTypeSupportImpl() {}
  virtual ~BarTypeSupportImpl() {}

  virtual ::DDS::DataWriter_ptr create_datawriter();
  virtual ::DDS::DataReader_ptr create_datareader();
#ifndef OPENDDS_NO_MULTI_TOPIC
  virtual ::DDS::DataReader_ptr create_multitopic_datareader();
#endif /* !OPENDDS_NO_MULTI_TOPIC */
#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
  virtual const OpenDDS::DCPS::MetaStruct& getMetaStructForType();
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */

  virtual const OpenDDS::XTypes::TypeIdentifier& getMinimalTypeIdentifier() const;
  virtual const OpenDDS::XTypes::TypeMap& getMinimalTypeMap() const;

  virtual const OpenDDS::XTypes::TypeIdentifier& getCompleteTypeIdentifier() const;
  virtual const OpenDDS::XTypes::TypeMap& getCompleteTypeMap() const;

  static BarTypeSupport::_ptr_type _narrow(CORBA::Object_ptr obj);
};

}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

class MetaStruct;

template<typename T>
const MetaStruct& getMetaStruct();

template<>
Foo_Export
const MetaStruct& getMetaStruct< ::Baz::Bar>();
Foo_Export
bool gen_skip_over(Serializer& ser,  ::Baz::Bar*);

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif

/* End STRUCT: Bar */

/* End MODULE: Baz */
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif /* OPENDDS_IDL_GENERATED_FOOTYPESUPPORTIMPL_H_M2JLTT */
