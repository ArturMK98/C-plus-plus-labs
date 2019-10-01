/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 4: Exercise 4
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter the name and student number for student objects in a linked list
 *		- 2: If the name entered is "end", the user is not prompted to enter a student name and number anymore
 *		- 3: The linked list of student names and their numbers is printed out
 *		- 4: A counter of how many objects are in the linked list is printed out
 *		- 5: The user is then prompted to enter y if they want to find a student in the linked list by entering
 *			 their student number or input any other character if not
 *		- 6: If 'y' is entered the name of the student to which that number belongs to is printed out, if the
 *			 number doesn't belong to any student a message saying so is printed out
 *		- 7: The linked list is then deleted, if the user does not input 'y' the linked list is deleted without
 *			 displaying the name of any students
 */
#include "pch.h"
#include <string>
#include <iostream>
#include "exercise_4_4_utils.h"

using namespace std;

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

	// Creating an instance of LinkedList
	LinkedList* List = new (nothrow) LinkedList();
	if (List == NULL) {cerr << "out of memory error"; return 0;}

	// Local variables
	string name;
	unsigned int studentNum;
	char decision;
	bool end = false;

	while (!end) {

		cout << "Enter a name: ";
		cin >> name;

		if (name == "end") {

			cout << endl;
			break;

		} else {

			cout << "Enter a student number: ";
			cin >> studentNum;

			List->insert(name, studentNum);
		}
	}

	List->printStudentDetails();
	cout << "\nList length: " << List->length << std::endl;

	cout << "\nWould you like to look for a student by typing in their student number? If yes enter [y], if no enter any other character\n";
	cin >> decision;

	if (decision == 'y') {

		int wantedStudentNum;
		cout << "\nEnter a student number to find the name of the student\n";
		cin >> wantedStudentNum;

		List->findStudent(wantedStudentNum);

	}

	delete List;
	return 0;
}
