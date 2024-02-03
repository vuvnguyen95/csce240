// Copyright 2023 Vu Nguyen
// Implement the functionality of the Time of Day class
// Setting hour, minute, second and printing for the class
#include"multiplechoicequestion.h"
#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

namespace csce240_program5 {

MultipleChoiceQuestion::MultipleChoiceQuestion(string question,
        int numChoices, string * choices, bool * answer): Question("?"), numChoices_(0) {  
    this->choices_ = new string[numChoices];
    this->answer_ = new bool[numChoices];
    for (int i = 0; i < numChoices; i++) {
        this->choices_[i] = (choices != nullptr) ? choices[i] : "";
        this->answer_[i] = (answer != nullptr) ? answer[i] : true;
    }
    SetQuestion(question);
    SetAnswerChoices(numChoices, choices, answer);
}
MultipleChoiceQuestion::MultipleChoiceQuestion
            (const MultipleChoiceQuestion& other): Question(other) {
    numChoices_ = other.numChoices_;
    if (numChoices_ > 0) {
        choices_ = new string[numChoices_];
        answer_ = new bool[numChoices_];
        for (int i = 0; i < numChoices_; i++) {
            choices_[i] = other.choices_[i];
            answer_[i] = other.answer_[i];
        }
    } else {
        choices_ = nullptr;
        answer_ = nullptr;
    }
    SetQuestion(GetQuestion());
    SetAnswerChoices(numChoices_, choices_, answer_);
}
MultipleChoiceQuestion & MultipleChoiceQuestion::operator =
            (const MultipleChoiceQuestion& other) {
    if (this != & other) {
        Question::operator=(other);
        delete[] choices_;
        delete[] answer_;
        numChoices_ = other.numChoices_;
        choices_ = new string[numChoices_];
        answer_ = new bool[numChoices_];
        for (int i = 0; i < numChoices_; i++) {
            choices_[i] = other.choices_[i];
            answer_[i] = other.answer_[i];
        }
    }
    return *this;
}
void MultipleChoiceQuestion::SetAnswerChoices(int numChoices,
                                string * choices, bool * answer){
    this->numChoices_ = numChoices;
    delete[] this->choices_;
    delete[] this->answer_;
    this->choices_ = new string[numChoices];
    this->answer_ = new bool[numChoices];
    for (int i = 0; i < numChoices; i++) {
        this->choices_[i] = choices_[i];
        this->answer_[i] = answer_[i];
    }
}
void MultipleChoiceQuestion::Print(bool out) const{
    cout << "Question: " << GetQuestion() << endl;
    cout << "Answer Choices:" << endl;
    for(int i = 0; i < numChoices_; i++){
        cout << choices_[i] << endl;
    }
    if(GetQuestion() != "?" && numChoices_ != 0){
        if(out){
            cout << "Correct Answer: "
            << (answer_[1] == true ? " - correct":" - incorrect") << endl;
        }
    }

}

}  // namespace csce240_program5