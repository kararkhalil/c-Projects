//karar khalil

/* This program calculates the cost of fertilizer per pound and the cost of fertilizing per square foot.
   It prompts the user to enter the amount of fertilizer in a bag, the cost of the bag, and the area that can be fertilized by one bag.
   The program then calculates and displays the cost per pound and cost per square foot.
   The output is formatted to two decimal places for better readability.
*/

#include <iostream>
#include <iomanip>
using namespace std;
// Function prototypes
int main() {
    double cost;
    double area;
    double bagSize;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the amount of fertilizer, in pounds, in one bag: ";
    cin >> bagSize;
    cout << endl;

    cout << "Enter the cost of the " << bagSize << " pound fertilizer bag: ";
    cin >> cost;
    cout << endl;

    cout << "Enter the area, in square feet, that can be fertilized by one bag: ";
    cin >> area;
    cout << endl;
// Errors with the calculation, should be cost/bagside and cost/area.
    cout << "The cost of the fertilizer per pound is: $" << cost / bagSize << endl;
    cout << "The cost of fertilizing per square foot is: $" << cost / area << endl;

    return 0;
}
