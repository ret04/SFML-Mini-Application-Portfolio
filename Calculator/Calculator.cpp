
#include "Calculator.h"

Calculator::Calculator() {

    background.setPosition({40, 10});
    background.setSize({320, 540});
    background.setFillColor(sf::Color::Black);
    display.setSize({background.getGlobalBounds().width, 110});
    display.setColor(sf::Color::Black);
    display.setPosition({background.getPosition().x, background.getPosition().y });
    setupButtons();

    setName("Calculator");
    title.setCharacterSize(18);
    title.setFont(Fonts::getFont(ARIAL));
    title.setPosition({490, 740});
    title.setString(name);

}

void Calculator::setupButtons(){
    float buttonRadius = 35;

    buttons.push_back(CalcButton("C", buttonRadius, Fonts::getFont(ARIAL), sf::Color(219, 219, 210)));
    buttons[0].setPosition({background.getPosition().x + 10, background.getPosition().y + 140});
    buttons.push_back(CalcButton("7", buttonRadius, Fonts::getFont(ARIAL)));
    Position::bottom(buttons[0],buttons[1], 5);
    buttons.push_back(CalcButton("8", buttonRadius, Fonts::getFont(ARIAL)));
    Position::right(buttons[1], buttons[2], 5);
    buttons.push_back(CalcButton("9", buttonRadius, Fonts::getFont(ARIAL)));
    Position::right(buttons[2], buttons[3], 5);
    buttons.push_back(CalcButton("^", buttonRadius, Fonts::getFont(ARIAL), sf::Color(255, 198, 52)));
    Position::top(buttons[3],buttons[4], 5);
    buttons.push_back(CalcButton("+", buttonRadius, Fonts::getFont(ARIAL), sf::Color(255, 198, 52)));
    Position::right(buttons[4], buttons[5], 5);
    buttons.push_back(CalcButton("-", buttonRadius, Fonts::getFont(ARIAL), sf::Color(255, 198, 52)));
    Position::bottom(buttons[5],buttons[6], 5);
    buttons.push_back(CalcButton("*", buttonRadius, Fonts::getFont(ARIAL), sf::Color(255, 198, 52)));
    Position::bottom(buttons[6],buttons[7], 5);
    buttons.push_back(CalcButton("6", buttonRadius, Fonts::getFont(ARIAL)));
    Position::left(buttons[7],buttons[8], 5);
    buttons.push_back(CalcButton("5", buttonRadius, Fonts::getFont(ARIAL)));
    Position::left(buttons[8],buttons[9], 5);
    buttons.push_back(CalcButton("4", buttonRadius, Fonts::getFont(ARIAL)));
    Position::left(buttons[9],buttons[10], 5);
    buttons.push_back(CalcButton("1", buttonRadius, Fonts::getFont(ARIAL)));
    Position::bottom(buttons[10],buttons[11], 5);
    buttons.push_back(CalcButton("2", buttonRadius, Fonts::getFont(ARIAL)));
    Position::right(buttons[11], buttons[12], 5);
    buttons.push_back(CalcButton("3", buttonRadius, Fonts::getFont(ARIAL)));
    Position::right(buttons[12], buttons[13], 5);
    buttons.push_back(CalcButton("/", buttonRadius, Fonts::getFont(ARIAL), sf::Color(255, 198, 52)));
    Position::right(buttons[13], buttons[14], 5);
    buttons.push_back(CalcButton("=", buttonRadius, Fonts::getFont(ARIAL), sf::Color(255, 198, 52)));
    Position::bottom(buttons[14], buttons[15],5);
    buttons.push_back(CalcButton("0", buttonRadius, Fonts::getFont(ARIAL)));
    Position::bottom(buttons[11], buttons[16],5);
}

void Calculator::eventHandler(sf::RenderWindow &window, sf::Event event) {
    for(int i = 0; i < buttons.size(); i++){
        buttons[i].eventHandler(window, event);
        buttons[i].update();
        if(buttons[i].getState(CLICKED)){
            if(i == 0){
                display.clear();
            }
            else if(i == 15){
                display.setText(std::to_string(RPN::evaluate(display.getText())));
            }
            else{
                display.setText(display.getText() + buttons[i].getText());
            }
        }
    }
}

void Calculator::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(background);
    window.draw(display);
    for(int b = 0; b < buttons.size(); b++){
        window.draw(buttons[b]);
    }

}

void Calculator::setName(std::string n){
    this->name = n;
}

std::string Calculator::getName(){
    return this->name;
}

sf::Text Calculator::getText(){
    return title;
}

void Calculator::update(){

}
