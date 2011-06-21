/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_THREAD_H__
#define __EXTPROFILE_THREAD_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_thread.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline bool x_hphp_is_service_thread() {
  FUNCTION_INJECTION_BUILTIN(hphp_is_service_thread);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hphp_is_service_thread();
}

inline void x_hphp_service_thread_started() {
  FUNCTION_INJECTION_BUILTIN(hphp_service_thread_started);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  f_hphp_service_thread_started();
}

inline bool x_hphp_service_thread_stopped(int timeout) {
  FUNCTION_INJECTION_BUILTIN(hphp_service_thread_stopped);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hphp_service_thread_stopped(timeout);
}

inline bool x_hphp_thread_is_warmup_enabled() {
  FUNCTION_INJECTION_BUILTIN(hphp_thread_is_warmup_enabled);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hphp_thread_is_warmup_enabled();
}

inline void x_hphp_thread_set_warmup_enabled() {
  FUNCTION_INJECTION_BUILTIN(hphp_thread_set_warmup_enabled);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  f_hphp_thread_set_warmup_enabled();
}

inline int64 x_hphp_get_thread_id() {
  FUNCTION_INJECTION_BUILTIN(hphp_get_thread_id);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hphp_get_thread_id();
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_THREAD_H__
