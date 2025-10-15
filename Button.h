
#ifndef CALCULATOR_BUTTON_H
#define CALCULATOR_BUTTON_H
#include <SFML/Graphics.hpp>
#include "Fonts.h"
#include "MouseEvents.h"
#include "States.h"
#include "Position.h"


class Button : public sf::Drawable, public States {

private:

    sf::CircleShape circle;
    sf::Text text;
    sf::Color defaultColor = sf::Color(82, 82, 82);
    sf::Color clickColor = sf::Color(158, 158, 158);

    void setupText(const std::string& text, sf::Font& font);
    void setupCircle(float radius);
    void setCharacterSize();

public:
    static inline int iterator = 0;

    Button();
    Button(const std::string& text);
    Button(const std::string& text, float radius);
    Button(const std::string& text, float radius, sf::Font& font);

    void setRadius(float radius);

    void setFont(const sf::Font& font);

    void setText(const std::string& text);
    std::string getText();

    void setClickColor(sf::Color color);
    void setDefaultColor(sf::Color color);

    void setPosition(sf::Vector2f position);

    void eventHandler(sf::RenderWindow& window, sf::Event event);

    void update();

    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

    static int getIterator();

};


#endif //CALCULATOR_BUTTON_H
