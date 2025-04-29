//karar khalil 
/*
 this program is designed to calculate the number of boxes and containers needed to ship a given number of cookies.
 the program will prompt the user to enter the number of cookies and then calculate the number of boxes and containers needed to ship them.
 the program will also calculate the number of remaining boxes and cookies after shipping.  

*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*- Welcome to the cookie shipping program! -*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
    // to define the number of cookies in the box and the container
    int const box = 25, container = 75; //set as a constant value
    // to define the number of cookies
    int cookies;
    // to get the number of cookies
    cout << "Please enter the number of cookies: ";
    // to store the number of cookies
    cin >> cookies;
    // to get the number of boxes needed for the entred cookies
    int box_needed = cookies / box;
    // to get the number of containers needed for the entred cookies
    int container_needed = box_needed / container;
    //printing the boxes needed
    cout << "The amount of boxes needed for the entred cookies is " << box_needed << " boxes." << endl;
    // to get the number of containers needed
    cout << "You will need " << container_needed <<" containers to ship the boxes." << endl;
    // to get the remaining cookies we must use a modulo operator
    int remaining_cookies = cookies % box;
    // to get the remaining boxes we must use a modulo operator
    int remaining_boxes = box_needed % container;
    // printing remaining boxes from the containers
    cout << "You will have " <<  remaining_boxes << " boxes left." << endl;
    // printing remaining cookies from the boxes 
    cout << "You will have " << remaining_cookies << " remaining cookies." << endl;
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*- Thank you for using the cookie shipping program! -*-*-*-*-*-*-*-*-*-*-*-*-*-";
    return 0;
} 