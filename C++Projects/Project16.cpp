//karar khalil
/*

This program demonstrates the use of functions to perform various tasks:
1. Initialize variables.
2. Get user input for hours worked and hourly rate.
3. Calculate the paycheck based on hours worked and hourly rate.
4. Print the paycheck details.
5. Modify a variable based on user input.
6. Advance a character to the next character in the sequence.

*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void initialize(int &x, int &y, char &z);
void getHoursRate(double &hours, double &rate);
double paycheck(double hours, double rate);
void printCheck(double hours, double rate, double amount);
void funcOne(int &x, int &y);
void nextChar(char &z);

int main() {
    int x, y;
    char z;
    double rate, hours, amount;
    
    // Initialize variables
    initialize(x, y, z);
    cout << "After initialization: x = " << x << ", y = " << y << ", z = '" << z << "'\n";
    
    // Get user input for hours worked and hourly rate
    getHoursRate(hours, rate);
    
    // Calculate paycheck
    amount = paycheck(hours, rate);
    
    // Print paycheck details
    printCheck(hours, rate, amount);
    
    // Perform some calculations on x
    funcOne(x, y);
    
    // Get the next character in sequence
    nextChar(z);
    cout << "After nextChar: z = '" << z << "'\n";
    
    return 0;
}

// Sets x and y to 0, and z to a space character
void initialize(int &x, int &y, char &z) {
    x = 0;
    y = 0;
    z = ' ';
}

// Prompts the user to enter hours worked and hourly rate
void getHoursRate(double &hours, double &rate) {
    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter pay rate: ";
    cin >> rate;
}

// Computes the total pay based on hours worked
double paycheck(double hours, double rate) {
    if (hours > 40)
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    return hours * rate;
}

// Displays hours worked, hourly rate, and total pay
void printCheck(double hours, double rate, double amount) {
    cout << fixed << setprecision(2);
    cout << "\n--- Paycheck Summary ---\n";
    cout << "Hours worked: " << hours << "\n";
    cout << "Pay Rate: $" << rate << " per hour\n";
    cout << "Total Pay: $" << amount << "\n";
    cout << "-------------------------\n";
}

// Modifies x based on user input
void funcOne(int &x, int &y) {
    x = 35;
    y = 20;
    cout << "\nBefore calling funcOne: x = " << x << ", y = " << y << "\n";
    
    int userInput;
    cout << "Enter an integer: ";
    cin >> userInput;
    
    x = (2 * x) + y - userInput;
    cout << "After funcOne: x = " << x << "\n";
}

// Advances z to the next character
void nextChar(char &z) {
    z = (z == ' ') ? 'A' : z + 1;
}
