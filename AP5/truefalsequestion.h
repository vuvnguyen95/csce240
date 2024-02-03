// Copyright 2023 Vu Nguyen
// Define the True False Question class
#ifndef _TRUEFALSEQUESTION_H_
#define _TRUEFALSEQUESTION_H_
#include<iostream>
#include<string>
using std::string;
#include"question.h"
namespace csce240_program5 {

class TrueFalseQuestion : public Question {
 public:
    explicit TrueFalseQuestion(string question = "?", bool answer = true);
    void Print(bool out) const;
    void SetAnswer(bool answer);
    bool GetAnswer() const { return answer_; }
 private:
    bool answer_;
};

}  // namespace csce240_program5
#endif  // _TRUEFALSEQUESTION_H_
