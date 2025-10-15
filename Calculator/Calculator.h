
#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H
#include <SFML/Graphics.hpp>
#include <vector>
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Program.h"
#include "Background.h"
#include "CalcButton.h"
#include "Display.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Fonts.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Position.h"
#include "RPN.h"

class Calculator : public Program {

private:

    Background background;
    Display display;
    std::vector<CalcButton> buttons;
    sf::Font font;

    std::string name;
    sf::Text title;


public:

    Calculator();

    void setName(std::string);
    virtual std::string getName();
    virtual sf::Text getText();

    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);
    virtual void update();

    void setupButtons();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;


};


#endif //CALCULATOR_CALCULATOR_H
