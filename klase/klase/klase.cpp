// klase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

class Kutija {
public:
	int x;
	void ispis();
	
};
void Kutija::ispis() {
	cout << x << endl;
}


int main()
{
	Kutija box;

	box.x = 100;
	box.ispis();
}

