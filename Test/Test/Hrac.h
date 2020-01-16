#pragma once
#include <string>

using namespace std;

class Hrac
{
private:
	string aKarty[16];
	int pocitadloKariet = 0;
	int aPocitadloVyhier = 0;
public:
	void naplnRuku(string pKarta);
	string getKarta(int pCisloVZozname);
	void pridajVyhru();
	int getVyhry();
	bool MamKartu(string pKarta);
	
	
};

