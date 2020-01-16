#include "Karty.h"
#include <ctime>
#include <iostream>   
#include <algorithm> 
#include <random>

void Karty::Premiesaj()
{
	srand(time(0));
	random_shuffle(&aKarty[0], &aKarty[32]);
	cout << "Test" << endl;
}

void Karty::Roztried()
{
	for (int i = 0; i < 32; i++)
	{
		if (i < 16) {
			hrac1.naplnRuku(aKarty[i]);


		}
		else {
			hrac2.naplnRuku(aKarty[i]);
		}
	}
}

void Karty::PorovnajKarty()
{
	int pomCisloKarty1;
	int pomCisloKarty2;

	char pomHodnKarty1;
	char pomHodnKarty2;

	for (int i = 0; i < 16; i++)
	{
		pomCisloKarty1 = hrac1.getKarta(i).at(1) - '0';
		pomCisloKarty2 = hrac2.getKarta(i).at(1) - '0';

		pomHodnKarty1 = hrac1.getKarta(i).at(0);
		pomHodnKarty2 = hrac2.getKarta(i).at(0);

		cout << "Porovnavam Karty:" << pomCisloKarty1 << pomHodnKarty1 << "" << pomCisloKarty2 << pomHodnKarty2 << endl;

		if (pomCisloKarty1 > pomCisloKarty2) {
			hrac1.pridajVyhru();
			cout << "Kartu berie hrac 1" << endl;
		}
		else if (pomCisloKarty1 < pomCisloKarty2) {

			hrac2.pridajVyhru();
			cout << "Kartu berie hrac 2" << endl;
		}
		else if (pomCisloKarty1 == pomCisloKarty2) {
			if (pomHodnKarty1 < pomCisloKarty2) {
				hrac1.pridajVyhru();
				cout << "Kartu berie hrac 1" << endl;
			}
			else {
				hrac2.pridajVyhru();
				cout << "Kartu berie hrac 2" << endl;
			}

		}
	}


}

