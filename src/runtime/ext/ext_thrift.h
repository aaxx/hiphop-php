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

#ifndef __EXT_THRIFT_H__
#define __EXT_THRIFT_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

void f_thrift_protocol_write_binary(CObjRef transportobj, CStrRef method_name, int64 msgtype, CObjRef request_struct, int seqid, bool strict_write);
Variant f_thrift_protocol_read_binary(CObjRef transportobj, CStrRef obj_typename, bool strict_read);

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_THRIFT_H__
