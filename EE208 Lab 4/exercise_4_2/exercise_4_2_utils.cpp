#include "pch.h"
#include "exercise_4_2_utils.h"
#include <iostream>

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