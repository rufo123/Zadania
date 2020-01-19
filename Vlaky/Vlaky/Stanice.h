#pragma once
#include <string>

using namespace std;

class Stanice
{
	string aNazovStanice; //Stanica je jednoznacne charakterizovana nazvom stanice
public:
	Stanice(string nazovStanice);
	string getStanica() { return aNazovStanice; };
};

