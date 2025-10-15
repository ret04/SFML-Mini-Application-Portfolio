cmake_minimum_required(VERSION 3.26)
project(FinalPortfolio)

set(CMAKE_CXX_STANDARD 17)

add_executable(FinalPortfolio main.cpp
        Button.h
        StateEnum.h
        States.h
        States.cpp
        Button.cpp
        Position.h
        Position.cpp
        MouseEvents.cpp
        MouseEvents.h
        Fonts.h
        Fonts.cpp
        fontEnum.h
        Portfolio.cpp
        Portfolio.h
        Program.cpp
        Program.h
        Drawable.cpp
        Drawable.h
        Nameable.cpp
        Nameable.h
        EventHandlerable.cpp
        EventHandlerable.h
        Updatable.cpp
        Updatable.h
        GreenCircle/GreenCircle.h
        GreenCircle/GreenCircle.cpp
        BouncingBall/Ball.h
        BouncingBall/Ball.cpp
        BouncingBall/Velocity.h
        BouncingBall/BouncingBall.cpp
        BouncingBall/BouncingBall.h
        DigitalAnalogueClock/DigitalAnalogueClock.cpp
        DigitalAnalogueClock/DigitalAnalogueClock.h
        Calculator/Background.h
        Calculator/Background.cpp
        Calculator/CalcButton.h
        Calculator/CalcButton.cpp
        Calculator/Calculator.cpp
        Calculator/Calculator.h
        Calculator/Display.h
        Calculator/Display.cpp
        Calculator/RPN.cpp
        Calculator/RPN.h
        ChessGame/Tile.h
        ChessGame/Tile.cpp
        ChessGame/Symbols.h
        ChessGame/Symbols.cpp
        ChessGame/PieceColor.h
        ChessGame/PieceType.h
        ChessGame/image.cpp
        ChessGame/image.h
        ChessGame/Board.cpp
        ChessGame/Board.h
        ChessGame/ChessPiece.cpp
        ChessGame/ChessPiece.h
        ChessGame/ChessPieceGraphic.cpp
        ChessGame/ChessPieceGraphic.h
        ChessGame/ChessSet.cpp
        ChessGame/ChessSet.h
        ChessGame/BoardCord.h
        ChessGame/BoardLetter.h
        ChessGame/ChessGame.cpp
        ChessGame/ChessGame.h
        PokerAnalysis/PokerAnalysis.cpp
        PokerAnalysis/PokerAnalysis.h
        PokerAnalysis/Card.cpp
        PokerAnalysis/Card.h
        PokerAnalysis/CardGraphic.cpp
        PokerAnalysis/CardGraphic.h
        PokerAnalysis/CardHand.cpp
        PokerAnalysis/CardHand.h
        PokerAnalysis/CardHandScorer.cpp
        PokerAnalysis/CardHandScorer.h
        PokerAnalysis/Deck.cpp
        PokerAnalysis/Deck.h
        PokerAnalysis/pokerImage.h
        PokerAnalysis/pokerImage.cpp
        PokerAnalysis/ScoreCard.cpp
        PokerAnalysis/ScoreCard.h
        PokerAnalysis/Rank.h
        PokerAnalysis/Scores.h
        PokerAnalysis/Suit.h
)

target_link_libraries(FinalPortfolio sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
