//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisDecon.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define decon_wrap_create             decon_wrap_create_
#define decon_wrap_delete             decon_wrap_delete_
#define decon_wrap_update             decon_wrap_update_
#define decon_wrap_wrapup             decon_wrap_wrapup_
#define decon_wrap_oneset             decon_wrap_oneset_
#define decon_wrap_twosets            decon_wrap_twosets_
#elif NEED_CAPITALS
#define decon_wrap_create             DECON_WRAP_CREATE
#define decon_wrap_delete             DECON_WRAP_DELETE
#define decon_wrap_update             DECON_WRAP_UPDATE
#define decon_wrap_wrapup             DECON_WRAP_WRAPUP
#define decon_wrap_oneset             DECON_WRAP_ONESET
#define decon_wrap_twosets            DECON_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   decon_wrap_create;
    CpseisBase::ModuleDestroy  decon_wrap_delete;
    CpseisBase::ModuleUpdate   decon_wrap_update;
    CpseisBase::ModuleWrapup   decon_wrap_wrapup;
    CpseisBase::ModuleOneset   decon_wrap_oneset;
    CpseisBase::ModuleTwosets  decon_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisDecon::CpseisDecon() : CpseisBase ("DECON",
                                       decon_wrap_create,
                                       decon_wrap_delete,
                                       decon_wrap_update,
                                       decon_wrap_wrapup,
                                       decon_wrap_oneset,
                                       decon_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
