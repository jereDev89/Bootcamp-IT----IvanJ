// strukture_podataka2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <istream>
#include <vector>

using namespace std;

void palindrom() {
	stack<char> palindrom;
	string x;
	cin >> x;
	bool tn;

	for (int i = 0; i < x.length(); i++)
	{
		palindrom.push(x[i]);
	}

	for (int i = 0; i < x.length(); i++, palindrom.pop()) 
	{
		if (palindrom.top() == x[i]) 
		{
			tn = true;
		}
		else
		{
			tn = false;
			break;
		}
	}
	if (tn) 
	{
		cout << "Palindrom !" << endl;
	}
	else 
	{
		cout << "Nije!";
	}
	
	
	//cout << palindrom.top();

}

void cekaonica() {
	string ime;
	queue<string> cekaonica;
	for (int i = 0; i < 3; i++) {
		cout << "Unesite ime: " << endl;
		cin >> ime;
		cekaonica.push(ime);
	}

}
	

int main()
{
    // Zadatak 1
	//palindrom();

	// Zadatak 2.
	cekaonica();

}
