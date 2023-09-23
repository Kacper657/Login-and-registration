//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int licz = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
this->BorderStyle = bsSingle;
this->BorderIcons = this->BorderIcons >> biMaximize;
Edit1->Text = "Nazwax";
Edit2->Text = "Has³ox";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
Form2->Visible = true;
Form1->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{

Edit1->Text = Form2->Edit1->Text;
Edit2->Text = Form2->Edit2->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
if(Edit1->Text!= Form2->Edit1->Text)
{
    ShowMessage("First create account!");

}
else ShowMessage("Your name is: " + Form2->Edit1->Text);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
if(Edit2->Text!= Form2->Edit2->Text)
{
    ShowMessage("First create account!");

}
else ShowMessage("Your password is: " + Form2->Edit2->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
if(Form2->Edit1->Text == Edit1->Text && Form2->Edit2->Text == Edit2->Text)
{
Form3->Visible = true;
Form1->Visible = false;
licz++;
}
else ShowMessage("First create account!");
}
//---------------------------------------------------------------------------



