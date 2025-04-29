//karar khalil 

/*
this program calculates the interest on a credit card balance based on the average daily balance method.
The user is prompted to enter the credit card balance, payment made, number of days in the billing cycle,
number of days payment is made before the billing cycle, and the interest rate per month.
The program then calculates the average daily balance and the interest amount based on the provided information.
Finally, it displays the calculated interest amount to the user.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int d1, d2;
    double averageDailyBalance, netBalance, payment, intrest, intrestRate;
    cout << setprecision(2) << fixed << showpoint;    //global format to output two decimal places
    cout << "-*-*-*-*-*-*-*- Welcome to Intrest Rate Calculator -*-*-*-*-*-*-*-"<< endl;   // welcome screen
    cout << "Please enter your  credit card balance: ";  // printing and asking the user to input data
    cin >> netBalance;
    cout <<"Please enter the payment made: ";
    cin >> payment;
    cout << "Please eneter the the numbers of days in the billing cycle: ";
    cin >> d1;
    cout << "Please enter the numbers of days payment is made before billing cycle: ";
    cin >> d2;
    cout<< "Please enter the intrest rate per month: ";
    cin >> intrestRate;
    averageDailyBalance = (netBalance * d1 - payment * d2) / d1; // calculating the data entered and assigning it to average
    intrest = averageDailyBalance * intrestRate;
    cout << "Your intrest is: " << intrest << endl; // printing the average
    cout << "-*-*-*-*-*-*-*- Thank you for using Intrest Rate Calculator -*-*-*-*-*-*-*-" << endl; // ending screen, thaking user for using.
    return 0;
}
