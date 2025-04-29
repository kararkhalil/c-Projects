//karar khalil
/*
this program will read a file that contains the first name, last name, current salary and pay increase percentage of three employees.
it will then calculate the new salary for each employee and output the results to a file called "Ch3_Ex5Output.dat" and display the results on the screen.
the program will also display the original salary and pay increase percentage for each employee.
the program will use the ifstream and ofstream classes to read from and write to files.

*/
#include <iostream>
#include <iomanip>
#include <fstream> //included fstream as its needed for reading files and outputting
using namespace std;
int main() {
    
    string filename; //assigning astring to take the input from the user
    cout << "please enter the file name; "<< endl;
    cin >> filename; //tske input and assign it to filename
    ifstream file; // assigning input to "file"
    ofstream out; //assigning output to "out"
    out.open("Ch3_Ex5Output.dat"); //telling machine output will be the following 'ch3...'
    file.open(filename.c_str()); // telling the machine that the file will be the input that the user enters
    string lname, fname, lname2, lname3, fname2, fname3; //assigning strings
    double currentpay, updatedsalone, updatedsaltwo, updatedsalthree, payincrease; //assigning doubles
    file >> fname >> lname >> currentpay >> payincrease; // telling the machine to read the text from the input file
    updatedsalone = currentpay + (currentpay * payincrease /100); // calculating the pay increase
    cout << lname << ' ' << fname << ' ' << currentpay << ' ' << payincrease <<endl; //outputting the orignal text from the text file
    file >> fname2 >> lname2 >> currentpay >> payincrease;
    updatedsaltwo = currentpay + (currentpay * payincrease /100);
    cout << lname2 << ' ' << fname2 << ' ' << currentpay << ' ' << payincrease <<endl;
    file >> fname3 >> lname3 >> currentpay >> payincrease;
    updatedsalthree = currentpay + (currentpay * payincrease /100);
    cout << lname3 << ' ' << fname3 << ' ' <<currentpay << ' ' << payincrease <<endl;
    cout <<"---------------------------------------------" << endl;//dashes to show the difference between the orignal vs calculated
    out << lname <<' '<< fname << ' ' <<updatedsalone<<endl; //Outputting the results to Ch3_Ex5Output.dat and going to next line
    cout << setprecision(2) << showpoint << fixed << lname << ' ' << fname << ' ' << updatedsaltwo<< endl; //printing the results.
    out << lname2 << ' ' << fname2 << ' ' <<updatedsaltwo<< endl;
    cout << setprecision(2) << showpoint << fixed << lname2 << ' ' << fname2 << ' ' << updatedsaltwo<< endl;
    out << lname3 << ' ' << fname3 << ' ' <<updatedsalthree<< endl;
    cout << setprecision(2) << showpoint << fixed << lname3 << ' ' << fname3 << ' ' << updatedsaltwo<< endl;
    //closing files.
    file.close(); 
    out.close();
    return 0;
}
