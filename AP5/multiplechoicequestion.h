// Copyright 2023 Vu Nguyen
// Define the Multiple Choice Question class
#ifndef _MULTIPLECHOICEQUESTION_H_
#define _MULTIPLECHOICEQUESTION_H_
#include<iostream>
#include<string>
using std::string;
#include"question.h"
namespace csce240_program5 {

class MultipleChoiceQuestion : public Question {
 public:
    explicit MultipleChoiceQuestion(string = "?", int = 0,
                  string * = nullptr, bool * = nullptr);
    explicit MultipleChoiceQuestion(const MultipleChoiceQuestion& other);
    ~MultipleChoiceQuestion();
    void Print(bool out) const;
    MultipleChoiceQuestion &operator = (const MultipleChoiceQuestion& other);
    void SetAnswerChoices(int, string *, bool *);
    string * GetChoices()const { return choices_; }
    bool * GetAnswer() const { return answer_; }

 private:
    string * choices_;
    bool * answer_;
    int numChoices_;
};

}  // namespace csce240_program5
#endif  // _MULTIPLECHOICEQUESTION_H_
