
#ifndef CALCULATOR_CALCBUTTON_H
#define CALCULATOR_CALCBUTTON_H
#include <SFML/Graphics.hpp>
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Fonts.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/MouseEvents.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/States.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Position.h"


class CalcButton : public sf::Drawable, public States {

private:

    sf::CircleShape circle;
    sf::Text text;
    sf::Color defaultColor;
    sf::Color clickColor;

    void setupText(const std::string& text, sf::Font& font);
    void setupCircle(float radius);
    void setCharacterSize();

public:

    CalcButton();
    CalcButton(const std::string& text);
    CalcButton(const std::string& text, float radius);
    CalcButton(const std::string& text, float radius, sf::Font& font);
    CalcButton(const std::string& text, float radius, sf::Font& font, sf::Color);

    void setRadius(float radius);

    void setFont(const sf::Font& font);

    void setText(const std::string& text);
    std::string getText();

    void setClickColor(sf::Color color);
    void setDefaultColor(sf::Color color);

    sf::FloatRect getGlobalBounds() const;

    void setPosition(sf::Vector2f position);

    void eventHandler(sf::RenderWindow& window, sf::Event event);

    void update();

    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

};


#endif //CALCULATOR_CALCBUTTON_H
