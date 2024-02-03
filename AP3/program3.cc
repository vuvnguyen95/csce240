// Copyright 2023 Vu Nguyen
// A program to track the frequencies of alphabet characters from an input
//  text file and display the data and their chart
#include <iostream>
#include <fstream>
#include <cctype>
using std::ifstream;
using std::cout;
using std::endl;
#include "program3functions.h"

int main(int argc, char * argv[]) {
    int freqCounts[26] = {0},
        chartCounts[26] = {0},
        charIndex[26] = {0};
    char c, cMax[26] = {0}, cMin[26] = {0};
    int index, max, min, countMax = 0, countMin = 0;
    // Regulate initial indexes in the charIndex array
    for ( int i = 0 ; i <26 ; i++ ) {
        charIndex[i] = i;
    }  // Ending of for loop
    ifstream file(argv[1]);  // Reading text file from run command
    // Count the frequencies of characters
    while (file >> c) {
        if (isalpha(c)) {
            index = tolower(c) - 'a';  // map letter to index
            ++freqCounts[index];  // increment count for letter
            ++chartCounts[index];
        }
    }
    file.close();  // File close
    Sorting(freqCounts, charIndex);
    max = freqCounts[0];
    min = freqCounts[25];
    // Count the number of appearances of max and min frequencies
    for ( int i = 0 ; i < 26 ; i++ ) {
        if ( freqCounts[i] == max ) {
            cMax[countMax] = (charIndex[i]+'a');
            countMax++;
        }  // Ending if
        if ( freqCounts[i] == min ) {
            cMin[countMin] = (charIndex[i]+'a');
            countMin++;
        }  // Ending if
    }  // Ending for loop
    PrintStatement(countMax, max, cMax, countMin, min, cMin);
    FrequencyDisplay(freqCounts, charIndex);
    ChartDisplay(max, chartCounts);
    return 0;
}  // Ending main
