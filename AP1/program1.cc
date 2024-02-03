//Copyright 2023 bhipp
//Author Vu Nguyen
//A program that takes user input and check 
//          relational expressions for correctness
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<iomanip>
#include<cmath> 

/* A method to check the input arithmetic signs 
    return ReturnValue - T/F
*/
bool ArithmeticCheck( char character ){
    bool ReturnValue = true;
    switch(character){
        case '+': ReturnValue = true ;break;
        case '-': ReturnValue = true ; break;
        case '*': ReturnValue = true ; break;
        case '/': ReturnValue = true ; break;
        case '%': ReturnValue = true ; break;
        default: ReturnValue = false;
    }
    return ReturnValue;
} //Ending of method ArithmeticCheck

/* A method to check the input relation signs
    return ReturnValue - T/F
*/
bool RelationCheck( char character ){
    bool ReturnValue = true;
    switch ( character ){
        case '=': ReturnValue = true; break;
        case '<': ReturnValue = true; break;
        case '>': ReturnValue = true; break;
        default: ReturnValue = false;
    }
    return ReturnValue;
} //Ending of method RelationCheck

// Main method
int main(){
    double result;
    int num1, num2, num3, index = 0, correctCount = 0, breakpoint;
    char char1, char2, condition;

    //looping for input to continue or quit
    do{
        cin >> num1 >> char1 >> num2 >> char2 >> num3;
        
        //Initial signs check to avoid invalid output
        if(ArithmeticCheck(char1) && RelationCheck(char2)){
            
            switch(char1){
                case '+': result = num1 + num2; break;
                case '-': result = num1 - num2; break;
                case '*': result = num1 * num2; break;
                case '/': result = num1 / num2; break;
                case '%': result = num1 % num2; break;
            } //Ending of switch-case on char1

            switch (char2){
                case '=': 
                    if(result == num3){
                        cout << num1 << " " << char1 << " " << num2 
                                        << " " << char2 << " " << num3 
                                        << " - Correct" << endl;
                        correctCount++;
                    } else 
                        cout << num1 << " " << char1 << " " << num2 
                                        << " " << char2 << " " << num3 
                                        << " - Incorrect" << endl;
                    break;
                case '<': 
                    if(result < num3){
                        cout << num1 << " " << char1 << " " << num2 
                                        << " " << char2 << " " << num3 
                                        << " - Correct" << endl;
                        correctCount++;
                    } else 
                        cout << num1 << " " << char1 << " " << num2 
                                        << " " << char2 << " " << num3 
                                        << " - Incorrect" << endl;
                    break;              
                case '>':
                    if(result > num3){
                        cout << num1 << " " << char1 << " " << num2 
                                        << " " << char2 << " " << num3 
                                        << " - Correct" << endl;
                        correctCount++;
                    } else 
                        cout << num1 << " " << char1 << " " << num2 
                                        << " " << char2 << " " << num3 
                                        << " - Incorrect" << endl;
                    break;
            } //Ending of switch-case on char2
            index++;
        }
        //Individually checking signs for error output
        if(!ArithmeticCheck(char1)){
            cout << "Unrecognized arithmetic operator " 
                                << char1 << endl;
        }
        if(!RelationCheck(char2)){
            cout << "Unrecognized relational operator " 
                                << char2 << endl;
        }

        cin >> condition;
        switch (condition) {
            case 'c': breakpoint = 1; break;
            case 'q': breakpoint = 0; break;
        }
    } while (breakpoint != 0);

    //conditioning to avoid divide by 0 
    if(index == 0){
        result = index;
    } else {
        result = ( (double) correctCount/index)*100;
    } //Ending of if-else
    
    cout << correctCount << " of " << index << " = "  << std::setiosflags 
                                (std::ios::showpoint | std::ios::fixed) 
                                << std::setprecision(2) << result 
                                << "%" << endl;

    return 0;
} //Ending of main method