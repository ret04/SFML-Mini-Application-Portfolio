//
// Created by Ryan Takeshita on 12/13/23.
//

#ifndef FINALPORTFOLIO_BOUNCINGBALL_H
#define FINALPORTFOLIO_BOUNCINGBALL_H

#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Program.h"
#include "Ball.h"


class BouncingBall : public Program {

private:

    Ball ball;
    std::string name;
    sf::Text title;

public:
    BouncingBall();

    void setName(std::string n);

    virtual std::string getName();
    virtual sf::Text getText();
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);
    virtual void update();
    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;


};


#endif //FINALPORTFOLIO_BOUNCINGBALL_H
