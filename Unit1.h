//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

#include "Winkel.h"

//---------------------------------------------------------------------------
class Winkel;
class TForm1 : public TForm
{
__published:	// Von der IDE verwaltete Komponenten
        TEdit *WinkelA;
        TEdit *WinkelB;
        TLabel *AusgabeLable;
        TButton *addWinkel;
        TButton *SubBtn;
        void __fastcall WinkelAChange(TObject *Sender);
        void __fastcall WinkelBChange(TObject *Sender);
        void __fastcall addWinkelClick(TObject *Sender);
        void __fastcall SubBtnClick(TObject *Sender);
private:	// Anwender-Deklarationen
public:		// Anwender-Deklarationen
        __fastcall TForm1(TComponent* Owner);

        Winkel a;
        Winkel b;
        Winkel c;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 