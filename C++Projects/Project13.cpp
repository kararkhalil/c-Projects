// Name: karar khalil
/* This program will calculate the total price of the items and the shipping fee.
It will ask the user to input the quantity of items and the price of each item.
If the total price is greater than or equal to $200, the shipping fee will be free.
Otherwise, the shipping fee will be $10 per item.
The program will output the total price and the shipping fee.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
//These will calculate prices and quantity  and input 
	double price = 0, total = 0, temp_price;   
	int item = 0;

	cout << "How many items are you purchasing? ";
	cin >> item;     // inputting a quantity

	for (int i = 0; i < item; i++)  // loop to calculate the price of each item
	{
		cout << "Please enter the price of the item. $";
		cin >> temp_price;
		price += temp_price;
	}
	if (price >= 200)// if the total price is greater than or equal to $200, the shipping fee will be free.
	{
		cout << "Your shipping is free" << endl;
		total = price;
	}
	else // if the total price is less than $200, the shipping fee will be $10 per item.
	{
		cout << "shipping fee is $" << item * 10 << endl;
		total = price + (item * 10);
	}
    cout << fixed << showpoint << setprecision(2); // set the decimal point to 2
	cout << "Your total is: $" << total << endl;// output the total price and the shipping fee.
	
	return 0;
}
