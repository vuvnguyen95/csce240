// Copyright 2023 Vu Nguyen
// Define the Length class
#ifndef _LENGTH_H
#define _LENGTH_H
#include<iostream>
#include<string>
#include<iomanip>
using std::cout;
using std::endl;
using std::string;
using std::ostream;

class Length {
 public:
    explicit Length(double value = 0, string units = "inches");
    void SetUnits(string units);
    void SetValue(double value);
    double GetValue() const { return value_; }
    string GetUnits() const { return units_; }
    void Convert(string newunits);
    Length operator + (const Length& other) const;
    bool operator == (const Length& other) const;
    bool operator < (const Length& other) const;
    friend ostream& operator << (ostream& os, const Length& other);

 private:
    double value_;
    string units_;
};
#endif  // end _LENGTH_H
