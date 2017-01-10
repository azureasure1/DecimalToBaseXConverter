/*
Programmer: Cody Griffin
Date: 1/9/2017
Program: Decimal to Binary Calculator
*/

#include <iostream>
#include <math.h>
#include <deque>

using namespace std;

int main() {

	//Variables
	int decimalNumber;
	deque<int> binaryNumber;
	int binaryDigit;

	//Asks user to input a base-10 number
	cout << "Please enter a decimal (base-10) number: ";
	cin >> decimalNumber;
	cout << endl;

	cout << "Your number in binary form: ";

	//Converts the base-10 number to binary
	while (decimalNumber != 0) {
		binaryDigit = decimalNumber % 2;
		binaryNumber.push_front(binaryDigit);
		decimalNumber = ceil(decimalNumber / 2);
	}

	//Prints the binary number
	while (binaryNumber.size() != NULL) {
		cout << binaryNumber.front();
		binaryNumber.pop_front();
	}
		
	cin.get();
	cin.ignore();
	return 0;
}//end Main