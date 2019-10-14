// ISimAddObj.cpp : Implementation of CISimAddObj

#include "stdafx.h"
#include "ISimAddObj.h"

#include "AddExport.h"

#pragma comment(lib,"Add.lib")

// CISimAddObj



STDMETHODIMP CISimAddObj::Add(LONG num1, LONG num2, LONG* sum)
{
	*sum = AddMethod(num1, num2);

	return S_OK;
}


STDMETHODIMP CISimAddObj::Test(void)
{

	return S_OK;
}


STDMETHODIMP CISimAddObj::TestVar(VARIANT va)
{
	VariantInit(&va);

	VariantClear(&va);

	return S_OK;
}
