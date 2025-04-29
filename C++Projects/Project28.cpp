//karar khalil 
/*
    This program calculates the total cost of renting rooms in a hotel.
    It takes into account the cost per room, number of rooms booked, number of days booked,
    sales tax, and applies discounts based on the number of rooms and days booked.
    The program then outputs the total cost, sales tax, and total billing amount.


*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "-*-*-*-*-*-*-*-*-*-*-* Welcome to the hotel booking system calculator *-*-*-*-*-*-*-*-*-*-*-" << endl;
    //defining variables
    double cost_per_room;
    const double discount_10 = 0.10;
    const double discount_20 = 0.20;
    const double discount_30 = 0.30;
    const double discount_3_days = 0.05;
    double cost_of_room, sales_tax, total_cost, total_billing;
    int num_of_rooms, num_of_days;
    //prompt the user to input data and store it in variables
    cout << "Enter the cost of renting one room: ";
    cin >> cost_per_room;
    cout << "Enter the number of rooms booked: ";
    cin >> num_of_rooms;
    cout << "enter numbers of days the rooms are booked: ";
    cin >> num_of_days;
    cout << "Enter the sales tax as a percent: ";
    cin >> sales_tax;
    cout << "------ " << endl; //seperator for nicer looking output
    // calculate the cost of room
    cost_of_room = cost_per_room * num_of_rooms * num_of_days;
    //calculate discount
    double applied_discount = 0.0;
    //calculate discount for 30 rooms
    if (num_of_rooms >= 30)
    {
        applied_discount = discount_30;
        cost_of_room = cost_of_room - (cost_of_room * discount_30);
    }
    else if (num_of_rooms >= 20)
    //calculate discount for 20 rooms
    {
        applied_discount = discount_20;
        cost_of_room = cost_of_room - (cost_of_room * discount_20);
    }
    else if (num_of_rooms >= 10)
    //calculate discount for 10 rooms
    {
        applied_discount = discount_10;
        cost_of_room = cost_of_room - (cost_of_room * discount_10);
    }
    //calculate discount for 3 days
    if (num_of_days >= 3)
    {
        cost_of_room = cost_of_room - (cost_of_room * discount_3_days);
    }
    else
    {
        cost_of_room = cost_per_room;
    }
    //calculate sales tax
    sales_tax = cost_of_room * (sales_tax / 100);
    //calculate total cost
    total_cost = cost_of_room + sales_tax;
    //calculate total billing amount
    total_billing = total_cost;
    //output the results
    cout << fixed << showpoint << setprecision(2);
    cout << "The cost of renting one room: $" << cost_per_room << endl;
    cout << "*-*-*-*-*-*- " << endl;//seperator for nicer looking output
    cout << "The discount on each room as a percent: % " << applied_discount * 100 << endl;
    cout << "*-*-*-*-*-*- " << endl;
    cout << "The number of rooms booked: " << num_of_rooms << endl;
    cout << "*-*-*-*-*-*- " << endl;
    cout << "The number of days the rooms are booked: " << num_of_days << endl;
    cout << "*-*-*-*-*-*- " << endl;
    cout << "The total cost of the rooms: $" << cost_of_room << endl;
    cout << "*-*-*-*-*-*- " << endl;
    cout << "The sales tax: $" << sales_tax << endl;
    cout << "*-*-*-*-*-*- " << endl;
    cout << "The total billing amount: $" << total_billing << endl;
    cout << "------ " << endl;
    cout << "-*-*-*-*-*-*-*-*-*-*-* Thank you for using hotel booking system calculator *-*-*-*-*-*-*-*-*-*-*-" << endl;
    //end of program with thank you message
    return 0;
}