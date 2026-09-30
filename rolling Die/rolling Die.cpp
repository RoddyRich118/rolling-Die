// rolling Die.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollD20() {
	return rand() % 20 + 1; // Generates a random number between 1 and 20
}

int rollD4() {
	return rand() % 4 + 1; // Generates a random number between 1 and 4
}

int main() {
	srand(time(0));

	int count = 0;
	int D20 = 0, D4 = 0;

	while (D20 != 1 || D4 != 1) {
		D20 = rollD20();
		D4 = rollD4();
		count++;
	}
	cout << "It took " << count << " rolls to get both a 1 on the D20 and a 1 on the D4." << endl;
	return 0;
}
