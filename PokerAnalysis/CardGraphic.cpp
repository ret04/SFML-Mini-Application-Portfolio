
#include "CardGraphic.h"

CardGraphic::CardGraphic()
: CardGraphic(ACE, CLUBS)
{

}

CardGraphic::CardGraphic(Rank rank, Suit suit)
: CardGraphic(pokerImage::getImage(), rank, suit)
{

}

CardGraphic::CardGraphic(sf::Texture& image, Rank rank, Suit suit)
{
    sf::IntRect  intRect;
    intRect.width = image.getSize().x / 13;
    intRect.height = image.getSize().y / 4;
    if(rank == ACE){
        intRect.left = intRect.width * (0);
    }
    else{
        intRect.left = intRect.width * (rank - 1);
    }
    intRect.top = intRect.height * suit;
    sprite.setTexture(image);
    sprite.setTextureRect(intRect);

}

void CardGraphic::setPosition(sf::Vector2f pos){
    sprite.setPosition(pos);
}

sf::FloatRect CardGraphic::getGlobalBounds() const{
    return sprite.getGlobalBounds();
}

void CardGraphic::draw(sf::RenderTarget& window, sf::RenderStates states) const{
    window.draw(sprite);
}