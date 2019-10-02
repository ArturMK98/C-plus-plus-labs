/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 6: Exercise 1
 *
 *    This program works as follows:
 *      - 1: The user is prompted to input the size for two arrays
 * 		- 2: If the index entered is less than 0 then program stops
 * 		- 3: Otherwise, The user then fills both arrays with numbers
 * 		- 4: Both arrays are then printed out to the screen
 * 		- 5: The arrays are concatonated using an overloaded addition operator
 * 		- 6: The new array is printed out
 * 		- 7: The user is then prompted to enter a number to add to the concatonated array
 * 		- 8: The new array is printed out
 */

#include <iostream>
#include "myarray.h"

using namespace std;

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

	int n, v, z;
	cout << "Enter the number of elements in the first array: ";
	cin >> n;
	if (n < 0) {std::cout << "Index less than 0, cannot fill array"; return 0;}

	myArray Nums(n);
	Nums.fillArray(n);

	cout << "Enter the number of elements in the second array: ";
	cin >> n;
	if (n < 0) {std::cout << "Index less than 0, cannot fill array"; return 0;}

	myArray MoreNums(n);
	MoreNums.fillArray(n);

	cout << "First array: ";
	Nums.print();

	cout << "Second array: ";
	MoreNums.print();

	myArray SumNums = Nums + MoreNums;
	cout << "Concatonated array: ";
	SumNums.print();

	cout << "Enter the number you would like to add to the concatonated array: ";
	cin >> z;
	SumNums.push(z);

	cout << "Array after push: ";
	SumNums.print();

	return 0;
}

// Expected score 12/15