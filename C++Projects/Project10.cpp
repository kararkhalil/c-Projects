//karar khalil
/*
This program calculates the monthly paycheck of a salesperson based on their base salary, years of service, and total sales.
the program calculates the bonus based on the years of service and the additional bonus based on the total sales. it then outputs the base salary,
 number of years of service, total sales, monthly paycheck, and additional bonus. 

*/
#include <iostream>
using namespace std;
int main() {
    // Declare variables
    double baseSalary, totalSales, bonus, additionalBonus, monthlyPaycheck;
    int noOfServiceYears;
    // Get the base salary, number of years of service, and total sales
    cout << "Enter the base salary: ";
    cin >> baseSalary;
    cout << "Enter the number of years of service: ";
    cin >> noOfServiceYears;
    cout << "Enter the total sales: ";
    cin >> totalSales;
    // Calculate the bonus
    if (noOfServiceYears <= 5)// here im telling the machine that if the user is under 5 years then they get a 10% bonus
        bonus = 10 * noOfServiceYears;
    else // here im telling th e machine that if the user is not under 5 years then they over 5
        bonus = 20 * noOfServiceYears;
    // Calculate the additional bonus
    if (totalSales >= 5000 || totalSales < 10000)// here im telling the machine that if the user made more than 5000 in sales then they get a 3% bonus
        additionalBonus = totalSales * 0.03;
    else if (totalSales >= 10000)// here im telling the machine that if the user made more than 10000 in sales then they get a 6% bonus
        additionalBonus = totalSales * 0.06;
    else //Here its zero in case user did not make enough sales to qualify for any bonus
        additionalBonus = 0;// here im telling the machine that if the user did not make enough sales to qualify for any bonus
    // Calculate the monthly paycheck
    monthlyPaycheck = baseSalary + bonus + additionalBonus;
    // output the monthly paycheck, additional bonus, base salary, number of years of service, and total sales
    cout << "Base Salary: $" << baseSalary << endl;
    cout << "Number of years of service: " << noOfServiceYears << endl;
    cout << "Total Sales: $" << totalSales << endl;
    cout << "The monthly paycheck is: $" << monthlyPaycheck << endl;
    cout << "The additional bonus is: $" << additionalBonus << endl;
    return 0;
}