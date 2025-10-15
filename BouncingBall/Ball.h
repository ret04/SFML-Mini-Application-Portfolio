#ifndef BOUNCINGBALLPROJECT_BALL_H
#define BOUNCINGBALLPROJECT_BALL_H

#include "Velocity.h"
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Fonts.h"

//--------------------------------------------------------------------------------------//

class Ball : public sf::Drawable
{

private:
    sf::CircleShape bigCircle;
    sf::Color bigCircleColor;
    float bigCircleRadius;
    sf::Vector2u bigCirclePosition;
    sf::FloatRect bigBallBoundaries; // getLocalBounds


    sf::CircleShape smallCircle;
    sf::Color smallCircleColor = sf::Color::White;
    float smallCircleRadius;  //will depend on big ball
    sf::Vector2u smallCirclePosition; //will depend on big ball

    sf::Font font;
    sf::Text ballNumberText;
    int ballNumber;
    int previousNumber;

    velocity ballVelocity = {1, 1};

    sf::Vector2u WindowBounds;


public:
    Ball();
    Ball(float radius, sf::Color color, sf::Vector2u WindowBounds);

    void setRadius(float r);
    void setColor(sf::Color c);
    void setWindowBounds(sf::Vector2u wb);

    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

    void move();

    void bounce();

    void changeBall();


};

//--------------------------------------------------------------------------------------//


#endif