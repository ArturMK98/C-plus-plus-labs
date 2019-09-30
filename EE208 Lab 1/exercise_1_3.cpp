/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 1: Exercise 3
 *
 *    This program works as follows:
 *      - 1: The user is promped to enter a five digit integer
 *      - 2: The program then prints out all the digits in the number separately
 */

#include <iostream>
using namespace std;

//--------------------------------------------------------
// Main Function
//--------------------------------------------------------
int main(){

  // Local variables
  int x;

  // Here the user is prompted to input a five digit integer
  cout << "Enter a five digit number \n";
  cin >> x;

  // Here all the digits in the number are printed out from first to last
  cout << "Digit 1: " << (x / 10000 % 10) << endl;
  cout << "Digit 2: " << (x / 1000 % 10) << endl;
  cout << "Digit 3: " << (x / 100 % 10) << endl;
  cout << "Digit 4: " << (x / 10 % 10) << endl;
  cout << "Digit 5: " << (x % 10) << endl;

  return 0;
}

// Expected score 5/5