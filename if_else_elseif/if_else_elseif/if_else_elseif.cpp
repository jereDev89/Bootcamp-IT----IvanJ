// if_else_elseif.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	// Zadatak 1
	/*
	int osoba1 = 0;
	int osoba2 = 0;

	cout << "Koliko imate godina?" << endl;
	cin >> osoba1;
	cout << "Osoba 2, koliko imate godina?" << endl;
	cin >> osoba2;

	if (osoba1 > osoba2) {
		cout << "Osoba 1 je starija!" << endl;
	}
	else if(osoba2 > osoba1){
		cout << "Osoba 2 je starija!" << endl;
	}
	else {
		cout << "Osoba 1 i osoba 2 su iste starosti!" << endl;
	}
	*/

	// Zadatak 2
	/*
	int broj = 0;
	cout << "Upisite neki broj." << endl;
	cin >> broj;

	if ((broj%2) == 0) {
		cout << "Broj je paran !" << endl;
	}
	else {
		cout << "Broj je neparan !" << endl;
	}
	*/

	// Zadatak 3
	/*
	int lozinka = 1234;
	int unos = 0;
	cout << "Upisite lozinku..." << endl;
	cin >> unos;

	if (unos == lozinka) {
		cout << "Lozinka je tocna !" << endl;
	}
	else
	{
		cout << "Lozinka nije tocna !" << endl;
	}
	*/

	// Zadatak 4
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

	// int into float
	/*
	int x = 3;
	cout << setprecision(2) << fixed << float(x) << endl;
	float xx = float(x);
	cout << xx;
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
