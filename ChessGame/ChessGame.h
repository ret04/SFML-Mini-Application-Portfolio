//
// Created by Ryan Takeshita on 12/14/23.
//

#ifndef FINALPORTFOLIO_CHESSGAME_H
#define FINALPORTFOLIO_CHESSGAME_H

#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Program.h"
#include "ChessSet.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Fonts.h"


class ChessGame : public Program {

private:

    ChessSet set;
    std::string name;
    sf::Text title;

public:
    ChessGame();

    void setName(std::string n);

    virtual std::string getName();
    virtual sf::Text getText();
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);
    virtual void update();
    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

};


#endif //FINALPORTFOLIO_CHESSGAME_H
