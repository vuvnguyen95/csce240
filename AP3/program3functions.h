// Copyright 2023 Vu Nguyen
// Functions Prototype for Program3.cc
#ifndef _PROGRAM3FUNCTIONS_H_
#define _PROGRAM3FUNCTIONS_H_
void PrintChar(const char character[], int num);

void PrintStatement(int countMax, int max, char cMax[],
                        int min, int countMin, char cMin[]);

int BinarySearch(const int n[], int search_value, int top, int bottom);

void Sorting(int counts[], int charIndex[]);

void FrequencyDisplay(int counts[], int charIndex[]);

void ChartDisplay(int max, int counts[]);

#endif  // _PROGRAM3FUNCTIONS_H_
