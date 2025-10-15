//
// Created by Ryan Takeshita on 12/4/23.
//

#ifndef CHESSGAME_BOARD_H
#define CHESSGAME_BOARD_H

#include <SFML/Graphics.hpp>
#include "Tile.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Position.h"
#include "Symbols.h"

class Board : public sf::Drawable {

private:

    Tile board[8][8];
    sf::RectangleShape border;
    Symbols lettersAndNums;

public:

    Board();

    void setBorderSize(sf::Vector2f size);
    void setBorderColor(sf::Color color);
    void setBorderPosition(sf::Vector2f pos);

    Tile& getTile(int r, int c);

    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

};


#endif //CHESSGAME_BOARD_H
