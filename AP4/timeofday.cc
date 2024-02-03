// Copyright 2023 Vu Nguyen
// Implement the functionality of the Time of Day class
// Setting hour, minute, second and printing for the class
#include"timeofday.h"
#include<iostream>
#include<iomanip>
#include<cmath>
using std::cout;
using std::endl;
/* Class constructor
    Initialize hour_, minute_ and second_ to 0
*/
TimeOfDay::TimeOfDay(int hour, int min, int sec)
                : hour_(0), minute_(0), second_(0) {
    SetHour(hour);
    SetMinute(min);
    SetSecond(sec);
}
/* Mutator SetHour
    taking an integer variable as hour
    to set an hour in a day
*/
void TimeOfDay::SetHour(int hour) {
    if ( hour >= 0 && hour <= 24 )
        hour_ = hour;
}
/* Mutator SetMinute
    taking an integer variable as minute
    to set an minute in a day
*/
void TimeOfDay::SetMinute(int min) {
    if ( min >= 0 && min < 60 )
        minute_ = min;
}
/* Mutator SetSecond
    taking an integer variable as second
    to set an second in a day
*/
void TimeOfDay::SetSecond(int sec) {
    if ( sec >= 0 && sec < 60)
        second_ = sec;
}
/* Printing method
    taking 2 boolean variables to enable military format and display second
    and output to the console Start Time and End Time
*/
void TimeOfDay::Print(bool military, bool dSecond) {
    if (military == true) {
        cout << (GetHour() < 10 ? "0":"") <<GetHour() << ":"
            << (GetMinute() < 10 ? "0":"")<< GetMinute();
        if (dSecond == true) {
            cout << ":" <<(GetSecond() < 10 ? "0":"")
                << GetSecond() << endl;
        } else {
            cout << endl;
        }
    } else {
        if (GetHour() > 0) {
            cout << (GetHour() > 12 && (GetHour()-12) < 10 ? "0":"")
                << (GetHour() < 10 ? "0":"")
                << (GetHour() > 12 ? (GetHour()-12):GetHour())
                << ":" << (GetMinute() < 10 ? "0":"")
                << GetMinute();
        } else {
            cout << "12" << ":" << (GetMinute() < 10 ? "0":"")
                << GetMinute();
        }
        if (dSecond == true) {
            cout << ":" << (GetSecond() < 10 ? "0":"") << GetSecond()
                << (GetHour() > 12 ? " p.m." : " a.m.")<< endl;
        } else {
            cout << (GetHour() > 12 ? " p.m." : " a.m.")<< endl;
        }
    }
}
