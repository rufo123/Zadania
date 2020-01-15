#include "Zoznam.h"
#include <iostream>


Zoznam::~Zoznam()
{
	Zmaz(aStart);

}

void Zoznam::Sort(const char* pMenoSuboru, PorovnajPtr compareFunction)
{
	if (pMenoSuboru && *pMenoSuboru) {
		Vstup vstupSubor(pMenoSuboru);
		TYP_HODNOTA pString = vstupSubor.NacitajString();
		while (pString != NEPLATNA_HODNOTA)
		{
			if (aStart == nullptr)
			{
				aStart = new Uzol(pString, nullptr);
			}
			else {
				Uzol* pUzol = aStart;
				Uzol* pPredchUzol = nullptr;
				while (pUzol != nullptr && compareFunction(&pString, pUzol->Hodnota()) > 0)
				{
					pPredchUzol = pUzol;
					pUzol = pUzol->Dalsi();
				}
				pUzol = new Uzol(pString, pUzol);
				if (pPredchUzol == nullptr) {
					aStart = pUzol;

				}
				else {
					pPredchUzol->Dalsi(pUzol);
				}
				
			}
			pString = vstupSubor.NacitajString();

		}
	}
}

void Zoznam::Uloz(const char* pMenoSuboru)
{
	if (pMenoSuboru && *pMenoSuboru) {
		Vystup vystupSubor(pMenoSuboru);
		Uzol* uzol = aStart;
		while (uzol != nullptr)
		{
			vystupSubor.Vypis(*uzol->Hodnota(), true);
			uzol = uzol->Dalsi();
		}


	}
}

void Zoznam::Vypis(const char* pMenoSuboru)
{
	if (pMenoSuboru && *pMenoSuboru) {
		Vystup vystupSubor(pMenoSuboru);
		Uzol* uzol = aStart;
		while (uzol != nullptr)
		{
			vystupSubor.Vypis(*uzol->Hodnota(), false);
			uzol = uzol->Dalsi();
		}


	}
}

void Zoznam::Find(char pHladanyChar)
{
	int pocitadloZhod = 0;
	Uzol* uzol = aStart;
	cout << "-----------------------" << endl;
	while (uzol!= nullptr)
	{
		if (pHladanyChar == *uzol->Hodnota()->begin()) {
			
			cout << *uzol->Hodnota() << endl;
			pocitadloZhod = pocitadloZhod++;
		}
		uzol = uzol->Dalsi();
	}

	if (pocitadloZhod == 0) {
		cout << "Vami zadana hodnota: " << pHladanyChar << " sa v zozname nenachadza!" << endl;
		
	}
	cout << "-----------------------" << endl;
}


void Zoznam::Zmaz(Uzol* uzol)
{
	if (uzol->Dalsi() != nullptr) {
		Zmaz(uzol->Dalsi());
	}
	delete uzol;
}
