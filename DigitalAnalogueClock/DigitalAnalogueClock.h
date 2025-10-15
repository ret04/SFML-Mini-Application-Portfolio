//
// Created by Ryan Takeshita on 12/13/23.
//

#ifndef FINALPORTFOLIO_DIGITALANALOGUECLOCK_H
#define FINALPORTFOLIO_DIGITALANALOGUECLOCK_H

#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Program.h"
#include <SFML/Graphics.hpp>
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Fonts.h"


class DigitalAnalogueClock : public Program {

private:
    std::string name;
    sf::Text title;
    sf::CircleShape clockFace;
    sf::RectangleShape hourHand, minuteHand, secondHand;
    float xCenter, yCenter;

public:
    DigitalAnalogueClock();

    sf::RectangleShape createHand(sf::Vector2f size, sf::Vector2f position, sf::Color color);

    void setName(std::string n);

    virtual std::string getName();
    virtual sf::Text getText();
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);
    virtual void update();
    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

};


#endif //FINALPORTFOLIO_DIGITALANALOGUECLOCK_H
