#include "Dice_Roll.h"
#include <iostream>

using namespace std;

Dice::Dice(int s) {
	size = s;
	dicelist = new int[size];
	for (int x = 0; x < size; x++)
		dicelist[x] = x + 1;
}

Dice::~Dice() {
	delete[] dicelist;
}

int Dice::roll() {

	int current_value = rand()%size + 1;
	stored_value = stored_value + current_value;
	count++;

	return current_value;
}

int Dice::total() {
	return stored_value;
}

void Dice::print() {
	cout << "\n\n DICE CREATED...."<<endl;
	for (int x = 0; x < size; x++)
		cout << " "<< dicelist[x] << " ";
}

void Dice::reset() {
	stored_value = 0;

}