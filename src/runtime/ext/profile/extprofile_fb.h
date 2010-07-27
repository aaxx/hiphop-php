/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
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

#ifndef __EXTPROFILE_FB_H__
#define __EXTPROFILE_FB_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_fb.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant x_fb_thrift_serialize(CVarRef thing) {
  FUNCTION_INJECTION_BUILTIN(fb_thrift_serialize);
  return f_fb_thrift_serialize(thing);
}

inline Variant x_fb_thrift_unserialize(CVarRef thing, Variant success, Variant errcode = null_variant) {
  FUNCTION_INJECTION_BUILTIN(fb_thrift_unserialize);
  return f_fb_thrift_unserialize(thing, ref(success), ref(errcode));
}

inline Variant x_fb_serialize(CVarRef thing) {
  FUNCTION_INJECTION_BUILTIN(fb_serialize);
  return f_fb_serialize(thing);
}

inline Variant x_fb_unserialize(CVarRef thing, Variant success, Variant errcode = null_variant) {
  FUNCTION_INJECTION_BUILTIN(fb_unserialize);
  return f_fb_unserialize(thing, ref(success), ref(errcode));
}

inline void x_fb_renamed_functions(CArrRef names) {
  FUNCTION_INJECTION_BUILTIN(fb_renamed_functions);
  f_fb_renamed_functions(names);
}

inline bool x_fb_rename_function(CStrRef orig_func_name, CStrRef new_func_name) {
  FUNCTION_INJECTION_BUILTIN(fb_rename_function);
  return f_fb_rename_function(orig_func_name, new_func_name);
}

inline bool x_fb_utf8ize(Variant input) {
  FUNCTION_INJECTION_BUILTIN(fb_utf8ize);
  return f_fb_utf8ize(ref(input));
}

inline Array x_fb_call_user_func_safe(int _argc, CVarRef function, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(fb_call_user_func_safe);
  return f_fb_call_user_func_safe(_argc, function, _argv);
}

inline Variant x_fb_call_user_func_safe_return(int _argc, CVarRef function, CVarRef def, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(fb_call_user_func_safe_return);
  return f_fb_call_user_func_safe_return(_argc, function, def, _argv);
}

inline Array x_fb_call_user_func_array_safe(CVarRef function, CArrRef params) {
  FUNCTION_INJECTION_BUILTIN(fb_call_user_func_array_safe);
  return f_fb_call_user_func_array_safe(function, params);
}

inline Variant x_fb_get_code_coverage() {
  FUNCTION_INJECTION_BUILTIN(fb_get_code_coverage);
  return f_fb_get_code_coverage();
}

inline void x_xhprof_enable(int flags, CArrRef args = null_array) {
  FUNCTION_INJECTION_BUILTIN(xhprof_enable);
  f_xhprof_enable(flags, args);
}

inline Variant x_xhprof_disable() {
  FUNCTION_INJECTION_BUILTIN(xhprof_disable);
  return f_xhprof_disable();
}

inline void x_xhprof_sample_enable() {
  FUNCTION_INJECTION_BUILTIN(xhprof_sample_enable);
  f_xhprof_sample_enable();
}

inline Variant x_xhprof_sample_disable() {
  FUNCTION_INJECTION_BUILTIN(xhprof_sample_disable);
  return f_xhprof_sample_disable();
}

inline void x_fb_load_local_databases(CArrRef servers) {
  FUNCTION_INJECTION_BUILTIN(fb_load_local_databases);
  f_fb_load_local_databases(servers);
}

inline Array x_fb_parallel_query(CArrRef sql_map, int max_thread = 50, bool combine_result = true, bool retry_query_on_fail = true, int connect_timeout = -1, int read_timeout = -1, bool timeout_in_ms = false) {
  FUNCTION_INJECTION_BUILTIN(fb_parallel_query);
  return f_fb_parallel_query(sql_map, max_thread, combine_result, retry_query_on_fail, connect_timeout, read_timeout, timeout_in_ms);
}

inline Array x_fb_crossall_query(CStrRef sql, int max_thread = 50, bool retry_query_on_fail = true, int connect_timeout = -1, int read_timeout = -1, bool timeout_in_ms = false) {
  FUNCTION_INJECTION_BUILTIN(fb_crossall_query);
  return f_fb_crossall_query(sql, max_thread, retry_query_on_fail, connect_timeout, read_timeout, timeout_in_ms);
}

inline void x_fb_taint(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(fb_taint);
  f_fb_taint(str);
}

inline void x_fb_untaint(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(fb_untaint);
  f_fb_untaint(str);
}

inline bool x_fb_is_tainted(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(fb_is_tainted);
  return f_fb_is_tainted(str);
}

inline Variant x_fb_const_fetch(CVarRef key) {
  FUNCTION_INJECTION_BUILTIN(fb_const_fetch);
  return f_fb_const_fetch(key);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_FB_H__
