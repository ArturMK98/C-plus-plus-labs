#include "pch.h"
#include <string>
#include <iostream>
#include "exercise_4_4_utils.h"

//--------------------------------------------------------
// Constructors and destructors
//--------------------------------------------------------

// Default constructor
LinkedList::LinkedList() {

	this->length = 0;
	this->Head = NULL;
}

// Parameterised Constructor
void LinkedList::insert(std::string name, unsigned int studentNum) {

	Node* node = new (std::nothrow) Node();
	if (node == NULL) { std::cerr << "out of memory error"; return void(); }

	node->name = name;
	node->studentNum = studentNum;
	node->Next = this->Head;
	this->Head = node;
	this->length++;
}

// Destructor for LinkedList
LinkedList::~LinkedList() {

	std::cout << "\nList deleted";
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// Function for finding a student in the LinkedList by passing in the student number
void LinkedList::findStudent(unsigned int studentNum) {

	Node* wantedStudent = this->Head;

	while (Head) {

		if (wantedStudent->studentNum == studentNum) {

			std::cout << "Found student: " << wantedStudent->name << std::endl;
			break;

		}
		else if (wantedStudent->Next == NULL) {

			std::cout << "Could NOT find a student with the student number: " << studentNum << std::endl;
			break;

		}
		else {

			wantedStudent = wantedStudent->Next;
			continue;
		}
	}
}

// Function for printing out each memeber of the LinkList
void LinkedList::printStudentDetails() {

	Node* Head = this->Head;
	int i = 1;

	while (Head) {

		std::cout << i << ": " << Head->name << "     " << Head->studentNum << std::endl;
		Head = Head->Next;

		i++;
	}
}