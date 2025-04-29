//karar khalil
/*
This program calculates the area of a rectangle, the area of a circle, or the volume of a cylinder.
the program will ask the user to enter the length and width of the rectangle, the radius of the circle, or the radius and height of the cylinder.
the program will then calculate the area or volume and display the result.
the program will continue to run until the user enters -1 to terminate it.

*/
#include <iostream>
#include <iomanip>
using namespace std;

// Define constant PI
const double PI = 3.14159;

// Function prototypes
double rectangle(double l, double w); // Function to calculate the area of a rectangle
double circle(double r); // Function to calculate the area of a circle
double cylinder(double bR, double h); // Function to calculate the volume of a cylinder

int main()
{
    int choice;
    double length, width, radius, height;
    
    // Fix: Proper formatting for output
    cout << fixed << showpoint << setprecision(2);
    cout << "This program can calculate the area of a rectangle, "
         << "the area of a circle, or the volume of a cylinder." << endl;
    
    do {
        // Display menu options correctly
        cout << "To run the program enter: " << endl;
        cout << "1: To find the area of a rectangle." << endl;
        cout << "2: To find the area of a circle." << endl;
        cout << "3: To find the volume of a cylinder." << endl;
        cout << "-1: To terminate the program." << endl;
        cin >> choice;
        
        switch (choice) {
            case 1:
                // Fix: Corrected misplaced logic for rectangle input and output
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area = " << rectangle(length, width) << endl;
                break;
            case 2:
                // Fix: Corrected incorrect function call for circle calculation
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << "Area = " << circle(radius) << endl;
                break;
            case 3:
                // Fix: Corrected incorrect variable names and function calls
                cout << "Enter the radius of the base and the height of the cylinder: ";
                cin >> radius >> height;
                cout << "Volume = " << cylinder(radius, height) << endl;
                break;
            case -1:
                // Fix: Corrected termination case message
                cout << "Terminating the program." << endl;
                break;
            default:
                // Fix: Added handling for invalid inputs
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    } while (choice != -1); // Fix: Corrected while loop condition to keep running until -1 is entered
    
    return 0;
}

// Function to calculate the area of a rectangle
double rectangle(double l, double w)
{
    return l * w; // Fix: Corrected function logic (previously had incorrect variable use)
}

// Function to calculate the area of a circle
double circle(double r)
{
    return PI * r * r; // Fix: Corrected incorrect formula (previously had incorrect variable use)
}

// Function to calculate the volume of a cylinder
double cylinder(double bR, double h)
{
    return PI * bR * bR * h; // Fix: Corrected incorrect variable usage (previously used wrong variable names)
}
