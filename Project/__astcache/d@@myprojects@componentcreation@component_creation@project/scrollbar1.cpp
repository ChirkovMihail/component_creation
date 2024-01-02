//---------------------------------------------------------------------------

#include <fmx.h>

#pragma hdrstop

#include "ScrollBar1.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TScrollBar1 *)
{
	new TScrollBar1(NULL);
}
//---------------------------------------------------------------------------
__fastcall TScrollBar1::TScrollBar1(TComponent* Owner)
	: TScrollBar(Owner)
{
}
//---------------------------------------------------------------------------
namespace Scrollbar1
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TScrollBar1)};
		RegisterComponents(L"Samples", classes, 0);
	}
}
//---------------------------------------------------------------------------
