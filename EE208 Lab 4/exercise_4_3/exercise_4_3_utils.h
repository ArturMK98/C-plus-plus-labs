#pragma once

//--------------------------------------------------------
// Structs
//--------------------------------------------------------
struct Student {

	std::string name;
	float grade;
};

//--------------------------------------------------------
// Function declarations
//--------------------------------------------------------
void generateGrade(Student S[], int n);
void fillNames(Student S[], int n);
void sortStudents(Student S[], int n);
void printStudents(Student S[], int n);
void writeResults(Student S[], int n);