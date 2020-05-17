//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int s = 3666 ;// number of second we want to start counting from
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
     //this code will be executed every  1000 miliseconds = 1sec  due to Interval property 1000
     s--;

     int hour,min,sec;
     AnsiString godziny,minuty,sekundy; // we need it to display so need to convert 'ints' for 'strings'

     hour = s / 3600;
     min = ( s - hour * 3600) / 60;
     sec =  ( s - hour * 3600) - min * 60;

     godziny = IntToStr(hour);
     minuty =  IntToStr(min);
     sekundy = IntToStr(sec);

     Label1->Caption = godziny+":"+minuty+":"+sekundy;
}
//---------------------------------------------------------------------------
