#include "Losovanie.h"

Losovanie::Losovanie(const char* pMenoSuboru)
{
	VstupnySubor.open(pMenoSuboru);
}

void Losovanie::ZaradDoSkupin()
{

	string aKrajina; //Pre Vypis

	for (int i = 0; i < 4; i++)
	{
		ShufflePostupnost();

		for (int j = 0; j < 8; j++)
		{
			aKrajina = this->NacitajRiadok();
			VratSkupinu(aOznSkupin[j])[i] = aKrajina;
			VratPoradovnikSkupin(aOznSkupin[j])[i] = 1 + j + 1 * (8 * i);
		}
	}
}

string* Losovanie::VratSkupinu(char pOznSkupiny)
{
	switch (pOznSkupiny)
	{
	case 'A':
		return aSkA;
		break;
	case 'B':
		return aSkB;
		break;
	case 'C':
		return aSkC;
		break;
	case 'D':
		return aSkD;
		break;
	case 'E':
		return aSkE;
		break;
	case 'F':
		return aSkF;
		break;
	case 'G':
		return aSkG;
		break;
	case 'H':
		return aSkH;
		break;
	default:
		break;
	}
}

int* Losovanie::VratPoradovnikSkupin(char pOznSkupiny)
{
	switch (pOznSkupiny)
	{
	case 'A':
		return aPoradieA;
		break;
	case 'B':
		return aPoradieB;
		break;
	case 'C':
		return aPoradieC;
		break;
	case 'D':
		return aPoradieD;
		break;
	case 'E':
		return aPoradieE;
		break;
	case 'F':
		return aPoradieF;
		break;
	case 'G':
		return aPoradieG;
		break;
	case 'H':
		return aPoradieH;
		break;
	default:
		break;
	}
}

void Losovanie::ShufflePostupnost()
{
	srand(time(0));
	random_shuffle(aOznSkupin, (aOznSkupin + sizeof(aOznSkupin)));
}

string Losovanie::NacitajRiadok()
{
	string vystup;

	if (!VstupnySubor.eof()) {
		getline(VstupnySubor, vystup);
	}

	return vystup;
}

void Losovanie::VypisDoSuboru(const char* pMenoSuboru)
{
	VystupnySubor.open(pMenoSuboru, ios::out, ios::trunc);

	for (int i = 0; i < 8; i++)
	{
		char vybrataSkupina = (char)('A' + i);
		cout << vybrataSkupina << endl;
		VystupnySubor << vybrataSkupina << endl;
		for (int j = 0; j < 4; j++)
		{
			VystupnySubor << VratSkupinu(vybrataSkupina)[j] << endl;
			cout << VratSkupinu(vybrataSkupina)[j] << endl;

		}

	}
	VystupnySubor.close();
}

int Losovanie::ObtiaznostSkupiny(char pOznSkupiny)
{
	int VysPoradie = 0;


	for (int i = 0; i < 4; i++)
	{
		VysPoradie = VysPoradie + VratPoradovnikSkupin(pOznSkupiny)[i];

	}


	return VysPoradie;
}

void Losovanie::SortObtiaznosti()
{

	for (int i = 0; i < 8; i++)
	{
		obtiaznostSk[i] = ObtiaznostSkupiny((char)('A' + i));
	}
	sort(obtiaznostSk, obtiaznostSk + 8);

}

void Losovanie::Vypis()
{
	SortObtiaznosti();

	int pocitPrejd = 0;
	while (pocitPrejd != 8)
	{
		for (int i = 0; i < 8; i++)
		{
			if (obtiaznostSk[pocitPrejd] == ObtiaznostSkupiny((char)('A' + i))) {
				cout << (char)('A' + i) << endl << obtiaznostSk[pocitPrejd] << endl;
				pocitPrejd = pocitPrejd++;
				
			}
			
			
		}
		
	}

}

void Losovanie::Najdi(int pCislo)
{
	int hladaneCislo = pCislo;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (hladaneCislo == VratPoradovnikSkupin((char)('A' + i))[j]) {
				cout << "Meno Skupiny: " << (char)('A' + i) << endl;
				cout << "Poradie: " << hladaneCislo << endl;
				cout << "Krajina: " << VratSkupinu((char)('A' + i))[j] << endl;	
			}
			
		}
	}
}




