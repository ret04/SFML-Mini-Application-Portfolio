//
// Created by Ryan Takeshita on 12/5/23.
//

#ifndef CHESSGAME_SYMBOLS_H
#define CHESSGAME_SYMBOLS_H

#include <SFML/Graphics.hpp>

class Symbols {

private:
    sf::Font font;

    unsigned int charSize = 28;


    sf::Text a; sf::Text one;
    sf::Text b; sf::Text two;
    sf::Text c; sf::Text three;
    sf::Text d; sf::Text four;
    sf::Text e; sf::Text five;
    sf::Text f; sf::Text six;
    sf::Text g; sf::Text seven;
    sf::Text h; sf::Text eight;

public:
    Symbols();

    void setTextPosition(std::string symbol, sf::Vector2f pos);

    sf::Text getTextSymbol(std::string symbol) const;


};


#endif //CHESSGAME_SYMBOLS_H
