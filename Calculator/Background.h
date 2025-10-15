
#ifndef CALCULATOR_BACKGROUND_H
#define CALCULATOR_BACKGROUND_H
#include <SFML/Graphics.hpp>
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/States.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/MouseEvents.h"


class Background : public sf::RectangleShape, public States {
private:
    void hover();

public:
    Background();
    Background(sf::Vector2f size);

    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void update();

};


#endif //CALCULATOR_BACKGROUND_H
