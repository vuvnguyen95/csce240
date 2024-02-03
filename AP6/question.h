// Copyright 2023 bhipp
// definition of the Question base class
#ifndef _QUESTION_H_
#define _QUESTION_H_

#include<string>
using std::string;
using std::cout;
using std::endl;
#include<iostream>

namespace csce240_program5 {

class Question {
 public:
  explicit Question(string q = "?") { question_ = q; }
  virtual ~Question() { cout << "~Question() called on " 
                                << question_ << endl; }
  void SetQuestion(string q) { 
    if ( q.length() > 0 )
      question_ = q;
  }
  string GetQuestion() const { return question_; }
  virtual void Print(bool out) const 
      {cout << "Question: " << question_ << endl;}
  virtual bool CheckAnswer(string answer) const = 0;
 private:
  string question_;
};

}  // namespace csce240_program5

#endif  // _QUESTION_H_
