/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 5: Exercise 4
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter a number which determines the size of the complex 1D matrix
 *      - 2: Each Complex object in the array is set to 0 and printed out
 *      - 3: Each Complex object in the array is given a random value between 1-10 and printed out
 *      - 4: Each Complex object in the array is set equal to its own conjugate and printed out
 */

#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

//--------------------------------------------------------
// Classes
//--------------------------------------------------------
class Complex {

    // Private data members
    float real;
    float imag;

    // Public methods
    public:
        void setValues(float real, float imag);
        void print(void);
        void conjugate(void);
        Complex();
};

class OneDComplexMatrix {

    // Private data members
    Complex* Z;
    int n;

    public:

        // Public methods
        OneDComplexMatrix(int n);
        ~OneDComplexMatrix();
        void setRandomValues();
        void conjugate();
        void print();
};

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    srand(time(0));
    int n;

    cout << "Enter the number of complex numbers you want in the matrix: ";
    cin >> n;

    OneDComplexMatrix Matrix(n);

    cout << "\nZeroed Matrix: [ ";
    Matrix.print();
    cout << "]";

    cout << "\nMatrix with random values: [ ";
    Matrix.setRandomValues();
    Matrix.print();
    cout << "]";

    cout << "\nMatrix with conjugates of random values: [ ";
    Matrix.conjugate();
    Matrix.print();
    cout << "]";
    
    return 0;
}

//--------------------------------------------------------
// Constructors and destructors
//--------------------------------------------------------

// Default constructor for a Complex object
Complex::Complex() {

    real = 0;
    imag = 0;
}

// Parameterised constructor for a OneDComplexMatrix object
OneDComplexMatrix::OneDComplexMatrix(int n) {

    this->n = n;
    Z = new (nothrow) Complex[n];
    if (Z == NULL) {cerr << "out of memory error";}
}

// Destructor for OneDComplexMatrix
OneDComplexMatrix::~OneDComplexMatrix(){

    cout << "\nDeleting class";
    delete Z;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function iterates through the array Z[] and calls the print() function on each object
void OneDComplexMatrix::print() {

    for (int i = 0; i < n; i++) {

        Z[i].print();
    }
}

// This function iterates through the array Z[] and calls the setValue() function on each object 
void OneDComplexMatrix::setRandomValues(void) {

    for (int i = 0; i < n; i++) {

        Z[i].setValues(rand() % 10 + 1, rand() % 10 + 1);
    }
}

// This function iterates through the array Z[] and calls the conjugate() function on each object
void OneDComplexMatrix::conjugate(void){

    for (int i = 0; i < n; i++) {

        Z[i].conjugate();
    }
}

// Sets the values of real and imag of a Complex
void Complex::setValues(float real, float imag) {

    this->real = real;
    this->imag = imag;
}

// Sets a complex number equal to its conjugate
void Complex::conjugate(void){

    imag *= -1;
}

// Print out the values of real and imag of a Complex
void Complex::print(void) {

    if (imag >= 0) {

		cout << real << "+" << imag << "i, ";

	} else {

		cout << real << imag << "i, ";
	}
}
