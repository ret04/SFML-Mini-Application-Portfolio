//
// Created by Ryan Takeshita on 12/7/23.
//

#include "ChessSet.h"

ChessSet::ChessSet(){
    setupPieces();
    pieceToMove = nullptr;
    tileToMoveTo = nullptr;
    pieceSelected = false;
    tileSelected = false;
    scanForTile = false;

}

void ChessSet::setupPieces() {

    for(int i = 0; i < 8; i++){
        whitePieces.push_back(ChessPiece(WHITE, PAWN));
        Position::center(board.getTile(6,i), whitePieces[i]);
    }
    whitePieces.push_back(ChessPiece(WHITE, ROOK));
    Position::center(board.getTile(7,0), whitePieces[8]);
    whitePieces.push_back(ChessPiece(WHITE, KNIGHT));
    Position::center(board.getTile(7,1), whitePieces[9]);
    whitePieces.push_back(ChessPiece(WHITE, BISHOP));
    Position::center(board.getTile(7,2), whitePieces[10]);
    whitePieces.push_back(ChessPiece(WHITE, KING));
    Position::center(board.getTile(7,4), whitePieces[11]);
    whitePieces.push_back(ChessPiece(WHITE, QUEEN));
    Position::center(board.getTile(7,3), whitePieces[12]);
    whitePieces.push_back(ChessPiece(WHITE, BISHOP));
    Position::center(board.getTile(7,5), whitePieces[13]);
    whitePieces.push_back(ChessPiece(WHITE, KNIGHT));
    Position::center(board.getTile(7,6), whitePieces[14]);
    whitePieces.push_back(ChessPiece(WHITE, ROOK));
    Position::center(board.getTile(7,7), whitePieces[15]);

    for(int i = 0; i < 8; i++){
        blackPieces.push_back(ChessPiece(BLACK, PAWN));
        Position::center(board.getTile(1,i),blackPieces[i]);
    }
    blackPieces.push_back(ChessPiece(BLACK, ROOK));
    Position::center(board.getTile(0,0), blackPieces[8]);
    blackPieces.push_back(ChessPiece(BLACK, KNIGHT));
    Position::center(board.getTile(0,1), blackPieces[9]);
    blackPieces.push_back(ChessPiece(BLACK, BISHOP));
    Position::center(board.getTile(0,2), blackPieces[10]);
    blackPieces.push_back(ChessPiece(BLACK, KING));
    Position::center(board.getTile(0,4), blackPieces[11]);
    blackPieces.push_back(ChessPiece(BLACK, QUEEN));
    Position::center(board.getTile(0,3), blackPieces[12]);
    blackPieces.push_back(ChessPiece(BLACK, BISHOP));
    Position::center(board.getTile(0,5), blackPieces[13]);
    blackPieces.push_back(ChessPiece(BLACK, KNIGHT));
    Position::center(board.getTile(0,6), blackPieces[14]);
    blackPieces.push_back(ChessPiece(BLACK, ROOK));
    Position::center(board.getTile(0,7), blackPieces[15]);

}

void ChessSet::eventHandler(sf::RenderWindow& window, sf::Event event){


    if(pieceSelected == false) {
        for (int i = 0; i < whitePieces.size(); i++) {
            whitePieces[i].eventHandler(window, event);
            if (whitePieces[i].getState(CLICKED)) {
                pieceToMove = &whitePieces[i];
                std::cout << "Piece White " << i << " was clicked" << std::endl;
                pieceSelected = true;
            }
        }
    }


    if(pieceSelected == false) {
        for (int i = 0; i < blackPieces.size(); i++) {
            blackPieces[i].eventHandler(window, event);
            if (blackPieces[i].getState(CLICKED)) {
                std::cout << "Piece Black " << i << " was clicked" << std::endl;
                pieceToMove = &blackPieces[i];
                pieceSelected = true;
            }
        }
    }

    if(scanForTile == true) {
        for (int r = 0; r < 8; r++) {
            for (int c = 0; c < 8; c++) {
                board.getTile(r, c).eventHandler(window, event);
                if ((board.getTile(r, c).getState(CLICKED))) {
                    std::cout << "Tile " << r << ", " << c << " was clicked" << std::endl;
                    tileToMoveTo = &board.getTile(r, c);
                    tileSelected = true;
                }
            }
        }
        for (int i = 0; i < whitePieces.size(); i++) {
            whitePieces[i].eventHandler(window, event);
            if (whitePieces[i].getState(CLICKED)) {
                secondPiece = &whitePieces[i];
                pieceNum = i;
                std::cout << "Piece White " << i << " was clicked" << std::endl;
            }
        }
        for (int i = 0; i < blackPieces.size(); i++) {
            blackPieces[i].eventHandler(window, event);
            if (blackPieces[i].getState(CLICKED)) {
                secondPiece = &blackPieces[i];
                pieceNum = i;
                std::cout << "Piece Black " << i << " was clicked" << std::endl;
            }
        }
    }

    if(pieceSelected == true){
        scanForTile = true;
    }

}

void ChessSet::update(){

    if(pieceToMove != nullptr && tileToMoveTo != nullptr) {

        /*if(secondPiece != nullptr) {
            PieceColor color1 = (pieceToMove)->getPieceColor();
            PieceColor color2 = (secondPiece)->getPieceColor();
            if(color1 == color2) {
                tileToMoveTo = nullptr;
                pieceToMove = nullptr;
                secondPiece = nullptr;
                pieceSelected = false;
                scanForTile = false;
            }
            else if(color1 != color2){
                Position::center(*(tileToMoveTo), *(pieceToMove));
                std::cout << "Piece has been moved" << std::endl;
                if(color2 == BLACK){
                    blackPieces.erase(blackPieces.begin() + pieceNum);
                }
                else if(color2 == WHITE){
                    whitePieces.erase(whitePieces.begin() + pieceNum);
                }
                tileToMoveTo = nullptr;
                pieceToMove = nullptr;
                secondPiece = nullptr;
                pieceSelected = false;
                scanForTile = false;
            }
        }
        else{*/
            Position::center(*(tileToMoveTo), *(pieceToMove));
            std::cout << "Piece has been moved" << std::endl;
            tileToMoveTo = nullptr;
            pieceToMove = nullptr;
            secondPiece = nullptr;
            pieceSelected = false;
            scanForTile = false;


    }

}

void ChessSet::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(board);
    for(int i = 0; i < whitePieces.size(); i++){
        window.draw(whitePieces[i]);
    }
    for(int i = 0; i < blackPieces.size(); i++){
        window.draw(blackPieces[i]);
    }
}
