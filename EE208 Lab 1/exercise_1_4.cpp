/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 1: Exercise 4
 *
 *    This program works as follows:
 *      - 1: The user is promped to their account number.
 *      - 2: The program then checks if it matches the hardcoded number.
 *      - 3: If the number inputted by the user is correct, the user is then prompted to enter teh amount they wish
 *           to withdraw.
 *      - 4: If the their bank account balance is less than -100 after the withdraw then a message saying they have
 *           exceeded the overdraft limit will be printed.
 *      - 5: If it doesn't exeed the overdraft limit then the balance is printed out to the serial monitor.
 */

#include <iostream>
using namespace std;

// Global variables
const int accountNum = 1234567;
const double overdraftLim = -100.00;

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

bool matches(int accNum){

  if (((double) accNum / (double) accountNum) == 1){

    return true;

  } else {

    return false;
  }
}

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main(){

  // Local variables
  double balance = 342.86;
  double withdraw;
  int accNum;

  // Here the user is prompted to enter their account number
  cout << "Enter your bank account number \n";
  cin >> accNum;

  // Here the program checks if the account number matches the one hard coded
  if(matches(accNum)){

    cout << "Enter the amount you would like to withdraw" << endl;
    cin >> withdraw;

    // If the bank balance is less than -100 then overdraft limit exceeded
    if((balance - withdraw) < overdraftLim){

      cout << "You have exceeded the overdraft limit" << endl;

    // Otherwise it did not exceed the overdraft limit and bank balance is printed out
    } else {

      balance -= withdraw;
      cout << "Your balance is now: " << balance << endl;
    }

  // If the account number inputted by theuser does not match the hard coded one then it's incorrect
  } else {

    cout << "Bank accout number INCORRECT" << endl;
  }

  return 0;
}
