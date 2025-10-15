//
// Created by Ryan Takeshita on 12/4/23.
//

#include "Tile.h"

Tile::Tile()
{}

Tile::Tile(sf::Color color, sf::Vector2f size, sf::Vector2f pos, BoardCord cord) {
    setTileColor(color);
    setTileSize(size);
    setTilePosition(pos);
    setCord(cord);
}

void Tile::setTileColor(sf::Color color) {
    this->tileColor = color;
    setFillColor(color);
}

sf::Color Tile::getTileColor() {
    return this->tileColor;
}

void Tile::setTileSize(sf::Vector2f size) {
    this->tileSize = size;
    setSize(size);
}

sf::Vector2f Tile::getTileSize() {
    return this->tileSize;
}

void Tile::setTilePosition(sf::Vector2f pos){
    this->position = pos;
    setPosition(pos);
}

sf::Vector2f Tile::getTilePosition(){
    return this->position;

}

void Tile::setCord(BoardCord c) {
    this->cord = c;
}

BoardCord Tile::getCord() {
    return this->cord;
}

void Tile::setPiecePresence(bool condition) {
    this->hasAPiece = condition;
}

bool Tile::getPiecePresence() {
    return this->hasAPiece;
}

void Tile::printTileCord() {
    std::cout << this->cord.letter << this->cord.number;
}

void Tile::eventHandler(sf::RenderWindow& window, sf::Event event){
    if(MouseEvents::isClicked(*this, window)){
        enableState(CLICKED);
    }
    else{
        disableState(CLICKED);
    }
}
