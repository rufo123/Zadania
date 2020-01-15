#pragma once
#include <string>


using namespace std;

typedef int TYP_HODNOTA;
const TYP_HODNOTA NEPLATNA_HODNOTA = 0;

string Porovnaj(void* string1Ptr, void* string2Ptr);

class Uzol
{
	TYP_HODNOTA aHodnota = 0;
	Uzol* aDalsi = nullptr;
public:
	Uzol(TYP_HODNOTA pHodnota, Uzol* pDalsi);
	//Getter
	TYP_HODNOTA* Hodnota() { return &aHodnota; };
	Uzol* Dalsi() { return aDalsi; };
	//Setter
	void Dalsi(Uzol* pDalsi) { aDalsi = pDalsi; };
};

