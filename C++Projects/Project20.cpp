//kararkhalil
/*
     This program is a simple fraction calculator that allows the user to perform
     addition, subtraction, multiplication, and division on two fractions.
     The user inputs the numerators and denominators of the fractions, and the program
     calculates the result based on the chosen operation.
     
*/

#include <iostream>
using namespace std;

// This function displays the menu, tells the user what the program does, 
// and lets them pick an operation to perform on fractions.
char menu() {
    char choice;
    cout << "Welcome to the Fraction Calculator!\n";
    cout << "This program lets you add, subtract, multiply, or divide two fractions.\n";
    cout << "Just enter the numerators and denominators, and I'll do the math for you!\n";
    cout << "Choose an operation: \n";
    cout << "  +  Addition\n";
    cout << "  -  Subtraction\n";
    cout << "  *  Multiplication\n";
    cout << "  /  Division\n";
    cout << "Enter your choice (+, -, *, /): ";
    cin >> choice;
    return choice;
}

// Function to add two fractions
// We cross multiply the numerators and multiply the denominators normally
void addFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * den2 + num2 * den1; // Cross multiplication for numerators
    resultDen = den1 * den2; // Multiply denominators
}

// Function to subtract two fractions
// This works just like addition, but we subtract the numerators instead
void subtractFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * den2 - num2 * den1; // Cross multiply and subtract
    resultDen = den1 * den2; // Denominators stay the same way as in addition
}

// Function to multiply two fractions
// multiply the numerators and denominators directly
void multiplyFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * num2; // Multiply numerators
    resultDen = den1 * den2; // Multiply denominators
}

// Function to divide two fractions
// To divide a fraction, we flip the second fraction and multiply!
void divideFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * den2; // Multiply first numerator by second denominator
    resultDen = den1 * num2; // Multiply first denominator by second numerator
}

int main() {
    int num1, den1, num2, den2, resultNum, resultDen;
    char operation;

    // Show the menu and get the user’s choice
    operation = menu();

    // Get the first fraction from the user
    cout << "Enter the first fraction (numerator denominator): ";
    cin >> num1 >> den1;

    // Get the second fraction
    cout << "Enter the second fraction (numerator denominator): ";
    cin >> num2 >> den2;

    // We need to make sure denominator isn't 0, because you can't divide by zero!
    if (den1 == 0 || den2 == 0) {
        cout << "Invalid! The denominator cannot be zero. Try again with valid fractions.\n";
        return 1; // Exiting with an error
    }

    // Perform the chosen operation
    switch (operation) {
        case '+':
            addFractions(num1, den1, num2, den2, resultNum, resultDen);
            cout << num1 << " / " << den1 << " + " << num2 << " / " << den2 << " = " << resultNum << " / " << resultDen << endl;
            break;
        case '-':
            subtractFractions(num1, den1, num2, den2, resultNum, resultDen);
            cout << num1 << " / " << den1 << " - " << num2 << " / " << den2 << " = " << resultNum << " / " << resultDen << endl;
            break;
        case '*':
            multiplyFractions(num1, den1, num2, den2, resultNum, resultDen);
            cout << num1 << " / " << den1 << " * " << num2 << " / " << den2 << " = " << resultNum << " / " << resultDen << endl;
            break;
        case '/':
            if (num2 == 0) { // Double-checking division by zero (just in case)
                cout << "invalid! You can’t divide by zero. Try again.\n";
            } else {
                divideFractions(num1, den1, num2, den2, resultNum, resultDen);
                cout << num1 << " / " << den1 << " / " << num2 << " / " << den2 << " = " << resultNum << " / " << resultDen << endl;
            }
            break;
        default:
            cout << "that’s not a valid operation. Please restart and pick +, -, *, or /.\n";
    }

    return 0;
}