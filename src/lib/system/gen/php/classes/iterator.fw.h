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

#ifndef __GENERATED_php_classes_iterator_fw_h__
#define __GENERATED_php_classes_iterator_fw_h__

#include <cpp/base/hphp_system.h>

// Forward Declarations

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

// 1. Constants

// 2. Classes
FORWARD_DECLARE_CLASS(outeriterator);
FORWARD_DECLARE_CLASS(serializable);
FORWARD_DECLARE_CLASS(traversable);
FORWARD_DECLARE_CLASS(countable);
FORWARD_DECLARE_CLASS(arrayiterator)
FORWARD_DECLARE_CLASS(iterator);
FORWARD_DECLARE_CLASS(appenditerator)
FORWARD_DECLARE_CLASS(seekableiterator);
FORWARD_DECLARE_CLASS(recursiveiterator);
FORWARD_DECLARE_CLASS(recursivedirectoryiterator)
extern const int64 q_recursivedirectoryiterator_CURRENT_AS_SELF;
extern const int64 q_recursivedirectoryiterator_CURRENT_AS_FILEINFO;
extern const int64 q_recursivedirectoryiterator_CURRENT_AS_PATHNAME;
extern const int64 q_recursivedirectoryiterator_KEY_AS_PATHNAME;
extern const int64 q_recursivedirectoryiterator_KEY_AS_FILENAME;
extern const int64 q_recursivedirectoryiterator_NEW_CURRENT_AND_KEY;
FORWARD_DECLARE_CLASS(directoryiterator)
FORWARD_DECLARE_CLASS(iteratoraggregate);
FORWARD_DECLARE_CLASS(recursiveiteratoriterator)
extern const int64 q_recursiveiteratoriterator_LEAVES_ONLY;
extern const int64 q_recursiveiteratoriterator_SELF_FIRST;
extern const int64 q_recursiveiteratoriterator_CHILD_FIRST;
extern const int64 q_recursiveiteratoriterator_CATCH_GET_CHILD;
FORWARD_DECLARE_CLASS(filteriterator);

///////////////////////////////////////////////////////////////////////////////
}
#include <php/classes/arrayaccess.fw.h>
#include <php/classes/splfile.fw.h>
#include <php/globals/constants.fw.h>

#endif // __GENERATED_php_classes_iterator_fw_h__
