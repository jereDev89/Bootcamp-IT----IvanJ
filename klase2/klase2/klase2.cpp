// klase2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "klase.h"

using namespace std;

class Covjek {
public:
	string ime;
	char spol;
	int godine;

	void predstavljanje();

};

void Covjek::predstavljanje(){
	cout << "Ja sam " << ime << " i imam " << godine << " godina." << endl;
	
}

int main()
{
	/*Covjek pero;
	pero.godine = 25;
	pero.ime = "Pero";
	pero.predstavljanje();

	Covjek marko;
	marko.godine = 60;
	marko.ime = "Marko";
	marko.predstavljanje();

	Covjek miro;
	miro.godine = 100;
	miro.ime = "Miro";
	miro.predstavljanje();*/

	Zivotinja pas;
	pas.vrsta = "Pas";
	pas.broj = 200000;
	pas.ugrozenost();

	Zivotinja jednorog;
	jednorog.vrsta = "Jednorog";
	jednorog.broj = 5;
	jednorog.ugrozenost();

};

