/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 3: Exercise 6
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter the number of rows and columns for two arrays
 *      - 2: If the columns of the first array and rows of the second array are the same
 *           then two 2D arrays are created and the user inputs each element
 *      - 3: The product array is filled with zeros
 *      - 4: The first and the second 2D array are printed out to the screen
 *      - 5: The program calculates the product of array1 and array2
 *      - 6: The resulting matrix is printed out to the screen
 */

#include <iostream>
#include <iomanip> 

using namespace std;

//--------------------------------------------------------
// Function declarations
//--------------------------------------------------------
void getProduct(double array1[], double array2[], double product[], int rows, int columns1, int columns2);
void fillArray(double array[], int rows, int columns);
void printArray(double array[], int rows, int columns);
void zeroArray(double array[], int rows, int columns);

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    // Local variables
    int rows1;
    int rows2;
    int columns1;
    int columns2;

    cout << "Enter the amount of rows and columns in the first matrix\n";
    cout << "Rows: ";
    cin >> rows1;
    cout << "Columns: ";
    cin >> columns1;

    cout << "\nEnter the amount of rows and columns in the second matrix\n";
    cout << "Rows: ";
    cin >> rows2;
    cout << "Columns: ";
    cin >> columns2;

    if (columns1 != rows2) {

        cout << "Error: The number of columns in the first matrix is different than the number of rows in the second\n";
        return 0;
    }

    // Here the arrays are declared
    double* array1 = new (nothrow) double[rows1 * columns1];
    if (array1 == NULL) {cerr << "out of memory error\n"; return 0;}

    double* array2 = new (nothrow) double[rows2 * columns2];
    if (array2 == NULL) {cerr << "out of memory error\n"; return 0;}

    double* product = new (nothrow) double[columns1 * rows2];
    if (product == NULL) {cerr << "out of memory error\n"; return 0;}

    cout << "\nInput elements for Matrix 1\n";
    fillArray(array1, rows1, columns1);

    cout << "\nInput elements for Matrix 2\n";
    fillArray(array2, rows2, columns2);
    
    zeroArray(product, rows2, columns1);

    cout << "\nMatrix 1\n";
    printArray(array1, rows1, columns1);

    cout << "\nMatrix 2\n";
    printArray(array2, rows2, columns2);

    getProduct(array1, array2, product, rows1, columns1, columns2);

    cout << "\nProduct\n";
    printArray(product, rows1, columns2);

    delete[] array1;
    delete[] array2;
    delete[] product;
    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function lets the user fill a 2D array with numbers
void fillArray(double array[], int rows, int columns) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {

            cout << "Input element [" << i << "]" << "[" << j << "]: ";
            cin >> array[i*columns+j];
        }
    }
}

// This function fills a 2D array with zeros
void zeroArray(double array[], int rows, int columns) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {

            array[i*columns+j] = 0;
        }
    }
}

// This function prints out the contents of a 2D array
void printArray(double array[], int rows, int columns) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {

            cout << setw(5) << array[i*columns+j] << setw(2);

            if (j == columns -1) {

                cout << endl;
            }
        }
    }
}

// This function calculates the product of two 2D arrays
void getProduct(double array1[], double array2[], double product[], int rows1, int columns1, int columns2) {

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            for (int k = 0; k < columns1; k++) {

                product[i*columns2+j] += array1[i*columns1+k] * array2[k*rows1+j];
            }
        }
    }
}

// Expected score 8/8