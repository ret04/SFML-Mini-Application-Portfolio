//
// Created by Ryan Takeshita on 11/16/23.
//

#ifndef CALCULATOR_MOUSEEVENTS_H
#define CALCULATOR_MOUSEEVENTS_H

#include <SFML/Graphics.hpp>

namespace MouseEvents {

    template <typename T>
    bool isHovered(const T& obj, sf::RenderWindow& window);

    template<typename T>
    bool isClicked(const T& obj, sf::RenderWindow& window);

} // MouseEvents

#include "MouseEvents.cpp"
#endif //CALCULATOR_MOUSEEVENTS_H
