// koncepti oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Banka {

private:
	int pare = 0;
	int moguciMinus;
	string nazivBanke;
	void SetDodajPare(int broj);
	int GetDodajPare();

public:
	void isplata();
	void SetPlatiRacun(int broj);
	int GetPlatiRacun();
	void SetStanje(int broj);
	int GetStanje();

};

void Banka::SetDodajPare(int broj) {
	pare += broj;
}

int Banka::GetDodajPare() {
	return pare;
}

void Banka::SetPlatiRacun(int broj) {
	pare -= broj;
}

int Banka::GetPlatiRacun() {
	return pare;
}

void Banka::SetStanje(int broj) {
	pare = broj;
}


int Banka::GetStanje() {
	return pare;
}

void Banka::isplata() {
	cout << "Koliko želite isplatiti: ";
	int x;
	cin >> x;
	SetStanje(GetStanje() - x);
}



int main()
{
	int broj, iznos;
	cout << "Banka" << endl;
	cout << "Unsite:\n1 za placanje \n2 za uplatu\n3 za stanje" << endl;
	cin >> broj;
	cout << "Unesite iznos" << endl;
	cin >> iznos;

	Banka ri;

	switch (broj) {
	case 1:
		ri.SetPlatiRacun(iznos);
		cout << ri.GetPlatiRacun();
		break;
	case 2:
		ri.SetDodajPare(iznos);
		cout << ri.GetDodajPare();
		break;
	case 3:
		ri.SetStanje(iznos);
		cout << ri.GetStanje();
		break;
	}

	
	
}