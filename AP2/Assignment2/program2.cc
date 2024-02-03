// Copyright 2023 bhipp
// Author Vu Nguyen
// A program to to check the number of days in between
// the two given dates by user input
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "./program2functions.h"

int main() {
    // Variables declaration
    int day1, month1, year1, day2, month2, year2;
    int countDay1 = 0, countDay2 = 0, countDay = 0;
    char slash;
    // User input
    cin >> month1 >> slash >> day1 >> slash >> year1;
    cin >> month2 >> slash >> day2 >> slash >> year2;
    // Checking for valid date initially
    if ( ValidDate(month1, day1, year1) && ValidDate(month2, day2, year2) ) {
        // Counting number of days for the first set
        for ( int i = 1; i < month1; i++ ) {
            countDay1+= LastDayOfMonth(i, year1);
        }
        countDay1+= day1;
        // Counting number of days for the second set
        for ( int i = 1; i < month2; i++ ) {
            countDay2+= LastDayOfMonth(i, year2);
        }
        countDay2+= day2;
        // Counting number of days in between
        if ( year1 < year2 ) {
            for ( int i = year1; i < year2; i++ ) {
                if ( LeapYear(i) ) {
                    countDay2 += 366;
                } else {
                    countDay2 += 365;
                }  // Ending if-else
            }  // Ending for loop
            countDay = countDay2 - countDay1;
        } else {
            for ( int i = year2; i < year1; i++ ) {
                if ( LeapYear(i) ) {
                    countDay1 += 366;
                } else {
                    countDay1 += 365;
                }  // Ending if-else
            }  // Ending for loop
            countDay = countDay1 - countDay2;
        }  // Ending if-else
        if ( countDay1 <= countDay2 ) {
            cout << month1 << slash << day1 << slash << year1
                    << " is " << countDay << " days before "
                    << month2 << slash << day2 << slash << year2 << endl;
        } else {
            cout << month1 << slash << day1 << slash << year1
                    << " is " << countDay << " days after "
                    << month2 << slash << day2 << slash << year2 << endl;
        }  // Ending if-else
    }  // Ending valid date check if-else
    // Output error for invalid date set 1
    if ( !ValidDate(month1, day1, year1) ) {
        cout << month1 << slash << day1 << slash << year1
        << " is not a valid date" << endl;
    }

    // Output error for invalid date set 2
    if ( !ValidDate(month2, day2, year2) ) {
        cout << month2 << slash << day2 << slash << year2
        << " is not a valid date" << endl;
    }
    return 0;
}
