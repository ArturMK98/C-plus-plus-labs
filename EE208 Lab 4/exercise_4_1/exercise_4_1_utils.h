#pragma once

//--------------------------------------------------------
// Structs
//--------------------------------------------------------
struct Complex {

	float real;
	float imaginary;
};

//--------------------------------------------------------
// Function declerations
//--------------------------------------------------------
void printComplex(Complex X);
double modulus(Complex X);
Complex conjugate(Complex X);
Complex sumComplex(Complex X, Complex Y);
Complex productComplex(Complex X, Complex Y);