// zadatak2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int random();
int random2();
void unos();

int main() {
	
	unos();

	return 0;
}

int random() {            // random funkcija koja baca brojeve od 1 do 6 (kockica) igrac1
	srand(time(NULL));
	int random = rand() % 6 + 1;
	return random;
}
int random2() {            // random funkcija koja baca brojeve od 1 do 6 (kockica) igrac2
	srand(time(NULL));
	int random = rand() % 6 + 1;
	return random;
}

void unos() {
	int igrac1 = random();
	int igrac2 = random2();
	

	ofstream igra;
	igra.open("mapa.txt", ios::out | ios::app);

	igra << "Igrac jedan: " << igrac1 << "\nIgrac dva: " << igrac2;
	if (igrac1 > igrac2) {
		igra << "\nIgrac 1 je pobijedio!";
	}
	else if (igrac1 < igrac2) {
		igra << "\nIgrac 2 je pobijedio!";
	}
	else {
		igra << "\nNerijeseno!";
	}


	//random();
	

	
}