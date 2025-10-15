//
// Created by Ryan Takeshita on 12/11/23.
//

#include "GreenCircle.h"

GreenCircle::GreenCircle(){
    setName("Green Cicle");
    title.setCharacterSize(18);
    title.setFont(Fonts::getFont(ARIAL));
    title.setPosition({490, 740});
    title.setString(name);
    circle.setRadius(300.f);
    circle.setFillColor(sf::Color(0, 255, 0));

}

void GreenCircle::setName(std::string n){
    this->name = n;
}


std::string GreenCircle::getName() {
    return this->name;
}

sf::Text GreenCircle::getText(){

}

void GreenCircle::eventHandler(sf::RenderWindow &window, sf::Event event) {

}

void GreenCircle::update() {

}

void GreenCircle::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(circle);

}
