// karar khalil HW8-Q2
/*
This program simulates a restaurant menu system where users can select items from a predefined menu.
The program displays the menu, allows users to make selections, and calculates the total bill including tax.
The program uses a struct to hold menu item data, functions to load and display the menu, and a function to print the final bill.

*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Struct to hold menu item data
struct menuItemType
{
    string menuItem;
    double menuPrice;
};

// Function prototypes
void getData(menuItemType menuList[]);
void showMenu(menuItemType menuList[]);
void printCheck(menuItemType menuList[], int selections[], int numSelections);

int main()
{
    menuItemType menuList[8]; // Array to store menu items
    int selections[8];        // Array to store user selections
    int numSelections = 0;    // Counter for the number of selections
    char choice;              // User's choice to continue or not

    // Load menu data
    getData(menuList);

    // Display the menu
    showMenu(menuList);

    cout << "You can make up to 8 single order selections." << endl;

    // Prompt user to start making selections
    cout << "Do you want to make a selection Y/y (Yes), N/n (No): ";
    cin >> choice;

    // Loop to handle user selections
    while ((choice == 'Y' || choice == 'y') && numSelections < 8)
    {
        int itemNumber;
        cout << "Enter item number: ";
        cin >> itemNumber;

        // Validate item number
        if (itemNumber >= 1 && itemNumber <= 8)
        {
            selections[numSelections] = itemNumber - 1; // Store the index
            numSelections++;
        }
        else
        {
            cout << "Invalid item number. Please enter a number between 1 and 8." << endl;
        }

        // Check if the user wants to select another item
        if (numSelections < 8)
        {
            cout << "Select another item Y/y (Yes), N/n (No): ";
            cin >> choice;

            // Validate input for choice
            while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
            {
                cout << "Invalid input. Please enter Y/y (Yes) or N/n (No): ";
                cin >> choice;
            }
        }
    }

    // Print the final bill
    printCheck(menuList, selections, numSelections);

    return 0;
}

// Function to load menu data
void getData(menuItemType menuList[])
{
    menuList[0] = {"Plain Egg", 1.45};
    menuList[1] = {"Bacon and Egg", 2.45};
    menuList[2] = {"Muffin", 0.99};
    menuList[3] = {"French Toast", 1.99};
    menuList[4] = {"Fruit Basket", 2.49};
    menuList[5] = {"Cereal", 0.69};
    menuList[6] = {"Coffee", 0.50};
    menuList[7] = {"Tea", 0.75};
}

// Function to display menu
void showMenu(menuItemType menuList[])
{
    cout << "Welcome to Zee's Restaurant" << endl;
    cout << "---- Today's Menu ----" << endl;
    cout << fixed << setprecision(2);

    for (int i = 0; i < 8; i++)
    {
        cout << (i + 1) << ": " << left << setw(20) << menuList[i].menuItem
             << " $" << menuList[i].menuPrice << endl;
    }
    cout << endl;
}

// Function to print the final bill
void printCheck(menuItemType menuList[], int selections[], int numSelections)
{
    cout << "\nWelcome to Zee's Restaurant" << endl;
    cout << fixed << setprecision(2);

    double total = 0.0;

    // Print each selected item and calculate the total
    for (int i = 0; i < numSelections; i++)
    {
        int idx = selections[i];
        cout << left << setw(20) << menuList[idx].menuItem
             << " $" << menuList[idx].menuPrice << endl;
        total += menuList[idx].menuPrice;
    }

    // Calculate tax and total amount due
    double tax = total * 0.05;
    double amountDue = total + tax;

    // Print tax and total amount due
    cout << left << setw(20) << "Tax"
         << " $" << tax << endl;
    cout << left << setw(20) << "Amount Due"
         << " $" << amountDue << endl;
}