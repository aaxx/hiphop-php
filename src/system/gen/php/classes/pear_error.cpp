/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
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
// @generated by HipHop Compiler

#include <php/classes/pear_error.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/pear_error.php line 3 */
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_pear_error
Variant c_pear_error::os_getInit(const char *s, int64 hash) {
  return c_ObjectData::os_getInit(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GET_pear_error
Variant c_pear_error::os_get(const char *s, int64 hash) {
  return c_ObjectData::os_get(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GET_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_pear_error
Variant &c_pear_error::os_lval(const char *s, int64 hash) {
  return c_ObjectData::os_lval(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_GETARRAY_pear_error
void c_pear_error::o_getArray(Array &props) const {
  c_ObjectData::o_getArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_GETARRAY_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_SETARRAY_pear_error
void c_pear_error::o_setArray(CArrRef props) {
  c_ObjectData::o_setArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_SETARRAY_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_get_pear_error
Variant c_pear_error::o_get(CStrRef prop, int64 phash, bool error /* = true */, const char *context /* = NULL */) {
  return c_pear_error::o_getPublic(prop, phash, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_get_PUBLIC_pear_error
Variant c_pear_error::o_getPublic(CStrRef s, int64 hash, bool error /* = true */) {
  return c_ObjectData::o_getPublic(s, hash, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_PUBLIC_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_get_PRIVATE_pear_error
Variant c_pear_error::o_getPrivate(CStrRef s, int64 hash, bool error /* = true */) {
  return o_getPublic(s, hash, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_PRIVATE_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_exists_pear_error
bool c_pear_error::o_exists(CStrRef prop, int64 phash, const char *context /* = NULL */) const {
  return c_pear_error::o_existsPublic(prop, phash);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_pear_error
bool c_pear_error::o_existsPublic(CStrRef s, int64 hash) const {
  return c_ObjectData::o_existsPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_exists_PRIVATE_pear_error
bool c_pear_error::o_existsPrivate(CStrRef s, int64 hash) const {
  return o_existsPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_PRIVATE_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_set_pear_error
Variant c_pear_error::o_set(CStrRef prop, int64 phash, CVarRef v, bool forInit /* = false */, const char *context /* = NULL */) {
  return c_pear_error::o_setPublic(prop, phash, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_set_PUBLIC_pear_error
Variant c_pear_error::o_setPublic(CStrRef s, int64 hash, CVarRef v, bool forInit /* = false */) {
  return c_ObjectData::o_setPublic(s, hash, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_PUBLIC_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_set_PRIVATE_pear_error
Variant c_pear_error::o_setPrivate(CStrRef s, int64 hash, CVarRef v, bool forInit /* = false */) {
  return o_setPublic(s, hash, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_PRIVATE_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_lval_pear_error
Variant& c_pear_error::o_lval(CStrRef prop, int64 phash, const char *context /* = NULL */) {
  return c_pear_error::o_lvalPublic(prop, phash);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_pear_error
Variant& c_pear_error::o_lvalPublic(CStrRef s, int64 hash) {
  return c_ObjectData::o_lvalPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_pear_error
Variant& c_pear_error::o_lvalPrivate(CStrRef s, int64 hash) {
  return o_lvalPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_CONSTANT_pear_error
Variant c_pear_error::os_constant(const char *s) {
  return c_ObjectData::os_constant(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_CONSTANT_pear_error
IMPLEMENT_CLASS(pear_error)
c_pear_error *c_pear_error::create(CVarRef v_message //  = "unknown error"
, CVarRef v_code //  = null_variant
, CVarRef v_mode //  = null_variant
, CVarRef v_options //  = null_variant
, CVarRef v_userinfo //  = null_variant
) {
  CountableHelper h(this);
  init();
  t_pear_error(v_message, v_code, v_mode, v_options, v_userinfo);
  return this;
}
ObjectData *c_pear_error::dynCreate(CArrRef params, bool construct /* = true */) {
  init();
  if (construct) {
    CountableHelper h(this);
    int count __attribute__((__unused__)) = params.size();
    if (count > 5) throw_toomany_arguments("pear_error::pear_error", 5, 2);
    if (count <= 0) (t_pear_error());
    else if (count == 1) (t_pear_error(params[0]));
    else if (count == 2) (t_pear_error(params[0], params[1]));
    else if (count == 3) (t_pear_error(params[0], params[1], params[2]));
    else if (count == 4) (t_pear_error(params[0], params[1], params[2], params[3]));
    else (t_pear_error(params[0], params[1], params[2], params[3], params[4]));
  }
  return this;
}
void c_pear_error::dynConstruct(CArrRef params) {
  int count __attribute__((__unused__)) = params.size();
  if (count > 5) throw_toomany_arguments("pear_error::pear_error", 5, 2);
  if (count <= 0) (t_pear_error());
  else if (count == 1) (t_pear_error(params[0]));
  else if (count == 2) (t_pear_error(params[0], params[1]));
  else if (count == 3) (t_pear_error(params[0], params[1], params[2]));
  else if (count == 4) (t_pear_error(params[0], params[1], params[2], params[3]));
  else (t_pear_error(params[0], params[1], params[2], params[3], params[4]));
}
void c_pear_error::dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller) {
  Variant a0;
  Variant a1;
  Variant a2;
  Variant a3;
  Variant a4;
  const std::vector<Eval::ExpressionPtr> &params = caller->params();
  int count __attribute__((__unused__)) = params.size();
  if (count > 5) throw_toomany_arguments("pear_error::pear_error", 5, 1);
  std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
  do {
    if (it == params.end()) break;
    a0 = (*it)->eval(env);
    it++;
    if (it == params.end()) break;
    a1 = (*it)->eval(env);
    it++;
    if (it == params.end()) break;
    a2 = (*it)->eval(env);
    it++;
    if (it == params.end()) break;
    a3 = (*it)->eval(env);
    it++;
    if (it == params.end()) break;
    a4 = (*it)->eval(env);
    it++;
  } while(false);
  for (; it != params.end(); ++it) {
    (*it)->eval(env);
  }
  if (count <= 0) (t_pear_error(), null);
  else if (count == 1) (t_pear_error(a0), null);
  else if (count == 2) (t_pear_error(a0, a1), null);
  else if (count == 3) (t_pear_error(a0, a1, a2), null);
  else if (count == 4) (t_pear_error(a0, a1, a2, a3), null);
  else (t_pear_error(a0, a1, a2, a3, a4), null);
}
ObjectData *c_pear_error::cloneImpl() {
  c_pear_error *obj = NEW(c_pear_error)();
  cloneSet(obj);
  return obj;
}
void c_pear_error::cloneSet(c_pear_error *clone) {
  ObjectData::cloneSet(clone);
}
#ifndef OMIT_JUMP_TABLE_CLASS_INVOKE_pear_error
Variant c_pear_error::o_invoke(const char *s, CArrRef params, int64 hash, bool fatal) {
  int count __attribute__((__unused__)) = params.size();
  if (hash < 0) hash = hash_string_i(s);
  switch (hash & 31) {
    case 1:
      HASH_GUARD(0x488B59A7AC1AD281LL, getbacktrace) {
        if (count > 1) return throw_toomany_arguments("pear_error::getbacktrace", 1, 1);
        if (count <= 0) return (t_getbacktrace(), null);
        return (t_getbacktrace(params[0]), null);
      }
      break;
    case 4:
      HASH_GUARD(0x4394241AA92AEB44LL, adduserinfo) {
        if (count != 1) return throw_wrong_arguments("pear_error::adduserinfo", count, 1, 1, 1);
        return (t_adduserinfo(params[0]), null);
      }
      break;
    case 6:
      HASH_GUARD(0x1D3B08AA0AF50F06LL, gettype) {
        if (count > 0) return throw_toomany_arguments("pear_error::gettype", 0, 1);
        return (t_gettype(), null);
      }
      break;
    case 12:
      HASH_GUARD(0x337CF323F97137ACLL, getmode) {
        if (count > 0) return throw_toomany_arguments("pear_error::getmode", 0, 1);
        return (t_getmode(), null);
      }
      break;
    case 15:
      HASH_GUARD(0x5C108B351DC3D04FLL, getcode) {
        if (count > 0) return throw_toomany_arguments("pear_error::getcode", 0, 1);
        return (t_getcode(), null);
      }
      break;
    case 17:
      HASH_GUARD(0x2E87870339147BF1LL, getcallback) {
        if (count > 0) return throw_toomany_arguments("pear_error::getcallback", 0, 1);
        return (t_getcallback(), null);
      }
      break;
    case 18:
      HASH_GUARD(0x71859D7313E682D2LL, getmessage) {
        if (count > 0) return throw_toomany_arguments("pear_error::getmessage", 0, 1);
        return (t_getmessage(), null);
      }
      break;
    case 19:
      HASH_GUARD(0x05CF5B3C831C4053LL, getuserinfo) {
        if (count > 0) return throw_toomany_arguments("pear_error::getuserinfo", 0, 1);
        return (t_getuserinfo(), null);
      }
      HASH_GUARD(0x6271FDA592D5EF53LL, tostring) {
        if (count > 0) return throw_toomany_arguments("pear_error::tostring", 0, 1);
        return (t_tostring(), null);
      }
      break;
    case 24:
      HASH_GUARD(0x3CEBA108A1BAB998LL, pear_error) {
        if (count > 5) return throw_toomany_arguments("pear_error::pear_error", 5, 2);
        if (count <= 0) return (t_pear_error(), null);
        if (count == 1) return (t_pear_error(params[0]), null);
        if (count == 2) return (t_pear_error(params[0], params[1]), null);
        if (count == 3) return (t_pear_error(params[0], params[1], params[2]), null);
        if (count == 4) return (t_pear_error(params[0], params[1], params[2], params[3]), null);
        return (t_pear_error(params[0], params[1], params[2], params[3], params[4]), null);
      }
      break;
    case 27:
      HASH_GUARD(0x74E7C543C0FD73FBLL, getdebuginfo) {
        if (count > 0) return throw_toomany_arguments("pear_error::getdebuginfo", 0, 1);
        return (t_getdebuginfo(), null);
      }
      break;
    default:
      break;
  }
  return c_ObjectData::o_invoke(s, params, hash, fatal);
}
#endif // OMIT_JUMP_TABLE_CLASS_INVOKE_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_INVOKE_pear_error
Variant c_pear_error::o_invoke_few_args(const char *s, int64 hash, int count, CVarRef a0, CVarRef a1, CVarRef a2, CVarRef a3, CVarRef a4, CVarRef a5) {
  if (hash < 0) hash = hash_string_i(s);
  switch (hash & 31) {
    case 1:
      HASH_GUARD(0x488B59A7AC1AD281LL, getbacktrace) {
        if (count > 1) return throw_toomany_arguments("pear_error::getbacktrace", 1, 1);
        if (count <= 0) return (t_getbacktrace(), null);
        return (t_getbacktrace(a0), null);
      }
      break;
    case 4:
      HASH_GUARD(0x4394241AA92AEB44LL, adduserinfo) {
        if (count != 1) return throw_wrong_arguments("pear_error::adduserinfo", count, 1, 1, 1);
        return (t_adduserinfo(a0), null);
      }
      break;
    case 6:
      HASH_GUARD(0x1D3B08AA0AF50F06LL, gettype) {
        if (count > 0) return throw_toomany_arguments("pear_error::gettype", 0, 1);
        return (t_gettype(), null);
      }
      break;
    case 12:
      HASH_GUARD(0x337CF323F97137ACLL, getmode) {
        if (count > 0) return throw_toomany_arguments("pear_error::getmode", 0, 1);
        return (t_getmode(), null);
      }
      break;
    case 15:
      HASH_GUARD(0x5C108B351DC3D04FLL, getcode) {
        if (count > 0) return throw_toomany_arguments("pear_error::getcode", 0, 1);
        return (t_getcode(), null);
      }
      break;
    case 17:
      HASH_GUARD(0x2E87870339147BF1LL, getcallback) {
        if (count > 0) return throw_toomany_arguments("pear_error::getcallback", 0, 1);
        return (t_getcallback(), null);
      }
      break;
    case 18:
      HASH_GUARD(0x71859D7313E682D2LL, getmessage) {
        if (count > 0) return throw_toomany_arguments("pear_error::getmessage", 0, 1);
        return (t_getmessage(), null);
      }
      break;
    case 19:
      HASH_GUARD(0x05CF5B3C831C4053LL, getuserinfo) {
        if (count > 0) return throw_toomany_arguments("pear_error::getuserinfo", 0, 1);
        return (t_getuserinfo(), null);
      }
      HASH_GUARD(0x6271FDA592D5EF53LL, tostring) {
        if (count > 0) return throw_toomany_arguments("pear_error::tostring", 0, 1);
        return (t_tostring(), null);
      }
      break;
    case 24:
      HASH_GUARD(0x3CEBA108A1BAB998LL, pear_error) {
        if (count > 5) return throw_toomany_arguments("pear_error::pear_error", 5, 2);
        if (count <= 0) return (t_pear_error(), null);
        if (count == 1) return (t_pear_error(a0), null);
        if (count == 2) return (t_pear_error(a0, a1), null);
        if (count == 3) return (t_pear_error(a0, a1, a2), null);
        if (count == 4) return (t_pear_error(a0, a1, a2, a3), null);
        return (t_pear_error(a0, a1, a2, a3, a4), null);
      }
      break;
    case 27:
      HASH_GUARD(0x74E7C543C0FD73FBLL, getdebuginfo) {
        if (count > 0) return throw_toomany_arguments("pear_error::getdebuginfo", 0, 1);
        return (t_getdebuginfo(), null);
      }
      break;
    default:
      break;
  }
  return c_ObjectData::o_invoke_few_args(s, hash, count, a0, a1, a2, a3, a4, a5);
}
#endif // OMIT_JUMP_TABLE_CLASS_INVOKE_pear_error
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_pear_error
Variant c_pear_error::os_invoke(const char *c, const char *s, CArrRef params, int64 hash, bool fatal) {
  int count __attribute__((__unused__)) = params.size();
  return c_ObjectData::os_invoke(c, s, params, hash, fatal);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_pear_error
Variant c_pear_error::o_invoke_from_eval(const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  if (hash < 0) hash = hash_string_i(s);
  switch (hash & 31) {
    case 1:
      HASH_GUARD(0x488B59A7AC1AD281LL, getbacktrace) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 1) return throw_toomany_arguments("pear_error::getbacktrace", 1, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        if (count <= 0) return (t_getbacktrace(), null);
        else return (t_getbacktrace(a0), null);
      }
      break;
    case 4:
      HASH_GUARD(0x4394241AA92AEB44LL, adduserinfo) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("pear_error::adduserinfo", count, 1, 1, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_adduserinfo(a0), null);
      }
      break;
    case 6:
      HASH_GUARD(0x1D3B08AA0AF50F06LL, gettype) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("pear_error::gettype", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_gettype(), null);
      }
      break;
    case 12:
      HASH_GUARD(0x337CF323F97137ACLL, getmode) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("pear_error::getmode", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getmode(), null);
      }
      break;
    case 15:
      HASH_GUARD(0x5C108B351DC3D04FLL, getcode) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("pear_error::getcode", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getcode(), null);
      }
      break;
    case 17:
      HASH_GUARD(0x2E87870339147BF1LL, getcallback) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("pear_error::getcallback", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getcallback(), null);
      }
      break;
    case 18:
      HASH_GUARD(0x71859D7313E682D2LL, getmessage) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("pear_error::getmessage", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getmessage(), null);
      }
      break;
    case 19:
      HASH_GUARD(0x05CF5B3C831C4053LL, getuserinfo) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("pear_error::getuserinfo", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getuserinfo(), null);
      }
      HASH_GUARD(0x6271FDA592D5EF53LL, tostring) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("pear_error::tostring", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_tostring(), null);
      }
      break;
    case 24:
      HASH_GUARD(0x3CEBA108A1BAB998LL, pear_error) {
        Variant a0;
        Variant a1;
        Variant a2;
        Variant a3;
        Variant a4;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 5) return throw_toomany_arguments("pear_error::pear_error", 5, 2);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
          if (it == params.end()) break;
          a1 = (*it)->eval(env);
          it++;
          if (it == params.end()) break;
          a2 = (*it)->eval(env);
          it++;
          if (it == params.end()) break;
          a3 = (*it)->eval(env);
          it++;
          if (it == params.end()) break;
          a4 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        if (count <= 0) return (t_pear_error(), null);
        else if (count == 1) return (t_pear_error(a0), null);
        else if (count == 2) return (t_pear_error(a0, a1), null);
        else if (count == 3) return (t_pear_error(a0, a1, a2), null);
        else if (count == 4) return (t_pear_error(a0, a1, a2, a3), null);
        else return (t_pear_error(a0, a1, a2, a3, a4), null);
      }
      break;
    case 27:
      HASH_GUARD(0x74E7C543C0FD73FBLL, getdebuginfo) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("pear_error::getdebuginfo", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_getdebuginfo(), null);
      }
      break;
    default:
      break;
  }
  return c_ObjectData::o_invoke_from_eval(s, env, caller, hash, fatal);
}
Variant c_pear_error::os_invoke_from_eval(const char *c, const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  return c_ObjectData::os_invoke_from_eval(c, s, env, caller, hash, fatal);
}
struct ObjectStaticCallbacks cw_pear_error = {
  c_pear_error::os_getInit,
  c_pear_error::os_get,
  c_pear_error::os_lval,
  c_pear_error::os_invoke,
  c_pear_error::os_constant,
};
void c_pear_error::init() {
}
/* SRC: classes/pear_error.php line 4 */
void c_pear_error::t_pear_error(CVarRef v_message //  = "unknown error"
, CVarRef v_code //  = null_variant
, CVarRef v_mode //  = null_variant
, CVarRef v_options //  = null_variant
, CVarRef v_userinfo //  = null_variant
) {
  bool oldInCtor = gasInCtor(true);
  gasInCtor(oldInCtor);
} /* function */
/* SRC: classes/pear_error.php line 8 */
void c_pear_error::t_adduserinfo(CVarRef v_info) {
} /* function */
/* SRC: classes/pear_error.php line 9 */
void c_pear_error::t_getcallback() {
} /* function */
/* SRC: classes/pear_error.php line 10 */
void c_pear_error::t_getcode() {
} /* function */
/* SRC: classes/pear_error.php line 11 */
void c_pear_error::t_getmessage() {
} /* function */
/* SRC: classes/pear_error.php line 12 */
void c_pear_error::t_getmode() {
} /* function */
/* SRC: classes/pear_error.php line 13 */
void c_pear_error::t_getdebuginfo() {
} /* function */
/* SRC: classes/pear_error.php line 14 */
void c_pear_error::t_gettype() {
} /* function */
/* SRC: classes/pear_error.php line 15 */
void c_pear_error::t_getuserinfo() {
} /* function */
/* SRC: classes/pear_error.php line 16 */
void c_pear_error::t_getbacktrace(CVarRef v_frame //  = null_variant
) {
} /* function */
/* SRC: classes/pear_error.php line 18 */
void c_pear_error::t_tostring() {
} /* function */
Object co_pear_error(CArrRef params, bool init /* = true */) {
  return Object((NEW(c_pear_error)())->dynCreate(params, init));
}
Variant pm_php$classes$pear_error_php(bool incOnce /* = false */, LVariableTable* variables /* = NULL */) {
  {
    DECLARE_SYSTEM_GLOBALS(g);
    bool &alreadyRun = g->run_pm_php$classes$pear_error_php;
    if (alreadyRun) { if (incOnce) return true;}
    else alreadyRun = true;
    if (!variables) variables = g;
  }
  PSEUDOMAIN_INJECTION(run_init::classes/pear_error.php);
  DECLARE_SYSTEM_GLOBALS(g);
  LVariableTable *gVariables __attribute__((__unused__)) = get_variable_table();
  return true;
} /* function */

///////////////////////////////////////////////////////////////////////////////
}
