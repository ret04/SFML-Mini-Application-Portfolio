//
// Created by Ryan Takeshita on 12/5/23.
//

#include "ChessPiece.h"

ChessPiece::ChessPiece(){}

ChessPiece::ChessPiece(PieceColor color, PieceType type){
    this->color = color;
    this->type = type;
    pieceGraphic.setupPiece(image::getImage(), color, type);
    scale({0.45, 0.45});
}


void ChessPiece::setPosition(sf::Vector2f pos){
    pieceGraphic.setPosition(pos);
}

void ChessPiece::scale(sf::Vector2f factor){
    pieceGraphic.scale(factor);
}

PieceType ChessPiece::getPieceType() const {
    return this->type;
}

void ChessPiece::setPieceType(PieceType type) {
    this->type = type;

}

PieceColor ChessPiece::getPieceColor() const {
    return this->color;
}

void ChessPiece::setPieceColor(PieceColor color) {
    this->color = color;
}

void ChessPiece::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if(MouseEvents::isClicked(pieceGraphic, window)){
        enableState(CLICKED);
    }
    else{
        disableState(CLICKED);
    }
}

void ChessPiece::draw(sf::RenderTarget &window, sf::RenderStates states) const{
    window.draw(pieceGraphic);
}
