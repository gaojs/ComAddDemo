// ComAddDemoTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>
#import "E:\\VC Codes\\VS2010\\OOPComTest\\ComAddDemo\\ComAddDemo\\Debug\\ComAddDemo.tlb" raw_interfaces_only, raw_native_types, no_namespace, named_guids

int _tmain(int argc, _TCHAR* argv[])
{
	long num1 = 10;
	long num2 = 20;
	long sum = 0;

	CoInitialize(NULL);
	CLSID clsid;
	IISimAddObj* pProxy;
	HRESULT hr = CLSIDFromProgID(OLESTR("ComAddDemo.SimAddObj"), &clsid);//这里的字符串一定要和注册表中的ProgID一致!!!   
	hr = CoCreateInstance(clsid, NULL, CLSCTX_LOCAL_SERVER, IID_IISimAddObj, (void **)&pProxy); //创建COM对象
	pProxy->Add(num1, num2, &sum); //调用COM接口
	printf("%d + %d = %d", num1, num2, sum);

	if (pProxy)
	{
		pProxy->Release();
	}
	pProxy = NULL;	

	hr = CLSIDFromProgID(OLESTR("ComAddDemo.SimAddObj"), &clsid);//这里的字符串一定要和注册表中的ProgID一致!!!   
	hr = CoCreateInstance(clsid, NULL, CLSCTX_LOCAL_SERVER, IID_IISimAddObj, (void **)&pProxy); //创建COM对象
	pProxy->Add(num1, num2, &sum); //调用COM接口
	printf("%d + %d = %d", num1, num2, sum);


	num1 = 40;
	num2 = 40;
	pProxy->Add(num1, num2, &sum); //调用COM接口
	printf("%d + %d = %d", num1, num2, sum);

	if (pProxy)
	{
		pProxy->Release();
	}
	pProxy = NULL;	

	CoUninitialize();

	
	return 0;
}

