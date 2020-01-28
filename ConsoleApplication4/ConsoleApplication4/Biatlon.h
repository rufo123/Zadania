#pragma once
#include "Pretekarka.h"
#include "Vstup.h"
#include <vector>
class Biatlon
{
private:

	vector<Pretekarka> pretekarky;

public:
	void Start(const char* pMenoSuboru);
	void UrcPoradie();
	void Vypis(const char* pMenoSuboru);
};

