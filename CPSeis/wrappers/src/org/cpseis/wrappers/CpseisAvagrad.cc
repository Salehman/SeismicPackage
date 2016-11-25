//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisAvagrad.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define avagrad_wrap_create             avagrad_wrap_create_
#define avagrad_wrap_delete             avagrad_wrap_delete_
#define avagrad_wrap_update             avagrad_wrap_update_
#define avagrad_wrap_wrapup             avagrad_wrap_wrapup_
#define avagrad_wrap_oneset             avagrad_wrap_oneset_
#define avagrad_wrap_twosets            avagrad_wrap_twosets_
#elif NEED_CAPITALS
#define avagrad_wrap_create             AVAGRAD_WRAP_CREATE
#define avagrad_wrap_delete             AVAGRAD_WRAP_DELETE
#define avagrad_wrap_update             AVAGRAD_WRAP_UPDATE
#define avagrad_wrap_wrapup             AVAGRAD_WRAP_WRAPUP
#define avagrad_wrap_oneset             AVAGRAD_WRAP_ONESET
#define avagrad_wrap_twosets            AVAGRAD_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   avagrad_wrap_create;
    CpseisBase::ModuleDestroy  avagrad_wrap_delete;
    CpseisBase::ModuleUpdate   avagrad_wrap_update;
    CpseisBase::ModuleWrapup   avagrad_wrap_wrapup;
    CpseisBase::ModuleOneset   avagrad_wrap_oneset;
    CpseisBase::ModuleTwosets  avagrad_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisAvagrad::CpseisAvagrad() : CpseisBase ("AVAGRAD",
                                       avagrad_wrap_create,
                                       avagrad_wrap_delete,
                                       avagrad_wrap_update,
                                       avagrad_wrap_wrapup,
                                       avagrad_wrap_oneset,
                                       avagrad_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//