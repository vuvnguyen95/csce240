// Copyright 2023 bhipp
// limited tests for the OnLine function
#include<iostream>
using std::cout;
using std::endl;
#include"problem2functions.h"

int main() {
  if ( OnLine(0, 0, 3, -3, 9, -9) )
    cout << "Passed OnLine(0, 0, 3, -3, 9, -9) test" << endl;
  else
    cout << "Failed OnLine(0, 0, 3, -3, 9, -9) test" << endl;

  if ( OnLine(2, 3.2, -1, 4.2, 8, 1.2) )
    cout << "Passed OnLine(2, 3.2, -1, 4.2, 8, 1.2) test" << endl;
  else
    cout << "Failed OnLine(2, 3.2, -1, 4.2, 8, 1.2) test" << endl;

  if ( OnLine(-1.8, -1.5, 3, 1, -3.1, -7) )
    cout << "Failed OnLine(-1.8, -1.5, 3, 1, -3.1, -7) test" << endl;
  else
    cout << "Passed OnLine(-1.8, -1.5, 3, 1, -3.1, -7) test" << endl;

  if ( OnLine(5.12, -12, 5.12, -3.6, 5.12, 14.22) )
    cout << "Passed OnLine(5.12, -12, 5.12, -3.6, 5.12, 14.22) test" << endl;
  else
    cout << "Failed OnLine(5.12, -12, 5.12, -3.6, 5.12, 14.22) test" << endl;

  return 0;
}
