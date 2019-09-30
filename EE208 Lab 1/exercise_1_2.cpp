/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 1: Exercise 2
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter two integers.
 *      - 2: The program then checks if the first number divides into the second one evenly
 *      - 3: If it does then the first number is a multiple of the second, otherwise it's not
 *      - 4: The result is printed out to the serial monitor.
 */

#include <iostream>
using namespace std;

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function checks if x is a multiple of y
bool multiple(int x, int y){

  // If divides evenly then is a multiple (no remainder)
  if(x % y == 0){

    return true;

  } else {

    return false;
  }
}

//--------------------------------------------------------
// Main Function
//--------------------------------------------------------
int main(){

  // Local variables
  int x;
  int y;

  // Here the user is prompted to input two integers
  cout << "Enter the FIRST number \n";
  cin >> x;
  cout << "Enter the SECOND number \n";
  cin >> y;

  // Here the result is printed out to the console
  if(multiple(x, y)){

    cout << x << " is a multiple of " << y << endl;

  } else {

    cout << x << " is NOT a multiple of " << y << endl;
  }

  return 0;
}

// Expected score 5/5