// switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	/*
	int broj1 = 0;
	int broj2 = 0;
	char oper;

	cout << "Unesite dva broja i operator" << endl;
	cin >> broj1 >> oper >> broj2;

	if (oper == '+') {
		cout << broj1 + broj2 << endl;
	}
	else if (oper == '-') {
		cout << broj1 - broj2 << endl;
	}
	else if (oper == '*') {
		cout << broj1 * broj2 << endl;
	}
	else if (oper == '/') {
		cout << broj1 / broj2 << endl;
	}
	else {
		cout << "Neznam koji je to opertaor." << endl;
	}
	*/


	// Zadatak 1
	/*
	int broj1 = 0;
	int broj2 = 0;
	char plus = '+';
	cout << "Unesite dva broja i operator" << endl;
	cin >> broj1 >> plus >> broj2;

	switch (plus) {
	case 43:
		cout << broj1 + broj2;
		break;
	case 45:
		cout << broj1 - broj2;
		break;
	case 42:
		cout << broj1 * broj2;
		break;
	case 47:
		cout << broj1 / broj2;
		break;
	}
	*/

	//Zadatak 2
	int izbor = 0;
	cout << "Izaberite..." << endl;
	cin >> izbor;
	int broj = 0;

	switch (izbor) {
	case 1:
		cout << "Unesite broj" << endl;
		cin >> broj;
		break;
	case 2:
		cout << "vas broj je " << broj;
		break;
	}



	//Zadatak 3
	/*
	int stih;
	cout << "unesite broj stiha.." << endl;
	cin >> stih;

	switch (stih) {
	case 1:
		cout << "stihovi broj 1 iz pjesme...." << endl;
	case 2:
		cout << "stihovi broj 2 iz pjesme ......" << endl;
	case 3:
		cout << "stihovi broj 3 iz pjesme ......" << endl;
	case 4:
		cout << "stihovi broj 4 iz pjesme ......" << endl;
	}
	*/


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
