/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 4: Exercise 3
 *
 *    This program works as follows:
 *      - 1: The program creates an array of Student objects for the number of students in the class
 *		- 2: Each Student object is then given a name from the text file "ee208.txt"
 *		- 3: Each Student object is given a randomly generated grade between 0-100
 *		- 4: The array of Student objects is sorted in decending order of their grades
 *		- 5: The sorted list of Student objects is printed out to the screen
 *		- 6: The sorted list of Student objects is then written into a new text file called "results.txt"
 *		- 7: The contents of "results.txt" should be the same as what was printed out to the screen
 */

#include "pch.h"
#include <string>
#include <iostream>
#include "exercise_4_3_utils.h"

using namespace std;

//--------------------------------------------------------
// Global constants
//--------------------------------------------------------
const int NUM_OF_STUDENTS = 40;

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

	// Declaring an array of Students
	Student* S = new (nothrow) Student[NUM_OF_STUDENTS];
	if (S == NULL) {cerr << "out of memory error\n"; return 0;}

	// Fill the names of each Student with contents from text file
	fillNames(S, NUM_OF_STUDENTS);

	// Generates a random grade from between 0-100 for each Student object
	generateGrade(S, NUM_OF_STUDENTS);

	// Sorts students in decending order of their grades using bubble sort
	sortStudents(S, NUM_OF_STUDENTS);

	// Prints the name and grade of each Student object to the screen after sorting
	printStudents(S, NUM_OF_STUDENTS);

	// Writes the name and grade of each student to a text file (Should be the same as what was printed to the screen earlier)
	writeResults(S, NUM_OF_STUDENTS);

	delete[] S;
	return 0;
}
