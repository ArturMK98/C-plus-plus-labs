/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 3: Exercise 2
 *
 *    This program works as follows:
 *      - 1: An array of size 10 is created with 10 integer values hard coded into it
 *      - 2: The program finds the largest number in the array and it's index
 *      - 3: The largest number and it's index are printed out to the screen
 *      - 4: This version does this using fuctions and another array
 */

#include <iostream>

using namespace std;

//--------------------------------------------------------
// Function declerations
//--------------------------------------------------------
void findMax(int nums[], int element_and_index[]);
void printResult(int element_and_index[]);

//--------------------------------------------------------
// Global Variables
//--------------------------------------------------------
const int SIZE_OF_ARRAY = 10;
const int NUMBER_AND_INDEX = 2;

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    int nums [SIZE_OF_ARRAY] = {32, 12, 22, 87, 13, 6, 1, 93, 45, 11};

    // This array will store the largest number in index 0 and the index of that number in index 1
    int *element_and_index = new (nothrow) int[NUMBER_AND_INDEX];
    if (element_and_index == NULL) {cerr << "out of memory error\n"; return 0;}

    findMax(nums, element_and_index);

    printResult(element_and_index);

    delete[] element_and_index;
    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function determines the largest number and its index in the first array and stores these values in another
void findMax(int nums[], int element_and_index[]){

    // Local variables
    element_and_index[0] = 0;

    for(int i = 0; i < SIZE_OF_ARRAY; i++){

        if (nums[i] > element_and_index[0]) {

            element_and_index[0] = nums[i];
            element_and_index[1] = i;
        }
    }
}

// This function prints out the larest element and its index
void printResult(int element_and_index[]) {

    cout << "The largest number in the array is " << element_and_index[0] << " at index " << element_and_index[1] << endl;
}
