//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
  Winkel w1;
  w1.setWinkel(55);
  Winkel w2(w1);
  Caption = w2.getWinkel();

}
//---------------------------------------------------------------------------


void __fastcall TForm1::WinkelAChange(TObject *Sender)
{
   a.setWinkel(atof(WinkelA->Text.c_str()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WinkelBChange(TObject *Sender)
{
   b.setWinkel(atof(WinkelB->Text.c_str()));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::addWinkelClick(TObject *Sender)
{
  c = a + b;

  c.normWinkel();
  AusgabeLable->Caption = c.getWinkel();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SubBtnClick(TObject *Sender)
{
  c = a - b;

  c.normWinkel();
  AusgabeLable->Caption = c.getWinkel();
}
//---------------------------------------------------------------------------
