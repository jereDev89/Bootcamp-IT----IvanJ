

#include "pch.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int S ;
	float A,temp;

	cin >> S;
	cin >> A;

	temp = (S * 1.8 )+ 32;
	
	cout <<abs( A-temp);

	return 0;
}