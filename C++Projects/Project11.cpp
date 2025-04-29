//karar khalil 
/*
this program calculates the value of pi using the Gregory-Leibniz series. 
the series is given by: pi = 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - ... + (-1)^n / (2n+1))
the program takes an integer n as input, which determines the number of terms to be used in the series.
the program uses a for loop to iterate through the series, adding and subtracting terms based on the index i.
the program uses the fixed and setprecision manipulators to format the output of pi to 10 decimal places.

*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pi = 0.0;  // Initialize pi properly (was inside loop before, causing reset)
    long i, n;

    cout << "Enter the value of n: ";  // Moved before cin so the user sees the prompt first as it had ben the other way around
    cin >> n;  

    for (i = 0; i < n; i++) {  // Loop should iterate n times to compute the series
        if (i % 2 == 0)
            pi = pi + (1.0 / (2 * i + 1));  // Used 1.0 instead of 1 to ensure floating-point division
        else
            pi = pi - (1.0 / (2 * i + 1));
    }

    pi = 4 * pi;  // Multiply by 4 after summing the series (was incorrectly placed inside the loop)

    cout << fixed << setprecision(10);  // Added precision to improve accuracy
    cout << endl << "pi = " << pi << endl;

    return 0;
}