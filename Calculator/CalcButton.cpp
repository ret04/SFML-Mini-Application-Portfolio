
#include "CalcButton.h"

CalcButton::CalcButton()
: CalcButton("0"){

}

CalcButton::CalcButton(const std::string &text)
: CalcButton(text, 10.f){

}

CalcButton::CalcButton(const std::string &text, float radius)
: CalcButton(text, radius, Fonts::getFont(OPEN_SANS)){


}

CalcButton::CalcButton(const std::string& text, float radius, sf::Font& font)
: defaultColor(80,80,80){

    setupCircle(radius);
    setupText(text, font);

}

CalcButton::CalcButton(const std::string& text, float radius, sf::Font& font, sf::Color color){

    defaultColor = color;
    setupCircle(radius);
    setupText(text, font);

}

void CalcButton::setRadius(float radius) {
    circle.setRadius(radius);
    setCharacterSize();
    Position::centerText(circle, text);

}

void CalcButton::setFont(const sf::Font &font) {
    text.setFont(font);

}

void CalcButton::setText(const std::string &text) {
    this->text.setString(text);
    Position::centerText(circle, this->text);

}

sf::FloatRect CalcButton::getGlobalBounds() const{
    return circle.getGlobalBounds();
}

std::string CalcButton::getText() {
    return this->text.getString();
}

void CalcButton::setClickColor(sf::Color color) {
    this->clickColor = color;

}

void CalcButton::setDefaultColor(sf::Color color) {
    this->defaultColor = color;
}

void CalcButton::setPosition(sf::Vector2f position) {
    circle.setPosition(position);

}

void CalcButton::eventHandler(sf::RenderWindow &window, sf::Event event) {
    if(MouseEvents::isClicked(circle, window)){
        enableState(CLICKED);
    }
    else{
        disableState(CLICKED);
    }
}

void CalcButton::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    if(!getState(HIDDEN)){
        states.transform = circle.getTransform();
        window.draw(circle);
        window.draw(text, states);
    }

}

void CalcButton::setupText(const std::string& text, sf::Font& font){
    this->text.setFont(font);
    this->text.setString(text);
    setCharacterSize();
    Position::centerText(circle, this->text);
}

void CalcButton::setupCircle(float radius){
    this->circle.setRadius(radius);
    this->circle.setFillColor(defaultColor);

}

void CalcButton::update(){
    if(getState(CLICKED)){
        this->circle.setFillColor(clickColor);
    }
    else{
        circle.setFillColor(defaultColor);
    }
}

void CalcButton::setCharacterSize(){
    unsigned int size = (2.f/3) * (2 * this->circle.getRadius());
    this->text.setCharacterSize(size);
}
