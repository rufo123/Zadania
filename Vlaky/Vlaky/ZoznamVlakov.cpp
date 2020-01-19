#include "ZoznamVlakov.h"
#include <iostream>

using namespace std;

void ZoznamVlakov::vytvorVlak(Vlaky pVlak)
{
	zoznamVlakov.push_back(pVlak);

}

Vlaky ZoznamVlakov::vratVlak(Vlaky pVlak, Stanice pStanica)
{
	bool jeUzVlakVZozname = false;

	Vlaky vlakNaPorovnanie = pVlak;



	Vlaky pomocnyVlak = NULL;


		for (auto it = zoznamVlakov.begin(); it != zoznamVlakov.end(); it++)
		{

			Vlaky pomocnyVlak = *it;


			if (pomocnyVlak.dajCisloVlaku() == pVlak.dajCisloVlaku()) {
				jeUzVlakVZozname = true;

				pVlak = pomocnyVlak;
				//delete &pomocnyVlak;
			}

			

		}
		if (jeUzVlakVZozname == false) {
			zoznamVlakov.push_back(pVlak);
		}

		pVlak.pridajStanicu(pStanica);
		return pVlak;
		
	



}
