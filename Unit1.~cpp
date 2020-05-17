//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int s = 6 ;// number of second we want to start counting from
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
     AnsiString s_hour,s_min,s_sec; // we need it to display so need to convert 'ints' for 'strings'

     hour = s / 3600;
     min = ( s - hour * 3600) / 60;
     sec =  ( s - hour * 3600) - min * 60;

     s_hour = IntToStr(hour);
     s_min =  IntToStr(min);
     s_sec = IntToStr(sec);

     Label1->Caption = s_hour+":"+s_min+":"+s_sec;


     if(s <= 0)
     {
        Label1->Caption = "Time finished";
     }
}
//---------------------------------------------------------------------------
