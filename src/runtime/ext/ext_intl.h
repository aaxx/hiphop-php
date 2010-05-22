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

#ifndef __EXT_INTL_H__
#define __EXT_INTL_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern const int64 q_normalizer_NONE;
extern const int64 q_normalizer_FORM_D;
extern const int64 q_normalizer_NFD;
extern const int64 q_normalizer_FORM_KD;
extern const int64 q_normalizer_NFKD;
extern const int64 q_normalizer_FORM_C;
extern const int64 q_normalizer_NFC;
extern const int64 q_normalizer_FORM_KC;
extern const int64 q_normalizer_NFKC;

///////////////////////////////////////////////////////////////////////////////
// class Normalizer

FORWARD_DECLARE_CLASS(normalizer);
class c_normalizer : public ExtObjectData, public Sweepable {
 public:
  BEGIN_CLASS_MAP(normalizer)
  END_CLASS_MAP(normalizer)
  DECLARE_CLASS(normalizer, Normalizer, ObjectData)
  DECLARE_INVOKES_FROM_EVAL
  ObjectData* dynCreate(CArrRef params, bool init = true);

  // need to implement
  public: c_normalizer();
  public: ~c_normalizer();
  public: void t___construct();
  public: static Variant ti_isnormalized(const char* cls , CStrRef input, int64 form = q_normalizer_FORM_C);
  public: static Variant ti_normalize(const char* cls , CStrRef input, int64 form = q_normalizer_FORM_C);
  public: Variant t___destruct();

  // implemented by HPHP
  public: c_normalizer *create();
  public: void dynConstruct(CArrRef Params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: virtual void destruct();

};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_INTL_H__
