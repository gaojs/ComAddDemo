// Add.h : main header file for the Add DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CAddApp
// See Add.cpp for the implementation of this class
//

class CAddApp : public CWinApp
{
public:
	CAddApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
