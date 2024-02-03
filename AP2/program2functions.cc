// Copyright 2023 bhipp
// implement the functions whose prototypes are in myfunctions.h
#include "./program2functions.h"
#include <cmath>
// LeapYear function to check if the year is leap year
// taking an integer and return bool - RV
bool LeapYear(int year) {
    bool RV = false;  // return value
    if ( year % 400 == 0 ) {
        RV = true;
    } else if ( year % 100 == 0 ) {
        RV = false;
    } else if ( year % 4 == 0 ) {
        RV = true;
    } else {
        RV = false;
    }
    return RV;
}  // Ending LeapYear function

// Return the maximum number of days of a month
// Return an integer
int LastDayOfMonth(int month, int year) {
    switch ( month ) {
        case 1: case 3: case 5:
        case 7: case 8: case 10:
        case 12: return 31; break;
        case 4: case 6: case 9:
        case 11: return 30; break;
        case 2:
            if (year > 0) {
                if ( LeapYear(year) ) {
                    return 29;
                } else {
                    return 28;
                }  // Ending if-else
            } else {
                return 0;
            } break;
            default: return 0;
        }  // Edning switch case
}  // Ending of LastDayOfMonth function

// Checking the user input is valid or not
// Return bool value
bool ValidDate(int month, int day, int year) {
    if ( month < 13 && month > 0 && day > 0
        && day <= LastDayOfMonth(month, year)
        && year > 0 )
        return true;
    else
        return false;
}  // Ending of ValidDate function

// Changing the initial argument to the date
void NextDate(int & month, int & day, int & year) {
    if ( ValidDate(month, day, year) ) {
        if ( day == LastDayOfMonth(month, year) && month ==12 ) {
            year++;
            month = 1;
            day = 1;
        } else if ( day == LastDayOfMonth(month, year) ) {
            month++;
            day = 1;
        } else {
            day++;
        }  // Ending of inner if-else
    } else {
        exit(0);
    }
}  // Ending of NextDate function

// Changing the argument to the previous date
void PreviousDate(int & month, int & day, int & year) {
    if ( ValidDate(month, day, year) ) {
        if ( day == 1 && month ==1 ) {
            year--;
            month = 12;
            day = 31;
        } else if ( day == 1 ) {
            month--;
            day = LastDayOfMonth(month, year);
        } else {
            day--;
        }  // Ending of inner if-else
    } else {
        exit(0);
    }
}  // Ending of PreviousDate function
