// pokemonGo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	int broj_pokemona;
	string ime_pokemona;
	int broj_slatkisa;			// Broj slatkisa potrebnih za evoluciju
	int mirkovi_slatkisi;		// Broj slatkisa koje Mirko posjeduje za jednog pokemona
	int X = 0;					// Broj pokemona koje moze evoluirati
	string Y;					// Ime pokemona kojeg moze najvise puta evoluirati
	int Z = 0;


	//cout << "Broj pokemona: " << endl;
	cin >> broj_pokemona;

	for (int i = 0; i < broj_pokemona; i++) {				// Petlja ce se vrtirti onoliko
		//cout << "Ime pokemona: " << endl;
		cin >> ime_pokemona;
		//cout << "Broj slatkisa potrebnih za evoluciju: " << endl;
		cin >> broj_slatkisa;
		//cout << "Broj Mirkovih slatkisa za " << ime_pokemona << ": " << endl;
		cin >> mirkovi_slatkisi;
		int tr_br = 0;
		while (mirkovi_slatkisi >= broj_slatkisa) {
			tr_br += 1;
			mirkovi_slatkisi -= broj_slatkisa - 2;
		}
		X += tr_br;

		if (tr_br > Z) {
			Z = tr_br;
			Y = ime_pokemona;
		}
	}
	cout << X << endl;
	cout << Y;
	

	return 0;
}