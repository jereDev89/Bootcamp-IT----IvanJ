// strukture2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

struct Student {
	int ID;
	string ime;
	string prezime;
	char spol;
	float prvi_kolokvij;
	float drugi_kolokvij;
	float zavrsni;
	float ukupni_uspjeh;
} studomat;

void unos_studenta() {
	//vector<Student> novi_student;
	cout << "Unesite ID studenta: " << endl;
	cin >> studomat.ID;
	cout << "UNesite ime studenta: " << endl;
	cin >> studomat.ime;
	cout << "Unesite prezime studenta: " << endl;
	cin >> studomat.prezime;
	cout << "Unesite spol studenta: " << endl;
	cin >> studomat.spol;
	cout << "Unesite rezultat prvog kolokvija: " << endl;
	cin >> studomat.prvi_kolokvij;
	cout << "Unesite rezultat drugog kolokvija: " << endl;
	cin >> studomat.drugi_kolokvij;
	cout << "Unesite rezultat zavrsnog ispita: " << endl;
	cin >> studomat.zavrsni;
	cout << "Unesite ukupni rezultat studenta: " << endl;
	cin >> studomat.ukupni_uspjeh;
	
	//novi_student.push_back(studomat);
}

using namespace std;

int main() {

	
	unos_studenta();
	

	return 0;
}