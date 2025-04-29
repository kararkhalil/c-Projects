//karar khalil
/*
     This program converts a telephone number from letters to digits.
     The user is prompted to enter a telephone number using letters, and the program converts it to the corresponding digits.
     The program continues to prompt the user for more numbers until they choose to terminate it.
     The program uses a switch statement to convert letters to digits based on the standard telephone keypad layout.
*/

#include <iostream>
using namespace std;
int main()
{
    char letter, input;// Declare variables
    int counter = 0;
    cout << "Enter Y/y to convert a telephone number form letters to digits. " << endl;// Prompt the user to enter a telephone number
cout << "Enter any other letter to terminate the program. " << endl;// Prompt the user to enter a telephone number
cin >> input;
while (input == 'Y' || input == 'y')// Loop to convert multiple numbers
{
    counter = 0;  // Reset counter for new number
    cout << "Enter telephone number using letters: ";
    cin.ignore();  // Ignore the newline character
    cout << endl;
    cout << "The corresponding phone number is: ";

    while (cin.get(letter) && counter < 7) {// Loop to read the letters and convert them to digits
        
        if (letter != ' ' && letter >= 'A' && letter <= 'z') {// Check if the character is a letter
            counter++; // Increment the counter
            if (letter > 'Z') {// Check if the letter is lowercase
                letter = (int)letter-32; // Convert lowercase to uppercase if required 
            }
            
            if (counter == 4) {// Check if the counter is at the fourth position
                cout << "-"; // Print the hyphen when required
            }
            
            switch (letter) {// Switch statement to convert the letter to its corresponding digit
                case 'A':
                case 'B':
                case 'C':
                    cout << "2";
                    break;// Print the digit
                case 'D':
                case 'E':
                case 'F':
                    cout << "3";
                    break;
                case 'G':
                case 'H':
                case 'I':
                    cout << "4";
                    break;
                case 'J':
                case 'K':
                case 'L':
                    cout << "5";
                    break;
                case 'M':
                case 'N':
                case 'O':
                    cout << "6";
                    break;
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                    cout << "7";
                    break;
                case 'T':
                case 'U':
                case 'V':
                    cout << "8";
                    break;
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                    cout << "9";
                    break;
                default:
                    break; 
            }
        }
        
        }
        cout << endl << endl;
        cout << "Enter Y/y to convert another telephone number." << endl;// Prompt the user to enter another number or terminate the program
        cout << "Enter any other letter to terminate the program." << endl;
        cin >> input;
    }
    return 0;}