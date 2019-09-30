/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 1: Exercise 1
 *
 *    This program works as follows:
 *      - 1: The user is prompted to enter three integers.
 *      - 2: The program then finds the sum, average, product, largest and smallest.
 *      - 3: The results are printed out to the serial monitor.
 */

#include <iostream>
using namespace std;

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function finds the sum of three numbers
int sum(int x, int y, int z){

  return (x + y + z);
}

// This function finds the average of three numbers
double average(int sum){

  return ((double) sum / 3);
}

// This function finds the product of three numbers
int product(int x, int y, int z){

  return (x * y * z);
}

// This function finds the largest of the three numbers
int largest(int x, int y, int z){

  if((x > y) && (x > z)){

    return x;

  } else if ((y > x) && (y > z)){

    return y;

  } else {

    return z;
  }
}

// This function finds the smallest of the three numbers
int smallest(int x, int y, int z){

  if((x < y) && (x < z)){

    return x;

  } else if ((y < x) && (y < z)){

    return y;

  } else {

    return z;
  }
}

//--------------------------------------------------------
// Main Function
//--------------------------------------------------------
int main(){

  // Local variables
  int x;
  int y;
  int z;

  // Here the user is prompted to input three integers
  cout << "Enter the FIRST number \n";
  cin >> x;
  cout << "Enter the SECOND number \n";
  cin >> y;
  cout << "Enter the THIRD number \n";
  cin >> z;

  // Here the results are printed out to the console
  cout << "Sum of numbers: " << sum(x, y, z) << endl;
  cout << "Average of numbers: " << average(sum(x, y, z)) << endl;
  cout << "Product of numbers: " << product(x, y, z) << endl;
  cout << "Largest number: " << largest(x, y ,z) << endl;
  cout << "Smallest number: " << smallest(x, y ,z) << endl;

  return 0;
}
