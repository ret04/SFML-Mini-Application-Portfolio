//
// Created by Ryan Takeshita on 12/5/23.
//

#ifndef CHESSGAME_CHESSPIECE_H
#define CHESSGAME_CHESSPIECE_H

#include "PieceType.h"
#include "PieceColor.h"
#include "ChessPieceGraphic.h"
#include "image.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/States.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/MouseEvents.h"


class ChessPiece : public sf::Drawable, public States {

private:

    PieceType type;
    PieceColor color;
    ChessPieceGraphic pieceGraphic;

public:
    ChessPiece();
    ChessPiece(PieceColor, PieceType);

    void setPosition(sf::Vector2f);
    void scale(sf::Vector2f);

    PieceType getPieceType() const;
    void setPieceType(PieceType type);

    PieceColor getPieceColor() const;
    void setPieceColor(PieceColor color);

    void eventHandler(sf::RenderWindow &window, sf::Event event);

    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

};


#endif //CHESSGAME_CHESSPIECE_H
