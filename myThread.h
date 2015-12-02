//---------------------------------------------------------------------------

#ifndef myThreadH
#define myThreadH
//---------------------------------------------------------------------------
#include <Classes.hpp>
//---------------------------------------------------------------------------
class MyThread : public TThread
{
private:
	int nCount;

protected:

public:
   TLabel *Label1;
	void __fastcall Execute();
	__fastcall MyThread(bool CreateSuspended);
	void __fastcall UpdateLabel(void);
};
//---------------------------------------------------------------------------
#endif
