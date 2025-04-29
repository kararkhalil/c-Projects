/* karar khalil 
   
    This program calculates the volume of a cylinder and then calculates the side length of a cube with the same volume.
    The program prompts the user to enter the radius and height of the cylinder, and then it computes the volume using the formula:
    Volume = π * r^2 * h
    where r is the radius and h is the height.
    After calculating the volume, it computes the side length of a cube with that volume using the formula:
    Side length = (Volume)^(1/3)
    Finally, it prints out the side length of the cube.

 */

#include <iostream>
#include <iomanip>
#include <cmath>
//includes cmath as i need the pow function for powers
using namespace std;
int main(){
    const double pi = 3.141593;
    // set pie as a constant
    double base, hight, volume, cubeside;
    cout << setprecision(2) << fixed << showpoint;
    //ensuring the output is set to  two decimals
    cout << "Please enter the radius of the base of a cylindrical container ";
    cin >> base;
    cout << "please enter the height of the cylindrical container ";
    cin >> hight;
    
// calculating the input to volume
    volume = pi * pow(base, 2.0) * hight;
// calucate side length of the cube with the same volume
    cubeside = pow(volume, 1.0/3.0);
    
// prinintg the side of cube
    
    cout << "The side of the cube = " << cubeside << endl;
    return 0;
}
