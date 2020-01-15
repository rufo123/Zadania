#include "Zoznam.h"

Zoznam::Zoznam(int pPocetPismen)
{
	aPocetSlov = pPocetPismen;
}

void Zoznam::pridajSlovo(Text *pText)
{
	auto i = aZoznamSlov.insert(aZoznamSlov.begin(), *pText);
	aPocetSlov = aPocetSlov++;
}

int Zoznam::vratPocetSlov()
{
	return aPocetSlov;
}

void Zoznam::vypisZoznam()
{
	cout << "-----------------" << endl;
	cout << "  Zhodne slova  " << endl;
	cout << "-----------------" << endl;
	for (auto i = 0; i < aZoznamSlov.size(); ++i)
	{
		std::cout << aZoznamSlov.at(i).getSlovo() << endl;
	}
}
