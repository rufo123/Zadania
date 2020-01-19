#include "Vstup.h"

Vstup::Vstup(const char* pMenoSuboru)
{
	if (pMenoSuboru && *pMenoSuboru) {
		vstupSubor.open(pMenoSuboru, ios::in);
	}
}

int Vstup::NacitajCislo()
{

	int pomInteger = 0;

	while (!vstupSubor.eof())
	{
		vstupSubor >> pomInteger;
		return pomInteger;
	}

	return -1;


}

string Vstup::NacitajString()
{
	string pomString = "";

	while (!vstupSubor.eof())
	{
		vstupSubor >> pomString;
		return pomString;
	}


}

Vstup::~Vstup()
{
	if (vstupSubor.is_open()) {
		vstupSubor.close();
	}

}
