// Copyright 2023 bhipp
// Functions Prototype for Program2.cc
            // PROJECT_PATH_FILENAME_H_
#ifndef _PROGRAM2FUNCTIONS_H_
#define _PROGRAM2FUNCTIONS_H_

bool LeapYear(int year);

int LastDayOfMonth(int month, int = 0);

bool ValidDate(int month, int day, int year);

void NextDate(int & month, int & day, int & year);

void PreviousDate(int & month, int & day, int & year);

#endif  // _PROGRAM2FUNCTIONS_H_
