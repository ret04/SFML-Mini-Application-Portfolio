//
// Created by Ryan Takeshita on 12/11/23.
//

#ifndef FINALPORTFOLIO_NAMEABLE_H
#define FINALPORTFOLIO_NAMEABLE_H
#include <string>
#include <SFML/Graphics.hpp>

class Nameable {

public:
    virtual std::string getName() = 0;
    virtual sf::Text getText() = 0;

};


#endif //FINALPORTFOLIO_NAMEABLE_H
