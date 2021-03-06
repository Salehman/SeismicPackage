/*<license>
 -------------------------------------------------------------------------------
  Copyright (c) 2007 ConocoPhillips Company
 
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
 
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
 
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
 -------------------------------------------------------------------------------
 </license>*/
//------------------- horiz_edit_pop.cc ----------------------//
//------------------- horiz_edit_pop.cc ----------------------//
//------------------- horiz_edit_pop.cc ----------------------//

//         implementation file for the HorizEditPop class
//                 derived from the SLDialog class


#include "horiz_edit_pop.hh"
#include "horiz_edit.hh"
#include "sl/slp_push.hh"
#include "wproc.h"
#include "cprim.h"

//------------------- constructors and destructor -----------------//
//------------------- constructors and destructor -----------------//
//------------------- constructors and destructor -----------------//

HorizEditPop::HorizEditPop (SLDelay *slparent, char *name, HelpCtx Hctx,
         void *vector_list)
        : SLDialog(slparent, name, Hctx,True)
{ SLSmartForm *work = workArea();
  SLpPush     *remove = addBottomRemove();
                        addBottomKeyhelp();
                        addBottomHelp();
  remove->unmanageShellWhenPressed(this);

  _hzedit = new HorizEdit(work,name, vector_list, Hctx, False, True, True);
  work->attach(_hzedit, work, work, work, work);
}

HorizEditPop::HorizEditPop (Widget parent, char *name, HelpCtx Hctx,
         void *vector_list)
        : SLDialog(parent, name, Hctx,True)
{ SLSmartForm *work = workArea();
  SLpPush     *remove = addBottomRemove();
                        addBottomKeyhelp();
                        addBottomHelp();
  remove->unmanageShellWhenPressed(this);

  _hzedit = new HorizEdit(work,name, vector_list, Hctx, False, True, True);
  work->attach(_hzedit, work, work, work, work);
}


HorizEditPop::~HorizEditPop(void)
{if(_hzedit != NULL) delete _hzedit;
 _hzedit = NULL;
}

//------------------------ end ----------------------------------//
//------------------------ end ----------------------------------//
//------------------------ end ----------------------------------//

