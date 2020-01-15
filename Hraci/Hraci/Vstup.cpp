#include "Vstup.h"

Vstup::Vstup(const char* pMenoSuboru)
{
	if (pMenoSuboru && *pMenoSuboru) {
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
	if (aVstupSubor.is_open()) {
	
		while (!aVstupSubor.eof())
		{
			string pomocny;
			getline(aVstupSubor, pomocny);
			return pomocny;
		}

		return "";
	}


}
