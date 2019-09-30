/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 3: Exercise 1
 *
 *    This program works as follows:
 *      - 1: An array of size 10 is created with 10 integer values hard coded into it
 *      - 2: The program finds the largest number in the array and it's index
 *      - 3: The largest number and it's index are printed out to the screen
 */

#include <iostream>

using namespace std;

//--------------------------------------------------------
// Global Variables
//--------------------------------------------------------
const int SIZE_OF_ARRAY = 10;

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    // Local variables
    int largest_num = 0;
    int index_of_num;

    int nums [SIZE_OF_ARRAY] = {32, 12, 22, 87, 13, 6, 1, 93, 45, 11};

    // Here the program determines which number is the largest and what index it's at
    for(int i = 0; i < SIZE_OF_ARRAY; i++){

        if (nums[i] > largest_num) {

            largest_num = nums[i];
            index_of_num = i;
        }
    }

    cout << "The largest number in the array is " << largest_num << " at index " << index_of_num << endl;
    
    return 0;
}

// Expected score 4/4