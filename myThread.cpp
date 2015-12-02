//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "myThread.h"
#include "mainUnit.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall MyThread::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall MyThread::MyThread(bool CreateSuspended)
	: TThread(CreateSuspended)
{
	nCount = 0;
}
//---------------------------------------------------------------------------
void __fastcall MyThread::Execute()
{
	//---- Place thread code here ----
 	while ( !Terminated )
	{
	Synchronize(UpdateLabel);
	}
   //	MessageBox(NULL, "Все сделано!", "Информация", MB_OK);

}
//---------------------------------------------------------------------------

void __fastcall MyThread::UpdateLabel(void)
{
  //	if ( pLabel )
		Sleep(100);
		Label1->Caption = nCount;
		Form1->ProgressBar1->Position = nCount;
		if ( nCount < 100 ) nCount ++;
		else
		nCount = 0;
		Application->ProcessMessages();
}
