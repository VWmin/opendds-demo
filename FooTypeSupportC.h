// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p27
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:151

#ifndef _TAO_IDL_FOOTYPESUPPORTC_RDCOGJ_H_
#define _TAO_IDL_FOOTYPESUPPORTC_RDCOGJ_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "Foo_Export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types_IDLv4.h"
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  using namespace IDLv4;
}

TAO_END_VERSIONED_NAMESPACE_DECL

#include "tao/ORB_Constants.h"
#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "dds/DCPS/ZeroCopySeq_T.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "FooC.h"
#include "dds/DdsDcpsInfrastructureC.h"
#include "dds/DdsDcpsPublicationC.h"
#include "dds/DdsDcpsSubscriptionExtC.h"
#include "dds/DdsDcpsTopicC.h"
#include "dds/DdsDcpsTypeSupportExtC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 2 || TAO_BETA_VERSION != 0
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO Foo_Export
// TAO_IDL - Generated from
// D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_module\module_ch.cpp:37

namespace Baz
{

  
  // TAO_IDL - Generated from
  // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_sequence\sequence_ch.cpp:101

  

  typedef ::TAO::DCPS::ZeroCopyDataSeq< Baz::Bar, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> BarSeq;
  
  // TAO_IDL - Generated from
  // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_interface.cpp:750

  

#if !defined (_BAZ_BARTYPESUPPORT__VAR_OUT_CH_)
#define _BAZ_BARTYPESUPPORT__VAR_OUT_CH_

  class BarTypeSupport;
  typedef BarTypeSupport *BarTypeSupport_ptr;

  typedef
    TAO_Objref_Var_T<
        BarTypeSupport
      >
    BarTypeSupport_var;
  
  typedef
    TAO_Objref_Out_T<
        BarTypeSupport
      >
    BarTypeSupport_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:42

  

  class Foo_Export BarTypeSupport
    : public virtual ::OpenDDS::DCPS::TypeSupport
  
  {
  public:
    // TAO_IDL - Generated from
    // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_type.cpp:304

    typedef BarTypeSupport_ptr _ptr_type;
    typedef BarTypeSupport_var _var_type;
    typedef BarTypeSupport_out _out_type;

    // The static operations.
    static BarTypeSupport_ptr _duplicate (BarTypeSupport_ptr obj);

    static void _tao_release (BarTypeSupport_ptr obj);

    static BarTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
    static BarTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static BarTypeSupport_ptr _nil (void);

    
    // TAO_IDL - Generated from
    // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    BarTypeSupport (void);

    

    virtual ~BarTypeSupport (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (BarTypeSupport (const BarTypeSupport &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (BarTypeSupport (BarTypeSupport &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (BarTypeSupport &operator= (const BarTypeSupport &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (BarTypeSupport &operator= (BarTypeSupport &&))
#endif /* ACE_HAS_CPP11 */
  };
  // TAO_IDL - Generated from
  // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_interface.cpp:750

  

#if !defined (_BAZ_BARDATAWRITER__VAR_OUT_CH_)
#define _BAZ_BARDATAWRITER__VAR_OUT_CH_

  class BarDataWriter;
  typedef BarDataWriter *BarDataWriter_ptr;

  typedef
    TAO_Objref_Var_T<
        BarDataWriter
      >
    BarDataWriter_var;
  
  typedef
    TAO_Objref_Out_T<
        BarDataWriter
      >
    BarDataWriter_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:42

  

  class Foo_Export BarDataWriter
    : public virtual ::DDS::DataWriter
  
  {
  public:
    // TAO_IDL - Generated from
    // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_type.cpp:304

    typedef BarDataWriter_ptr _ptr_type;
    typedef BarDataWriter_var _var_type;
    typedef BarDataWriter_out _out_type;

    // The static operations.
    static BarDataWriter_ptr _duplicate (BarDataWriter_ptr obj);

    static void _tao_release (BarDataWriter_ptr obj);

    static BarDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
    static BarDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static BarDataWriter_ptr _nil (void);

    virtual ::DDS::InstanceHandle_t register_instance (
      const ::Baz::Bar & instance) = 0;

    virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
      const ::Baz::Bar & instance,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance (
      const ::Baz::Bar & instance,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
      const ::Baz::Bar & instance,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & timestamp) = 0;

    virtual ::DDS::ReturnCode_t write (
      const ::Baz::Bar & instance_data,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::ReturnCode_t write_w_timestamp (
      const ::Baz::Bar & instance_data,
      ::DDS::InstanceHandle_t handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t dispose (
      const ::Baz::Bar & instance_data,
      ::DDS::InstanceHandle_t instance_handle) = 0;

    virtual ::DDS::ReturnCode_t dispose_w_timestamp (
      const ::Baz::Bar & instance_data,
      ::DDS::InstanceHandle_t instance_handle,
      const ::DDS::Time_t & source_timestamp) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Baz::Bar & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Baz::Bar & instance_data) = 0;

    
    // TAO_IDL - Generated from
    // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    BarDataWriter (void);

    

    virtual ~BarDataWriter (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (BarDataWriter (const BarDataWriter &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (BarDataWriter (BarDataWriter &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (BarDataWriter &operator= (const BarDataWriter &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (BarDataWriter &operator= (BarDataWriter &&))
#endif /* ACE_HAS_CPP11 */
  };
  // TAO_IDL - Generated from
  // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_interface.cpp:750

  

#if !defined (_BAZ_BARDATAREADER__VAR_OUT_CH_)
#define _BAZ_BARDATAREADER__VAR_OUT_CH_

  class BarDataReader;
  typedef BarDataReader *BarDataReader_ptr;

  typedef
    TAO_Objref_Var_T<
        BarDataReader
      >
    BarDataReader_var;
  
  typedef
    TAO_Objref_Out_T<
        BarDataReader
      >
    BarDataReader_out;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:42

  

  class Foo_Export BarDataReader
    : public virtual ::OpenDDS::DCPS::DataReaderEx
  
  {
  public:
    // TAO_IDL - Generated from
    // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_type.cpp:304

    typedef BarDataReader_ptr _ptr_type;
    typedef BarDataReader_var _var_type;
    typedef BarDataReader_out _out_type;

    // The static operations.
    static BarDataReader_ptr _duplicate (BarDataReader_ptr obj);

    static void _tao_release (BarDataReader_ptr obj);

    static BarDataReader_ptr _narrow (::CORBA::Object_ptr obj);
    static BarDataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static BarDataReader_ptr _nil (void);

    virtual ::DDS::ReturnCode_t read (
      ::Baz::BarSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take (
      ::Baz::BarSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_w_condition (
      ::Baz::BarSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_w_condition (
      ::Baz::BarSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_sample (
      ::Baz::Bar & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t take_next_sample (
      ::Baz::Bar & received_data,
      ::DDS::SampleInfo & sample_info) = 0;

    virtual ::DDS::ReturnCode_t read_instance (
      ::Baz::BarSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_instance (
      ::Baz::BarSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_instance_w_condition (
      ::Baz::BarSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_instance_w_condition (
      ::Baz::BarSeq & received_data,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance (
      ::Baz::BarSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance (
      ::Baz::BarSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t a_handle,
      ::DDS::SampleStateMask sample_states,
      ::DDS::ViewStateMask view_states,
      ::DDS::InstanceStateMask instance_states) = 0;

    virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
      ::Baz::BarSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
      ::Baz::BarSeq & data_values,
      ::DDS::SampleInfoSeq & sample_infos,
      ::CORBA::Long max_samples,
      ::DDS::InstanceHandle_t previous_handle,
      ::DDS::ReadCondition_ptr a_condition) = 0;

    virtual ::DDS::ReturnCode_t return_loan (
      ::Baz::BarSeq & received_data,
      ::DDS::SampleInfoSeq & info_seq) = 0;

    virtual ::DDS::ReturnCode_t get_key_value (
      ::Baz::Bar & key_holder,
      ::DDS::InstanceHandle_t handle) = 0;

    virtual ::DDS::InstanceHandle_t lookup_instance (
      const ::Baz::Bar & instance_data) = 0;

    
    // TAO_IDL - Generated from
    // D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_ch.cpp:138

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    BarDataReader (void);

    

    virtual ~BarDataReader (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ACE_UNIMPLEMENTED_FUNC (BarDataReader (const BarDataReader &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (BarDataReader (BarDataReader &&))
#endif /* ACE_HAS_CPP11 */
    ACE_UNIMPLEMENTED_FUNC (BarDataReader &operator= (const BarDataReader &))
#if defined (ACE_HAS_CPP11)
    ACE_UNIMPLEMENTED_FUNC (BarDataReader &operator= (BarDataReader &&))
#endif /* ACE_HAS_CPP11 */
  };


// TAO_IDL - Generated from
// D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_module\module_ch.cpp:65


} // module Baz
// TAO_IDL - Generated from
// D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_arg_traits.cpp:66



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_traits.cpp:60



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_BAZ_BARTYPESUPPORT__TRAITS_)
#define _BAZ_BARTYPESUPPORT__TRAITS_

  template<>
  struct Foo_Export Objref_Traits< ::Baz::BarTypeSupport>
  {
    static ::Baz::BarTypeSupport_ptr duplicate (
        ::Baz::BarTypeSupport_ptr p);
    static void release (
        ::Baz::BarTypeSupport_ptr p);
    static ::Baz::BarTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Baz::BarTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_BAZ_BARDATAWRITER__TRAITS_)
#define _BAZ_BARDATAWRITER__TRAITS_

  template<>
  struct Foo_Export Objref_Traits< ::Baz::BarDataWriter>
  {
    static ::Baz::BarDataWriter_ptr duplicate (
        ::Baz::BarDataWriter_ptr p);
    static void release (
        ::Baz::BarDataWriter_ptr p);
    static ::Baz::BarDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Baz::BarDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_BAZ_BARDATAREADER__TRAITS_)
#define _BAZ_BARDATAREADER__TRAITS_

  template<>
  struct Foo_Export Objref_Traits< ::Baz::BarDataReader>
  {
    static ::Baz::BarDataReader_ptr duplicate (
        ::Baz::BarDataReader_ptr p);
    static void release (
        ::Baz::BarDataReader_ptr p);
    static ::Baz::BarDataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Baz::BarDataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:1666

#if defined (__ACE_INLINE__)
#include "FooTypeSupportC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

