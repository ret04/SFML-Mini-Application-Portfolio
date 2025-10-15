
#include "Display.h"

// Constructors

Display::Display(sf::Vector2f size, sf::Font &font, unsigned int characterSize, sf::Color color, sf::Vector2f position,
                 int limit) {
    setSize(size);
    setFont(font);
    setCharacterSize(characterSize);
    setColor(color);
    setPosition(position);
    setCharacterLimit(limit);
    text.setPosition(box.getPosition().x + 50, box.getPosition().y + 25);

}

Display::Display()
: Display({200,100}, Fonts::getFont(ARIAL), 24, sf::Color::White, {0,0}, 9){ //TODO after Fonts class is created

}

Display::Display(sf::Vector2f size, sf::Font &font, unsigned int characterSize)
: Display(size, font, characterSize, sf::Color::Black, {0,0}, 9){

}

// Public member functions

void Display::show() {
    //TODO after states is created
    disableState(HIDDEN);
}

void Display::clear() {
    text.setString("");
}

void Display::setText(const std::string &text) {
    this->text.setString(text);

}

std::string Display::getText() {
    return text.getString();
}

void Display::setCharacterLimit(int limit) {
    this->limit - limit;

}

void Display::setCharacterSize(unsigned int size) {
    this->text.setCharacterSize(size);

}

void Display::setColor(sf::Color color) {
    this->box.setFillColor(color);

}

void Display::setFont(const sf::Font &font) {
    this->text.setFont(font);

}

void Display::setSize(sf::Vector2f size) {
    this->box.setSize(size);

}

void Display::setPosition(sf::Vector2f pos) {
    this->box.setPosition(pos);
    //TODO center text with position class

}

// Virtual functions

void Display::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    //TODO after states, draw only if not hidden
    if(!getState(HIDDEN)){
        window.draw(box);
        window.draw(text);
    }
}
