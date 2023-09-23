//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit4.h"
#include "Unit3.h"                          
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
AnsiString nazwa_r, haslo_r, haslo_rr;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCreate(TObject *Sender)
{
this->BorderStyle = bsSingle;
this->BorderIcons = this->BorderIcons >> biMaximize;
Form2->Visible = false;
Edit1->Text = "Nazwa";
Edit2->Text = "Has³o";
Edit3->Text = "Has³o";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Edit1Change(TObject *Sender)
{
nazwa_r = Edit1->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Edit2Change(TObject *Sender)
{
haslo_r = Edit2->Text;        
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Edit3Change(TObject *Sender)
{
haslo_rr = Edit3->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
AnsiString nazwa_r_ch, haslo_r_ch, haslo_rr_ch;

if(nazwa_r!=nazwa_r_ch && haslo_r!=haslo_r_ch && haslo_rr!=haslo_rr_ch
&& haslo_r==haslo_rr)
{
Form1->Visible = true;
Form2->Visible = false;
}
else ShowMessage("Please complete all fields correctly");
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
Form4->Visible = true;
Form2->Visible = false;
}
//---------------------------------------------------------------------------
