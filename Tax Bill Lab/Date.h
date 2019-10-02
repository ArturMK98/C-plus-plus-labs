#pragma once
#include <string>
#include <iostream>

// Array of days in each month of the year
const int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

//--------------------------------------------------------
// Date class declaration
//--------------------------------------------------------

class Date {

	public:
		int day;
		int month;
		int year;
		Date();
		Date(int, int, int);
		int countLeapYears(void);
		int daysPassed(Date);
		void setValues(int, int, int);
		void prinDetails(void);
};