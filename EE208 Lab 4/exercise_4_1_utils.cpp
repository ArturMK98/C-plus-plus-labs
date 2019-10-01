#include "pch.h"
#include "exercise_4_1_utils.h"
#include <iostream>

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function prints put a complex number
void printComplex(Complex X) {

	// If positive insert a '+' between real and imaginary part
	if (X.imaginary >= 0) {

		std::cout << X.real << "+" << X.imaginary << "i" << std::endl;

	} else {

		std::cout << X.real << X.imaginary << "i" << std::endl;
	}
}

// This function calculates the modulus(absolute value) of a complex number
double modulus(Complex X) {

	return(pow((pow(X.real, 2) + pow(X.imaginary, 2)), 0.5));
}

// This function finds the complex conjugate of a complex number
Complex conjugate(Complex X) {

	Complex Result = X;
	Result.imaginary = X.imaginary *-1;
	return(Result);
}

// This function finds the sum of two complex numbers
Complex sumComplex(Complex X, Complex Y) {

	Complex Result;
	Result.real = X.real + Y.real;
	Result.imaginary = X.imaginary + Y.imaginary;
	return(Result);
}

// This function finds the product of two complex numbers
Complex productComplex(Complex X, Complex Y) {

	Complex Result;
	Result.real = ((X.real * Y.real) + (X.imaginary * (Y.imaginary * -1)));
	Result.imaginary = ((X.real * Y.imaginary) + (X.imaginary * Y.real));
	return Result;
}