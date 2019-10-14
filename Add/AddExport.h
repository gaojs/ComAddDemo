#ifndef __ADDEXPORT_H__
#define __ADDEXPORT_H__

#ifdef MYLIBDLL
#define MYLIBDLL extern "C" _declspec(dllexport)
#else
#define MYLIBDLL extern "C" _declspec(dllimport)
#endif

MYLIBDLL int AddMethod(int num1, int num2);

#endif