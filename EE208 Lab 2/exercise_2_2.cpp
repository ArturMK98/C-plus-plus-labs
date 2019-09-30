/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 2: Exercise 2
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter two integers
 *      - 2: The program prints out the values of the two integers before the swap
 *      - 3: The program then swaps the values of the two integers
 *      - 4: The swapped values are then printed out to the screen
 */

#include <iostream>

using namespace std;

//--------------------------------------------------------
// Function declerations
//--------------------------------------------------------
void swap(int* x, int* y);

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    // Local variables
    int x;
    int y;

    // Here the user is prompted to enter two integers
    cout << "Enter the value of integer x:" << endl;
    cin >> x;
    cout << "Enter the value of integer y:" << endl;
    cin >> y;
    cout << endl;

    // Here the variables are printed out before the swap, the swap takes place and then the variables are ptinted out after the swap
    cout << "Before swap:" << endl << "Value of x = " << x <<  endl << "Value of y = " << y << endl << endl;
    swap(&x, &y);
    cout << "After swap: " << endl << "Value of x = " << x << endl << "Value of y = " << y << endl;

    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function swaps the values of two variables
void swap(int* x, int* y) {

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
