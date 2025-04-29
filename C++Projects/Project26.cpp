//karar khalil 
/*
     This program manages football player data.
     It allows the user to load player data from a file, print player information,
     update specific statistics, and save the updated data back to a file.
     The program uses a struct to represent each player and provides functions for
     loading, printing, updating, and saving player data.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// This struct holds info about each football player
struct footballPlayer
{
    string name;
    string position;
    int touchdowns;
    int catches;
    int passingYards;
    int receivingYards;
    int rushingYards;
};

// Function prototypes
void loadData(footballPlayer players[], int &count);
// Function to print one player's info nicely
void printPlayer(const footballPlayer &player);
// Function to print all players' info
void printAllPlayers(const footballPlayer players[], int count);
// Function to find player by name, returns index (or -1 if not found)
int findPlayer(const footballPlayer players[], int count, const string &name);
// Functions to update player's info
void updateTouchdowns(footballPlayer &player);
// Function to update player's catches
void updateCatches(footballPlayer &player);
// Function to update player's passing yards
void updatePassingYards(footballPlayer &player);
// Function to update player's receiving yards
void updateReceivingYards(footballPlayer &player);
// Function to update player's rushing yards
void updateRushingYards(footballPlayer &player);
// Function to save the data back to a new file
void saveData(const footballPlayer players[], int count);

int main()
{
    footballPlayer players[10];
    int count = 0;
    int choice;
    string playerName;
    
    loadData(players, count);

    do
    {
        // Show the main menu
        cout << "\nSelect one of the following options:\n"
             << "1: Print a player's data\n"
             << "2: Print all players\n"
             << "3: Update player's touchdowns\n"
             << "4: Update player's catches\n"
             << "5: Update player's passing yards\n"
             << "6: Update player's receiving yards\n"
             << "7: Update player's rushing yards\n"
             << "99: Quit the program\n";
        cin >> choice;
        cin.ignore(); // clear leftover input

        switch (choice)
        {
            case 1:
                cout << "Enter player's name: ";
                getline(cin, playerName);
                {
                    int index = findPlayer(players, count, playerName);
                    if (index != -1)
                        printPlayer(players[index]);
                    else
                        cout << "Player not found.\n";
                }
                break;

            case 2:
                printAllPlayers(players, count);
                break;

            case 3:
                cout << "Enter player's name: ";
                getline(cin, playerName);
                {
                    int index = findPlayer(players, count, playerName);
                    if (index != -1)
                        updateTouchdowns(players[index]);
                    else
                        cout << "Player not found.\n";
                }
                break;

            case 4:
                cout << "Enter player's name: ";
                getline(cin, playerName);
                {
                    int index = findPlayer(players, count, playerName);
                    if (index != -1)
                        updateCatches(players[index]);
                    else
                        cout << "Player not found.\n";
                }
                break;

            case 5:
                cout << "Enter player's name: ";
                getline(cin, playerName);
                {
                    int index = findPlayer(players, count, playerName);
                    if (index != -1)
                        updatePassingYards(players[index]);
                    else
                        cout << "Player not found.\n";
                }
                break;

            case 6:
                cout << "Enter player's name: ";
                getline(cin, playerName);
                {
                    int index = findPlayer(players, count, playerName);
                    if (index != -1)
                        updateReceivingYards(players[index]);
                    else
                        cout << "Player not found.\n";
                }
                break;

            case 7:
                cout << "Enter player's name: ";
                getline(cin, playerName);
                {
                    int index = findPlayer(players, count, playerName);
                    if (index != -1)
                        updateRushingYards(players[index]);
                    else
                        cout << "Player not found.\n";
                }
                break;

            case 99:
                char saveChoice;
                cout << "Would you like to save data? (y/Y for yes, n/N for no): ";
                cin >> saveChoice;
                if (saveChoice == 'y' || saveChoice == 'Y')
                    saveData(players, count);
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 99);

    return 0;
}

// Reads player data from file
void loadData(footballPlayer players[], int &count)
{
    ifstream inFile("players.txt");

    if (!inFile)
    {
        cout << "Error opening file players.txt\n";
        exit(1);
    }

    while (inFile >> players[count].name >> players[count].position
           >> players[count].touchdowns >> players[count].catches
           >> players[count].passingYards >> players[count].receivingYards
           >> players[count].rushingYards)
    {
        count++;
    }

    inFile.close();
}

// Prints one player's info nicely
void printPlayer(const footballPlayer &player)
{
    cout << "Name: " << player.name
         << "  Position: " << player.position
         << "; Touchdowns: " << player.touchdowns
         << "; Catches: " << player.catches
         << "; Passing Yards: " << player.passingYards
         << "; Receiving Yards: " << player.receivingYards
         << "; Rushing Yards: " << player.rushingYards
         << endl;
}

// Prints all players' info
void printAllPlayers(const footballPlayer players[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printPlayer(players[i]);
    }
}

// Finds player by name, returns index (or -1 if not found)
int findPlayer(const footballPlayer players[], int count, const string &name)
{
    for (int i = 0; i < count; i++)
    {
        if (players[i].name == name)
            return i;
    }
    return -1;
}

// Functions to update player's info
void updateTouchdowns(footballPlayer &player)
{
    cout << "Enter new number of touchdowns: ";
    cin >> player.touchdowns;
}

void updateCatches(footballPlayer &player)
{
    cout << "Enter new number of catches: ";
    cin >> player.catches;
}

void updatePassingYards(footballPlayer &player)
{
    cout << "Enter new number of passing yards: ";
    cin >> player.passingYards;
}

void updateReceivingYards(footballPlayer &player)
{
    cout << "Enter new number of receiving yards: ";
    cin >> player.receivingYards;
}

void updateRushingYards(footballPlayer &player)
{
    cout << "Enter new number of rushing yards: ";
    cin >> player.rushingYards;
}

// Saves the data back to a new file
void saveData(const footballPlayer players[], int count)
{
    ofstream outFile("players_updated.txt");

    if (!outFile)
    {
        cout << "Error opening file for writing.\n";
        return;
    }
// Write the updated player data to the file
    for (int i = 0; i < count; i++)
    {
        outFile << players[i].name << " "
                << players[i].position << " "
                << players[i].touchdowns << " "
                << players[i].catches << " "
                << players[i].passingYards << " "
                << players[i].receivingYards << " "
                << players[i].rushingYards << endl;
    }

    outFile.close();
}