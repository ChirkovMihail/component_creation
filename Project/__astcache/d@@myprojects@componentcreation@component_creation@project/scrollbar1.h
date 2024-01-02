//---------------------------------------------------------------------------

#ifndef ScrollBar1H
#define ScrollBar1H
//---------------------------------------------------------------------------
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class PACKAGE TScrollBar1 : public TScrollBar
{
private:
    double value;
protected:
public:
	__fastcall TScrollBar1(TComponent* Owner);
__published:
    __property double my_property;
};
//---------------------------------------------------------------------------
#endif
