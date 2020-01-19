#include "Riadenie.h"

void Riadenie::Start()
{

	Vstup vstup("Test.txt");
	ZoznamVlakov zoznam;
	Vlaky zvolenyVlak(0);
	int cisloVlaku = -1;
	


	while (cisloVlaku != 0)
	{
		cisloVlaku = vstup.NacitajCislo();

		if (cisloVlaku == 0) {
			break;
		}


		//Vlaky pomVlak(cisloVlaku);
		//novyZoznam.vratVlak(pomVlak);
		//pomVlak.pridajStanicu(stanica);
		Vlaky pomocny(cisloVlaku);
		//cout << pomocny.dajCisloVlaku() << endl;
		Stanice pomocnaStanica(vstup.NacitajString());

		Vlaky vlakNaVypis = zoznam.vratVlak(pomocny, pomocnaStanica);

		string cas = vstup.NacitajString();
		//cout << "---" << endl;
		//cout << pomocny.vratPocetStanic() << endl;
		
		vlakNaVypis.vypisStanice();
		vlakNaVypis.pridajStanicu();
		
		

	
	}

	/*Vlaky novyVlak = zvolenyVlak.VratVlak(0);
	novyVlak.pridajStanicu((string)"Pepe");
	novyVlak.vypisStanice();
	cout << "ddd" << endl;*/
	


}
