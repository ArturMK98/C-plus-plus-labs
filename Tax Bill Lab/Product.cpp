#include "Product.h"

//--------------------------------------------------------
// Constructors and methods for a Product object
//--------------------------------------------------------

// Default constructor
Product::Product() {

	DateOfSale = new Date;
	uniqueID = 0;
	price = 0.0;
	priceBeforeTax = 0.0;
	VAT = 0.0;
	compoundInterest = 0.0;
}

// Parameterised constructor
Product::Product(int uniqueID, int day, int month, int year, double price, double VAT, double compoundInterest) {

	DateOfSale = new Date;
	this->uniqueID = uniqueID;
	this->priceBeforeTax = price;
	// Rounds price to 2 decmail places after adding VAT
	this->price = (int)((price + (price * VAT)) / 0.01) * 0.01;
	this->VAT = VAT;
	this->compoundInterest = compoundInterest;
	DateOfSale->setValues(day, month, year);

}

// Returns the value of price
double Product::getPrice(void) {

	return price;
}

// Returns the price without tax
double Product::getPriceBeforeTax(void) {

	return priceBeforeTax;
}

void Product::addCompoundInterest(void) {

	// Rounds price to 2 decmial places after adding compound interest
	price = (int) ((price + (price * compoundInterest)) / 0.01) * 0.01;
}

// Returns pointer to Date object
Date* Product::getDate() {

	return DateOfSale;
}

// Prints out the product details
void Product::printDetails(void) {

	std::cout << "\nPrinting base class";
}

// Printer constructors and methods
Printer::Printer() {

	this->VAT = 0.23;
	this->compoundInterest = 0.00;
}

Printer::Printer(int uniqueID, int day, int month, int year, double price) : Product(uniqueID, day, month, year, price, 0.23, 0.00) {}

void Printer::printDetails() {

	std::cout << "\nProduct type: Printer" << "\nID: " << uniqueID << "\nSale Date: ";
	DateOfSale->prinDetails();
	std::cout << "\nPrice before tax: " << priceBeforeTax << "\nPrice after tax: " << price << "\nVAT: " << (VAT * 100) << "%" << std::endl;
}

// Repair constructors and methods
Repair::Repair() {

	this->VAT = 0.13;
	this->compoundInterest = 0.02;
}

Repair::Repair(int uniqueID, int day, int month, int year, double price) : Product(uniqueID, day, month, year, price, 0.13, 0.02) {}

void Repair::printDetails(void) {

	std::cout << "\nProduct type: Repair" << "\nID: " << uniqueID << "\nSale Date: ";
	DateOfSale->prinDetails();
	std::cout << "\nPrice before tax: " << priceBeforeTax << "\nPrice after tax: " << price << "\nVAT: " << (VAT * 100) << "%" << std::endl;
	std::cout << "Compound Interest: " << (compoundInterest * 100) << "% for every 28 days" << std::endl;
}
