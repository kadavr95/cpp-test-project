//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TestArea.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	//Image1->Canvas->Rectangle(X-20, Y-20,X+20,Y+20) ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	Refresh();
	PatBlt(Image1->Canvas->Handle, 0, 0, Image1->Width,Image1->Height, WHITENESS);
	Image1->Canvas->Rectangle(50, 50,350,350) ;


   Image1->Canvas->Rectangle(X-20, Y-20,X+20,Y+20) ;
}
//---------------------------------------------------------------------------
