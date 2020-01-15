#pragma once
#include <string>
#include <vector>

using namespace std;

class Turnaj
{
private:
	string aZoznamHracov[32];
	vector<string>aZoznamWin;
	string aZoznamVitazov[16];
	vector<string>aZoznamWinDalsi;
	const char* aMenoSuboru;
	int aVelkostZoznamu = 0;
public:
	Turnaj(const char* pMenoSuboru);
	void nacitajHracov();
	void shuffle();
	void PrveKolo();
	void DalsieKola();
};

