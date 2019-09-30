/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 3: Exercise 3
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter the size of an array
 *      - 2: The user then enters all the elements in the array
 *      - 3: The array is printed out to the screen
 *      - 4: The largest number in the array and its index are printed out to the screen
 */

#include <iostream>

using namespace std;

//--------------------------------------------------------
// Function declerations
//--------------------------------------------------------
void fillArray(int nums[], int n);
void findMax(int *nums, int n, int *largest_num, int *index);
void printArray(int nums[], int n);
void printResults(int largest_num, int index);

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    // Local variables
    int n;
    int largest_num = 0;
    int index = 0;

    cout << "Enter the amount of elements you want in the array\n";
    cin >> n;

    // Nums array is declared
    int *nums = new (nothrow) int[n];
    if (nums == NULL) {cerr << "out of memory error\n"; return 0;}

    fillArray(nums, n);

    printArray(nums, n);

    findMax(nums, n, &largest_num, &index);

    printResults(largest_num, index);
    
    delete[] nums;
    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function allows the user to initialise the elements in the array
void fillArray(int nums[], int n) {

    for (int i = 0; i < n; i++) {

        cout << "Input element " << i << ":";
        cin >> nums[i];
    }
}

// This function finds the largest number in the array and its index
void findMax(int *nums, int n, int *largest_num, int *index) {

    for (int i = 0; i < n; i++) {

        if (nums[i] > *largest_num) {

            *largest_num = nums[i];
            *index = i;
        }
    }
}

// This functoin prints the array out to the screen
void printArray(int nums[], int n) {

    cout << "\nYour array: { ";

    for (int i = 0; i < n -1; i++) {
        
        cout << nums[i] << ", ";
    }

    cout << nums[n -1] << " }" << endl;
}

// This function prints the largest number and its index to the screen
void printResults(int largest_num, int index) {

    cout << "The largest number in the array is " << largest_num << " at index " << index << endl;
}

// Expected score 4/4