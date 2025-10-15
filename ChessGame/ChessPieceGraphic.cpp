//
// Created by Ryan Takeshita on 12/5/23.
//

#include "ChessPieceGraphic.h"

ChessPieceGraphic::ChessPieceGraphic() {

}

ChessPieceGraphic::ChessPieceGraphic(sf::Texture &image, PieceColor color, PieceType type) {
    sf::IntRect  intRect;
    intRect.width = image.getSize().x / 6;
    intRect.height = image.getSize().y / 2;
    intRect.left = intRect.width * type;
    intRect.top = intRect.height * color;
    sprite.setTexture(image);
    sprite.setTextureRect(intRect);

}

void ChessPieceGraphic::setupPiece(sf::Texture& image, PieceColor color, PieceType type){
    sf::IntRect  intRect;
    intRect.width = image.getSize().x / 6;
    intRect.height = image.getSize().y / 2;
    intRect.left = intRect.width * type;
    if(color == WHITE){
        intRect.top = 0;
    }
    else if(color == BLACK){
        intRect.top = image.getSize().y/2;
    }
    sprite.setTexture(image);
    sprite.setTextureRect(intRect);

}

void ChessPieceGraphic::scale(sf::Vector2f factor){
    sprite.scale(factor);
}

void ChessPieceGraphic::setPosition(sf::Vector2f pos){
    sprite.setPosition(pos);
}

sf::FloatRect ChessPieceGraphic::getGlobalBounds() const{
    return sprite.getGlobalBounds();
}


void ChessPieceGraphic::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(sprite);
}
