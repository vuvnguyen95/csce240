// Copyright 2023 Vu Nguyen
// Define the Time Interval class
#ifndef _TIMEINTERVAL_H_
#define _TIMEINTERVAL_H_
#include<string>
#include"timeofday.h"
using std::string;

class TimeInterval {
 public:
    TimeInterval();
    explicit TimeInterval(const TimeOfDay& start, const TimeOfDay& end);
    explicit TimeInterval(const TimeOfDay& start, int length, string unit);
    void Print(bool military = false, bool dSecond = false);
    void SetStartTime(const TimeOfDay& start);
    void SetEndTime(const TimeOfDay& end);
    void SetEndTime(int length, string unit);
    TimeOfDay GetStartTime() const { return start_; }
    TimeOfDay GetEndTime() const { return end_; }
 private:
    int Value(TimeOfDay time);
    TimeOfDay start_;
    TimeOfDay end_;
    string unit_;
};
#endif  // end _TIMEINTERVAL_H_
