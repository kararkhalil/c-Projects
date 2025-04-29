//karar khalil
/*
This program performs the following tasks:
1. Asks the user to enter two integers and checks if the first number is smaller than the second one.
2. Prints all odd numbers between the two integers.
3. Calculates and prints the sum of all even numbers between the two integers.
4. Prints numbers from 1 to 10 along with their squares.
5. Calculates and prints the sum of the squares of all odd numbers between the two integers.
6. Prints all uppercase letters from A to Z.
7. The program uses loops and conditional statements to perform these tasks.



*/

#include <iostream>
using namespace std;

int main() {
    int firstNum, secondNum;

    // Ask the user to enter two numbers
    cout << "Enter two integers: ";
    cin >> firstNum >> secondNum;

    // Make sure the first number is smaller than the second one
    if (firstNum >= secondNum) {
        cout << "Error: The first number must be less than the second number." << endl;
        return 1; // Stop the program if the input is invalid
    }

    // Print all odd numbers between firstNum and secondNum
    cout << "Odd numbers: ";
    for (int i = firstNum; i <= secondNum; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            cout << i << " ";
        }
    }
    cout << endl;

    // Find and print the sum of all even numbers between firstNum and secondNum
    int sum = 0;
    for (int i = firstNum; i <= secondNum; i++) {
        if (i % 2 == 0) { // Check if the number is even
            sum += i;
        }
    }
    cout << "Sum of even numbers: " << sum << endl;

    // Print numbers from 1 to 10 along with their squares
    cout << "Numbers and their squares (1-10):" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " " << i * i << endl;
    }

    // Find and print the sum of the squares of all odd numbers between firstNum and secondNum
    int sumOfSquares = 0;
    for (int i = firstNum; i <= secondNum; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            sumOfSquares += i * i;
        }
    }
    cout << "Sum of squares of odd numbers: " << sumOfSquares << endl;

    // Print all uppercase letters from A to Z
    cout << "Uppercase letters: ";
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}