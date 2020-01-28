#pragma once
#include "Pretekarka.h"
#include "Vstup.h"
#include <vector>
class Biatlon
{
private:

	int pomZoznam[89];
	vector<Pretekarka> pretekarky;

public:
	void Start(const char* pMenoSuboru);
	void UrcPoradie();
	void Vypis(const char* pMenoSuboru);
};

