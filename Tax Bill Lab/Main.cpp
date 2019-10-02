/**
 * 	Student Name: Artur Karolewski
 *  Student Number: 17388976
 *	Lab 11: Hewlard Packers Tax Bill
 *
 *  	This program works as follows:
 *  		- 1: The user is prompted to input today's date
 *			- 2: The user is prompted to enter the amount of printers they have sold
 *			- 3: The program will prompt the user to enter the details for all the printers that were sold
 *			- 4: If the user inputs 0, a message saying that the user sold no printers will be printed out
 *			- 5: The program does the same for repairs after all the printer details are inputted or the message printed out,
 *				 the only differenece is that compound tax is also added to a repair if it was longer than 28 days ago
 *			- 6: The program prints out all the details of the sold printers and repairs once the user is done inputting the
 *				 information.
 *			- 7: The total tax bill is printed out which shows the total tax for all the printers sold and all the repairs
 *				 sold as well as the total for all the sales
 */

#include "Product.h"

 //--------------------------------------------------------
 // Main function
 //--------------------------------------------------------

int main() {

	// Local Objects and Variables
	Date* Today = NULL;
	int numOfPrinters, numOfRepairs, numOfProducts, day, month, year, uniqueID;
	double price, totalPrinterTax = 0.0, totalRepairTax = 0.0;

	std::cout << "Enter today's date (dd/mm/yyyy):\n"; std::cin >> day >> month >> year;
	Today = new Date(day, month, year);

	std::cout << "\nEnter the amount of printers sold: "; std::cin >> numOfPrinters;
	std::cout << "Enter the amount of repairs sold: "; std::cin >> numOfRepairs;
	numOfProducts = (numOfPrinters + numOfRepairs);

	if (numOfProducts > 0) {

		Product** Products = new Product*[numOfProducts];

		for (int i = 0; i < numOfProducts; i++) {

			if (numOfPrinters > 0 && i < numOfPrinters) {

				std::cout << "-----Enter the printer details-----" << std::endl;
				std::cout << "Enter the ID number: "; std::cin >> uniqueID;
				std::cout << "Enter the date of sale (dd/mm/yyyy):\n"; std::cin >> day >> month >> year;
				std::cout << "Enter the price: "; std::cin >> price; std::cout << std::endl;

				Products[i] = new Printer(uniqueID, day, month, year, price);
				totalPrinterTax += (Products[i]->getPrice() - Products[i]->getPriceBeforeTax());

			} else if (numOfPrinters == 0 && i == 0) {

				std::cout << "You did not sell any printers." << std::endl;
			}

			if (numOfRepairs > 0 && i >= numOfPrinters) {

				std::cout << "-----Enter the repair details-----" << std::endl;
				std::cout << "Enter the ID number: "; std::cin >> uniqueID;
				std::cout << "Enter the date of sale (dd/mm/yyyy):\n"; std::cin >> day >> month >> year;
				std::cout << "Enter the price: "; std::cin >> price; std::cout << std::endl;

				Products[i] = new Repair(uniqueID, day, month, year, price);

				int daysSinceSold = Today->daysPassed(*Products[i]->getDate());
				if (daysSinceSold >= 28) {

					int countDays = 0;
					for (int j = 0; j <= daysSinceSold; j++) {

						countDays++;
						if (countDays == 28) {

							Products[i]->addCompoundInterest();
							countDays = 0;
						}
					}
				}

				totalRepairTax += (Products[i]->getPrice() - Products[i]->getPriceBeforeTax());

			} else if (numOfRepairs == 0 && i == (numOfPrinters-1)) {

				std::cout << "You did not sell any repairs." << std::endl;
				numOfRepairs--;
			}
		}

		std::cout << "\n-----Details of all sold products-----" << std::endl;
		for (int i = 0; i < numOfProducts; i++) {

			Products[i]->printDetails();
		}

	} else {

		std::cout << "You did not sell any products." << std::endl;
	}

	std::cout << "\n-----Tax bill for all sales----- " << std::endl;
	std::cout << "Total number of sales: " << numOfProducts << std::endl;
	std::cout << "Total printer sales: " << numOfPrinters << "\nTotal tax for printer sales: " << totalPrinterTax << std::endl;
	std::cout << "Total repair sales: " << numOfRepairs << "\nTotal tax for repair sales: " << totalRepairTax << std::endl;
	std::cout << "Total tax for all sales: " << (totalPrinterTax + totalRepairTax) << std::endl;

	delete Today;
	return 0;
}

// Expectred score 20/20