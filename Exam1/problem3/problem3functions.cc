// Copyright 2023 Vu Nguyen
// Problem 3 functions include  - Checking the number of digits from input
//                              - Find and replace digits in a number
#include "./problem3functions.h"
#include <cmath>

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

// A function to find and replace digits from an input number
// Arguments: x - input number, find - digit(s) need to be found and replaced
//              rep - replacing digits
// Return T/F if conditions are met
bool FindAndReplace(int & x, int find, int rep) {
    int temp1, temp2 = 0, sign = x;
    // Precondition
    if (find < 0 || rep < 0 || NumDigits(find) < NumDigits(rep)) {
        return false;
    } else {
        for (int i = 0; i < NumDigits(x); i++) {
            temp1 = abs(x) / pow(10, i);
            temp2 = temp1/static_cast<int>(pow(10, NumDigits(find)))
                    * pow(10, NumDigits(find));
            if ((temp1 - temp2) == find) {
                x = abs(x) - temp1 % temp2 * pow(10, i) + rep * pow(10, i);
            }
        }  // Ending for loop
        // Sign check
        if (sign < 0 && x > 0) {
            x = x * (-1);
        }
        return true;
    }  // Ending if-else
}  // Ending of FindAndReplace function
