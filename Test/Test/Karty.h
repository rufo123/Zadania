#pragma once
#include <string>
#include "Hrac.h"
#include "Vystup.h"

using namespace std;

class Karty
{
private:
	string aKarty[32] = {
		"A1", "B1", "C1", "D1","E1", "F1", "G1", "H1",
		"A2", "B2", "C2", "D2", "E2", "F2", "G2", "H2", 
		"A3", "B3", "C3", "D3", "E3", "F3", "G3", "H3", 
		"A4", "B4", "C4", "D4", "E4", "F4", "G4", "H4",
	};

	Hrac hrac1;
	Hrac hrac2;
public:
	void Premiesaj();
	void Roztried();
	void PorovnajKarty();
	void ZapisVysledok(const char* pMenosuboru);
	void NajdiKartu(int pCislo, char pPismeno);
};

