// ISimAddObj.h : Declaration of the CISimAddObj

#pragma once
#include "resource.h"       // main symbols



#include "ComAddDemo_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CISimAddObj

class ATL_NO_VTABLE CISimAddObj :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CISimAddObj, &CLSID_ISimAddObj>,
	public IDispatchImpl<IISimAddObj, &IID_IISimAddObj, &LIBID_ComAddDemoLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CISimAddObj()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_ISIMADDOBJ)


BEGIN_COM_MAP(CISimAddObj)
	COM_INTERFACE_ENTRY(IISimAddObj)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(Add)(LONG num1, LONG num2, LONG* sum);
	STDMETHOD(Test)(void);
	STDMETHOD(TestVar)(VARIANT va);
};

OBJECT_ENTRY_AUTO(__uuidof(ISimAddObj), CISimAddObj)
