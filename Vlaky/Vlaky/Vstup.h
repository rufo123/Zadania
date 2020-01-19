#pragma once
#include <fstream>

using namespace std;

class Vstup
{
private:
	ifstream vstupSubor;
public:
	Vstup(const char* pMenoSuboru);
	int NacitajCislo();
	string NacitajString();
	~Vstup();
};

