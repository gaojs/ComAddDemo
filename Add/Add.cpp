// Add.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "Add.h"
#include "AddExport.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: If this DLL is dynamically linked against the MFC DLLs,
//		any functions exported from this DLL which call into
//		MFC must have the AFX_MANAGE_STATE macro added at the
//		very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

// CAddApp

BEGIN_MESSAGE_MAP(CAddApp, CWinApp)
END_MESSAGE_MAP()


// CAddApp construction

CAddApp::CAddApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CAddApp object

CAddApp theApp;


// CAddApp initialization

BOOL CAddApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}

MYLIBDLL int AddMethod(int num1, int num2)
{
	return num1 + num2;
}