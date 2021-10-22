#include <iostream>
using namespace std;

void main()
{
	// Reversing Number

	int number, reversedNumber = 0;
	cout << "Number: ";
	cin >> number; 

	while (number) {
		reversedNumber = reversedNumber * 10;
		int lastDigit = number % 10;
		reversedNumber = reversedNumber + lastDigit;
		number = number / 10;
	} 

	cout << "The reversed number is " << reversedNumber;

system("paused>0");
}
