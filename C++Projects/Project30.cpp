//karar khalil
/*  
    This program removes all vowels from a given string. 
    It defines a function to check if a character is a vowel and another function to remove vowels from the string.
    The main function takes user input and displays the modified string without vowels.
*/
#include <iostream>
#include <string>

using namespace std;

// Function to check if a character is a vowel (both uppercase and lowercase)
bool isVowel(char c) {
    c = tolower(c);  // Convert character to lowercase for uniform comparison
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to remove vowels from a string
void removeVowels(string &str) {
    string result = "";  // To store the new string without vowels
    for (char c : str) {
        if (!isVowel(c)) {
            result += c;  // Append non-vowel characters to result
        }
    }
    str = result;  // Update the original string with the new one without vowels
}

int main() {
    string str;

    // Ask the user for the input string
    cout << "Enter a string: ";
    getline(cin, str);  // Use getline to allow spaces in the string

    // Call the removeVowels function to process the string
    removeVowels(str);

    // Output the string after removing vowels
    cout << "String after removing vowels: " << str << endl;

    return 0;
}