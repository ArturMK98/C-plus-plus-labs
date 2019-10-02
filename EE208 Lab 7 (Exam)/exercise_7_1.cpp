/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 7: Exercise 1
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter the value for N (Number of fibonacci numbers)
 *      - 2: An array is filled with N fibonacci numbers
 *      - 3: The fibonacci array is printed out to the screen
 *      - 4: The reversed fibonacci array is printed out to the screen
 *      - 5: Each number in the array is squered and added together
 *      - 6: The sum of the square numbers is printed out to the screen
 */

#include <iostream>

using namespace std;

//--------------------------------------------------------
// Function declerations
//--------------------------------------------------------
void fibonacci(int fibs[], int n);
void printFibs(int fibs[], int n);
void printFibsReverse(int fibs[], int n);
int sumOfSquares(int fibs[], int n);
int getSquare(int x);

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main () {

    // Local variables
    int n;

    cout << "Enter the value for N" << endl;
    cin >> n;

    int *fibs = new (nothrow) int [n];
    if (fibs == NULL) {cerr << "out of memory error\n"; return 0;}

    fibonacci(fibs, n);

    cout << "Fibonacci original: ";
    printFibs(fibs, n);
    cout << "Fibonacci reversed: ";
    printFibsReverse(fibs, n);

    cout << "Sum of squared fibonacci numbers: " << sumOfSquares(fibs, n);

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
void printFibs(int fibs[], int n) {

    cout << "{ ";

    for (int i = 0; i < n-1; i++) {
        
        cout << fibs[i] << ", ";
    }

    cout << fibs[n-1] << " }" << endl;
}

// This function prints out the array of fibonacci numbers in reverse
void printFibsReverse(int fibs[], int n) {

    cout << "{ ";

    for (int i = n-1; i > 0; i--) {
        
        cout << fibs[i] << ", ";
    }

    cout << fibs[0] << " }" << endl;
}

// This function returns the sum of all square numbers
int sumOfSquares(int fibs[], int n) {

    int sum = 0;

    for (int i = 0; i < n; i++) {

        sum += getSquare(fibs[i]);
    }

    return sum;
}

// This function squares a number
int getSquare(int x) {

    return x * x;
}