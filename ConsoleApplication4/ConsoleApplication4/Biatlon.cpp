#include "Biatlon.h"
#include <iostream>;
#include "Vystup.h"

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

	

		for (auto it = pretekarky.begin(); it != pretekarky.end(); ++it) {

			pomCislo = rand() % 800 + 1700;
			Pretekarka pomPretek = *it;
			pomPretek.setDosCas(pomCislo);
			pomTerce = rand() % 40;
			pomPretek.setTerce(pomTerce);

			for (int i = 0; i < 40-pomTerce; i++)
			{
				pomTrestnyBod = rand() % 5 + 15;
				pomPretek.pridajCas(pomTrestnyBod);

			}

		}

	
}

void Biatlon::Vypis(const char* pMenoSuboru)
{
	Vystup vystupSubour(pMenoSuboru);

	for (auto it = pretekarky.begin(); it != pretekarky.end(); ++it) {
	
		Pretekarka pomPretekarka = *it;

		string pomVypis = pomPretekarka.getMeno();

		vystupSubour.Vypis(to_string(pomPretekarka.getPoradie()) + " " + pomPretekarka.getPriezvisko() + " " + pomPretekarka.getMeno() + " " + pomPretekarka.getKrajina() + " " + to_string(pomPretekarka.getDosCas()) + " " + to_string(40 - pomPretekarka.getTerce()) + " " + to_string(pomPretekarka.getCelkovyCas()), false);
	
	}
}
