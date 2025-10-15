//
// Created by Ryan Takeshita on 12/13/23.
//

#include "DigitalAnalogueClock.h"

DigitalAnalogueClock::DigitalAnalogueClock() {
    setName("Digital Analogue Clock");
    title.setCharacterSize(18);
    title.setFont(Fonts::getFont(ARIAL));
    title.setPosition({490, 740});
    title.setString(name);
    clockFace.setRadius(760/2);
    clockFace.setFillColor(sf::Color(204, 204, 204));

    sf::FloatRect bounds = clockFace.getGlobalBounds();
    xCenter = bounds.left + bounds.width / 2;
    yCenter = bounds.top + bounds. height / 2;
    hourHand = createHand({clockFace.getRadius() * .55f, 7.f}, {xCenter, yCenter}, sf::Color::Black);
    hourHand.rotate(270);
    minuteHand = createHand({clockFace.getRadius() * .7f, 7.f}, {xCenter, yCenter}, sf::Color::Black);
    minuteHand.rotate(270);
    secondHand = createHand({clockFace.getRadius() * .75f, 3.f}, {xCenter, yCenter}, sf::Color::Red);
    secondHand.rotate(270);

}

sf::RectangleShape DigitalAnalogueClock::createHand(sf::Vector2f size, sf::Vector2f position, sf::Color color){
    sf::RectangleShape hand;
    hand.setSize(size);
    hand.setFillColor(color);
    hand.setPosition(position);
    return hand;
}

void DigitalAnalogueClock::setName(std::string n) {
    this->name = n;

}

std::string DigitalAnalogueClock::getName() {
    return this->name;
}

sf::Text DigitalAnalogueClock::getText(){
    return title;
}

void DigitalAnalogueClock::eventHandler(sf::RenderWindow &window, sf::Event event) {

}

void DigitalAnalogueClock::update() {
    hourHand.rotate(0.00014);
    minuteHand.rotate(0.0017);
    secondHand.rotate(0.1);
}

void DigitalAnalogueClock::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(clockFace);
    window.draw(hourHand);
    window.draw(minuteHand);
    window.draw(secondHand);
}
