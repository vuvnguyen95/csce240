// Copyright 2023 Vu Nguyen
// Implement the functionality of the Time Interval class
//  Setting start and end time of a day and printing for the class
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include"timeinterval.h"
#include"timeofday.h"
using std::cout;
using std::endl;
using std::string;
/* Default constructor
   Initialize start_ and end_ private variable 
*/
TimeInterval::TimeInterval() : start_(0, 0, 0), end_(0, 0, 0) {
}
/* Constructor
    taking 2 TimeOfDay object variables representing start and end of a day
*/
TimeInterval::TimeInterval(const TimeOfDay& start, const TimeOfDay& end) {
    SetStartTime(start);
    (Value(start) - Value(end) <= 0 ? SetEndTime(end):SetEndTime(start));
}
/* Constructor
    taking 1 TimeOfDay object variable as start of a day
        1 integer variable as the gap between start and end
        1 string variable as the unit of the gap
*/
TimeInterval::TimeInterval(const TimeOfDay& start, int length, string unit) {
    SetStartTime(start);
    int sec = 24 * 3600 - 1;
    int hours = Value(start) + length * 3600,
        minutes = Value(start) + length * 60,
        seconds = Value(start) + length;
    if ((unit == "hours" && hours <= sec)
        || (unit == "minutes" && minutes <= sec)
        || (unit == "seconds" && seconds <= sec))
            SetEndTime(length, unit);
    else    SetEndTime(start);
}
/* Mutator SetStartTime
    taking 1 TimeOfDay object variable as start of day
    to set start time of the interval
*/
void TimeInterval::SetStartTime(const TimeOfDay& start) {
    if (Value(start) - Value(end_) >= 0) start_ = start;
}
/* Mutator SetEndTime
    taking 1 TimeOfDay object variable as end of day
    to set end time of the interval
*/
void TimeInterval::SetEndTime(const TimeOfDay& end) {
    if (Value(start_) - Value(end) <= 0) end_ = end;
}
/* Mutator SetEndTime
    taking integer variable as the gap between start and end of a day
            a string variable as the unit
    to set end time base on the length input
*/
void TimeInterval::SetEndTime(int length, string unit) {
    TimeOfDay temp;
    int hours = GetStartTime().GetHour(),
        minutes = GetStartTime().GetMinute(),
        seconds = GetStartTime().GetSecond(),
        ex1 = 0, ex2 = 0;
    int sec = 24 * 3600 - 1;
    if (unit == "hours" && Value(GetStartTime())+length * 3600 <= sec) {
        hours += length;
        temp = TimeOfDay(hours, minutes, seconds);
        SetEndTime(temp);
    }
    if (unit == "minutes" && Value(GetStartTime())+length * 60 <= sec) {
        minutes += length;
        if (minutes >= 60) {
            ex1 = minutes / 60;
            hours += ex1;
            minutes -= (60 * ex1);
        }
        temp = TimeOfDay(hours, minutes, seconds);
        SetEndTime(temp);
    }
    if (unit == "seconds" && Value(GetStartTime())+length <= sec) {
        seconds += length;
        if (seconds >= 60) {
            ex2 = seconds / 60;
            ex1 = ex2 / 60;
            minutes += ex2;
            seconds = seconds - (60 * ex2);
        }
        temp = TimeOfDay(hours, minutes, seconds);
        SetEndTime(temp);
    }
}
/* Printing method
    taking 2 boolean variables to enable military format and display second
    and output to the console Start Time and End Time
*/
void TimeInterval::Print(bool military, bool dSecond) {
    cout << "Start time: ";
    GetStartTime().Print(military, dSecond);
    cout << "End time: ";
    GetEndTime().Print(military, dSecond);
}
/* Value method
    taking a TimeOfDay object variable
    to convert the time into seconds
*/
int TimeInterval::Value(TimeOfDay time) {
    int value = time.GetHour()*3600 + time.GetMinute()*60 + time.GetSecond();
    return value;
}
