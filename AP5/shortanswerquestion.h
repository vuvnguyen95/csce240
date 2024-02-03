// Copyright 2023 Vu Nguyen
// Define the Short Answer Question class
#ifndef _SHORTANSWERQUESTION_H_
#define _SHORTANSWERQUESTION_H_
#include<iostream>
#include<string>
using std::string;
#include"question.h"
namespace csce240_program5 {

class ShortAnswerQuestion : public Question {
 public:
    explicit ShortAnswerQuestion(string question = "?", string answer = "");
    void Print(bool out) const;
    void SetAnswer(string answer);
    string GetAnswer() const { return answer_; }
 private:
    string answer_;
};

}  // namespace csce240_program5
#endif  // _SHORTANSWERQUESTION_H_
