//
// Created by Ryan Takeshita on 12/11/23.
//

#include "Portfolio.h"

void Portfolio::loadProgram(Program& program){
    programs.push_back(&program);

}

Program* Portfolio::getProgram(int i){
    return programs[i];

}
