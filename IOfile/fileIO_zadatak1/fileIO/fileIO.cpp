// fileIO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void unos();
void ispis();


int main() {
	
	unos();

	return 0;
}

void unos() {

	int broj = 0;                  // unos i ispis broja
	cout << "Unesi broj: ";
	cin >> broj;

	ofstream brojevi;                         // deklariranje brojevi
	brojevi.open("primjer.txt", ios::out);    // otvaranje 
	
	for (int i = 0; i < broj; i++) {          // petlja pomocu koje se ispisuju brpjevi od 0 do vrijednosti broja kojeg unesemo (broj)
		brojevi << "\n" << i;                 // spremanje u brojevi
		//cout << i;
	}
	brojevi.close();
}

void ispis() {

}