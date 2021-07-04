// dllmain.cpp : Definiert den Einstiegspunkt für die DLL-Anwendung.
#include "pch.h"

#define GMEXPORT extern "C" __declspec(dllexport)

GMEXPORT double isEven(int n)
{
	if (n % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}