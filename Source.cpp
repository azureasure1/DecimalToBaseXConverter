/*
Programmer: Cody Griffin
Date: 2/26/2017
Program: Decimal to Base-x Calculator
*/

#include <iostream>
#include <math.h>
#include <stack>
#include <string>

using namespace std;

int main() {

	//Variables
	int decimalNumber;
	int base;
	stack<int> newNumber;
	int digit;

	//Asks user to input a base-10 number
	cout << "Please enter a decimal (base-10) number: ";
	cin >> decimalNumber;
	cout << endl;

	cout << "What base would you like to convert to (base-2 to base-10)?  ";
	cin >> base;
	cout << endl;

	cout << "Your number in base " << base << " form: ";

	//Converts the base-10 number to the user-defined base
	while (decimalNumber != 0) {

        digit = decimalNumber % base;
		newNumber.push(digit);
		decimalNumber = ceil(decimalNumber / base);
	}

	//Prints the base-x number
	while (newNumber.size() != NULL) {
		cout << newNumber.top();
		newNumber.pop();
	}

	cin.get();
	cin.ignore();
	return 0;
}//end Main
