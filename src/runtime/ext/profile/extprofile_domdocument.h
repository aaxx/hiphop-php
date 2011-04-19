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

#ifndef __EXTPROFILE_DOMDOCUMENT_H__
#define __EXTPROFILE_DOMDOCUMENT_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_domdocument.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant x_dom_document_create_element(CVarRef obj, CStrRef name, CStrRef value = null_string) {
  FUNCTION_INJECTION_BUILTIN(dom_document_create_element);
  return f_dom_document_create_element(obj, name, value);
}

inline Variant x_dom_document_create_document_fragment(CVarRef obj) {
  FUNCTION_INJECTION_BUILTIN(dom_document_create_document_fragment);
  return f_dom_document_create_document_fragment(obj);
}

inline Variant x_dom_document_create_text_node(CVarRef obj, CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(dom_document_create_text_node);
  return f_dom_document_create_text_node(obj, data);
}

inline Variant x_dom_document_create_comment(CVarRef obj, CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(dom_document_create_comment);
  return f_dom_document_create_comment(obj, data);
}

inline Variant x_dom_document_create_cdatasection(CVarRef obj, CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(dom_document_create_cdatasection);
  return f_dom_document_create_cdatasection(obj, data);
}

inline Variant x_dom_document_create_processing_instruction(CVarRef obj, CStrRef target, CStrRef data = null_string) {
  FUNCTION_INJECTION_BUILTIN(dom_document_create_processing_instruction);
  return f_dom_document_create_processing_instruction(obj, target, data);
}

inline Variant x_dom_document_create_attribute(CVarRef obj, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(dom_document_create_attribute);
  return f_dom_document_create_attribute(obj, name);
}

inline Variant x_dom_document_create_entity_reference(CVarRef obj, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(dom_document_create_entity_reference);
  return f_dom_document_create_entity_reference(obj, name);
}

inline Variant x_dom_document_get_elements_by_tag_name(CVarRef obj, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(dom_document_get_elements_by_tag_name);
  return f_dom_document_get_elements_by_tag_name(obj, name);
}

inline Variant x_dom_document_import_node(CVarRef obj, CObjRef importednode, bool deep = false) {
  FUNCTION_INJECTION_BUILTIN(dom_document_import_node);
  return f_dom_document_import_node(obj, importednode, deep);
}

inline Variant x_dom_document_create_element_ns(CVarRef obj, CStrRef namespaceuri, CStrRef qualifiedname, CStrRef value = null_string) {
  FUNCTION_INJECTION_BUILTIN(dom_document_create_element_ns);
  return f_dom_document_create_element_ns(obj, namespaceuri, qualifiedname, value);
}

inline Variant x_dom_document_create_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef qualifiedname) {
  FUNCTION_INJECTION_BUILTIN(dom_document_create_attribute_ns);
  return f_dom_document_create_attribute_ns(obj, namespaceuri, qualifiedname);
}

inline Variant x_dom_document_get_elements_by_tag_name_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname) {
  FUNCTION_INJECTION_BUILTIN(dom_document_get_elements_by_tag_name_ns);
  return f_dom_document_get_elements_by_tag_name_ns(obj, namespaceuri, localname);
}

inline Variant x_dom_document_get_element_by_id(CVarRef obj, CStrRef elementid) {
  FUNCTION_INJECTION_BUILTIN(dom_document_get_element_by_id);
  return f_dom_document_get_element_by_id(obj, elementid);
}

inline Variant x_dom_document_normalize_document(CVarRef obj) {
  FUNCTION_INJECTION_BUILTIN(dom_document_normalize_document);
  return f_dom_document_normalize_document(obj);
}

inline Variant x_dom_document_save(CVarRef obj, CStrRef file, int64 options = 0) {
  FUNCTION_INJECTION_BUILTIN(dom_document_save);
  return f_dom_document_save(obj, file, options);
}

inline Variant x_dom_document_savexml(CVarRef obj, CObjRef node = null_object, int64 options = 0) {
  FUNCTION_INJECTION_BUILTIN(dom_document_savexml);
  return f_dom_document_savexml(obj, node, options);
}

inline Variant x_dom_document_validate(CVarRef obj) {
  FUNCTION_INJECTION_BUILTIN(dom_document_validate);
  return f_dom_document_validate(obj);
}

inline Variant x_dom_document_xinclude(CVarRef obj, int64 options = 0) {
  FUNCTION_INJECTION_BUILTIN(dom_document_xinclude);
  return f_dom_document_xinclude(obj, options);
}

inline Variant x_dom_document_save_html(CVarRef obj) {
  FUNCTION_INJECTION_BUILTIN(dom_document_save_html);
  return f_dom_document_save_html(obj);
}

inline Variant x_dom_document_save_html_file(CVarRef obj, CStrRef file) {
  FUNCTION_INJECTION_BUILTIN(dom_document_save_html_file);
  return f_dom_document_save_html_file(obj, file);
}

inline Variant x_dom_document_schema_validate_file(CVarRef obj, CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(dom_document_schema_validate_file);
  return f_dom_document_schema_validate_file(obj, filename);
}

inline Variant x_dom_document_schema_validate_xml(CVarRef obj, CStrRef source) {
  FUNCTION_INJECTION_BUILTIN(dom_document_schema_validate_xml);
  return f_dom_document_schema_validate_xml(obj, source);
}

inline Variant x_dom_document_relaxng_validate_file(CVarRef obj, CStrRef filename) {
  FUNCTION_INJECTION_BUILTIN(dom_document_relaxng_validate_file);
  return f_dom_document_relaxng_validate_file(obj, filename);
}

inline Variant x_dom_document_relaxng_validate_xml(CVarRef obj, CStrRef source) {
  FUNCTION_INJECTION_BUILTIN(dom_document_relaxng_validate_xml);
  return f_dom_document_relaxng_validate_xml(obj, source);
}

inline Variant x_dom_node_insert_before(CVarRef obj, CObjRef newnode, CObjRef refnode = null) {
  FUNCTION_INJECTION_BUILTIN(dom_node_insert_before);
  return f_dom_node_insert_before(obj, newnode, refnode);
}

inline Variant x_dom_node_replace_child(CVarRef obj, CObjRef newchildobj, CObjRef oldchildobj) {
  FUNCTION_INJECTION_BUILTIN(dom_node_replace_child);
  return f_dom_node_replace_child(obj, newchildobj, oldchildobj);
}

inline Variant x_dom_node_remove_child(CVarRef obj, CObjRef node) {
  FUNCTION_INJECTION_BUILTIN(dom_node_remove_child);
  return f_dom_node_remove_child(obj, node);
}

inline Variant x_dom_node_append_child(CVarRef obj, CObjRef newnode) {
  FUNCTION_INJECTION_BUILTIN(dom_node_append_child);
  return f_dom_node_append_child(obj, newnode);
}

inline Variant x_dom_node_has_child_nodes(CVarRef obj) {
  FUNCTION_INJECTION_BUILTIN(dom_node_has_child_nodes);
  return f_dom_node_has_child_nodes(obj);
}

inline Variant x_dom_node_clone_node(CVarRef obj, bool deep = false) {
  FUNCTION_INJECTION_BUILTIN(dom_node_clone_node);
  return f_dom_node_clone_node(obj, deep);
}

inline Variant x_dom_node_normalize(CVarRef obj) {
  FUNCTION_INJECTION_BUILTIN(dom_node_normalize);
  return f_dom_node_normalize(obj);
}

inline Variant x_dom_node_is_supported(CVarRef obj, CStrRef feature, CStrRef version) {
  FUNCTION_INJECTION_BUILTIN(dom_node_is_supported);
  return f_dom_node_is_supported(obj, feature, version);
}

inline Variant x_dom_node_has_attributes(CVarRef obj) {
  FUNCTION_INJECTION_BUILTIN(dom_node_has_attributes);
  return f_dom_node_has_attributes(obj);
}

inline Variant x_dom_node_is_same_node(CVarRef obj, CObjRef node) {
  FUNCTION_INJECTION_BUILTIN(dom_node_is_same_node);
  return f_dom_node_is_same_node(obj, node);
}

inline Variant x_dom_node_lookup_prefix(CVarRef obj, CStrRef prefix) {
  FUNCTION_INJECTION_BUILTIN(dom_node_lookup_prefix);
  return f_dom_node_lookup_prefix(obj, prefix);
}

inline Variant x_dom_node_is_default_namespace(CVarRef obj, CStrRef namespaceuri) {
  FUNCTION_INJECTION_BUILTIN(dom_node_is_default_namespace);
  return f_dom_node_is_default_namespace(obj, namespaceuri);
}

inline Variant x_dom_node_lookup_namespace_uri(CVarRef obj, CStrRef namespaceuri) {
  FUNCTION_INJECTION_BUILTIN(dom_node_lookup_namespace_uri);
  return f_dom_node_lookup_namespace_uri(obj, namespaceuri);
}

inline Variant x_dom_nodelist_item(CVarRef obj, int64 index) {
  FUNCTION_INJECTION_BUILTIN(dom_nodelist_item);
  return f_dom_nodelist_item(obj, index);
}

inline Variant x_dom_namednodemap_get_named_item(CVarRef obj, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(dom_namednodemap_get_named_item);
  return f_dom_namednodemap_get_named_item(obj, name);
}

inline Variant x_dom_namednodemap_item(CVarRef obj, int64 index) {
  FUNCTION_INJECTION_BUILTIN(dom_namednodemap_item);
  return f_dom_namednodemap_item(obj, index);
}

inline Variant x_dom_namednodemap_get_named_item_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname) {
  FUNCTION_INJECTION_BUILTIN(dom_namednodemap_get_named_item_ns);
  return f_dom_namednodemap_get_named_item_ns(obj, namespaceuri, localname);
}

inline Variant x_dom_characterdata_substring_data(CVarRef obj, int64 offset, int64 count) {
  FUNCTION_INJECTION_BUILTIN(dom_characterdata_substring_data);
  return f_dom_characterdata_substring_data(obj, offset, count);
}

inline Variant x_dom_characterdata_append_data(CVarRef obj, CStrRef arg) {
  FUNCTION_INJECTION_BUILTIN(dom_characterdata_append_data);
  return f_dom_characterdata_append_data(obj, arg);
}

inline Variant x_dom_characterdata_insert_data(CVarRef obj, int64 offset, CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(dom_characterdata_insert_data);
  return f_dom_characterdata_insert_data(obj, offset, data);
}

inline Variant x_dom_characterdata_delete_data(CVarRef obj, int64 offset, int64 count) {
  FUNCTION_INJECTION_BUILTIN(dom_characterdata_delete_data);
  return f_dom_characterdata_delete_data(obj, offset, count);
}

inline Variant x_dom_characterdata_replace_data(CVarRef obj, int64 offset, int64 count, CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(dom_characterdata_replace_data);
  return f_dom_characterdata_replace_data(obj, offset, count, data);
}

inline Variant x_dom_attr_is_id(CVarRef obj) {
  FUNCTION_INJECTION_BUILTIN(dom_attr_is_id);
  return f_dom_attr_is_id(obj);
}

inline Variant x_dom_element_get_attribute(CVarRef obj, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(dom_element_get_attribute);
  return f_dom_element_get_attribute(obj, name);
}

inline Variant x_dom_element_set_attribute(CVarRef obj, CStrRef name, CStrRef value) {
  FUNCTION_INJECTION_BUILTIN(dom_element_set_attribute);
  return f_dom_element_set_attribute(obj, name, value);
}

inline Variant x_dom_element_remove_attribute(CVarRef obj, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(dom_element_remove_attribute);
  return f_dom_element_remove_attribute(obj, name);
}

inline Variant x_dom_element_get_attribute_node(CVarRef obj, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(dom_element_get_attribute_node);
  return f_dom_element_get_attribute_node(obj, name);
}

inline Variant x_dom_element_set_attribute_node(CVarRef obj, CObjRef newattr) {
  FUNCTION_INJECTION_BUILTIN(dom_element_set_attribute_node);
  return f_dom_element_set_attribute_node(obj, newattr);
}

inline Variant x_dom_element_remove_attribute_node(CVarRef obj, CObjRef oldattr) {
  FUNCTION_INJECTION_BUILTIN(dom_element_remove_attribute_node);
  return f_dom_element_remove_attribute_node(obj, oldattr);
}

inline Variant x_dom_element_get_elements_by_tag_name(CVarRef obj, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(dom_element_get_elements_by_tag_name);
  return f_dom_element_get_elements_by_tag_name(obj, name);
}

inline Variant x_dom_element_get_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname) {
  FUNCTION_INJECTION_BUILTIN(dom_element_get_attribute_ns);
  return f_dom_element_get_attribute_ns(obj, namespaceuri, localname);
}

inline Variant x_dom_element_set_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef name, CStrRef value) {
  FUNCTION_INJECTION_BUILTIN(dom_element_set_attribute_ns);
  return f_dom_element_set_attribute_ns(obj, namespaceuri, name, value);
}

inline Variant x_dom_element_remove_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname) {
  FUNCTION_INJECTION_BUILTIN(dom_element_remove_attribute_ns);
  return f_dom_element_remove_attribute_ns(obj, namespaceuri, localname);
}

inline Variant x_dom_element_get_attribute_node_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname) {
  FUNCTION_INJECTION_BUILTIN(dom_element_get_attribute_node_ns);
  return f_dom_element_get_attribute_node_ns(obj, namespaceuri, localname);
}

inline Variant x_dom_element_set_attribute_node_ns(CVarRef obj, CObjRef newattr) {
  FUNCTION_INJECTION_BUILTIN(dom_element_set_attribute_node_ns);
  return f_dom_element_set_attribute_node_ns(obj, newattr);
}

inline Variant x_dom_element_get_elements_by_tag_name_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname) {
  FUNCTION_INJECTION_BUILTIN(dom_element_get_elements_by_tag_name_ns);
  return f_dom_element_get_elements_by_tag_name_ns(obj, namespaceuri, localname);
}

inline Variant x_dom_element_has_attribute(CVarRef obj, CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(dom_element_has_attribute);
  return f_dom_element_has_attribute(obj, name);
}

inline Variant x_dom_element_has_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname) {
  FUNCTION_INJECTION_BUILTIN(dom_element_has_attribute_ns);
  return f_dom_element_has_attribute_ns(obj, namespaceuri, localname);
}

inline Variant x_dom_element_set_id_attribute(CVarRef obj, CStrRef name, bool isid) {
  FUNCTION_INJECTION_BUILTIN(dom_element_set_id_attribute);
  return f_dom_element_set_id_attribute(obj, name, isid);
}

inline Variant x_dom_element_set_id_attribute_ns(CVarRef obj, CStrRef namespaceuri, CStrRef localname, bool isid) {
  FUNCTION_INJECTION_BUILTIN(dom_element_set_id_attribute_ns);
  return f_dom_element_set_id_attribute_ns(obj, namespaceuri, localname, isid);
}

inline Variant x_dom_element_set_id_attribute_node(CVarRef obj, CObjRef idattr, bool isid) {
  FUNCTION_INJECTION_BUILTIN(dom_element_set_id_attribute_node);
  return f_dom_element_set_id_attribute_node(obj, idattr, isid);
}

inline Variant x_dom_text_split_text(CVarRef obj, int64 offset) {
  FUNCTION_INJECTION_BUILTIN(dom_text_split_text);
  return f_dom_text_split_text(obj, offset);
}

inline Variant x_dom_text_is_whitespace_in_element_content(CVarRef obj) {
  FUNCTION_INJECTION_BUILTIN(dom_text_is_whitespace_in_element_content);
  return f_dom_text_is_whitespace_in_element_content(obj);
}

inline Variant x_dom_xpath_register_ns(CVarRef obj, CStrRef prefix, CStrRef uri) {
  FUNCTION_INJECTION_BUILTIN(dom_xpath_register_ns);
  return f_dom_xpath_register_ns(obj, prefix, uri);
}

inline Variant x_dom_xpath_query(CVarRef obj, CStrRef expr, CObjRef context = null_object) {
  FUNCTION_INJECTION_BUILTIN(dom_xpath_query);
  return f_dom_xpath_query(obj, expr, context);
}

inline Variant x_dom_xpath_evaluate(CVarRef obj, CStrRef expr, CObjRef context = null_object) {
  FUNCTION_INJECTION_BUILTIN(dom_xpath_evaluate);
  return f_dom_xpath_evaluate(obj, expr, context);
}

inline Variant x_dom_xpath_register_php_functions(CVarRef obj, CVarRef funcs = null) {
  FUNCTION_INJECTION_BUILTIN(dom_xpath_register_php_functions);
  return f_dom_xpath_register_php_functions(obj, funcs);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_DOMDOCUMENT_H__
