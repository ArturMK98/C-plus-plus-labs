/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 2: Exercise 1
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter a number which determines how many times the 2 dice will roll
 *      - 2: The program then rolls the 2 dice the amount of times specified by the user
 *      - 3: The amount of times each number has occured is stored in an array
 *      - 4: The % of times each number has occured is calculated
 *      - 5: The results are printed out to the screen
 */

#include <iostream>
#include <iomanip>  
#include <time.h>    

using namespace std;

//--------------------------------------------------------
// Function declerations
//--------------------------------------------------------
void roll_dice(int nums[], int num_of_rolls);
void print_table(int nums[], int num_of_rolls);

//--------------------------------------------------------
// Global Variables
//--------------------------------------------------------
const int NUM_OF_SIDES = 6;
const int NUM_OF_DICE = 2;
const int SIZE_OF_ARRAY = 11;

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    srand(time(0));

    // Local variables
    int num_of_rolls;
    int *nums = new int [SIZE_OF_ARRAY]; 

    // Here the user is prompted to enter the amount of times the dice will roll
    cout << "Enter the amount of times you want to roll the dice." << endl;
    cin >> num_of_rolls;

    // Here the program rolls the 2 dice the amount of times specified by the user
    roll_dice(nums, num_of_rolls);

    // Here the table of results is printed out to the screen
    print_table(nums, num_of_rolls);
    
    delete[] nums;
    return 0;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function prints out the table of results for the dice rolls
void print_table(int nums[], int num_of_rolls){

    cout << setw(6) << "#" << setw(17) << "Count" << setw(11) << "Freq %" << endl;

    for (int i = 0; i < SIZE_OF_ARRAY; i++) {

        cout << setw(6) << i + NUM_OF_DICE  << ": " << setw(15) << nums[i] << setw(10) << (nums[i]*1.0/num_of_rolls)*100 << "%" << endl;
    }

    cout << setw(7) << "Total:" << setw(16) << num_of_rolls << setw(11) << "100%" << endl;    
}

// This function rolls two dice a specified number of times and keeps track of how many times each number occured
void roll_dice(int nums[], int num_of_rolls){

    for (int i = 0; i < num_of_rolls; i++) {

        nums[(rand() % NUM_OF_SIDES) + (rand() % NUM_OF_SIDES)]++;
    }
}
