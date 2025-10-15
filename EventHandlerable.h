//
// Created by Ryan Takeshita on 12/11/23.
//

#ifndef FINALPORTFOLIO_EVENTHANDLERABLE_H
#define FINALPORTFOLIO_EVENTHANDLERABLE_H
#include <SFML/Graphics.hpp>


class EventHandlerable {
public:
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event) = 0;

};


#endif //FINALPORTFOLIO_EVENTHANDLERABLE_H
