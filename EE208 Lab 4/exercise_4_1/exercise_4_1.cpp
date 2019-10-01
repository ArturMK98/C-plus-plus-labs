/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 4: Exercise 1
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter two complex numbers
 *		- 2: The program prints out the two inputted complex numbers to the screen
 *		- 3: The program calculates the modulus of complex 1 and complex 2 and prints them out
 *		- 4: The program calculates the complex conjugate of complex 1 and complex 2 and prints them out
 *		- 5: The program calculates the sum of the two complex numbers and prints it out to the screen
 *		- 6: The program calculates the product of the two complex numbers and prints it out to the screen
 */

#include "pch.h"
#include "exercise_4_1_utils.h" 
#include <iostream>

using namespace std;

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

	// Local variables
	Complex A;
	Complex B;

	cout << "Enter the first complex number\nEnter the real part: ";
	cin >> A.real;
	cout << "Enter the imaginary part: ";
	cin >> A.imaginary;

	cout << "\nEnter the second complex number\nEnter the real part: ";
	cin >> B.real;
	cout << "Enter the imaginary part: ";
	cin >> B.imaginary;

	cout << "\nOriginal values\nComplex 1: ";
	printComplex(A);
	cout << "Complex 2: ";
	printComplex(B);

	cout << "\nAbsolute value of Complex 1: " << modulus(A);
	cout << "\nAbsolute value of Complex 2: " << modulus(B);

	cout << "\n\nComplex conjugate of Complex 1: ";
	printComplex(conjugate(A));
	cout << "Complex conjugate of Complex 2: ";
	printComplex(conjugate(B));

	cout << "\nSum of two complex numbers: ";
	printComplex(sumComplex(A, B));

	cout << "\nProduct of two complex numbers: ";
	printComplex(productComplex(A, B));

	return 0;
}
