//
// Created by Ryan Takeshita on 12/4/23.
//

#ifndef CHESSGAME_TILE_H
#define CHESSGAME_TILE_H

#include <SFML/Graphics.hpp>

#include "BoardCord.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/States.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/MouseEvents.h"
#include <iostream>


class Tile : public sf::RectangleShape, public States {

private:

    sf::Color tileColor;
    sf::Vector2f tileSize;
    sf::Vector2f position;

    BoardCord cord;
    bool hasAPiece;

public:

    Tile();
    Tile(sf::Color color, sf::Vector2f size, sf::Vector2f pos, BoardCord cord);

    void setTileColor(sf::Color color);
    sf::Color getTileColor();

    void setTileSize(sf::Vector2f size);
    sf::Vector2f getTileSize();

    void setTilePosition(sf::Vector2f pos);
    sf::Vector2f getTilePosition();

    void setCord(BoardCord cord);
    BoardCord getCord();

    void setPiecePresence(bool condition);
    bool getPiecePresence();

    void printTileCord();

    void eventHandler(sf::RenderWindow& window, sf::Event event);

};


#endif //CHESSGAME_TILE_H
