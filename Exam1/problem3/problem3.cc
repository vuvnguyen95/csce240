// Copyright 2023 Vu Nguyen
// Counting the number of characters and digits in a sentence
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stringstream;
#include<cmath>
#include<string>
#include<sstream>
#include "problem3functions.h"

/*int NumDigits(int num){
    int digits = 0;
    do {
        num /= 10;
        digits++;
    } while (num != 0);
    return digits;
}
int FindAndReplace(int x, int find, int rep){
    int temp = abs(x), temp1 = 0, temp2, temp3=temp, in;
    cout<<NumDigits(find)<<endl;
    if(find < 0 || rep < 0 || NumDigits(find) < NumDigits(rep)){
        exit(0);
    } else {
        for(int i = 0; i < NumDigits(temp); i++){
            temp2 = temp / pow(10, i);
            cout<<"temp2: "<<temp2<<endl;
            in = (temp2/int(pow(10,NumDigits(find))))*pow(10,NumDigits(find));
            if(abs(temp2 - in) == find){
                cout<<"in: " << in <<endl;
                temp3 = temp3 - temp2%in*pow(10,i) + rep*pow(10,i);
                cout<<"temp2 mod2: "<<temp3<<endl;
            }
        }
    }
    return temp3;
}*/
int main(){
    int x = -401401;
    cout<<" "<<x<<endl;
    cout<< FindAndReplace(x,41,7)<<endl;
    cout<< x << endl;
    return 0;
}