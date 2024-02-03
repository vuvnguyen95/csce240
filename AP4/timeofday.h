// Copyright 2023 Vu Nguyen
// Define the Time of Day class
#ifndef _TIMEOFDAY_H_
#define _TIMEOFDAY_H_

class TimeOfDay {
 public:
    explicit TimeOfDay(int hour = 0, int min = 0, int sec = 0);
    void Print(bool military = false, bool dSecond = false);
    void SetHour(int hour);
    void SetMinute(int min);
    void SetSecond(int sec);
    int GetHour() const { return hour_; }
    int GetMinute() const { return minute_; }
    int GetSecond() const { return second_; }
 private:
    int hour_;
    int minute_;
    int second_;
};
#endif  // end _TIMEOFDAY_H_
