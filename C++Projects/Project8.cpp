//karar khalil
/*
This program sorts three numbers in ascending order by using the if statement.
*/

#include<iostream>
using namespace std;
int main()
{
	// declare variables
	double num1, num2, mun3, t;
	cout << "Enter three numbers: ";
	// read the three numbers
	cin >> num1 >> num2 >> mun3;
	//sort the three numbers
	if( num1>num2 ){ 	//swap the numbers if the first number is greater than the second number
			t = num1;	//swap the numbers if the second number is greater than the third number
			num1 = num2;//swap the numbers if the first number is greater than the second number
			num2 = t;}	//swap the numbers if the second number is greater than the third number
	
	if( num2>mun3 ){
		t = num2;
		num2 = mun3;
		mun3 = t;}
	
	if( num1>num2 ){//swap the numbers if the first number is greater than the second number
		t = num1;
		num1 = num2;
		num2 = t;
	}
	// print the output
	cout<<"numbers in ascending order: ";
	cout << num1 << " " << num2 << " " << mun3 << endl;
	return 0;
}