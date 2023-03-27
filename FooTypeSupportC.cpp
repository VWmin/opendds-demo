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
// D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_codegen.cpp:382


#include "FooTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "FooTypeSupportC.inl"
#endif /* !defined INLINE */
// TAO_IDL - Generated from
// D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_cs.cpp:50


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Traits specializations for Baz::BarTypeSupport.

Baz::BarTypeSupport_ptr
TAO::Objref_Traits<Baz::BarTypeSupport>::duplicate (
    Baz::BarTypeSupport_ptr p)
{
  return Baz::BarTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<Baz::BarTypeSupport>::release (
    Baz::BarTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

Baz::BarTypeSupport_ptr
TAO::Objref_Traits<Baz::BarTypeSupport>::nil (void)
{
  return Baz::BarTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Baz::BarTypeSupport>::marshal (
    const Baz::BarTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}
TAO_END_VERSIONED_NAMESPACE_DECL


Baz::BarTypeSupport::BarTypeSupport (void)
{}

Baz::BarTypeSupport::~BarTypeSupport (void)
{
}

Baz::BarTypeSupport_ptr
Baz::BarTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarTypeSupport::_duplicate (
      dynamic_cast<BarTypeSupport_ptr> (_tao_objref)
    );
}

Baz::BarTypeSupport_ptr
Baz::BarTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarTypeSupport::_duplicate (
      dynamic_cast<BarTypeSupport_ptr> (_tao_objref)
    );
}

Baz::BarTypeSupport_ptr
Baz::BarTypeSupport::_nil (void)
{
  return 0;
}

Baz::BarTypeSupport_ptr
Baz::BarTypeSupport::_duplicate (BarTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Baz::BarTypeSupport::_tao_release (BarTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Baz::BarTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Baz/BarTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Baz::BarTypeSupport::_interface_repository_id (void) const
{
  return "IDL:Baz/BarTypeSupport:1.0";
}

::CORBA::Boolean
Baz::BarTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
// TAO_IDL - Generated from
// D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_cs.cpp:50


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Traits specializations for Baz::BarDataWriter.

Baz::BarDataWriter_ptr
TAO::Objref_Traits<Baz::BarDataWriter>::duplicate (
    Baz::BarDataWriter_ptr p)
{
  return Baz::BarDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<Baz::BarDataWriter>::release (
    Baz::BarDataWriter_ptr p)
{
  ::CORBA::release (p);
}

Baz::BarDataWriter_ptr
TAO::Objref_Traits<Baz::BarDataWriter>::nil (void)
{
  return Baz::BarDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Baz::BarDataWriter>::marshal (
    const Baz::BarDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}
TAO_END_VERSIONED_NAMESPACE_DECL


Baz::BarDataWriter::BarDataWriter (void)
{}

Baz::BarDataWriter::~BarDataWriter (void)
{
}

Baz::BarDataWriter_ptr
Baz::BarDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarDataWriter::_duplicate (
      dynamic_cast<BarDataWriter_ptr> (_tao_objref)
    );
}

Baz::BarDataWriter_ptr
Baz::BarDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarDataWriter::_duplicate (
      dynamic_cast<BarDataWriter_ptr> (_tao_objref)
    );
}

Baz::BarDataWriter_ptr
Baz::BarDataWriter::_nil (void)
{
  return 0;
}

Baz::BarDataWriter_ptr
Baz::BarDataWriter::_duplicate (BarDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Baz::BarDataWriter::_tao_release (BarDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Baz::BarDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Baz/BarDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Baz::BarDataWriter::_interface_repository_id (void) const
{
  return "IDL:Baz/BarDataWriter:1.0";
}

::CORBA::Boolean
Baz::BarDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
// TAO_IDL - Generated from
// D:\OpenDDS-3.23.1\ace_wrappers\tao\TAO_IDL\be\be_visitor_interface\interface_cs.cpp:50


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Traits specializations for Baz::BarDataReader.

Baz::BarDataReader_ptr
TAO::Objref_Traits<Baz::BarDataReader>::duplicate (
    Baz::BarDataReader_ptr p)
{
  return Baz::BarDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<Baz::BarDataReader>::release (
    Baz::BarDataReader_ptr p)
{
  ::CORBA::release (p);
}

Baz::BarDataReader_ptr
TAO::Objref_Traits<Baz::BarDataReader>::nil (void)
{
  return Baz::BarDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Baz::BarDataReader>::marshal (
    const Baz::BarDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}
TAO_END_VERSIONED_NAMESPACE_DECL


Baz::BarDataReader::BarDataReader (void)
{}

Baz::BarDataReader::~BarDataReader (void)
{
}

Baz::BarDataReader_ptr
Baz::BarDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarDataReader::_duplicate (
      dynamic_cast<BarDataReader_ptr> (_tao_objref)
    );
}

Baz::BarDataReader_ptr
Baz::BarDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return BarDataReader::_duplicate (
      dynamic_cast<BarDataReader_ptr> (_tao_objref)
    );
}

Baz::BarDataReader_ptr
Baz::BarDataReader::_nil (void)
{
  return 0;
}

Baz::BarDataReader_ptr
Baz::BarDataReader::_duplicate (BarDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Baz::BarDataReader::_tao_release (BarDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Baz::BarDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Baz/BarDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Baz::BarDataReader::_interface_repository_id (void) const
{
  return "IDL:Baz/BarDataReader:1.0";
}

::CORBA::Boolean
Baz::BarDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
