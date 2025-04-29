//karar khalil
/*
    This program defines a structure to store information about a computer.
    It prompts the user to enter details such as manufacturer, model type, processor type,
    RAM size, hard drive size, year built, and price. The program then displays this information.


*/
#include <iostream>
using namespace std;

// Define a structure to store computer information
struct computerType 
{
    string manufacturer;
    string modelType;
    string processorType;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
};

int main() 
{
    computerType computer; // Create a computer record

    // Get manufacturer name
    cout << "Enter the name of the manufacturer: ";
    getline(cin, computer.manufacturer);

    // Get model type
    cout << "Enter the model of the computer: ";
    getline(cin, computer.modelType);

    // Get processor type
    cout << "Enter processor type: ";
    getline(cin, computer.processorType);

    // Get RAM size
    cout << "Enter the size of RAM (in GB): ";
    cin >> computer.ram;

    // Get hard drive size
    cout << "Enter the size of hard drive (in GB): ";
    cin >> computer.hardDriveSize;

    // Get year built
    cout << "Enter the year the computer was built: ";
    cin >> computer.yearBuilt;

    // Get price
    cout << "Enter the price: ";
    cin >> computer.price;

    cout << endl;

    // Display computer information
    cout << "Manufacturer: " << computer.manufacturer << endl << endl;
    cout << "Model: " << computer.modelType << endl << endl;
    cout << "Processor: " << computer.processorType << endl << endl;
    cout << "Ram: " << computer.ram << endl << endl;
    cout << "Hard Drive Size: " << computer.hardDriveSize << endl << endl;
    cout << "Year Built: " << computer.yearBuilt << endl << endl;
    cout << "Price: $" << computer.price << endl << endl;

    return 0;
}