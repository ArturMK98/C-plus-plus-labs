#include <iostream>
#include "myarray.h"

//--------------------------------------------------------
// Constructors and destructors
//--------------------------------------------------------

// Default constructor for myArray
myArray::myArray() {

	this->array = NULL;
	this->n = 0;
}

// Parameterised constructor for myArray
myArray::myArray(int n) {

	this->n = n;
	array = new (std::nothrow) int[n];
	if (array == NULL) {std::cerr << "out of memory error";}
}

// Destructor for myArray
myArray::~myArray() {

	std::cout << "deleting class\n";
	delete[] array;
}

//--------------------------------------------------------
// Overloaded operators
//--------------------------------------------------------

// Overloaded + operator allows for the addition of arrays (concatonates arrays)
myArray myArray::operator+(myArray Y) {

	int i ,j;
	myArray R(this->n + Y.n);

	for (i = 0; i < this->n; i++) {

		R.setValue(i, this->getValue(i));
	}

	for (j = 0; j < Y.n; j++, i++) {

		R.setValue(i, Y.getValue(j));
	}

	return R;
}


//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function allows the user to fill an array with numbers
void myArray::fillArray(int n) {
	
	int v;
	for (int i = 0; i < n; i++) {

		std::cin >> v;
		this->setValue(i, v);
	}
}

// This function sets the value of an element in an array at a specified index
void myArray::setValue(int index, int value) {

	array[index] = value;
}

// This function returns a value at a specified index
int myArray::getValue(int index) {

	return(array[index]);
}

// This function adds a number to the end of an array
void myArray::push(int newValue) {

	myArray temp(this->n+1);

	for (int i = 0; i < this->n; i++) {

		temp.setValue(i, this->getValue(i));
	}

	temp.setValue(temp.n-1, newValue);

	this->n = temp.n;
	delete[] this->array;
	this->array = temp.array;
}

// This function prints out the contents of an array
void myArray::print() {

	for (int i = 0; i < n; i++) {

		std::cout << getValue(i) << " ";
	}

	std::cout << std::endl;
}