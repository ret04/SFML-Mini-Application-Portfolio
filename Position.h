
#ifndef CALCULATOR_POSITION_H
#define CALCULATOR_POSITION_H

#include <SFML/Graphics.hpp>
#include <cmath>

class Position {

public:

    template<typename T, typename S>
    static void left(const T& constObj, S& obj, float spacing = 0);

    template<typename T, typename S>
    static void right(const T& constObj, S& obj, float spacing = 0);

    template<typename T, typename S>
    static void bottom(const T& constObj, S& obj, float spacing = 0);

    template<typename T, typename S>
    static void top(const T& constObj, S& obj, float spacing = 0);

    template<typename T, typename S>
    static void center(const T &constObj, S &obj);

    template<typename T>
    static void centerText(const T &obj, sf::Text &text);

    //TODO right, top, bottom, center, and we'll get CenterText

};

#include "Position.cpp"
#endif //CALCULATOR_POSITION_H
