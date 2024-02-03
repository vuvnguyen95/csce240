// Copyright 2023 Vu Nguyen
// Implement the functionality of the Length class
// Set unit and value, conversion, and operators overloading
#include"length.h"
#include<iostream>
#include<iomanip>
#include<string>
using std::cout;
using std::endl;
using std::string;
using std::ostream;
// Class constructor
// param: a double and a string represent as value and unit of the value
Length::Length(double value, string units) : value_(0), units_("inches") {
    value < 0 ? SetValue(0) : SetValue(value);
    if (units == "inches" || units == "centimeters") SetUnits(units);
}
// Converting from inches to centimeters and vice versa
// param: a string represents as the new unit to convert to
void Length::Convert(string newunits) {
    if (units_ == "inches" && newunits == "centimeters") {
        value_ = value_ * 2.54;
        units_ = newunits;
    } else if (units_ == "centimeters" && newunits == "inches") {
        value_ = value_ / 2.54;
        units_ = newunits;
    }
}
// Mutator to set unit to the object length
// param: a string represents as the unit
void Length::SetUnits(string units) {
    if (units == "inches" || units == "centimeters") units_ = units;
}
// Mutator to set value to the object length
// param: a double represents as the value
void Length::SetValue(double value) {
    if (value > 0) value_ = value;
}
// Overloading operator +, to make the operator perform adding function on
//  2 length objects with conversion of the second object unit to the first one
// param: a Length class variable represent as
//      the second object in the addition
Length Length::operator + (const Length& other) const {
    Length l = other;
    if (units_ != l.GetUnits()) l.Convert(units_);
    return Length(value_ + l.value_, units_);
}
// Overloading operator ==, to make the operator perform comparing
//      equal function on 2 length objects with conversion of the second object
//      unit to the first one
// param: a Length class variable represent as
//      the second object in the the comparison
bool Length::operator == (const Length& other) const {
    Length l = other;
    if (units_ != l.GetUnits()) l.Convert(units_);
    return value_ == l.value_;
}
// Overloading operator ==, to make the operator perform comparing
//      less than function on 2 length objects with conversion of
//      the second object unit to the first one
// param: a Length class variable represents as
//      the second object in the the comparison
bool Length::operator < (const Length& other) const {
    Length l = other;
    if (units_ != l.GetUnits()) l.Convert(units_);
    if (value_ < l.value_) return value_ < l.value_;
    else
        return l.value_ < value_;
}
// Overloading operator <<, to make the operator perform streaming function
//      and including the object unit
// param: an ostream class variable and a Length class variable
//      represent as the streaming statement and length object
ostream& operator << (ostream & os, const Length & l) {
    os << l.value_ << " " << l.units_;
    return os;
}
