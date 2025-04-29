//karar khalil
/* 
   This program calculates the sum of the ASCII values of the characters in a string.
   The program prompts the user to enter a string and outputs the sum of the ASCII values
   of the characters in that string. 
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int sum = 0;

    // Ask the user to enter a string
    cout << "Enter a string: ";
    cin >> input;

    // Loop through each character in the string and add its ASCII value to the sum
    for (char ch : input) {
        sum += static_cast<int>(ch);
    }

    // Display the result
    cout << "The sum of ASCII values of the characters in \"" << input << "\" is: " << sum << endl;

    return 0;
}