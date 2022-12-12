// SABLON_MARK DARYL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Hello World!\n";

	float num1 = 0;
	cout << "first number\n";
	cin >> num1;
	float num2 = 0;
	cout << "second number\n";
	cin >> num2;

	float sum = num1 + num2;
	float difference = num1 - num2;
	float product = num1 * num2;
	float quotient = num1 / num2;

	cout << "Sum:" << sum << "\n";
	cout << "Difference:" << difference << "\n";
	cout << "Product:"<< product << "\n";
	cout << "Quotient:" << quotient << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
