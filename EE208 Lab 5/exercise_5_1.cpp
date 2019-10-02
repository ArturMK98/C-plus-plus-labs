/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 5: Exercise 1
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter a complex number
 *      - 2: The modulus of that number is printed out to the screen
 *      - 3: The argument of that number is printed out to the screen
 *      - 4: The complex number becomes equal to its own conjugate
 *      - 5: The modulus and argument are printed out again
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

    // Public data members and methods
    public:
        float real;
        float imag;

        float modulus(void);
        float argument(void);
        void conjugate(void);
};

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    Complex* A = new (nothrow) Complex();
    if (A == NULL) {cerr << "out of memory error"; return 0;}

	cout << "Enter a complex number\nEnter the real part: ";
	cin >> A->real;
	cout << "Enter the imaginary part: ";
	cin >> A->imag;

    cout << "\nModulus: " << A->modulus();
    cout << "\nArgument: " << A->argument();
    A->conjugate();
    cout << "\nModulus (cojugate): " << A->modulus();
    cout << "\nArgument (conjugate): " << A->argument();

    delete[] A;
    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

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
