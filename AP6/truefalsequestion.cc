// Copyright 2023 Vu Nguyen
// Implement the functionalities of True False Question class
// Take in the question and the answer and print out to the console
#include"truefalsequestion.h"
#include<iostream>
#include<string>
#include<algorithm>
using std::cout;
using std::endl;
using std::boolalpha;
using std::string;

namespace csce240_program5 {
// Class constructor
// param: a string as the question, a bool as its answer
TrueFalseQuestion::TrueFalseQuestion(string question, bool answer)
                : Question(question), answer_(true) {
    SetAnswer(answer);
}
// Accessor SetAnswer
// Set the correct answer
// param: a bool as the correct answer
void TrueFalseQuestion::SetAnswer(bool answer) {
    answer_ = answer;
}
// Printing function
// Print out to the console the question and its correct answer
// param: a bool as the condition to print out the answer
void TrueFalseQuestion::Print(bool out) const {
    cout << "Question: "<< GetQuestion() << endl;
    if (out) {
        cout << "Correct Answer: " << boolalpha << GetAnswer() << endl;
    }
}
// Check Answer function
// Check whether the student answer match the correct answer or not
// param: a string as the student answer
bool TrueFalseQuestion::CheckAnswer(string answer) const {
    string str;
    GetAnswer() ? str = "true" : str = "false";
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
    if (answer.compare(str) == 0) {
        return true;
    } else {
        return false;
    }
}

}  // namespace csce240_program5
