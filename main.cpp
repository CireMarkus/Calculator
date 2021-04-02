/*
	CSCI 3323 - Assignment #2 Possible Solution
*/

#include <iostream>

#include "Calculator.h"

using namespace std;

void main() {
	Calculator calculator = Calculator();
	bool repeat = true;
	do {
		char selection = ' ';
		cout << "Current Value: " << calculator.getValue() << '\n';
		cout << "Select Option:\n";
		cout << "[a] add, [s] subtract [m] multiply [d] divide [v] show value [c] clear value [e] exit\n";
		cout << "Your selection: ";
		cin >> selection;

		double value = 0;
		switch (selection) {
		case 'a':
			cout << "Enter value to add: ";
			cin >> value;
			calculator.add(value);
			break;
		case 's':
			cout << "Enter value to subtract: ";
			cin >> value;
			calculator.subtract(value);
			break;
		case 'm':
			cout << "Enter value to multiply: ";
			cin >> value;
			calculator.multiply(value);
			break;
		case 'd':
			cout << "Enter value to divide: ";
			cin >> value;
			if (value != 0) {
				calculator.divide(value);
			} else {
				cout << "Cannot divide by 0!\n";
			}
			break;
		case 'v':
			// The value will be shown at top, so nothing needed here
			break;
		case 'c':
			calculator.clearValue();
			break;
		case 'e':
			repeat = false;
			break;
		default:
			cout << "You entered an incorrect selection, please try again.\n";
			break;
		}
		cout << '\n';
	} while (repeat);
}