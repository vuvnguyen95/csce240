// Copyright 2023 Vu Nguyen
// Problem 2 functions include  - calculate distance between 2 points
//                              - check relation of a point and a circle
//                              - check 3 points is on a line or not
#include "./problem2functions.h"
#include <cmath>
// A function to calculate the distance between 2 points
// Arguments: x1, y1, x2, y2 are x's and y's of point 1 and 2 accordingly
// Return d as distance
double Distance(double x1, double y1, double x2, double y2) {
    double d;
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return d;
}

// A function to check the relative position of a point to a circle
// Arguments: xC, yC are circle coordinates x and y, rC is circle radius.
//              xP, yP are point's coordinates x and y
// Return 0 if on the circle, -1 if inside the circle, 1 if outside the circle
int OnCircle(double xC, double yC, double rC, double xP, double yP) {
    double d = Distance(xC, yC, xP, yP);
    if (d < rC) {
        return -1;
    } else if (d > rC) {
        return 1;
    } else {
        return 0;
    }
}

// A function to check if 3 points are on a line or not
// Arguments: x1, y1, x2, y2, x3, y3 are x's and y's coordinates
//          of the 3 points accordingly
// Return true if they are on 1 line, false if they're not
bool OnLine(double x1, double y1, double x2,
                double y2, double x3, double y3) {
    double d1, d2, d3;
    d1 = Distance(x1, y1, x2, y2);
    d2 = Distance(x2, y2, x3, y3);
    d3 = Distance(x1, y1, x3, y3);
    if (d1 == d2 + d3 || d2 == d1 + d3 || d3 == d1 + d2) {
        return true;
    } else {
        return false;
    }
}
