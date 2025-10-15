
#ifndef CALCULATOR_POSITION_CPP
#define CALCULATOR_POSITION_CPP

#include "Position.h"

template<typename T, typename S>
void Position::left(const T& constObj, S& obj, float spacing){
    sf::FloatRect cb = constObj.getGlobalBounds();
    sf::FloatRect ob = obj.getGlobalBounds();
    float x = cb.left - spacing - ob.width;
    float y = cb.top;
    obj.setPosition({x,y});
}

template<typename T, typename S>
void Position::right(const T& constObj, S& obj, float spacing){
    sf::FloatRect cb = constObj.getGlobalBounds();
    sf::FloatRect ob = obj.getGlobalBounds();
    float x = cb.left + spacing + ob.width;
    float y = cb.top;
    obj.setPosition({x,y});
}

template<typename T, typename S>
void Position::bottom(const T& constObj, S& obj, float spacing){
    sf::FloatRect cb = constObj.getGlobalBounds();
    sf::FloatRect ob = obj.getGlobalBounds();
    float x = cb.getPosition().x;
    float y = cb.getPosition().y + ob.height + spacing;
    obj.setPosition({x,y});
}

template<typename T, typename S>
void Position::top(const T& constObj, S& obj, float spacing){
    sf::FloatRect cb = constObj.getGlobalBounds();
    sf::FloatRect ob = obj.getGlobalBounds();
    float x = cb.getPosition().x;
    float y = cb.getPosition().y - ob.height - spacing;
    obj.setPosition({x,y});
}

template<typename T, typename S>
void Position::center(const T &constObj, S &obj)
{
    sf::FloatRect cb = constObj.getGlobalBounds();
    sf::Vector2f centerPos = {cb.getPosition().x, cb.getPosition().y};
    obj.setPosition(centerPos);

}

template<typename T>
void Position::centerText(const T &obj, sf::Text &text)
{
    sf::FloatRect textRect = text.getGlobalBounds();
    sf::FloatRect tRect = obj.getGlobalBounds();
    sf::Vector2f center = {textRect.width/2.0f, textRect.height/2.f};
    sf::Vector2f localBounds = {center.x + text.getLocalBounds().left, center.y + text.getLocalBounds().top};
    sf::Vector2f rounded = {std::round(localBounds.x), std::round(localBounds.y)};
    text.setOrigin(rounded);
    text.setPosition({tRect.left + tRect.width/2, tRect.top + tRect.height/2});

}



#endif