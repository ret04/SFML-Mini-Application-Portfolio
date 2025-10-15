//
// Created by Ryan Takeshita on 10/19/23.
//

#include "pokerImage.h"

sf::Texture pokerImage::texture;

void pokerImage::loadTexture()
{
    texture.loadFromFile("PokerAnalysis/Deck.png");
}

sf::Texture& pokerImage::getImage()
{
    loadTexture();
    return texture;
}
