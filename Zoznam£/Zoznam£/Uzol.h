#pragma once
#include <string>

using namespace std;

typedef string TYP_HODNOTA;
const TYP_HODNOTA NEPLATNA_HODNOTA = "";

int Porovnaj(void* cislo1ptr, void* cislo2ptr);

class Uzol
{
private:
	TYP_HODNOTA aHodnota = "";
	Uzol* aDalsi = nullptr;
public:
	Uzol(TYP_HODNOTA pHodnota, Uzol* pDalsi);
	// gettery
	TYP_HODNOTA* Hodnota() { return &aHodnota; }
	Uzol* Dalsi() { return aDalsi; }
	// setter
	void Dalsi(Uzol* pdalsi) { aDalsi = pdalsi; }
};

