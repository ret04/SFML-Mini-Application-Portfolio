//
// Created by Ryan Takeshita on 11/13/23.
//

#include "RPN.h"
#include <iostream>
#include <stack>
#include <cmath>

void RPN::run(){
    std::string expression;
    std::cout << "Please enter the RPN expression you'd like to evaluate: ";
    std::cin >> expression;
    std::cout << std::endl;
    std::cout << "The solution is: " << evaluate(expression);
}

std::string RPN::getName(){
    return "RPN";
}

double RPN::evaluate(const std::string& postfixExpression) {

    std::stack<double> stack;

    int numToPush;
    double left;
    double right;
    double newNum;
    double finalNum;

    for (int i = 0; i < postfixExpression.length(); i++) {
        if (isdigit(postfixExpression[i]) == true) {
            numToPush = (int) ((postfixExpression[i]) - 48);
            stack.push(numToPush);
        } else {
            if(postfixExpression[i] == '*'){
                right = stack.top();
                stack.pop();
                left = stack.top();
                stack.pop();
                newNum = left * right;
                stack.push(newNum);
            }
            else if(postfixExpression[i] == '/'){
                right = stack.top();
                stack.pop();
                left = stack.top();
                stack.pop();
                newNum = left / right;
                stack.push(newNum);
            }
            else if(postfixExpression[i] == '+'){
                right = stack.top();
                stack.pop();
                left = stack.top();
                stack.pop();
                newNum = left + right;
                stack.push(newNum);
            }
            else if(postfixExpression[i] == '-'){
                right = stack.top();
                stack.pop();
                left = stack.top();
                stack.pop();
                newNum = left - right;
                stack.push(newNum);
            }
            else if(postfixExpression[i] == '^'){
                right = stack.top();
                stack.pop();
                left = stack.top();
                stack.pop();
                newNum = pow(left, right);
                stack.push(newNum);
            }
        }
    }
    finalNum = stack.top();
    return finalNum;
}

/*
double RPN::evaluate(char left, char op, char right){

    double newNum;

    if(op == '*'){
        newNum = left * right;
        return newNum;
    }
    else if(op == '/'){
        newNum = left / right;
        return newNum;
    }
    else if(op == '+'){
        newNum = left + right;
        return newNum;
    }
    else if(op == '-'){
        newNum = left - right;
        return newNum;
    }
    else if(op == '^'){
        newNum = pow(left, right);
        return newNum;
    }
}
*/