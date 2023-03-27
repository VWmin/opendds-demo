
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl Foo
// ------------------------------
#ifndef FOO_EXPORT_H
#define FOO_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (FOO_HAS_DLL)
#  define FOO_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && FOO_HAS_DLL */

#if !defined (FOO_HAS_DLL)
#  define FOO_HAS_DLL 1
#endif /* ! FOO_HAS_DLL */

#if defined (FOO_HAS_DLL) && (FOO_HAS_DLL == 1)
#  if defined (FOO_BUILD_DLL)
#    define Foo_Export ACE_Proper_Export_Flag
#    define FOO_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define FOO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* FOO_BUILD_DLL */
#    define Foo_Export ACE_Proper_Import_Flag
#    define FOO_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define FOO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* FOO_BUILD_DLL */
#else /* FOO_HAS_DLL == 1 */
#  define Foo_Export
#  define FOO_SINGLETON_DECLARATION(T)
#  define FOO_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* FOO_HAS_DLL == 1 */

// Set FOO_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (FOO_NTRACE)
#  if (ACE_NTRACE == 1)
#    define FOO_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define FOO_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !FOO_NTRACE */

#if (FOO_NTRACE == 1)
#  define FOO_TRACE(X)
#else /* (FOO_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define FOO_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (FOO_NTRACE == 1) */

#endif /* FOO_EXPORT_H */

// End of auto generated file.
