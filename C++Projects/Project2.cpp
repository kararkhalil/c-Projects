// karar khalil
/*  this program will ask the user to input two integers, then it will multiply the first integer by 2 and add the second integer to it. 
	Then it will add a constant value of 11 to the result and display the final value. 
	After that, it will ask the user to input their name and hours worked, and calculate their salary based on a rate of $12.50 per hour. 
	Finally, it will display the user's name, rate, hours worked, and salary.
*/

#include <iostream> //calling the headers
#include <string>

using namespace std;

int main()
{
	int const SECRET = 11;
	double const RATE = 12.50;
	int num1, num2, newNum;
	string name;
	double hoursWorked, Salary;
	
	//statements that prompt the user to input two integers	
	cout << "please input two number, one number at a time: ";
	cin >> num1 >> 	num2;
	newNum = (num1 * 2) + num2;
	cout << newNum << endl;
	
	//statements that prompt the user to input two integers
	newNum = newNum + SECRET;
	cout << "the value of newNum plus secret is: " << newNum << endl;
	cout << "Enter a hours worked (between 0 and 70): ";
	cin >> hoursWorked;
	cout << "please enter your name: ";
	cin >> name;
	Salary = RATE * hoursWorked;
	cout << "Name: " << name << endl;
	cout << "Rate: $" << RATE << endl;
	cout << "Hours Worked: " << hoursWorked << endl;
	cout << "Salary:$" << Salary << endl;
	
	
	
return 0;
}