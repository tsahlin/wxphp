/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_DOCVIEW_H_GUARD
#define WXPHP_DOCVIEW_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_docview_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxFileHistory_entry;
void php_wxFileHistory_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFileHistory_php: public wxFileHistory{
	public:
	
	wxFileHistory_php(size_t maxFiles=9, wxWindowID idBase=wxID_FILE1):wxFileHistory(maxFiles, idBase){}
		
		
	void InitProperties(){
	}
	
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxFileHistory 
{
    zend_object zo;
    wxFileHistory_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxFileHistory_free(void *object TSRMLS_DC);
zend_object_value php_wxFileHistory_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileHistory_functions[] = {
	PHP_ME(php_wxObject, UnShare, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, UnRef, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsSameAs, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, Ref, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, GetClassInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxObject, IsKindOf, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, AddFileToHistory, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, AddFilesToMenu, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, GetBaseId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, GetCount, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, GetHistoryFile, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, GetMaxFiles, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, Load, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, RemoveFileFromHistory, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, RemoveMenu, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, Save, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, SetBaseId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, UseMenu, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileHistory, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

#endif //WXPHP_DOCVIEW_H_GUARD
