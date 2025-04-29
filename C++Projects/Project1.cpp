// karar khalil
// this program is to find the average of three numbers.

#include <iostream> //calling the headers
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int num1 = 10, num2 = 20, num3 = 30; //assigning the names with the vaules.
	
	int average = (num1 + num2 + num3)/3;  // assigning the name "average". find the average of the number, add the 3 the numbers and deviding by 3.
	
	
	cout << "The average of " << num1 << setw(3) << num2 << setw(3) << num3 << setw(3)<< "is" << setw(3) << average << endl;// printing out.
	//can also be written like this.
	//cout <<  setw(3) << num1;  
	//cout <<  setw(3) << num2;  
	//cout <<  setw(3) << num3;  
	//cout <<  setw(3) << "is" <<  setw(3) << average;	
	
	
return 0;
}