/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 1: Exercise 5
 *
 *    This program works as follows:
 *      - 1: This program prints out all the prime numbers up to 5000.
 */

#include <iostream>
using namespace std;

// Global variables
const int limit = 5000;

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function determines if a number is prime or not
bool isPrime(int n){

  bool prime = true;
  
  for(int i = 2; i <= n / 2; i++){

    if(n % i == 0){

      prime = false;
      break;
    }
  }

  return prime;
}

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main(){

  // Here the program prints out the prime numbers up to 5000
  for (int i = 0; i < limit; i++){

    if (isPrime(i)){

      cout << i << endl;
    }
  }

  return 0;
}

// Expected score 5/5
