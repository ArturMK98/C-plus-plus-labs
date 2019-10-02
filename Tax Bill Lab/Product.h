#pragma once
#include <string>
#include <iostream>
#include "Date.h"

//--------------------------------------------------------
// Product class declaration
//--------------------------------------------------------

class Product {

	public:

		Date* DateOfSale;
		int uniqueID;
		double price;
		double priceBeforeTax;
		double VAT;
		double compoundInterest;
		Product();
		Product(int, int, int, int, double, double, double);
		double getPrice(void);
		double getPriceBeforeTax(void);
		void addCompoundInterest(void);
		virtual void printDetails(void);
		Date* getDate(void);
};

//--------------------------------------------------------
// Printer class declaration
//--------------------------------------------------------

class Printer : public Product {

	public:
		Printer();
		Printer(int, int, int, int, double);
		void printDetails(void);
};


//--------------------------------------------------------
// Repair class declaration
//--------------------------------------------------------

class Repair : public Product {

	public:
		Repair();
		Repair(int, int, int, int, double);
		void printDetails(void);
};