/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 2: Exercise 6
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter the value for N
 *      - 2: The program will fill an array with the first N fibonacci numbers
 *      - 3: The array of fibonacci numbers will then be printed out 
 *      - 4: The reversed array of fibonacci numbers will also be printed out
 */

#include <iostream>

using namespace std;

//--------------------------------------------------------
// Function declerations
//--------------------------------------------------------
void fibonacci(int fibs[], int n);
void print_fibs(int fibs[], int n);
void print_fibs_reverse(int fibs[], int n);

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main () {

    // Local variables
    int n;

    // Here the user is prompted to input the value for N
    cout << "Enter the value for N" << endl;
    cin >> n;

    int *fibs = new int [n];

    // Here the array is filled with N numbers
    fibonacci(fibs, n);

    // Here the original array of fibonacci numbers is printed out and also the reverse
    cout << "Fibonacci original: ";
    print_fibs(fibs, n);
    cout << "Fibonacci reversed: ";
    print_fibs_reverse(fibs, n);

    delete[] fibs;
    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function fills an array with N fibonacci numbers
void fibonacci(int fibs[], int n) {

    fibs[0] = 0;
    fibs[1] = 1;

    for (int i = 2; i < n; i++) {

        fibs[i] = fibs[i-1] + fibs[i-2];
    }
}

// This function prints out the array of fibonacci numbers
void print_fibs(int fibs[], int n) {

    cout << "{ ";

    for (int i = 0; i < n-1; i++) {
        
        cout << fibs[i] << ", ";
    }

    cout << fibs[n-1] << " }" << endl;
}

// This function prints out the array of fibonacci numbers in reverse
void print_fibs_reverse(int fibs[], int n) {

    cout << "{ ";

    for (int i = n-1; i > 0; i--) {
        
        cout << fibs[i] << ", ";
    }

    cout << fibs[0] << " }" << endl;
}
