
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	int h1;
	int m1;
	char c;

	cin >> h1 >> c >> m1;
	cout << (h1 - 8) * 60 + m1;

	return 0;
}