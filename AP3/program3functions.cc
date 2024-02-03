// Copyright 2023 Vu Nguyen
// Includes every functions needed for program3.cc
#include<iostream>
#include<iomanip>
#include<cmath>
using std::endl;
using std::cout;
using std::setw;
using std::left;
using std::right;
#include "program3functions.h"
// A method to print characters in the format with commas and 'and
void PrintChar(const char character[], int num) {
    for ( int i = 0 ; i < num ; i++ ) {
        if ( (i+1) == num && num > 1 ) {
            cout << "and " << character[i];
        } else if ( num == 1 ) {
            cout << character[i];
        } else if ( num == 2 ) {
            cout << character[i] << " and " << character[i+1];
            break;
        } else {
            cout << character[i] << ", ";
        }  // Ending if-else series
    }  // Ending for loop
    cout << endl;
}  // Ending PrintChar method
// A method to display the frequency statements
void PrintStatement(int countMax, int max, char cMax[],
                            int countMin, int min, char cMin[]) {
    cout << "Highest frequency character" << (countMax == 1 ? "" : "s")
            << " (appeared " << max << " time" << (max == 1 ? "" : "s")
            << " in the file): ";
    PrintChar(cMax, countMax);
    cout << "Lowest frequency character" << (countMin == 1 ? "" : "s")
            << " (appeared " << min << " time" << (min == 1 ? "" : "s")
            << " in the file): ";
    PrintChar(cMin, countMin);
    cout << endl;
}  // Ending PrintStatement method

// Selection sort on both characters and their indexes
void Sorting(int counts[], int charIndex[]) {
    int temp = 0;
    int tempIndex = 0;
    for ( int i = 0 ; i < 26 ; i++ ) {
        for ( int j = 0 ; j < 26 ; j++ ) {
            if ( counts[i] > counts[j] ||
                    (counts[i] == counts[j] && charIndex[i] < charIndex[j]) ) {
                temp = counts[i];
                counts[i] = counts[j];
                counts[j] = temp;
                tempIndex = charIndex[i];
                charIndex[i] = charIndex[j];
                charIndex[j] = tempIndex;
            }  // Ending if
        }  // Ending inner for loop
    }  // Ending outter for loop
}  // Ending Sorting method

// A method to display the frequencies of each character
void FrequencyDisplay(int counts[], int charIndex[]) {
    for ( int i = 0 ; i < 26 ; ++i ) {
        char letter = 'a' + charIndex[i];
        cout << letter << ": " << counts[i] << endl;
    }  // Ending for loop
    cout << endl;
}  // Ending FrequencyDisplay method

// A function to check how many digits are in an input number
// Return an integer
int NumDigits(int num) {
    int digits = 0;
    do {
        num /= 10;
        digits++;
    } while (num != 0);
    return digits;
}  // Ending of NumDigits function

// A method to display summarized frequencies in a chart
void ChartDisplay(int max, int counts[]) {
    int align;
    // Loop for max frequency
    for ( int i = max ; i > 0 ; i-- ) {
        align = NumDigits(max);
        cout << setw(align) << right << i;
        // Loop for each alphabet character to print star symbol
        for ( int j = 0 ; j < 26 ; j++ ) {
            cout << setw(1) << " ";
            if ( counts[j] == i ) {
                cout << "*";
                counts[j]--;
            } else {
                cout << setw(1) << left <<" ";
            }  // Ending if-else
        }  // Ending inner for loop
        cout << endl;
    }  // Ending outer for loop
    cout << setw(align) << " ";
    // Loop for character label display
    for ( char j = 'a' ; j <= 'z' ; j++ ) {
        cout << " " << j;
    }  // Ending for loop
    cout << endl;
}  // Ending CharDisplay method
