//karar khalil	
/* this program calculates the amount of nuts and dried fruits required for a given number of students based on their calorie requirements. 
   It takes into account the calories in nuts and dried fruits, and calculates the required amounts accordingly. */

#include <iostream>
using namespace std;
int main() 
{
	
	double nutsreq, driedfruitsreq, nutscal, driedfruitscal, totalcal, calrequired;
	int students;
	// user input
	cout << "Enter number of students: ";
	cin >> students;
	cout << "Enter calories required for each student: ";
	cin >> calrequired;
	cout << "Enter calories in nuts: ";
	cin >> nutscal;
	
	// Calculate dried fruits calories
	driedfruitscal = nutscal / 0.70;
	
	// Calculate total calories needed
	totalcal = calrequired * students;
	nutsreq = totalcal/ (nutscal + driedfruitscal);
	driedfruitsreq = nutsreq;
	
	// Print output
	cout << "Nuts required: " << nutsreq << endl;
	cout << "Dried Fruits required: " << driedfruitsreq << endl;
	
return 0;
	
}