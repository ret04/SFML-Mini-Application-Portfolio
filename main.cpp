#include <iostream>
#include <SFML/Graphics.hpp>
#include "Button.h"
#include "Portfolio.h"
#include "GreenCircle/GreenCircle.h"
#include "BouncingBall/BouncingBall.h"
#include "DigitalAnalogueClock/DigitalAnalogueClock.h"
#include "Calculator/Calculator.h"
#include "ChessGame/ChessGame.h"
#include "PokerAnalysis/PokerAnalysis.h"

int main() {
    srand(time(0));

    sf::RenderWindow window({1024, 760}, "Portfolio");
    window.setFramerateLimit(60);

    Button left("<", 25);
    Button right(">", 25);

    left.setPosition({24, 700});
    right.setPosition({950, 700});

    Portfolio portfolio;

    GreenCircle greenCircle;
    sf::Text gcTitle("Green Circle", Fonts::getFont(ARIAL), 22);
    DigitalAnalogueClock digitalAnalogueClock;
    sf::Text dacTitle("Digital Analogue Clock", Fonts::getFont(ARIAL), 22);
    BouncingBall bouncingBall;
    sf::Text bbTitle("Bouncing Ball", Fonts::getFont(ARIAL), 22);
    PokerAnalysis pokerAnalysis;
    sf::Text paTitle("Poker Analysis", Fonts::getFont(ARIAL), 22);
    Calculator calculator;
    sf::Text calcTitle("Calculator", Fonts::getFont(ARIAL), 22);
    ChessGame chessGame;
    sf::Text cgTitle("Chess Game", Fonts::getFont(ARIAL), 22);

    portfolio.loadProgram(greenCircle);
    portfolio.loadProgram(digitalAnalogueClock);
    portfolio.loadProgram(bouncingBall);
    portfolio.loadProgram(pokerAnalysis);
    portfolio.loadProgram(calculator);
    portfolio.loadProgram(chessGame);

    while(window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (sf::Event::Closed == event.type) {
                window.close();
            }
            (portfolio.getProgram(Button::getIterator()))->eventHandler(window, event);
            left.eventHandler(window, event);
            right.eventHandler(window, event);
        }
        (portfolio.getProgram(Button::getIterator()))->update();
        left.update();
        right.update();
        window.clear(sf::Color(242, 223, 189));
        window.draw(*portfolio.getProgram(Button::getIterator()));
        window.draw(left);
        window.draw(right);
        if(Button::getIterator() == 0){
            gcTitle.setPosition({470, 720});
            window.draw(gcTitle);
        }
        else if(Button::getIterator() == 1){
            dacTitle.setPosition({470, 720});
            window.draw(dacTitle);
        }
        else if(Button::getIterator() == 2){
            bbTitle.setPosition({470, 720});
            window.draw(bbTitle);
        }
        else if(Button::getIterator() == 3){
            paTitle.setPosition({470, 720});
            window.draw(paTitle);
        }
        else if(Button::getIterator() == 4){
            calcTitle.setPosition({470, 720});
            window.draw(calcTitle);
        }
        else if(Button::getIterator() == 5){
            cgTitle.setPosition({470, 720});
            window.draw(cgTitle);
        }
        window.display();
    }
}

//  Point iter to beginning of vector
//while win is open
 //       Event listener
 //         iter -> eventHandle
 //         handle button
  //      iter->update
  //      win.clear
  //      win.draw iter
//`       win.draw iter title
    //    win.draw button
