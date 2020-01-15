#include "Turnaj.h"
#include "Vstup.h"
#include "iostream"
#include <algorithm>    // std::random_shuffle
#include <ctime>        // std::time
#include <cstdlib>

Turnaj::Turnaj(const char* pMenoSuboru)
{
	aMenoSuboru = pMenoSuboru;
}

void Turnaj::nacitajHracov()
{
	if (aMenoSuboru && *aMenoSuboru) {
		Vstup vstupnySubor(aMenoSuboru);

		for (int i = 0; i < 32; i++)
		{
			aZoznamHracov[i] = to_string(i+1) + " " + vstupnySubor.NacitajString();
			aVelkostZoznamu = aVelkostZoznamu++;
			
		}

		for (int i = 0; i < 32; i++)
		{
			cout << aZoznamHracov[i] << endl;

		}

	}

}

void Turnaj::shuffle()
{
	if (aMenoSuboru && *aMenoSuboru) {
		
		

		if (aVelkostZoznamu == 32) {

			srand(time(0));
			random_shuffle(begin(aZoznamHracov), end(aZoznamHracov));
			

			cout << "Test" << endl;

		}
	
	}
}

void Turnaj::PrveKolo()
{
	int pocitadloDvojic = 0;
	int prvyZDvojice = 0;
	int druhyZDvojice = 0;

	for (int i = 0; i < 16; i++)
	{
		int prvaRandHodnota = rand() % 100 + 1;
		int druhaRandHodnota = rand() % 100 + 1;

		prvyZDvojice = (int) aZoznamHracov[pocitadloDvojic].at(0) - '0';
		druhyZDvojice =  (int) aZoznamHracov[pocitadloDvojic + 1].at(0) - '0';

		

		if (prvaRandHodnota - prvyZDvojice >= druhaRandHodnota - druhyZDvojice) {
			aZoznamVitazov[i] = aZoznamHracov[pocitadloDvojic];
		}
		else {
			aZoznamVitazov[i] = aZoznamHracov[pocitadloDvojic + 1];
		}
		cout << "Test" << endl;

		pocitadloDvojic = pocitadloDvojic + 2;

	}
}

void Turnaj::DalsieKola()
{
	for (int i = 0; i < 16; i++)
	{
		aZoznamWin.insert(aZoznamWin.begin(), aZoznamVitazov[i]);
	}

	int prvyZDvojice;
	int druhyZDvojice;
	
	aZoznamWin.size();

	while (aZoznamWin.size() != 1)
	{

		int pomocnePocitadlo = 0;

		for (int i = 0; i < aZoznamWin.size() / 2; i++)
		{
			int prvaRandHodnota = rand() % 100 + 1;
			int druhaRandHodnota = rand() % 100 + 1;

			prvyZDvojice = prvaRandHodnota - (aZoznamWin.at(pomocnePocitadlo).at(0) - '0');
			druhyZDvojice =  druhaRandHodnota - (aZoznamWin.at(pomocnePocitadlo+1).at(0) - '0');
			//prvyZDvojice = (int)aZoznamWin.at(0) - '0';
			//druhyZDvojice = (int)aZoznamWin.at(0) - '0';

			if (prvyZDvojice >= druhyZDvojice) {
				aZoznamWinDalsi.insert(aZoznamWinDalsi.begin(), aZoznamWin.at(pomocnePocitadlo));
			}
			else {
				aZoznamWinDalsi.insert(aZoznamWinDalsi.begin(), aZoznamWin.at(pomocnePocitadlo+1));
				
			}

			pomocnePocitadlo = pomocnePocitadlo + 2;


		}

		aZoznamWin.clear();

		for (int i = 0; i < aZoznamWinDalsi.size(); i++)
		{
			aZoznamWin.insert(aZoznamWin.begin(), aZoznamWinDalsi.at(i));
		}

		aZoznamWinDalsi.clear();

		


	}

	aZoznamWin.at(0);

}
