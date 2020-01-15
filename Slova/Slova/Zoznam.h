#pragma once
#include <string>
#include <vector>
#include "Text.h"

using namespace std;

class Zoznam
{
private:
	int aPocetSlov = 0;
	vector<Text> aZoznamSlov;
public:
	Zoznam(int pPocetPismen);
	Zoznam() = default;
	void pridajSlovo(Text *pText);
	int vratPocetSlov();
	void vypisZoznam();
};

