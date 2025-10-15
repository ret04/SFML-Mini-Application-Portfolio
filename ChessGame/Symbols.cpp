//
// Created by Ryan Takeshita on 12/5/23.
//

#include "Symbols.h"

Symbols::Symbols() {
    this->font.loadFromFile("OpenSans-Bold.ttf");

    a.setFont(font);
    a.setCharacterSize(charSize);
    a.setFillColor(sf::Color::White);
    a.setString("A");

    b.setFont(font);
    b.setCharacterSize(charSize);
    b.setFillColor(sf::Color::White);
    b.setString("B");

    c.setFont(font);
    c.setCharacterSize(charSize);
    c.setString("C");
    c.setFillColor(sf::Color::White);

    d.setFont(font);
    d.setCharacterSize(charSize);
    d.setString("D");
    d.setFillColor(sf::Color::White);

    e.setFont(font);
    e.setCharacterSize(charSize);
    e.setFillColor(sf::Color::White);
    e.setString("E");

    f.setFont(font);
    f.setCharacterSize(charSize);
    f.setFillColor(sf::Color::White);
    f.setString("F");

    g.setFont(font);
    g.setCharacterSize(charSize);
    g.setFillColor(sf::Color::White);
    g.setString("G");

    h.setFont(font);
    h.setCharacterSize(charSize);
    h.setFillColor(sf::Color::White);
    h.setString("H");

    one.setFont(font);
    one.setCharacterSize(charSize);
    one.setFillColor(sf::Color::White);
    one.setString("1");

    two.setFont(font);
    two.setCharacterSize(charSize);
    two.setFillColor(sf::Color::White);
    two.setString("2");

    three.setFont(font);
    three.setCharacterSize(charSize);
    three.setFillColor(sf::Color::White);
    three.setString("3");

    four.setFont(font);
    four.setCharacterSize(charSize);
    four.setFillColor(sf::Color::White);
    four.setString("4");

    five.setFont(font);
    five.setCharacterSize(charSize);
    five.setFillColor(sf::Color::White);
    five.setString("5");

    six.setFont(font);
    six.setCharacterSize(charSize);
    six.setFillColor(sf::Color::White);
    six.setString("6");

    seven.setFont(font);
    seven.setCharacterSize(charSize);
    seven.setFillColor(sf::Color::White);
    seven.setString("7");

    eight.setFont(font);
    eight.setCharacterSize(charSize);
    eight.setFillColor(sf::Color::White);
    eight.setString("8");
}

void Symbols::setTextPosition(std::string symbol, sf::Vector2f pos){
    if(symbol == "A"){
        a.setPosition(pos);
    }
    else if(symbol == "B"){
        b.setPosition(pos);
    }
    else if(symbol == "C"){
        c.setPosition(pos);
    }
    else if(symbol == "D"){
        d.setPosition(pos);
    }
    else if(symbol == "E"){
        e.setPosition(pos);
    }
    else if(symbol == "F"){
        f.setPosition(pos);
    }
    else if(symbol == "G"){
        g.setPosition(pos);
    }
    else if(symbol == "H"){
        h.setPosition(pos);
    }
    else if(symbol == "1") {
        one.setPosition(pos);
    }
    else if(symbol == "2") {
        two.setPosition(pos);
    }
    else if(symbol == "3") {
        three.setPosition(pos);
    }
    else if(symbol == "4") {
        four.setPosition(pos);
    }
    else if(symbol == "5") {
        five.setPosition(pos);
    }
    else if(symbol == "6") {
        six.setPosition(pos);
    }
    else if(symbol == "7") {
        seven.setPosition(pos);
    }
    else if(symbol == "8") {
        eight.setPosition(pos);
    }
}

sf::Text Symbols::getTextSymbol(std::string symbol) const {
    if(symbol == "A"){
        return this->a;
    }
    else if(symbol == "B"){
        return this->b;
    }
    else if(symbol == "C"){
        return this->c;
    }
    else if(symbol == "D"){
        return this->d;
    }
    else if(symbol == "E"){
        return this->e;
    }
    else if(symbol == "F"){
        return this->f;
    }
    else if(symbol == "G"){
        return this->g;
    }
    else if(symbol == "H"){
        return this->h;
    }
    else if(symbol == "1") {
        return this->one;
    }
    else if(symbol == "2") {
        return this->two;
    }
    else if(symbol == "3") {
        return this->three;
    }
    else if(symbol == "4") {
        return this->four;
    }
    else if(symbol == "5") {
        return this->five;
    }
    else if(symbol == "6") {
        return this->six;
    }
    else if(symbol == "7") {
        return this->seven;
    }
    else if(symbol == "8") {
        return this->eight;
    }
}
