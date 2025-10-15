//
// Created by Ryan Takeshita on 12/5/23.
//

#include "image.h"

sf::Texture image::texture;

void image::loadTexture()
{
    texture.loadFromFile("ChessGame/chessSprites.png");
}

sf::Texture& image::getImage()
{
    loadTexture();
    return texture;
}
