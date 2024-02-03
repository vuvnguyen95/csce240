// Copyright 2023 Vu Nguyen
// Implement the functionalities of Short Answer Question class
// Take in the question and the answer and print out to the console
#include"shortanswerquestion.h"
#include<iostream>
#include<string>
#include<algorithm>
using std::cout;
using std::endl;
using std::string;

namespace csce240_program5 {
// Class constructor
// param: a string as the question, another string as its answer
ShortAnswerQuestion::ShortAnswerQuestion(string question, string answer)
                : Question(question), answer_("") {
    SetAnswer(answer);
}
// Accessor SetAnswer
// Set the correct answer
// param: a string as the correct answer
void ShortAnswerQuestion::SetAnswer(string answer) {
    answer_ = answer;
}
// Printing function
// Print out to the console the question and its correct answer
// param: a bool as the condition to print out the answer
void ShortAnswerQuestion::Print(bool out) const {
    cout << "Question: "<< GetQuestion() << endl;
    if (out) {
        cout << "Correct Answer: " << GetAnswer() << endl;
    }
}
// Check Answer function
// Check whether the student answer match the correct answer or not
// param: a string as the student answer
bool ShortAnswerQuestion::CheckAnswer(string answer) const {
    if ( answer.compare(GetAnswer()) == 0 ) {
        return true;
    } else {
        return false;
    }
}

}  // namespace csce240_program5
