#pragma once
#include <fstream>
#include <string>

using namespace std;

class Vstup
{
private:
	ifstream aVstupSubor;
public:
	Vstup(const char* pMenoSuboru);
	~Vstup();
	string NacitajString();
};

