//karar khalil
/* this program calculates the final price of an item after applying a markup and sales tax. 
   It takes the original price, markup percentage, and sales tax rate as inputs from the user. 
   The program then calculates the markup price, sales tax price, and total price, 
   and displays all the relevant information to the user. */

#include <iostream>

using namespace std;
int main() 
{
	double saletax, OPrice, markup, markupPrice, salesTaxPrice, totalPrice, storesale;
	cout << "please input original price: ";
	cin >> OPrice;
	cout << "please input the percentage of the markup ";
	cin >> markup;
	cout << "please input the sales tax rate ";
	cin >> saletax;
	// calculating the input.
    markupPrice = OPrice * (markup / 100);
    salesTaxPrice = OPrice * (saletax / 100);
    totalPrice = OPrice + salesTaxPrice + markupPrice;
	storesale = OPrice + markupPrice;
    // printing out the results
	cout << "The original pice is: $" << OPrice << endl;
	cout << "the percentage markup is: " << markupPrice << "%" << endl;
	cout << "the store sale price is: $" << storesale << endl;
	cout << "sale tax rate is : " << saletax << "%"<< endl;
	cout << "the sale tax price: $" << salesTaxPrice << endl;
	cout << "final price: $" << totalPrice << endl;
	
	return 0;
}