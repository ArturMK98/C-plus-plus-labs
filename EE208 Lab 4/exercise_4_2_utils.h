#pragma once

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