#include "Biatlon.h"
#include <iostream>;
#include "Vystup.h"
#include <time.h> 
#include <algorithm> 
#include <random>

using namespace std;

void Biatlon::Start(const char* pMenoSuboru)
{

	int poradie = -1;
	string priezvisko;
	string meno;
	string krajina;
	int body;

	Vstup vstupny(pMenoSuboru);

	while (poradie != 0)
	{
		poradie = vstupny.NacitajInt();
		priezvisko = vstupny.NacitajString();
		meno = vstupny.NacitajString();
		krajina = vstupny.NacitajString();
		body = vstupny.NacitajInt();

		Pretekarka pretekarka(poradie, priezvisko, meno, krajina, body);

		if (poradie == 0) {
			break;
		}

		pretekarky.insert(pretekarky.begin(), pretekarka);


		

	}

	

}

void Biatlon::UrcPoradie()
{
	int pomCislo = 0;
	int pomTerce = 0;
	int pomTrestnyBod = 0;

	

		for (int i = 0; i < pretekarky.size(); i++) {

			pomCislo = rand() % 800 + 1700;
			//Pretekarka pomPretek = *it;
			pretekarky[i].setDosCas(pomCislo);
			pomTerce = rand() % 40;
			pretekarky[i].setTerce(pomTerce);

			for (int i = 0; i < 40-pomTerce; i++)
			{
				pomTrestnyBod = rand() % 5 + 15;
				pretekarky[i].pridajCas(pomTrestnyBod);
				pretekarky[i].addTime(pomTrestnyBod);

			}

		}

	
}

void Biatlon::Vypis(const char* pMenoSuboru)
{
	Vystup vystupSubour(pMenoSuboru);




	for (int i = 0; i < pretekarky.size(); i++) {

		
	

		
		string pomVypis = pretekarky[i].getMeno();

		int cas = pretekarky[i].getCelkovyCas();

		

		for (int i = 0; i < pretekarky.size(); i++) {
		
			pomZoznam[i] = pretekarky[i].getCelkovyCas();

		}

		srand(time(0));
		random_shuffle(&pomZoznam[0], &pomZoznam[89]);


		
		/*for (int pretek = 0; pretek < pretekarky.size(); pretek++) {

			if (i = 0) {
				break;
			}

			if (pomZoznam[i] == pretekarky[pretek].getCelkovyCas())
				vystupSubour.Vypis(to_string(pretekarky[i].getPoradie()) + " " + pretekarky[i].getPriezvisko() + " " + pretekarky[i].getMeno() + " " + pretekarky[i].getKrajina() + " " + to_string(pretekarky[i].getDosCas()) + " " + to_string(40 - pretekarky[i].getTerce()) + " " + to_string(cas), false);

		}*/

		

			vystupSubour.Vypis(to_string(pretekarky[i].getPoradie()) + " " + pretekarky[i].getPriezvisko() + " " + pretekarky[i].getMeno() + " " + pretekarky[i].getKrajina() + " " + to_string(pretekarky[i].getDosCas()) + " " + to_string(40 - pretekarky[i].getTerce()) + " " + to_string(cas), true); //Vypis do suboru
			vystupSubour.Vypis(to_string(pretekarky[i].getPoradie()) + " " + pretekarky[i].getPriezvisko() + " " + pretekarky[i].getMeno() + " " + pretekarky[i].getKrajina() + " " + to_string(pretekarky[i].getDosCas()) + " " + to_string(40 - pretekarky[i].getTerce()) + " " + to_string(cas), false);
		
	


		

		
		
	}

		

			




	



	
}
