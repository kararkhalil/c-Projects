
//karar khalil
/* 
     This program calculates the surface area and volume of a sphere given its radius.
     It uses the mathematical constant PI (3.14159) and the formulas:
     Surface Area = 4 * PI * r^2
     Volume = (4/3) * PI * r^3
    
     The program prompts the user to enter the radius of the sphere, calculates the surface area and volume,
     and then displays the results with a precision of 2 decimal places.
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // Define the constant PI to represent the mathematical constant π
    const double PI = 3.14159;
    
    // Output the square root of PI
    cout << "The value of sqrt(PI): " << sqrt(PI) << endl;
    
    // Prompt the user to enter the radius of a sphere
    double r;
    cout << "Enter the radius of the sphere: ";
    cin >> r;
    
    // Calculate the surface area using the formula: 4 * PI * r^2
    double surfaceArea = 4.0 * PI * pow(r, 2);
    
    // Calculate the volume using the formula: (4/3) * PI * r^3
    double volume = (4.0 / 3.0) * PI * pow(r, 3);
    
    // Set precision to 2 decimal places for output formatting
    cout << fixed << setprecision(2);
    
    // Display the surface area in the required format
    cout << "Surface area of the sphere: 4 * PI * " << r << " ^ 2 = " << surfaceArea << endl;
    
    // Display the volume in the required format
    cout << "Volume of the sphere: 4 / 3 * PI * " << r << " ^ 3 = " << volume << endl;
    
    return 0;
}