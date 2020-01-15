#pragma once
#include "Uzol.h"
#include "Vstup.h"
#include "Vystup.h"

typedef int (*PorovnajPtr)(void* uzol1, void* uzol2);

class Zoznam
{
private:
	Uzol* aStart = nullptr;
public:
	void Sort(const char* pMenoSuboru, PorovnajPtr compareFunction);
	void Uloz(const char* pMenoSuboru);
	void Vypis(const char* pMenoSuboru);
	void Find(char pHladanyChar);
	void Zmaz(Uzol* uzol);
	~Zoznam();
};
