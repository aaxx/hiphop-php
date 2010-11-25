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

#ifndef __INCLUDE_EXPRESSION_H__
#define __INCLUDE_EXPRESSION_H__

#include <compiler/expression/unary_op_expression.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

DECLARE_BOOST_TYPES(IncludeExpression);

class IncludeExpression : public UnaryOpExpression, public IParseHandler {
public:
  static std::string CheckInclude(ConstructPtr includeExp,
                                  ExpressionPtr fileExp, bool documentRoot);

public:
  IncludeExpression(EXPRESSION_CONSTRUCTOR_PARAMETERS,
                    ExpressionPtr exp, int op);

  DECLARE_BASE_EXPRESSION_VIRTUAL_FUNCTIONS;
  ExpressionPtr preOptimize(AnalysisResultPtr ar);
  ExpressionPtr postOptimize(AnalysisResultPtr ar);

  // implementing IParseHandler
  virtual void onParse(AnalysisResultPtr ar, BlockScopePtr scope);

  void setDocumentRoot() { m_documentRoot = true;}
  bool isDocumentRoot() { return m_documentRoot;}
  void setPrivateScope() { m_privateScope = true; }
  bool getPrivateScope() const { return m_privateScope; }

private:
  /**
   * There are 3 forms of include paths:
   *
   *   1. "/<absolute_path>" starts with '/'.
   *   2. "<relative_path>" starts without '/': relative to containing file
   *   3. "<relative_path>" + m_documentRoot == true: relative to doc root
   */
  bool m_documentRoot;
  bool m_privateScope;
  bool m_depsSet;
  std::string m_include;

  void analyzeInclude(AnalysisResultPtr ar, const std::string &include);
};

///////////////////////////////////////////////////////////////////////////////
}
#endif // __INCLUDE_EXPRESSION_H__
