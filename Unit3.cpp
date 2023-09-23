//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <SysUtils.hpp>
#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
int secondsPassed = 0;
int licznik = 0;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormCreate(TObject *Sender)
{
this->BorderStyle = bsSingle;
this->BorderIcons = this->BorderIcons >> biMaximize;
Form3->Visible = false;


licznik++;

}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
Form3->Visible = false;
Form1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Timer1Timer(TObject *Sender)
{
  secondsPassed++;
  Edit3->Text = IntToStr(secondsPassed) + " seconds";
}
//---------------------------------------------------------------------------


