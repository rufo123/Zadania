#include "Hrac.h"

void Hrac::naplnRuku(string pKarta)
{

	if (pocitadloKariet != 16)
	{
		aKarty[pocitadloKariet] = pKarta;
		pocitadloKariet = pocitadloKariet++;
	}
}

string Hrac::getKarta(int pCisloVZozname)
{
	if (pCisloVZozname < 32) {

		return aKarty[pCisloVZozname];
	}

	return "";
}

void Hrac::pridajVyhru()
{
	aPocitadloVyhier = aPocitadloVyhier++;
}

int Hrac::getVyhry()
{
	return aPocitadloVyhier;
}


