// pch.cpp: Quelldatei, die dem vorkompilierten Header entspricht

#include "pch.h"

// Bei der Verwendung vorkompilierter Header ist diese Quelldatei für eine erfolgreiche Kompilierung erforderlich.
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