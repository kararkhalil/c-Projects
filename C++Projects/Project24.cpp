//karar khalil
/*
This program generates random 3x3 magic squares and counts how many magic squares are found
in a given number of trials. A magic square is a square where the sum of each row, column, and both diagonals are equal.
The program uses a random number generator to fill the square with numbers from 1 to 9, checks if the square is magic,
and counts the number of magic squares found in a specified number of trials.

*/
#include <iostream>     
#include <algorithm>    
#include <random>       
#include <ctime>        
using namespace std;

const int SIZE = 3;                // 3x3 square
const int TOTAL_TRIALS = 10000;    // how many times to try making a magic square

// This function fills the 3x3 array with numbers 1 to 9 randomly
void fillRandom(int square[SIZE][SIZE]) {
    int nums[9] = {1,2,3,4,5,6,7,8,9};  // array of numbers to use

    // Shuffle the numbers randomly
    random_device rd;       // create a random device
    mt19937 g(rd());        // random generator
    shuffle(nums, nums + 9, g);  // shuffle the numbers

    // Put the shuffled numbers into the 3x3 array
    int index = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            square[i][j] = nums[index];
            index++;
        }
    }
}

// This function checks if the array is a magic square
bool isMagicSquare(int square[SIZE][SIZE]) {
    int totalSum = 0;

    // Add up all the numbers
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            totalSum += square[i][j];
        }
    }

    // Magic number is the total sum divided by 3
    int magicNumber = totalSum / SIZE;

    // Check rows
    for (int i = 0; i < SIZE; i++) {
        int rowSum = 0;
        for (int j = 0; j < SIZE; j++) {
            rowSum += square[i][j];
        }
        if (rowSum != magicNumber) {
            return false; // not a magic square
        }
    }

    // Check columns
    for (int j = 0; j < SIZE; j++) {
        int colSum = 0;
        for (int i = 0; i < SIZE; i++) {
            colSum += square[i][j];
        }
        if (colSum != magicNumber) {
            return false; // not a magic square
        }
    }

    // Check diagonals
    int diag1 = square[0][0] + square[1][1] + square[2][2];
    int diag2 = square[0][2] + square[1][1] + square[2][0];

    if (diag1 != magicNumber || diag2 != magicNumber) {
        return false;
    }

    // If all checks passed, it's a magic square
    return true;
}

// Optional function to print the square (for debugging or showing magic squares)
void printSquare(int square[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << square[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Main function
int main() {
    int square[SIZE][SIZE];      // the 3x3 square
    int magicCount = 0;          // counter for how many magic squares found

    // Try making magic squares multiple times
    for (int trial = 0; trial < TOTAL_TRIALS; trial++) {
        fillRandom(square);             // fill the square randomly
        if (isMagicSquare(square)) {    // check if it's magic
            magicCount++;               // count it if it is
            // Optional: print it if you want to see them
            // printSquare(square);
        }
    }

    // Final result
    cout << "Out of " << TOTAL_TRIALS << " trials, "
         << magicCount << " magic squares were found." << endl;

    return 0;
}