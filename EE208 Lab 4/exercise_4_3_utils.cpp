#include "pch.h"
#include <string>
#include <iostream>
#include <fstream>
#include <time.h>
#include "exercise_4_3_utils.h"

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function fills the name of each Student object with names from the text file "ee208.txt"
void fillNames(Student S[], int n) {

	std::string line;
	std::ifstream file("ee208.txt");

	if (file.is_open()) {

		for (int i = 0; i < n; i++) {

			getline(file, line);
			S[i].name = line;
		}

		file.close();

	} else {

		std::cout << "Unable to open file";
	}
}

// This function generates a random grade between 0 and 100 for eaach Student object
void generateGrade(Student S[], int n) {

	srand(time(0));

	for (int i = 0; i < n; i++) {

		S[i].grade = ((float)(rand() % 101));
	}
}

// This function prints out the name and grade of each Student object to the screen
void printStudents(Student S[], int n) {

	for (int i = 0; i < n; i++) {

		std::cout << S[i].name << "   " << S[i].grade << std::endl;
	}
}

// This function sorts all the Student objects in in the Array using bubble sort
void sortStudents(Student S[], int n) {

	for (int i = 0; i < n -1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {

			if (S[j].grade < S[j + 1].grade) {

				Student temp = S[j];
				S[j] = S[j + 1];
				S[j + 1] = temp;
			}
		}
	}
}

// This function creates a new text file called "results.txt" and writes the name and grade of each student object to the text file
void writeResults(Student S[], int n) {

	std::ofstream results("results.txt");

	if (results.is_open()) {

		for (int i = 0; i < n; i++) {

			results << S[i].name << S[i].grade << std::endl;
		}

		results.close();

	} else {

		std::cout << "Unable to open file";
	}
}