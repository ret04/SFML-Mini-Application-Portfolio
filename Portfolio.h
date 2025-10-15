//
// Created by Ryan Takeshita on 12/11/23.
//

#ifndef FINALPORTFOLIO_PORTFOLIO_H
#define FINALPORTFOLIO_PORTFOLIO_H
#include <vector>
#include "Program.h"


class Portfolio {

private:
    std::vector<Program*> programs;

public:
    void loadProgram(Program& program);
    Program* getProgram(int i);


};


#endif //FINALPORTFOLIO_PORTFOLIO_H
