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

#ifndef __EXTPROFILE_APC_H__
#define __EXTPROFILE_APC_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_apc.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline bool x_apc_add(CStrRef key, CVarRef var, int64 ttl = 0, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_add);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_add(key, var, ttl, cache_id);
}

inline bool x_apc_store(CStrRef key, CVarRef var, int64 ttl = 0, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_store);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_store(key, var, ttl, cache_id);
}

inline Variant x_apc_fetch(CVarRef key, VRefParam success = null, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_fetch);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_fetch(key, success, cache_id);
}

inline Variant x_apc_delete(CVarRef key, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_delete);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_delete(key, cache_id);
}

inline bool x_apc_compile_file(CStrRef filename, bool atomic = true, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_compile_file);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_compile_file(filename, atomic, cache_id);
}

inline Variant x_apc_cache_info(int64 cache_id = 0, bool limited = false) {
  FUNCTION_INJECTION_BUILTIN(apc_cache_info);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_cache_info(cache_id, limited);
}

inline bool x_apc_clear_cache(int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_clear_cache);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_clear_cache(cache_id);
}

inline bool x_apc_define_constants(CStrRef key, CStrRef constants, bool case_sensitive = true, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_define_constants);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_define_constants(key, constants, case_sensitive, cache_id);
}

inline bool x_apc_load_constants(CStrRef key, bool case_sensitive = true, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_load_constants);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_load_constants(key, case_sensitive, cache_id);
}

inline Array x_apc_sma_info(bool limited = false) {
  FUNCTION_INJECTION_BUILTIN(apc_sma_info);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_sma_info(limited);
}

inline Array x_apc_filehits() {
  FUNCTION_INJECTION_BUILTIN(apc_filehits);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_filehits();
}

inline Variant x_apc_delete_file(CVarRef keys, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_delete_file);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_delete_file(keys, cache_id);
}

inline Variant x_apc_inc(CStrRef key, int64 step = 1, VRefParam success = null, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_inc);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_inc(key, step, success, cache_id);
}

inline Variant x_apc_dec(CStrRef key, int64 step = 1, VRefParam success = null, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_dec);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_dec(key, step, success, cache_id);
}

inline bool x_apc_cas(CStrRef key, int64 old_cas, int64 new_cas, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_cas);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_cas(key, old_cas, new_cas, cache_id);
}

inline Variant x_apc_exists(CVarRef key, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_exists);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_exists(key, cache_id);
}

inline Variant x_apc_bin_dump(int64 cache_id = 0, CVarRef filter = null_variant) {
  FUNCTION_INJECTION_BUILTIN(apc_bin_dump);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_bin_dump(cache_id, filter);
}

inline bool x_apc_bin_load(CStrRef data, int64 flags = 0, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_bin_load);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_bin_load(data, flags, cache_id);
}

inline Variant x_apc_bin_dumpfile(int64 cache_id, CVarRef filter, CStrRef filename, int64 flags = 0, CObjRef context = null) {
  FUNCTION_INJECTION_BUILTIN(apc_bin_dumpfile);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_bin_dumpfile(cache_id, filter, filename, flags, context);
}

inline bool x_apc_bin_loadfile(CStrRef filename, CObjRef context = null, int64 flags = 0, int64 cache_id = 0) {
  FUNCTION_INJECTION_BUILTIN(apc_bin_loadfile);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_apc_bin_loadfile(filename, context, flags, cache_id);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_APC_H__
