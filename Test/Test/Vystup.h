#pragma once
#include <fstream>

using namespace std;

class Vystup
{
private:
	ofstream aVystupSubor;
public:
	Vystup(const char* pMenoSuboru);
	~Vystup();
	void Vypis(string pString, bool pWrite);
};

