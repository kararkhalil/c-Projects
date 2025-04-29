//karar khalil
/*
     This program initializes an array of 50 double values.
     The first 25 elements are set to the square of their index,
     and the last 25 elements are set to three times their index.
     The program then prints the array in a formatted manner.
*/


#include <iostream>
#include <iomanip>

using namespace std;
// Function prototypes
void initialise_array(double alpha[]);
void print_array(const double alpha[]);
// Main function
int main()
{
    double alpha[50];
    initialise_array(alpha);
    print_array(alpha);
    return 0;
}
// Function definitions
// This function initializes the array with specific values
void initialise_array(double alpha[]) {
    for (int i = 0; i < 50; i++) {
        if (i < 25)
            alpha[i] = i * i;
        else
            alpha[i] = i * 3;
    }
}
// This function prints the array in a formatted manner
void print_array(const double alpha[]) {
    int counter = 0;
    for (int j = 1; j <= 5; j++) {
        for (int i = 1; i <= 10; i++) {
            if (counter < 50)
                cout << setw(5) << alpha[counter];
            else
                break;
            counter++;
    }
        cout << endl;
    }
}