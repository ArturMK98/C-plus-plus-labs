/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 2: Exercise 5
 *
 *    This program works as follows:
 *      - 1: The user is prompted to input 5 double values
 *      - 2: The program then prints the original array and the reversed array
 */

#include <iostream>

using namespace std;

//--------------------------------------------------------
// Function declerations
//--------------------------------------------------------
void fill_array(double dubs[]);
void print_array(double dubs[]);
void print_array_reverse(double dubs[]);

//--------------------------------------------------------
// Global Variables
//--------------------------------------------------------
const int SIZE_OF_ARRAY = 5;

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    // Local variables
    double *dubs = new double[SIZE_OF_ARRAY];

    // Here the user is prompted to enter 5 doubles
    cout << "Input 5 doubles" << endl;
    fill_array(dubs);

    // Here the original and the reversed arrays are printed out
    cout << endl << "The original array: ";
    print_array(dubs);
    cout << "The reversed array: ";
    print_array_reverse(dubs);

    delete[] dubs;
    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function gets the user to fill in an array of doubles
void fill_array(double dubs[]) {

    for (int i = 0; i < SIZE_OF_ARRAY; i++) {

        cout << "Input element " << i << ":";
        cin >> dubs[i];
    }
}

// This function prints out the original array
void print_array(double dubs[]) {

    cout << "{ ";

    for (int i = 0; i < SIZE_OF_ARRAY -1; i++) {
        
        cout << dubs[i] << ", ";
    }

    cout << dubs[SIZE_OF_ARRAY -1] << " }" << endl;
}

// This function prints out the reversed array
void print_array_reverse(double dubs[]) {

    cout << "{ ";

    for (int i = SIZE_OF_ARRAY -1; i > 0; i--) {
        
        cout << dubs[i] << ", ";
    }

    cout << dubs[0] << " }" << endl;
}
