// Copyright 2023 bhipp
// minimal tests of the Distance function
#include<iostream>
using std::cout;
using std::endl;
#include"problem2functions.h"

int main() {
  if ( Distance(3, 4) == 5 )
    cout << "Passed Distance(3, 4) test" << endl;
  else
    cout << "Failed Distance(3, 4) test, function returned "
         << Distance(3, 4) << ". Expected 5" << endl;

  if ( Distance(0.5, -1.2, 0.5, 1.8) == 3 )
    cout << "Passed Distance(1, -1, 3, 2) test" << endl;
  else
    cout << "Failed Distance(0.5, -1.2, 0.5, 1.8) test, function returned "
         << Distance(0.5, -1.2, 0.5, 1.8) << ". Expected 3" << endl;

  if ( Distance(-7.1, 2, -1, 2) == 6.1 )
    cout << "Passed Distance(-7, 2, -1, 2) test" << endl;
  else
    cout << "Failed Distance(-7.1, 2, -1, 2) test, function returned "
         << Distance(-7.1, 2, -1, 2) << ". Expected 6.1" << endl;

  if ( Distance(3, 8, 3, 8) == 0 )
    cout << "Passed Distance(3, 8, 3, 8) test" << endl;
  else
    cout << "Failed Distance(3, 8, 3, 8) test, function returned "
         << Distance(3, 8, 3, 8) << ". Expected 0" << endl;

  if ( Distance(0.5, 2.1, -11.5, 7.1) == 13 )
    cout << "Passed Distance(0.5, 2.1, -11.5, 7.1) test" << endl;
  else
    cout << "Failed Distance(0.5, 2.1, -11.5, 7.1) test, function returned "
         << Distance(0.5, 2.1, -11.5, 7.1) << ". Expected 13" << endl;

  return 0;
}
