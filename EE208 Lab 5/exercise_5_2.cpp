/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 5: Exercise 2
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter the real and imaginary values for a complex number
 *      - 2: Two Complex instances are created, one has the values inputted by the user and
 *           the other has values given to it by the default constructor
 *      - 3: Both complex numbers are printed out to the screen
 *      - 4: The user is prompted to enter real and imaginary values again
 *      - 5: The real and imaginary values of the second complex number are set to the
 *           values inputted
 *      - 6: Modulus and argument of both complex numbers are printed out to the screen
 *      - 7: The conjugate of both complex numbers are printed out to the screen
 */

#include <iostream>
#include <math.h>
using namespace std;

//--------------------------------------------------------
// Macros
//--------------------------------------------------------
#define PI 3.14159265

//--------------------------------------------------------
// Classes
//--------------------------------------------------------
class Complex {

    // Private data members
    float real;
    float imag;

    // Public methods
    public:

        float modulus(void);
        float argument(void);
        void conjugate(void);
        void setValues(float real, float imag);
        void print(void);
        Complex();
        Complex(float, float);
};

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    // Local variables
    float real;
    float imag;

	cout << "Enter the first complex number\nEnter the real part: ";
	cin >> real;
	cout << "Enter the imaginary part: ";
	cin >> imag;

    Complex* A = new (nothrow) Complex(real, imag);
    if (A == NULL) {cerr << "out of memory error"; return 0;}

    Complex* B = new (nothrow) Complex();
    if (B == NULL) {cerr << "out of memory error"; return 0;}

    cout << "\nValues of first Complex number before setting values: ";
    A->print();

    cout << "Values of second Complex number before setting values: ";
    B->print();

    cout << "\nEnter the second complex number\nEnter the real part: ";
	cin >> real;
	cout << "Enter the imaginary part: ";
	cin >> imag;

    B->setValues(real, imag);

    cout << "\nValues of second Complex number after setting values: ";
    B->print();

    cout << "\nModulus of Complex 1: " << A->modulus();
    cout << "\nArgument of Complex 1: " << A->argument();
    cout << "\n\nModulus of Complex 2: " << B->modulus();
    cout << "\nArgument of Complex 2: " << B->argument();

    A->conjugate();
    B->conjugate();

    cout << "\n\nConjugate of Complex 1: ";
    A->print();

    cout << "Conjugate of Complex 2: ";
    B->print();

    delete[] A;
    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// Default constructor
Complex::Complex() {

    real = 0;
    imag = 0;
}

// Parameterised constructor
Complex::Complex(float real, float imag) {

    this->real = real;
    this->imag = imag;
}

// This function returns the modulus of a complext number
float Complex::modulus(void){

    return(pow((pow(real, 2) + pow(imag, 2)), 0.5));
}

// This function returns the argument of a complex number
float Complex::argument(void) {

    return(((atan(imag/real))* 180) /PI);
}

// This function sets a complex number equal to its own conjugate
void Complex::conjugate(void){

    imag *= -1;
}

// Sets teh values of real and imag of a Complex
void Complex::setValues(float real, float imag) {

    this->real = real;
    this->imag = imag;
}

// Print out the values of real and imag of a Complex
void Complex::print(void) {

    if (this->imag >= 0) {

		cout << this->real << "+" << this->imag << "i" << endl;

	} else {

		cout << this->real << this->imag << "i" << endl;
	}
}

// Expected score 6/6