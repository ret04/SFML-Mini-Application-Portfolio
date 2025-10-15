//
// Created by Ryan Takeshita on 12/4/23.
//

#include "Board.h"

Board::Board(){

    bool checkeredFill;

    for(int r = 0; r < 8; r++){
        if((8-r) % 2 == 0){
            checkeredFill = false;
        }
        else{
            checkeredFill = true;
        }
        for(int c = 0; c < 8; c++){
                if(checkeredFill == false) {
                    board[r][c] = Tile(sf::Color(235, 229, 226), {60, 60}, {0, 0}, {static_cast<BoardLetter>(c), (8 - r)});
                    checkeredFill = true;
                }
                else if (checkeredFill == true) {
                    board[r][c] = Tile(sf::Color(138, 92, 22), {60, 60}, {0, 0}, {static_cast<BoardLetter>(c), (8 - r)});
                    checkeredFill = false;
                }
        }
    }

    setBorderColor(sf::Color(94, 59, 5));
    setBorderSize({600, 600});
    setBorderPosition({70,10});

    for(int r = 0; r < 8; r++){
        for(int c = 0; c < 8; c++){
            if( r == 0 && c == 0){
                board[r][c].setTilePosition({border.getPosition().x + 60, border.getPosition().y + 60});
            }
            else{
                if(c == 0){
                    Position::bottom(board[r-1][c], board[r][c]);
                }
                else{
                    Position::right(board[r][c-1],board[r][c]);
                }
            }
        }
    }

    lettersAndNums.setTextPosition("8", {board[0][0].getPosition().x - 40, board[0][0].getPosition().y + 15});
    lettersAndNums.setTextPosition("7", {board[1][0].getPosition().x - 40, board[1][0].getPosition().y + 15});
    lettersAndNums.setTextPosition("6", {board[2][0].getPosition().x - 40, board[2][0].getPosition().y + 15});
    lettersAndNums.setTextPosition("5", {board[3][0].getPosition().x - 40, board[3][0].getPosition().y + 15});
    lettersAndNums.setTextPosition("4", {board[4][0].getPosition().x - 40, board[4][0].getPosition().y + 15});
    lettersAndNums.setTextPosition("3", {board[5][0].getPosition().x - 40, board[5][0].getPosition().y + 15});
    lettersAndNums.setTextPosition("2", {board[6][0].getPosition().x - 40, board[6][0].getPosition().y + 15});
    lettersAndNums.setTextPosition("1", {board[7][0].getPosition().x - 40, board[7][0].getPosition().y + 15});
    lettersAndNums.setTextPosition("A", {board[7][0].getPosition().x + 16, board[7][0].getPosition().y + 70});
    lettersAndNums.setTextPosition("B", {board[7][1].getPosition().x + 16, board[7][1].getPosition().y + 70});
    lettersAndNums.setTextPosition("C", {board[7][2].getPosition().x + 16, board[7][2].getPosition().y + 70});
    lettersAndNums.setTextPosition("D", {board[7][3].getPosition().x + 16, board[7][3].getPosition().y + 70});
    lettersAndNums.setTextPosition("E", {board[7][4].getPosition().x + 16, board[7][4].getPosition().y + 70});
    lettersAndNums.setTextPosition("F", {board[7][5].getPosition().x + 16, board[7][5].getPosition().y + 70});
    lettersAndNums.setTextPosition("G", {board[7][6].getPosition().x + 16, board[7][6].getPosition().y + 70});
    lettersAndNums.setTextPosition("H", {board[7][7].getPosition().x + 16, board[7][7].getPosition().y + 70});



}

void Board::setBorderSize(sf::Vector2f size){
    this->border.setSize(size);
}

void Board::setBorderColor(sf::Color color){
    this->border.setFillColor(color);
}

void Board::setBorderPosition(sf::Vector2f pos){
    this->border.setPosition(pos);
}

Tile& Board::getTile(int r, int c){
    return board[r][c];
}


void Board::draw(sf::RenderTarget &window, sf::RenderStates states) const{
    window.draw(border);
    for(int r = 0; r < 8; r++) {
        for (int c = 0; c < 8; c++) {
            window.draw(board[r][c]);
        }
    }
    window.draw(lettersAndNums.getTextSymbol("8"));
    window.draw(lettersAndNums.getTextSymbol("7"));
    window.draw(lettersAndNums.getTextSymbol("6"));
    window.draw(lettersAndNums.getTextSymbol("5"));
    window.draw(lettersAndNums.getTextSymbol("4"));
    window.draw(lettersAndNums.getTextSymbol("3"));
    window.draw(lettersAndNums.getTextSymbol("2"));
    window.draw(lettersAndNums.getTextSymbol("1"));
    window.draw(lettersAndNums.getTextSymbol("A"));
    window.draw(lettersAndNums.getTextSymbol("B"));
    window.draw(lettersAndNums.getTextSymbol("C"));
    window.draw(lettersAndNums.getTextSymbol("D"));
    window.draw(lettersAndNums.getTextSymbol("E"));
    window.draw(lettersAndNums.getTextSymbol("F"));
    window.draw(lettersAndNums.getTextSymbol("G"));
    window.draw(lettersAndNums.getTextSymbol("H"));

}


