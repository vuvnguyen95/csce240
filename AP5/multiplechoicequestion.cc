// Copyright 2023 Vu Nguyen
// Implement the functionalities of Multiple Choice Question
// Take question and choices of the question in and print out
// the correct answers as well as the incorrect ones
#include "multiplechoicequestion.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

namespace csce240_program5 {
// Class constructor
// param: a string as question, an int as the number of choices,
//      a string pointer as choices, and a bool pointer as the answer
MultipleChoiceQuestion::MultipleChoiceQuestion(string question,
            int numChoices, string* choices, bool* answer): Question(question),
            choices_(nullptr), answer_(nullptr), numChoices_(numChoices) {
    SetAnswerChoices(numChoices, choices, answer);
}
// Copy constructor
// param: a constant MultipleChoiceQuestion variable as the copied one
MultipleChoiceQuestion::MultipleChoiceQuestion
        (const MultipleChoiceQuestion& other): Question(other.GetQuestion()) {
    SetAnswerChoices(other.numChoices_, other.choices_, other.answer_);
}
MultipleChoiceQuestion::~MultipleChoiceQuestion() {
      delete[] choices_;
      delete[] answer_;
}
// Overloading assignment operator
// Overload the default assignment operator to make it assigns
//      the MultipleChoiceQuestion variable
// param: a constant MultipleChoiceQuestion as the object of the assignment
MultipleChoiceQuestion& MultipleChoiceQuestion::operator =
                    (const MultipleChoiceQuestion& other) {
    if (this != &other) {
        Question::operator=(other);
        MultipleChoiceQuestion::~MultipleChoiceQuestion();
        SetQuestion(other.GetQuestion());
        numChoices_ = other.numChoices_;
        if (numChoices_ > 0) {
            this->choices_ = new string[numChoices_];
            this->answer_ = new bool[numChoices_];
            for (int i = 0; i < numChoices_; i++) {
                choices_[i] = other.choices_[i];
                answer_[i] = other.answer_[i];
            }
        }
    }
    return *this;
}
// Accessor SetAnswerChoices
// Set the choices and the answers
// param: an int as the number of choices, a string pointer as the choices
//      a bool pointer as the answers
void MultipleChoiceQuestion::SetAnswerChoices
                    (int numChoices, string* choices, bool* answer) {
    MultipleChoiceQuestion::~MultipleChoiceQuestion();
    numChoices_ = numChoices;
    if (numChoices_ > 0) {
        choices_ = new string[numChoices_];
        answer_ = new bool[numChoices_];
        for (int i = 0; i < numChoices_; i++) {
            choices_[i] = choices ? choices[i] : "";
            answer_[i] = answer ? answer[i] : true;
        }
    }
}
// Print function
// Print out to the console the question, its choices, and its answers
// param: a bool as the condition to print the answers
void MultipleChoiceQuestion::Print(bool out) const {
    cout << "Question: " << GetQuestion() << endl;
    cout << "Answer Choices:" << endl;
    for (int i = 0; i < numChoices_; i++) {
        cout << GetChoices()[i];
        if (out) {
            if (GetAnswer()[i]) {
                cout << " - correct";
            } else {
                cout << " - incorrect";
            }
        }
        cout << endl;
    }
}

}  // namespace csce240_program5
