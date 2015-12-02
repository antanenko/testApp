//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "mainUnit.h"
#include "myThread.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

   tth	=  new MyThread(true);
   tth->Priority = tpNormal;
   tth->Label1 = Label1;


   	TcpClient1 = new TTcpClient(this);
  //	TcpClient1->OnSend = TcpClient1Send;
	TcpClient1->RemotePort = 23;
	TcpClient1->RemoteHost = "192.168.100.238";

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{

   tth->Resume();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  // tth->Suspend();
  tth->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
   bool res;
	res = TcpClient1->Connect();
	if(res)
	{
		Memo1->Lines->Add("connect ok");
	}
	else
	{
		Memo1->Lines->Add("not connect");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
   char buf[128] = "otau_get_count_channels\r\n";
   char buf2[128];
   TcpClient1->SendBuf(buf,strlen(buf),0);
   Memo1->Lines->Add(AnsiString(buf));

   Sleep(500);
   TcpClient1->ReceiveBuf(buf2,20,0);
   Memo1->Lines->Add(AnsiString(buf2));
}
//---------------------------------------------------------------------------

