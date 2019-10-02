/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 7: Exercise 2
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter the size of an array
 *      - 2: The array is then filled with random numbers from 1-1000
 *      - 3: The array is printed out to the screen
 *      - 4: The array is then sorted in ascending order
 *      - 5: The sorted array is printed out to the screen
 */

#include <iostream>
#include <time.h> 

using namespace std;

//--------------------------------------------------------
// Function declerations
//--------------------------------------------------------
void fillArray(int array[], int n);
void printArray(int array[], int n);
void sort(int array[], int n);
void swap(int* x, int* y);

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    srand(time(0));

    // Local variables
    int n;

    cout << "Enter the size of the array\n";
    cin >> n;

    int *nums = new (nothrow) int[n];
    if (nums == NULL) {cerr << "out of memory error\n"; return 0;}

    // Array is filled with random numbers from 1-1000
    fillArray(nums, n);

    cout << "Array before sorting: ";
    printArray(nums,n);

    sort(nums, n);

    cout << "\nArray after sorting: ";
    printArray(nums, n);

    delete[] nums;
    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function fills an array with random numbers between 1-1000
void fillArray(int array[], int n) {

    for (int i = 0; i < n; i++) {

        array[i] = rand() % 1000 + 1;
    }
}

// This function prints out the elements in an array
void printArray(int array[], int n) {

    cout << "{ ";

    for (int i = 0; i < n -1; i++) {
        
        cout << array[i] << ", ";
    }

    cout << array[n -1] << " }" << endl;
}

// This function sorts the elements in an array from smallest to largest
void sort(int array[], int n) {

    for (int i = 0; i < n -1; i++) {
        for (int j = 0; j < n -1 -i; j++) {

            if (array[j] > array[j + 1]) {

                swap(array[j], array[j + 1]);
            }
        }
    }
}

// This function swaps two variables
void swap(int* x, int* y) {

    int temp = *x;
    *x = *y;
    *y = temp;
}