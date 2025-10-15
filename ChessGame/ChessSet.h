//
// Created by Ryan Takeshita on 12/7/23.
//

#ifndef CHESSGAME_CHESSSET_H
#define CHESSGAME_CHESSSET_H

#include "ChessPiece.h"
#include "Board.h"
#include "image.h"
#include <vector>


class ChessSet : public sf::Drawable {

private:

    std::vector<ChessPiece> whitePieces;
    std::vector<ChessPiece> blackPieces;
    Board board;

    ChessPiece* pieceToMove;
    Tile* tileToMoveTo;

    ChessPiece* secondPiece;
    int pieceNum;

    bool tileSelected;
    bool pieceSelected;
    bool scanForTile;

public:

    ChessSet();

    void setupPieces();

    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void update();

    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;



};


#endif //CHESSGAME_CHESSSET_H
