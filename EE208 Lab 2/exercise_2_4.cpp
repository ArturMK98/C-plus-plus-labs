/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 2: Exercise 4
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter two integers
 *      - 2: The program prints out the values of the two integers before the swap
 *      - 3: The program then swaps the values of the two integers
 *      - 4: The swapped values are then printed out to the screen
 *      - 5: The steps above are repeated with floats and chars
 *      - 6: This version also prints out what the function does only if the boolean value is false
 */

#include <iostream>

using namespace std;

//--------------------------------------------------------
// Function declerations
//--------------------------------------------------------
void swap(int* x, int* y, bool verbose = false);
void swap(float* xf, float* yf, bool verbose = false);
void swap(char* xc, char* bc, bool verbose = false);

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    // Local variables
    int x;
    int y;
    float xf;
    float yf;
    char xc;
    char yc;

    // Here the user is prompted to enter two integers
    cout << "Enter the value of integer x:" << endl;
    cin >> x;
    cout << "Enter the value of integer y:" << endl;
    cin >> y;
    cout << endl;

    // Here the integers are printed out before the swap, the swap takes place and then the integers are ptinted out after the swap
    cout << "Before swap:" << endl << "Value of x = " << x <<  endl << "Value of y = " << y << endl << endl;
    swap(&x, &y, true);
    cout << "After swap: " << endl << "Value of x = " << x << endl << "Value of y = " << y << endl;
    cout << endl;

    // Here the user is prompted to enter two floats
    cout << "Enter the value of float xf:" << endl;
    cin >> xf;
    cout << "Enter the value of float yf:" << endl;
    cin >> yf;
    cout << endl;

    // Here the floats are printed out before the swap, the swap takes place and then the floats are ptinted out after the swap
    cout << "Before swap:" << endl << "Value of xf = " << xf <<  endl << "Value of yf = " << yf << endl << endl;
    swap(&xf, &yf, true);
    cout << "After swap: " << endl << "Value of xf = " << xf << endl << "Value of yf = " << yf << endl;
    cout << endl;

    // Here the user is prompted to enter two chars
    cout << "Enter the value of character xc:" << endl;
    cin >> xc;
    cout << "Enter the value of character yc:" << endl;
    cin >> yc;
    cout << endl;

    // Here the chars are printed out before the swap, the swap takes place and then the chars are ptinted out after the swap
    cout << "Before swap:" << endl << "Value of xc = " << xc <<  endl << "Value of yc = " << yc << endl << endl;
    swap(&xc, &yc);
    cout << "After swap: " << endl << "Value of xc = " << xc << endl << "Value of yc = " << yc << endl;

    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function swaps the values of two integers
void swap(int* x, int* y, bool verbose ) {

    if (verbose){

        cout << "This function prints out the integers" << endl;
    }

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// This function swaps the values of two floats
void swap(float* xf, float* yf, bool verbose) {

    if (verbose){

        cout << "This function prints out the floats" << endl;
    }

    float temp;
    temp = *xf;
    *xf = *yf;
    *yf = temp;
}

// This function swaps the values of two chars
void swap(char* xc, char* yc, bool verbose) {

    if (verbose){

        cout << "This function prints out the chars" << endl;
    }

    char temp;
    temp = *xc;
    *xc = *yc;
    *yc = temp;
}

// Expected score 3/3