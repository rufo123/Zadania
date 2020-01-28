#include "Pretekarka.h"
#include "Vystup.h"

Pretekarka::Pretekarka(int pPoradie, string pPriezvisko, string pMeno, string pKrajina, int pPocetZiskBodov)
{
	aPoradie = pPoradie;
	aPriezvisko = pPriezvisko;
	aMeno = pMeno;
	aKrajina = pKrajina;
	aPocetZiskBodov = pPocetZiskBodov;
}

Pretekarka::Pretekarka(const Pretekarka& zdroj)
{
	aPoradie = zdroj.aPoradie;
	aPriezvisko = zdroj.aPriezvisko;
	aMeno = zdroj.aMeno;
	aKrajina = zdroj.aKrajina;
	aPocetZiskBodov = zdroj.aPocetZiskBodov;
}

Pretekarka& Pretekarka::operator=(const Pretekarka& zdroj)
{
	if (this != &zdroj) {
		aPoradie = zdroj.aPoradie;
		aPriezvisko = zdroj.aPriezvisko;
		aMeno = zdroj.aMeno;
		aKrajina = zdroj.aKrajina;
		aPocetZiskBodov = zdroj.aPocetZiskBodov;

	}
	else {
		return *this;
	}
}


