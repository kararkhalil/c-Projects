//karar khalil 
/*
this program reads a list of scores from a file named "scores.txt" and counts the number of students in each score range.
the score ranges are:
0–24, 25–49, 50–74, 75–99, 100–124, 125–149, 150–174, 175–200
the program uses an array to store the counts for each range and prints the results to the console.

*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
   // range for scores
    // 0–24, 25–49, 50–74, 75–99, 100–124, 125–149, 150–174, 175–200
    int ranges[8] = {0};

    ifstream inFile("scores.txt"); // Open the file for reading
    // Check if the file opened successfully
    if (!inFile) {
        cerr << "Error opening file.\n";
        return 1;
    }
// Read scores from the file
    int score;
    char comma;

    while (inFile >> score) {// Read score
        
        // Skip comma if present
        inFile >> comma;
// Check if the score is within the valid range
        if (score >= 0 && score <= 200) {
            if (score <= 24) ranges[0]++;
            else if (score <= 49) ranges[1]++;
            else if (score <= 74) ranges[2]++;
            else if (score <= 99) ranges[3]++;
            else if (score <= 124) ranges[4]++;
            else if (score <= 149) ranges[5]++;
            else if (score <= 174) ranges[6]++;
            else ranges[7]++;
        }
    }

    // Print the results
    cout << "Score Range\tNumber of Students\n";
    cout << "0–24\t\t"     << ranges[0] << endl;
    cout << "25–49\t\t"    << ranges[1] << endl;
    cout << "50–74\t\t"    << ranges[2] << endl;
    cout << "75–99\t\t"    << ranges[3] << endl;
    cout << "100–124\t\t"  << ranges[4] << endl;
    cout << "125–149\t\t"  << ranges[5] << endl;
    cout << "150–174\t\t"  << ranges[6] << endl;
    cout << "175–200\t\t"  << ranges[7] << endl;

    inFile.close();
    return 0;
}