/*
   +----------------------------------------------------------------------+
   | PHP Version 5 / Tokyo tyrant                                         |
   +----------------------------------------------------------------------+
   | Copyright (c) 2009-2010 Mikko Koppanen                               |
   +----------------------------------------------------------------------+
   | This source file is dual-licensed.                                   |
   | It is available under the terms of New BSD License that is bundled   |
   | with this package in the file LICENSE and available under the terms  |
   | of PHP license version 3.01. PHP license is bundled with this        |
   | package in the file LICENSE and can be obtained through the          |
   | world-wide-web at the following url:                                 |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Mikko Kopppanen <mkoppanen@php.net>                          |
   +----------------------------------------------------------------------+
*/

#ifndef _PHP_TOKYO_TYRANT_FUNCS_H_
# define _PHP_TOKYO_TYRANT_FUNCS_H_

#include "php_tokyo_tyrant.h"
#include "php_tokyo_tyrant_private.h"

void php_tt_object_init(php_tokyo_tyrant_object *intern TSRMLS_DC);

zend_bool php_tt_is_connected(php_tokyo_tyrant_object *intern TSRMLS_DC);

TCMAP *php_tt_zval_to_tcmap(zval *array, zend_bool value_as_key TSRMLS_DC);

void php_tt_tcmap_to_zval(TCMAP *map, zval *array TSRMLS_DC);

void php_tt_tcmapstring_to_zval(TCMAP *map, zval *array TSRMLS_DC);

zend_bool php_tt_query_object_init(php_tokyo_tyrant_query_object *query, zval *parent TSRMLS_DC);

zend_bool php_tt_iterator_object_init(php_tokyo_tyrant_iterator_object *iterator, zval *parent TSRMLS_DC);

void php_tt_tclist_to_array(TCRDB *rdb, TCLIST *res, zval *container TSRMLS_DC);

zend_string *php_tt_prefix(zend_string *key);

#endif
