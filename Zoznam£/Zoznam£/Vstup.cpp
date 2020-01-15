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
	
	string pomVystup;

	if (aVstupSubor.is_open()) {

		while (!aVstupSubor.eof())
		{
			getline(aVstupSubor, pomVystup);
			return pomVystup;
		}

	}

	return "";
}
