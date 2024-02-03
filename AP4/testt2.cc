// Copyright 2023 bhipp
// Initial tests for TimeOfDay class
#include<iostream>
using std::cout;
using std::endl;
#include"timeofday.h"
#include"timeinterval.h"

int main(){
  const TimeOfDay t1(9, 15, 55);
  const TimeOfDay t2(10, 45, 33);
  TimeInterval interval2(t1, t2);
  if ( interval2.GetStartTime().GetHour() == 9 &&
       interval2.GetStartTime().GetMinute() == 15 &&
       interval2.GetStartTime().GetSecond() == 55 &&
       interval2.GetEndTime().GetHour() == 10 &&
       interval2.GetEndTime().GetMinute() == 45 &&
       interval2.GetEndTime().GetSecond() == 33 )
    cout << "Passed two TimeOfDay argument constructor test" << endl;
  else
    cout << "Failed two TimeOfDay argument constructor test" << endl;
  interval2.Print();
  cout << endl;
  TimeInterval interval3(t1, 50, "minutes");
  if ( interval3.GetStartTime().GetHour() == 9 &&
       interval3.GetStartTime().GetMinute() == 15 &&
       interval3.GetStartTime().GetSecond() == 55 &&
       interval3.GetEndTime().GetHour() == 10 &&
       interval3.GetEndTime().GetMinute() == 5 &&
       interval3.GetEndTime().GetSecond() == 55 )
    cout << "Passed TimeInterval(t1, 50, \"minutes\") test" << endl;
  else
    cout << "Failed TimeInterval(t1, 50, \"minutes\") test" << endl;
  interval3.Print();
  cout << endl;

}