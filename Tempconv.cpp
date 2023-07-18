//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Tempconv.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
double C,K,F;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Conv(TObject *Sender)
{
	int flag;
	flag=1;
	if(flag){
						   C=DisplayC->Text.ToDouble();
						   F=(9.0*C)/5.0+32;
						   K=273+C;
						   flag=0;
	}
	if(flag){
						   K=DisplayK->Text.ToDouble();
						   C=K-273;
						   F=(9/5)*C+32;
						   flag=0;
	}
	if(flag){
						   F=DisplayF->Text.ToDouble();
						   C=(5*(F-32))/9.0;
						   K=273+C;
						   flag=0;
	}
	if(flag==1){
		DisplayC->Text="Error";
	}
	DisplayC->Text=C;
	DisplayK->Text=K;
	DisplayF->Text= F;
}
//---------------------------------------------------------------------------
