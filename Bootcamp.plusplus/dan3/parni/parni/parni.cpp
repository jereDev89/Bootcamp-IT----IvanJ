// parni.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int broj;
	cin >> broj;

	for (int i = 2; i <= broj; i += 2) {
		cout << i << endl;
	}

	return 0;
}