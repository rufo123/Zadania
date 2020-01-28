#pragma once
#include <string>
#include <iostream>

using namespace std;

class Pretekarka
{
private:
	int aPoradie = 0;
	string aPriezvisko = "";
	string aMeno = "";
	string aKrajina = "";
	int aPocetZiskBodov = 0;
	int aDosCas = 0;
	int aTerce = 0;
	int aCelkovyCas = 0;
	
public:
	Pretekarka(int pPoradie, string pPriezvisko, string pMeno, string pKrajina, int pPocetZiskBodov);

	int getPoradie() {
		return aPoradie;
	}

	string getPriezvisko() {
		return aPriezvisko;
	}

	string getMeno() {
		return aMeno;
	}

	string getKrajina() {
		return aKrajina;
	}
	
	int getPocetZiskBodov() {
		return aPocetZiskBodov;
	}

	int getDosCas() {
		return aDosCas;
	}

	int getTerce() {
		return aTerce;
	}

	int getCelkovyCas() {
		return aCelkovyCas;
	}




	void setDosCas(int pCas) {
		aDosCas = pCas;
		aCelkovyCas = aDosCas;
	}


	void setTerce(int pTerce) {
		aTerce = pTerce;
		cout << "test" << endl;
	}

	void pridajCas(int pCasovaHodnota) {
		aCelkovyCas = aCelkovyCas + pCasovaHodnota;
	}

	//void VypisSa();

	

};

