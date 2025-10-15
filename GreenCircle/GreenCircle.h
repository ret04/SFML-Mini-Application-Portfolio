//
// Created by Ryan Takeshita on 12/11/23.
//

#ifndef SFMLTEST_GREENCIRCLE_H
#define SFMLTEST_GREENCIRCLE_H
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Program.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Fonts.h"


class GreenCircle : public Program {

private:
    sf::CircleShape circle;

    sf::Color fillColor;

    std::string name;
    sf::Text title;

public:
    GreenCircle();

    void setName(std::string n);

    virtual std::string getName();
    virtual sf::Text getText();
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);
    virtual void update();
    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

};


#endif //SFMLTEST_GREENCIRCLE_H
