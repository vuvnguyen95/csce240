// Copyright 2023 Vu Nguyen
// Define the True False Question class
#ifndef _TRUEFALSEQUESTION_H_
#define _TRUEFALSEQUESTION_H_
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
#include"question.h"
namespace csce240_program5 {

class TrueFalseQuestion : public Question {
 public:
    explicit TrueFalseQuestion(string question = "?", bool answer = true);
    virtual ~TrueFalseQuestion() { cout << "~TrueFalseQuestion() called on "
                                << GetQuestion() << endl; }
    virtual void Print(bool out) const;
    virtual bool CheckAnswer(string answer) const;
    void SetAnswer(bool answer);
    bool GetAnswer() const { return answer_; }
 private:
    bool answer_;
};

}  // namespace csce240_program5
#endif  // _TRUEFALSEQUESTION_H_
