
#ifndef CALCULATOR_DISPLAY_H
#define CALCULATOR_DISPLAY_H
#include <SFML/Graphics.hpp>
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Fonts.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/States.h"

class Display : public sf::Drawable, public States {

private:

    sf::RectangleShape box;
    sf::Text text;
    int limit;

    Display(sf::Vector2f size, sf::Font& font, unsigned int characterSize, sf::Color color, sf::Vector2f position, int limit);

public:

    Display();
    Display(sf::Vector2f size, sf::Font& font, unsigned int characterSize);

    void show();
    void clear();

    void setText(const std::string& text);
    std::string getText();

    void setCharacterLimit(int limit);
    void setCharacterSize(unsigned int size);

    void setColor(sf::Color color);

    void setFont(const sf::Font& font);

    void setSize(sf::Vector2f size);

    void setPosition(sf::Vector2f pos);

    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

};


#endif //CALCULATOR_DISPLAY_H
