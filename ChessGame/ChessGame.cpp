//
// Created by Ryan Takeshita on 12/14/23.
//

#include "ChessGame.h"

ChessGame::ChessGame(){
    setName("Chess");
    title.setCharacterSize(18);
    title.setFont(Fonts::getFont(ARIAL));
    title.setPosition({490, 740});
    title.setString(name);
}

void ChessGame::setName(std::string n) {
    this->name = n;

}

std::string ChessGame::getName() {
    return this->name;
}

sf::Text ChessGame::getText(){
    return title;
}

void ChessGame::eventHandler(sf::RenderWindow &window, sf::Event event) {
    set.eventHandler(window, event);

}

void ChessGame::update() {
    set.update();
}

void ChessGame::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(set);
}
