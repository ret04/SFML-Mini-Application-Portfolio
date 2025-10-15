
#ifndef FRIENDFUNCTIONS_CARDGRAPHIC_H
#define FRIENDFUNCTIONS_CARDGRAPHIC_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Card.h"
#include "pokerImage.h"

class CardGraphic : public sf::Drawable {
private:
    sf::Sprite sprite;

public:
    CardGraphic();
    CardGraphic(Rank rank, Suit suit);
    CardGraphic(sf::Texture& image, Rank, Suit suit);

    void setPosition(sf::Vector2f pos);

    sf::FloatRect getGlobalBounds() const;

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;



};


#endif //FRIENDFUNCTIONS_CARDGRAPHIC_H
