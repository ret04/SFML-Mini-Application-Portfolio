#ifndef LINKEDLIST_NOV_13_RPN_H
#define LINKEDLIST_NOV_13_RPN_H

#include <iostream>
#include <stack>

class RPN {

    //static std::stack<double> stack;

private:

    //static double evaluate(char left, char op, char right);

public:
    void run();
    std::string getName();

    static double evaluate(const std::string& postfixExpression);

};


#endif //LINKEDLIST_NOV_13_RPN_H
