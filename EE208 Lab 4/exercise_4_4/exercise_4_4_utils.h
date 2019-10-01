#pragma once

//--------------------------------------------------------
// Classes
//--------------------------------------------------------
class Node {

// Public data members
public:
	Node* Next;
	std::string name;
	unsigned int studentNum;
};

class LinkedList {

// Public data members and member functions
public:
	int length;
	Node* Head;

	LinkedList();
	~LinkedList();
	void insert(std::string name, unsigned int studentNum);
	void printStudentDetails();
	void findStudent(unsigned int studentNum);
};