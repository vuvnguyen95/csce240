#include<iostream>
using std::cout;
using std::endl;
#include"length.h"
int main() {
    Length l;
  Length l5centimeters(5, "inches");
  Length l1(19, "centimeters");
  if ( l5centimeters.GetValue() == 5 &&
       l5centimeters.GetUnits() == "centimeters" ) {
    cout << "Passed 2 good argument constructor / accessor test" << endl;
  } else {
    cout << "Failed 2 good argument constructor / accessor test" << endl;
  }
    l = l1+l5centimeters;
  cout << l1 <<"  +  "<< l5centimeters << " =  " << l << endl;
    return 0;
}