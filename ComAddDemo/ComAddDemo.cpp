// ComAddDemo.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "ComAddDemo_i.h"

using namespace ATL;

class CComAddDemoModule : public ATL::CAtlExeModuleT< CComAddDemoModule >
	{
public :
	DECLARE_LIBID(LIBID_ComAddDemoLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMADDDEMO, "{3481650B-37D2-48F5-922A-FA0788A1A680}")
	};

CComAddDemoModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

