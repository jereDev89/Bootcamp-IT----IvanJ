// random().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	// Zadatak 1
	// Napisi program koji ce omoguciti nasumicno bacanje novcica 1 i 2
	/*
	srand(time(NULL));

	for (int i = 0; i < 1; i++) {
		cout << rand() % 2 + 1;
	}
	*/

	// Zadatak 2
	/*Napisi program koji ce korisniku omoguciti unos nasumicnog broj od 1 do 100. Ukoliko pogrijesi program ce mu javiti je li njegov 
	broj veci ili manji od trazenog.*/
	/*
	srand(time(NULL));

	int random_broj = rand() % 100 + 1;
	int pogodi_broj;
	cout << random_broj << endl;
	cout << "Pogodite broj: ";
	cin >> pogodi_broj;

	if (pogodi_broj > random_broj) {
		cout << "Vas broj je veci." << endl;
	}
	else if (pogodi_broj < random_broj) {
		cout << "Vas broj je manji." << endl;
	}
	else if (pogodi_broj == random_broj) {
		cout << "Pogodili ste.";
	}
	*/

	// Zadatak 3
	/*Napisi program za slot machine (jednoruki jack) - od moguce 4 znamenke nasumicno se izvuce 1 broj (i tako 3 puta) - 
	ukoliko su brojevi jednaki korisnik je pobijedio*/

	srand(time(NULL));

	int ran1 = rand() % 4 + 1;
	int ran2 = rand() % 4 + 1;
	int ran3 = rand() % 4 + 1;
	cout << ran1 << ran2 << ran3 << endl;

	if (ran1 == ran2 && ran2 == ran3) {
		cout << "Pobjedili ste!!!";
	}
	else {
		cout << "Pokusaj ponovo.";
	}


	return 0;
}
