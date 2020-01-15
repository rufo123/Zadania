#pragma once
#include "Zoznam.h"
#include <vector>

using namespace std;

class PoleZoznamov
{
private:

	string NEPLATNA_HODNOTA = "";
	string aText;
	Zoznam aPoleZoznamov[51];
	
public:
	PoleZoznamov();
	void pridajDoZoznamu(const char* pMenoSuboru);
	~PoleZoznamov();
	void VypisPoleZoznamov();
	void VypisZhodneSlova(int pPocetPismen);

};

