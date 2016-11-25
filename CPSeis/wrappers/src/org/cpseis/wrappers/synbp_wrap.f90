!!------------------------ synbp_wrap.f90 --------------------------!!
!!------------------------ synbp_wrap.f90 --------------------------!!
!!------------------------ synbp_wrap.f90 --------------------------!!

!!!!!!!!!! DO NOT EDIT THIS FILE - it is machine generated !!!!!!!!!!

!!------------------------------ module -----------------------------------!!
!!------------------------------ module -----------------------------------!!
!!------------------------------ module -----------------------------------!!

      module synbp_wrap_module
      use synbp_module
      implicit none
      public

      type :: synbp_wrap_struct
        type(synbp_struct),pointer :: obj
      end type synbp_wrap_struct

      end module synbp_wrap_module

!!---------------------------- create ------------------------------------!!
!!---------------------------- create ------------------------------------!!
!!---------------------------- create ------------------------------------!!

      subroutine synbp_wrap_create (fpoint)  
      use synbp_wrap_module
      implicit none
      type(synbp_wrap_struct),intent(out)   :: fpoint
      type(synbp_struct)     ,pointer       :: obj           ! local

      nullify (obj)               ! needed for intel compiler.
      call synbp_create (obj)
      fpoint%obj => obj

      end subroutine synbp_wrap_create

!!---------------------------- delete ------------------------------------!!
!!---------------------------- delete ------------------------------------!!
!!---------------------------- delete ------------------------------------!!

      subroutine synbp_wrap_delete (fpoint)   
      use synbp_wrap_module
      implicit none
      type(synbp_wrap_struct),intent(inout) :: fpoint
      type(synbp_struct)     ,pointer       :: obj           ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call synbp_delete (obj)
      fpoint%obj => obj

      end subroutine synbp_wrap_delete

!!---------------------------- update ------------------------------------!!
!!---------------------------- update ------------------------------------!!
!!---------------------------- update ------------------------------------!!

      subroutine synbp_wrap_update (fpoint)     
      use synbp_wrap_module
      implicit none
      type(synbp_wrap_struct),intent(inout) :: fpoint
      type(synbp_struct)     ,pointer       :: obj           ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call synbp_update (obj)

      end subroutine synbp_wrap_update

!!---------------------------- wrapup ------------------------------------!!
!!---------------------------- wrapup ------------------------------------!!
!!---------------------------- wrapup ------------------------------------!!

      subroutine synbp_wrap_wrapup (fpoint)      
      use synbp_wrap_module
      implicit none
      type(synbp_wrap_struct),intent(inout) :: fpoint
      type(synbp_struct)     ,pointer       :: obj           ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call synbp_wrapup (obj)

      end subroutine synbp_wrap_wrapup

!!---------------------------- oneset ------------------------------------!!
!!---------------------------- oneset ------------------------------------!!
!!---------------------------- oneset ------------------------------------!!

      subroutine synbp_wrap_oneset (fpoint,ntr,  &
                                   hd,tr,lenhd,lentr,num)
      use synbp_wrap_module
      implicit none
      type(synbp_wrap_struct),intent(inout) :: fpoint
      integer               ,intent(in)    :: lenhd,lentr,num  ! argument
      integer               ,intent(inout) :: ntr              ! argument
      double precision      ,intent(inout) :: hd(lenhd,num)    ! argument
      real                  ,intent(inout) :: tr(lentr,num)    ! argument
      type(synbp_struct)     ,pointer       :: obj              ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
      call synbp (obj,ntr,hd,tr)                ! might be commented out.

      end subroutine synbp_wrap_oneset

!!---------------------------- twosets ------------------------------------!!
!!---------------------------- twosets ------------------------------------!!
!!---------------------------- twosets ------------------------------------!!

      subroutine synbp_wrap_twosets (fpoint,ntr,                 &
                                    hd1,tr1,lenhd1,lentr1,num1, &
                                    hd2,tr2,lenhd2,lentr2,num2)
      use synbp_wrap_module
      implicit none
      type(synbp_wrap_struct),intent(inout) :: fpoint
      integer               ,intent(in)    :: lenhd1,lentr1,num1 ! argument
      integer               ,intent(in)    :: lenhd2,lentr2,num2 ! argument
      integer               ,intent(inout) :: ntr                ! argument
      double precision      ,intent(inout) :: hd1(lenhd1,num1)   ! argument
      real                  ,intent(inout) :: tr1(lentr1,num1)   ! argument
      double precision      ,intent(inout) :: hd2(lenhd2,num2)   ! argument
      real                  ,intent(inout) :: tr2(lentr2,num2)   ! argument
      type(synbp_struct)     ,pointer       :: obj                ! local

      obj => fpoint%obj
      if (.not. associated(obj)) return
!!!!  call synbp (obj,ntr,hd1,tr1,hd2,tr2)      ! might be commented out.

      end subroutine synbp_wrap_twosets

!!----------------------------- end ---------------------------------------!!
!!----------------------------- end ---------------------------------------!!
!!----------------------------- end ---------------------------------------!!