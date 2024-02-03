// Copyright 2023 bhipp
// limited tests for the OnCircle function
#include<iostream>
using std::cout;
using std::endl;
#include"problem2functions.h"

int main() {
  if ( OnCircle(0, 0, 3, -3, 0) == 0 )
    cout << "Passed OnCircle(0, 0, 3, -3, 0) test" << endl;
  else
    cout << "Failed OnCircle(0, 0, 3, -3, 0) test" << endl;

  if ( OnCircle(0.73, -5.2, 5, 3.73, -1.2) == 0 )
    cout << "Passed OnCircle(0.73, -5.2, 5, 3.73, -1.2) test" << endl;
  else
    cout << "Failed OnCircle(0.73, -5.2, 5, 3.73, -1.2) test" << endl;

  if ( OnCircle(-8.1, 2.7, 13, 4, 7.7) == 1 )
    cout << "Passed OnCircle(-8.1, 2.7, 13, 4, 7.7) test" << endl;
  else
    cout << "Failed OnCircle(-8.1, 2.7, 13, 4, 7.7) test" << endl;

  if ( OnCircle(-8.1, 2.7, 13, -20, 7.7) == -1 )
    cout << "Passed OnCircle(-8.1, 2.7, 13, -20, 7.7) test" << endl;
  else
    cout << "Failed OnCircle(-8.1, 2.7, 13, -20, 7.7) test" << endl;

  return 0;
}
