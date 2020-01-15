#include "PoleZoznamov.h"
#include "Vstup.h"
#include "Text.h"


PoleZoznamov::PoleZoznamov()
{

}

void PoleZoznamov::pridajDoZoznamu(const char* pMenoSuboru)
{
	Vstup aVstup(pMenoSuboru);
	Text* text;

	aText = "Unindentified";

	while (aText != NEPLATNA_HODNOTA)
	{

		Text* text = new Text(aVstup.NacitajString());
		aText = text->getSlovo();

		int dlzkaTextu = aText.length();

		for (int i = 1; i < 51; i++)
		{
			if (dlzkaTextu == i) {
				Text* novyTxtPointer = text;
				aPoleZoznamov[i].pridajSlovo(novyTxtPointer);
				
				

			}
		}

		
		

	}
}





PoleZoznamov::~PoleZoznamov()
{
	//delete aPoleZoznamov;
}

void PoleZoznamov::VypisPoleZoznamov()
{
	for (int i = 1; i < 51; i++)
	{
		cout << "Pocet Pismen " << i << " " << aPoleZoznamov[i].vratPocetSlov()   << endl;
	}
}

void PoleZoznamov::VypisZhodneSlova(int pPocetPismen)
{
	int pocitadloZhod = 0;

	for (int i = 1; i < 51; i++)
	{
		if (i == pPocetPismen) {
			aPoleZoznamov[i].vypisZoznam();
			pocitadloZhod = pocitadloZhod++;
		}
		
	}

	if (pocitadloZhod == 0) {
		cout << "Bohuzial, sa slova tejto dlzky v zozname nenachadzaju" << endl;

	}
}


