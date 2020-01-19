#pragma once
#include <vector>
#include <iostream>
#include "Vlaky.h"

using namespace std;

class ZoznamVlakov
{
private:

	vector<Vlaky> zoznamVlakov;
public:
	void vytvorVlak(Vlaky pVlak);
	Vlaky vratVlak(Vlaky pVlak, Stanice stanica);

};

