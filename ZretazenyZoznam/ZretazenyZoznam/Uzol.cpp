#include "Uzol.h"

string Porovnaj(void* string1Ptr, void* string2Ptr)
{
	TYP_HODNOTA* p1 = (TYP_HODNOTA*)cislo1Ptr;
	auto p2 = (TYP_HODNOTA*)cislo2Ptr;

	return *p1 - *p2;
}

Uzol::Uzol(TYP_HODNOTA pHodnota, Uzol* pDalsi)
{
	aHodnota = pHodnota;
	aDalsi = pDalsi;
}
