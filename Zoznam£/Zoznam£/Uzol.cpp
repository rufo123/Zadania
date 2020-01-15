#include "Uzol.h"


int Porovnaj(void* string1Ptr, void* string2Ptr)
{
	auto p1 = (TYP_HODNOTA*)string1Ptr;
	auto p2 = (TYP_HODNOTA*)string2Ptr;

	string pomString1 = *p1;
	string pomString2 = *p2;

	return pomString1.compare(pomString2);
}

Uzol::Uzol(TYP_HODNOTA pHodnota, Uzol* pDalsi)
{
	aDalsi = pDalsi;
	aHodnota = pHodnota;
}
