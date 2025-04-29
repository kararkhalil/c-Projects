//karar khalil 
/*
     This program determines the type of triangle based on the lengths of its sides.
     It prompts the user to enter the lengths of three sides and checks if they can form a triangle.
     If they can, it classifies the triangle as scalene, isosceles, or equilateral.
     If they cannot form a triangle, it informs the user accordingly.
*/

#include <iostream>
using namespace std;

// Function to determine the type of triangle
enum triangleType { scalene, isosceles, equilateral, noTriangle };
triangleType triangleShape(double side1, double side2, double side3) { 
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        return noTriangle;
    }
    // Check if the sides can form a triangle using the triangle inequality theorem
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        return noTriangle;
    }
    // Check for the type of triangle
    if (side1 == side2 && side2 == side3) {
        return equilateral;
    }
    // Check for isosceles triangle
    if (side1 == side2 || side1 == side3 || side2 == side3) {
        return isosceles;
    }
    return scalene;
}
// Main function
// This function prompts the user for the lengths of the sides and displays the triangle type
// It uses the triangleShape function to determine the type of triangle
int main() {
    double side1, side2, side3;
     // Ask the user for the three side lengths, one by one
     cout << "Enter the three side lengths of your triangle:\n";
     cout << "Side 1: ";
     cin >> side1;
     cout << "Side 2: ";
     cin >> side2;
     cout << "Side 3: ";
     cin >> side3;
    triangleType shape = triangleShape(side1, side2, side3);
// Display the type of triangle
    switch (shape) {
        case scalene:
            cout << "The triangle is scalene." << endl;
            break;
        case isosceles:
            cout << "The triangle is isosceles." << endl;
            break;
        case equilateral:
            cout << "The triangle is equilateral." << endl;
            break;
        case noTriangle:
            cout << "The lengths do not form a triangle." << endl;
            break;
    }
    return 0;
}