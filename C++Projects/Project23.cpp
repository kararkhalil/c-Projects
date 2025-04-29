//karar khalil 
/*
     This program simulates an election for 5 candidates.
     It takes the names of the candidates and the number of votes they received as input.
     It then calculates and displays the percentage of total votes each candidate received,
     and determines the winner of the election.
     The program uses functions to calculate the percentage of votes, print the results,
     and find the winner of the election.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
// Constants
// The number of candidates in the election
const int NUMBER_OF_CANDIDATES = 5;
// Function prototypes
int findWinner(int votes[]);
void printResults(string candidates[], int votes[]);
double calculatePercentage(int votes[], int vote);
// Main function
int main()
{
    string candidates[NUMBER_OF_CANDIDATES];
    int votes[NUMBER_OF_CANDIDATES];
    // Input the candidates and their votes
    cout << "Please input the 5 candidates followed by the votes they received (e.g. Smith 5000):" << endl;
    for (int i = 0; i < NUMBER_OF_CANDIDATES; i++) {
        cin >> candidates[i] >> votes[i];
    }
// Display the candidates and their votes
    cout << endl;
    printResults(candidates, votes);

    cout << "\nThe Winner of the Election is: " << candidates[findWinner(votes)] << endl;

    return 0;
}
// Function definitions
// This function calculates the percentage of votes for a candidate
double calculatePercentage(int votes[], int vote) {
    int sumOfVotes = 0;
    for (int i = 0; i < NUMBER_OF_CANDIDATES; i++) {
        sumOfVotes += votes[i];
    }
    double percentage = static_cast<double>(vote) / sumOfVotes;
    return percentage * 100;
}
// This function prints the results of the election
void printResults(string candidates[], int votes[]) {
    int totalVotes = 0;
    for (int i = 0; i < NUMBER_OF_CANDIDATES; i++) {
        totalVotes += votes[i];
    }

    cout << left << setw(15) << "Candidate" 
         << right << setw(15) << "Votes Received" 
         << setw(20) << "% of Total Votes" << endl;

    cout << "------------------------------------------------------------" << endl;
// Print the results for each candidate
    cout << fixed << setprecision(2);
    for (int i = 0; i < NUMBER_OF_CANDIDATES; i++) {
        double percentage = calculatePercentage(votes, votes[i]);
        cout << left << setw(15) << candidates[i] 
             << right << setw(15) << votes[i] 
             << setw(19) << percentage << "%" << endl;
    }

    cout << "\nTotal Votes: " << totalVotes << endl;
}
// This function finds the candidate with the most votes
int findWinner(int votes[]) {
    int winner = 0;
    for (int i = 1; i < NUMBER_OF_CANDIDATES; i++) {
        if (votes[i] > votes[winner]) {
            winner = i;
        }
    }
    return winner;
}