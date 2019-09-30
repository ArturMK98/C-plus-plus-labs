/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 3: Exercise 4
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter the size of array1 and array2
 *      - 2: The user then fills the array with doubles
 *      - 3: Both of the arrays are printed out to the screen
 *      - 4: The program concatonates array1 and array2
 *      - 5: The concatonated array is printed out to the screen
 */

#include <iostream>

using namespace std;

//--------------------------------------------------------
// Function declerations
//--------------------------------------------------------
void fillArray(double array[], int n);
void printArray(double array[], int n);
double *concatonate(double array1[], double array2[], int n1, int n2);

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    // Local variables
    int first_array_size;
    int second_array_size;
    double *conc_array;

    cout << "Enter the size of the first array\n";
    cin >> first_array_size;
    cout << "Enter the size of the second array\n";
    cin >> second_array_size;

    // First and second array are declared
    double *first_array = new (nothrow) double[first_array_size];
    if (first_array == NULL) {cerr << "out of memory error\n"; return 0;}

    double *second_array = new (nothrow) double[second_array_size];
    if (second_array == NULL) {cerr << "out of memory error\n"; return 0;}

    cout << "Initialise array 1\n";
    fillArray(first_array, first_array_size);

    cout << "\nInitialise array 2\n";
    fillArray(second_array, second_array_size);

    cout << "\nArray 1: ";
    printArray(first_array, first_array_size);

    cout << "\nArray 2: ";
    printArray(second_array, second_array_size);

    conc_array = concatonate(first_array, second_array, first_array_size, second_array_size);

    cout << "\nConcatonated array: ";
    printArray(conc_array, (first_array_size + second_array_size));

    delete[] first_array;
    delete[] second_array;
    delete[] conc_array;
    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function allows the user to initialise elements in the array
void fillArray(double array[], int n) {

    for (int i = 0; i < n; i++) {

        cout << "Input element " << i << ":";
        cin >> array[i];
    }
}

// This function prints out the elements in an array
void printArray(double array[], int n) {

    cout << "{ ";

    for (int i = 0; i < n -1; i++) {
        
        cout << array[i] << ", ";
    }

    cout << array[n -1] << " }" << endl;
}

// This function concatonates two arrays
double *concatonate(double array1[], double array2[], int n1, int n2) {

    double *conc_array = new (nothrow) double[n1 + n2];    
    if (conc_array == NULL) {cerr << "out of memory error\n"; return 0;}

    for (int i = 0; i < n1; i++) {

        conc_array[i] = array1[i];
    }

    for (int i = n1; i < (n1 + n2); i++) {

        conc_array[i] = array2[i - n1];
    }

    return conc_array;
}
