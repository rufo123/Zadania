#include "Vstup.h"

Vstup::Vstup(const char* pMenoSuboru)
{
	if (pMenoSuboru && *pMenoSuboru) {
	
		aVstupSubor.open(pMenoSuboru);
	
	}
}

Vstup::~Vstup()
{
	if (aVstupSubor.is_open()) {
		aVstupSubor.close();
	}
}

string Vstup::NacitajString()
{
	
	string pomString = "";

	if (aVstupSubor.is_open()) {

		while (!aVstupSubor.eof())
		{
			aVstupSubor >> pomString;
			return pomString;
		}

	}

	return "";	
}

int Vstup::NacitajInt()
{
	int pomInt = 0;

	if (aVstupSubor.is_open()) {

		while (!aVstupSubor.eof())
		{
			aVstupSubor >> pomInt;
			return pomInt;
		}

	}

	return 0;
}
