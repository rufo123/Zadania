#pragma once
#include <vector>
#include <iostream>
#include "Stanice.h"

using namespace std;

class Vlaky
{
private:
	int aCisloVlaku; //Vlak je jednoznacne charakterizovany cislom Vlaku

	vector<Stanice * > zoznamStanic;

	int aPocitadloStanic = 0;
public:

	Vlaky(int pCisloVlaku);
	Vlaky(const Vlaky& zdroj);
	Vlaky& operator=(const Vlaky& zdroj);
	int dajCisloVlaku();
	void pridajStanicu(Stanice pStanica);
	int vratPocetStanic();
	void vypisStanice();
	Vlaky VratVlak() { return *this; };
	Vlaky VratVlak(int pCisloVlaku);
	int getPocitadlo() { return aPocitadloStanic; };
};

