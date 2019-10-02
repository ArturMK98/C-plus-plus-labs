#include "Date.h"

//--------------------------------------------------------
// Constructors and methods for a Date object
//--------------------------------------------------------

// Default constructor
Date::Date() {

	day = 31;
	month = 12;
	year = 2019;
}

// Parametarised constructor
Date::Date(int day, int month, int year) {

	this->day = day;
	this->month = month;
	this->year = year;
}

// Method that sets the values of day, month and year
void Date::setValues(int day, int month, int year) {

	this->day = day;
	this->month = month;
	this->year = year;
}

// Counts the number of days between two dates
// Referenced from https://www.geeksforgeeks.org/find-number-of-days-between-two-given-dates/
// Made small changes to make it work for my solution
int Date::daysPassed(Date past) {

	// Initialize count using years and day 
	long int n1 = this->year * 365 + this->day;

	// Add days for months in given date 
	for (int i = 0; i < this->month - 1; i++) {

		n1 += months[i];
	}

	// Add a day for every leap year (366 days)
	n1 += this->countLeapYears();

	long int n2 = past.year * 365 + past.day;
	for (int i = 0; i < past.month - 1; i++) {

		n2 += months[i];
	}

	n2 += past.countLeapYears();

	// Return difference between two dates 
	return (n1 - n2);
}

// Counts the number of leap years 
// Also refernced from the same source as the daysPassed method
int Date::countLeapYears(void) {

	int years = this->year;
	if (month <= 2) {

		years--;
	}

	// Year is a leap year if it is a multiple of 4, 
	// multiple of 400 and not a multiple of 100. 
	return years / 4 - years / 100 + years / 400;
}

// Prints out the date
void Date::prinDetails(void) {

	std::cout << day << "/" << month << "/" << year;
}
