#include "Vystup.h"
#include <iostream>

Vystup::Vystup(const char* pMenoSuboru)
{
	if (pMenoSuboru && *pMenoSuboru) {
	
		aVystupSubor.open(pMenoSuboru, ios::out, ios::trunc );
	}
}

Vystup::~Vystup()
{
	if (aVystupSubor.is_open()) {
		aVystupSubor.close();
	}
}

void Vystup::Vypis(string pString, bool pWrite) //pWrite -> TRUE/FALSE Case Sensitive, Urcuje ci bude zapisovat do suboru alebo nie (tym padom na konzolu).
{
	if (aVystupSubor.is_open()) {
	
		if (pWrite) {
			aVystupSubor << pString << endl;
		}
		else {
			cout << pString << endl;
		}
		
	}
}

