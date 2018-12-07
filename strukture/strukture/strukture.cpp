// strukture.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
#include <cstdlib>


using namespace std;

struct brod {
	int kordinata_x;
	int kordinata_y;
} brod;


void pomicanje_broda() {
	srand(time(NULL));
	brod.kordinata_x = rand() % 20 + 1;
	brod.kordinata_y = rand() % 20 + 1;
	cout << "Kordinata x je: " << brod.kordinata_x << endl << "Kordinata y je: " << brod.kordinata_y << endl;
}

int main() {

	// Zadatak 1
	/* Napravite program koji ce korisniku omoguciti da u strukturu (KORDINATE) unese podatke polozaju svemirskog broda (unutar 2D polja
	dimenzija 20x20). Napisite funkciju koja ce ispisati nasumicno pomicanje broda unutar 2D polja.*/
	
	cout << "Upisite kordinatu x: ";
	cin >> brod.kordinata_x;
	cout << "Upisite kordinatu y: ";
	cin >> brod.kordinata_y;
	cout << "Kordinata x je: " << brod.kordinata_x << endl << "Kordinata y je: " << brod.kordinata_y << endl;

	cout << "Pomicanje broda: " << endl;
	pomicanje_broda();


	return 0;
}

