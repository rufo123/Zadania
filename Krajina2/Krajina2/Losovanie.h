#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <time.h>
#include <random>
#include <cstdio>

using namespace std;

class Losovanie
{

private:

	

	string aSkA[4];
	string aSkB[4];
	string aSkC[4];
	string aSkD[4];
	string aSkE[4];
	string aSkF[4];
	string aSkG[4];
	string aSkH[4];

	int aPoradieA[4];
	int aPoradieB[4];
	int aPoradieC[4];
	int aPoradieD[4];
	int aPoradieE[4];
	int aPoradieF[4];
	int aPoradieG[4];
	int aPoradieH[4];

	ifstream VstupnySubor;
	fstream VystupnySubor;

	char aOznSkupin[8] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
	int obtiaznostSk[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

public:

	Losovanie(const char* pMenoSuboru);
	void ZaradDoSkupin();
	string* VratSkupinu(char pOznSkupiny);
	int* VratPoradovnikSkupin(char oOznSkupiny);
	void ShufflePostupnost();
	string NacitajRiadok();
	void VypisDoSuboru(const char* pMenoSuboru);
	int ObtiaznostSkupiny(char pOznSkupiny);
	void SortObtiaznosti();
	void Vypis();
	void Najdi(int pCislo);
};

