/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 4: Exercise 2
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter the number of people
 *		- 2: The user then inputs the name and age for each person
 *		- 3: The list of people is printed out in reverse, from last person to first person
 */

#include "pch.h"
#include <iostream>

using namespace std;

//--------------------------------------------------------
// Structs
//--------------------------------------------------------
struct Person {

	char name;
	int age;
};

//--------------------------------------------------------
// Function declarations
//--------------------------------------------------------
void fillList(Person P[], int n);
void printPerson(Person X);
void printListReversed(Person P[], int n);

//--------------------------------------------------------
// Main Function
//--------------------------------------------------------
int main() {

	int n;

	cout << "Enter the number of people: ";
	cin >> n;

	// Declare a person struct
	Person* P = new (nothrow) Person[n];
	if (P == NULL) {cerr << "out of memory error\n"; return 0;}

	fillList(P, n);

	printListReversed(P, n);

	delete[] P;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function prints the name and age of the person struct
void printPerson(Person X) {

	std::cout << "Name: " << X.name << "\nAge: " << X.age << std::endl << std::endl;
}

// This function allows the user to input a list of people
void fillList(Person P[], int n) {

	for (int i = 0; i < n; i++) {

		std::cout << "Enter the name of person " << i << std::endl;
		std::cin >> P[i].name;

		std::cout << "Enter the age of person " << i << std::endl;
		std::cin >> P[i].age;
	}
	
	std::cout << std::endl;
}

// This function prints out the list of people in reverse
void printListReversed(Person P[], int n) {

	for (int i = n - 1; i >= 0; i--) {

		std::cout << "Person " << i << std::endl;
		printPerson(P[i]);
	}
}
