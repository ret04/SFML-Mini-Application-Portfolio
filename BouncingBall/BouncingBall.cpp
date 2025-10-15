//
// Created by Ryan Takeshita on 12/13/23.
//

#include "BouncingBall.h"

BouncingBall::BouncingBall() {
    setName("Bouncing Ball");
    title.setCharacterSize(18);
    title.setFont(Fonts::getFont(ARIAL));
    title.setPosition({490, 740});
    title.setString(name);
    ball.setRadius(45);
    ball.setColor(sf::Color::Black);
    ball.setWindowBounds({1024, 760});

}

void BouncingBall::setName(std::string n) {
    this->name = n;

}

std::string BouncingBall::getName() {
    return this->name;
}

sf::Text BouncingBall::getText(){
    return title;
}

void BouncingBall::eventHandler(sf::RenderWindow &window, sf::Event event) {

}

void BouncingBall::update() {
    ball.move();
    ball.bounce();

}

void BouncingBall::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(ball);
}
