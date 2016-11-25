//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisElev.hh"

//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//
//------------------ fortran spelling adjustments --------------------//

#if NEED_UNDERSCORE
#define elev_wrap_create             elev_wrap_create_
#define elev_wrap_delete             elev_wrap_delete_
#define elev_wrap_update             elev_wrap_update_
#define elev_wrap_wrapup             elev_wrap_wrapup_
#define elev_wrap_oneset             elev_wrap_oneset_
#define elev_wrap_twosets            elev_wrap_twosets_
#elif NEED_CAPITALS
#define elev_wrap_create             ELEV_WRAP_CREATE
#define elev_wrap_delete             ELEV_WRAP_DELETE
#define elev_wrap_update             ELEV_WRAP_UPDATE
#define elev_wrap_wrapup             ELEV_WRAP_WRAPUP
#define elev_wrap_oneset             ELEV_WRAP_ONESET
#define elev_wrap_twosets            ELEV_WRAP_TWOSETS
#endif

//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//
//----------------------- fortran prototypes -------------------------//

extern "C"
    {
    CpseisBase::ModuleCreate   elev_wrap_create;
    CpseisBase::ModuleDestroy  elev_wrap_delete;
    CpseisBase::ModuleUpdate   elev_wrap_update;
    CpseisBase::ModuleWrapup   elev_wrap_wrapup;
    CpseisBase::ModuleOneset   elev_wrap_oneset;
    CpseisBase::ModuleTwosets  elev_wrap_twosets;
    }

//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//
//------------------------ constructor -------------------------------//

CpseisElev::CpseisElev() : CpseisBase ("ELEV",
                                       elev_wrap_create,
                                       elev_wrap_delete,
                                       elev_wrap_update,
                                       elev_wrap_wrapup,
                                       elev_wrap_oneset,
                                       elev_wrap_twosets) {}

//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//
//------------------------------ end ---------------------------------//