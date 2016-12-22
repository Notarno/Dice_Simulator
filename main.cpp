#include "Dice_Roll.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int option;
	int dice_size;
	int numOfRolls;
	cout << " DICE SIMULATOR " << endl;
	cout << "\n RULES OF THE PROGRAM:";
	cout << "\n 1) All entries must be a positive integer";

	cout << "\n\n Please enter the size of the dice: ";
	cin >> dice_size;
	

	Dice object(dice_size);
	object.print();
	object.reset();

	do {
		srand(time(NULL));
		cout << "\n\n 1) ROLL DICE";
		cout << "\n 2) Quit";
		cout << "\n Chosen Option: ";
		cin >> option;

		switch (option) {
		case 1: cout << "\n Please enter the number of Rolls you would like to perform: ";
			cin >> numOfRolls;

			for (int i = 0; i < numOfRolls; i++) 
				cout << "\n\n Roll number " << i+1 << " gives you: " << object.roll() << endl;
			
			cout << " Your total value is: " << object.total() << endl;
			object.reset();
			break;
		}
	} while (option != 2);

	return 0;
}