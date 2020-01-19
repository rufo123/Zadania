#include "Vlaky.h"

Vlaky::Vlaky(int pCisloVlaku)
{
	aCisloVlaku = pCisloVlaku;
}

Vlaky::Vlaky(const Vlaky& zdroj)
{
	aCisloVlaku = zdroj.aCisloVlaku;
}

Vlaky& Vlaky::operator=(const Vlaky& zdroj)
{
	if (this != &zdroj) {
		aCisloVlaku = zdroj.aCisloVlaku;
	
	}
	else {
		return *this;
	}
}

int Vlaky::dajCisloVlaku()
{
	return aCisloVlaku;
}

void Vlaky::pridajStanicu(Stanice pStanica)
{
	zoznamStanic.push_back(pStanica);
	cout << aCisloVlaku << " " << endl;
	cout << pStanica.getStanica() << endl;

	aPocitadloStanic = aPocitadloStanic + 1;

	for (vector<Stanice>::iterator it = zoznamStanic.begin(); it != zoznamStanic.end(); it++)
	{

		Stanice pomocna = *it;

		cout << pomocna.getStanica() << endl;


	}
}

int Vlaky::vratPocetStanic() {
	cout << zoznamStanic.size();
	return zoznamStanic.size();
}

void Vlaky::vypisStanice()
{
	for (vector<Stanice>::iterator it = zoznamStanic.begin(); it != zoznamStanic.end(); it++)
	{

		Stanice pomocna = *it;

		cout << pomocna.getStanica() << endl;


	}
}

Vlaky Vlaky::VratVlak(int pCisloVlaku)
{
	if (aCisloVlaku == pCisloVlaku) {
		return *this;
	}

}
