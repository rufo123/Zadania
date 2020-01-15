#include "Vstup.h"

Vstup::Vstup(const char* pMenoSuboru)
{
	if (pMenoSuboru && *pMenoSuboru) 
	{
		aVstupSubor.open(pMenoSuboru, ios::in);
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
	string pomString;
	
	while (!aVstupSubor.eof())
	{

	
		getline(aVstupSubor, pomString);
		return pomString;
	}
	return "";

	
	
}
