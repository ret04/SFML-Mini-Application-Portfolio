//
// Created by Ryan Takeshita on 12/5/23.
//

#ifndef CHESSGAME_CHESSPIECEGRAPHIC_H
#define CHESSGAME_CHESSPIECEGRAPHIC_H

#include <SFML/Graphics.hpp>
#include "image.h"
#include "PieceColor.h"
#include "PieceType.h"


class ChessPieceGraphic : public sf::Drawable{

private:
    sf::Sprite sprite;

public:
    ChessPieceGraphic();
    //ChessPieceGraphic(const Card& card);
    //ChessPieceGraphic(PieceColor color, PieceType type);
    ChessPieceGraphic(sf::Texture& image, PieceColor color, PieceType type);

    void setupPiece(sf::Texture&, PieceColor, PieceType);

    sf::FloatRect getGlobalBounds() const;

    void setPosition(sf::Vector2f pos);
    void scale(sf::Vector2f factor);

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

};


#endif //CHESSGAME_CHESSPIECEGRAPHIC_H
