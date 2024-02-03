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

// Functions to check the ending mark
bool stopConditon(char mark) {
    switch (mark) {
        case '.': case '?': case '!':
        return false;
        break;
        default: return true;
    }
}  // Ending of stopCondition

int main() {
    int countChar = 0, countDigit = 0;
    string str1, str2;
    stringstream output1, output2;
    // Input Loop until ending mark
    do {
        cin >> str1;
        str2 += str1;
    } while (stopConditon(str1.at(str1.length()-1)));
    // Counting characters and digits
    for (int i = 0; i< str2.length(); i++) {
        if (isdigit(str2.at(i))) {
            countDigit++;
        }
        if (isalpha(str2.at(i))) {
            countChar++;
        }
    }
    // Output conditions for singular and plural
    if (countChar == 1) {
        output1 << countChar << " alphabetic character";
    } else {
        output1 << countChar << " alphabetic characters";
    }
    if (countDigit == 1) {
        output2 << countDigit << " digit.";
    } else {
        output2 << countDigit << " digits.";
    }
    cout << "Input sentence contains "<< output1.str() << " and "
                                        << output2.str()<< endl;
}
