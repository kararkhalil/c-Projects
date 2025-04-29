//karar khalil
/*
     This program counts the number of vowels in a string entered by the user.
     It uses a switch statement to check each character in the string and increments
     the corresponding vowel count.
*/


#include <iostream>
#include <string>

using namespace std;

void countVowels(string userString);

int main()
{
    string userString;
    cout << "Please enter a string: ";
    getline(cin,userString,'\n');
    countVowels(userString);
    
    return 0;
}

void countVowels(string userString){
    char currentChar;
    int a = 0, e = 0, i = 0, o = 0, u = 0; //variables to hold the number of instances of each vowel
    
    for (int x = 0; x < userString.length(); x++) {
        currentChar = userString.at(x);
        switch (currentChar) {
            case 'a':
                a += 1;
                break;
            case 'e':
                e += 1;
                break;
            case 'i':
                i += 1;
                break;
            case 'o':
                o += 1;
                break;
            case 'u':
                u += 1;
                break;
            default:
                break;
        }
    }
    cout << "Out of the " << userString.length() << " characters you entered." << endl;
    cout << a << " were the letter a" << endl;
    cout << e << " were the letter e" << endl;
    cout << i << " were the letter i" << endl;
    cout << o << " were the letter o" << endl;
    cout << u << " were the letter u" << endl;
}