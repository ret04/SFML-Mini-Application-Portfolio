#include "Ball.h"

Ball::Ball(){
    this->bigCircle.setRadius(45);
    this->bigCircle.setFillColor(sf::Color::Black);
    this->bigCircle.setPosition(0,0);

    this->smallCircle.setRadius(0.495 * bigCircle.getRadius());
    this->smallCircle.setFillColor(smallCircleColor);
    this->smallCircle.setPosition(bigCircle.getRadius()/2, bigCircle.getRadius()/2);

    this->ballNumber = 8;
    this->ballNumberText.setFont(Fonts::getFont(OPEN_SANS));
    this->ballNumberText.setString("8");
    this->ballNumberText.setCharacterSize(24);
    this->ballNumberText.setFillColor(sf::Color::Black);
    this->ballNumberText.setPosition(bigCircle.getRadius()/2 + 14 , bigCircle.getRadius()/2 +6);
    this->previousNumber = 8;

}

Ball::Ball(float radius, sf::Color color, sf::Vector2u WindowBounds){
    this->bigCircle.setRadius(radius);
    this->bigCircle.setFillColor(color);
    this->bigCircle.setPosition(0,0);

    this->smallCircle.setRadius(0.495 * bigCircle.getRadius());
    this->smallCircle.setFillColor(smallCircleColor);
    this->smallCircle.setPosition(bigCircle.getRadius()/2, bigCircle.getRadius()/2);

    this->ballNumber = 8;
    this->font.loadFromFile("OpenSans-Bold.ttf");
    this->ballNumberText.setFont(this->font);
    this->ballNumberText.setString("8");
    this->ballNumberText.setCharacterSize(24);
    this->ballNumberText.setFillColor(sf::Color::Black);
    this->ballNumberText.setPosition(bigCircle.getRadius()/2 + 14 , bigCircle.getRadius()/2 +6);
    this->previousNumber = 8;

    this->WindowBounds = WindowBounds;
}

void Ball::draw(sf::RenderTarget &window, sf::RenderStates states) const{
    window.draw(this->bigCircle);
    window.draw(this->smallCircle);
    window.draw(this->ballNumberText);
};

void Ball::move(){

    sf::FloatRect bigCircleBounds;
    bigCircleBounds = this->bigCircle.getGlobalBounds();

    this->bigCircle.move(this->ballVelocity.x, this->ballVelocity.y);
    this->smallCircle.move(this->ballVelocity.x, this->ballVelocity.y);
    this->ballNumberText.move(this->ballVelocity.x, this->ballVelocity.y);



};

void Ball::bounce(){
    sf::Vector2f bigCircleLeftBounds;
    sf::Vector2f bigCircleUpperBounds;
    sf::Vector2f bigCircleRightBounds;
    sf::Vector2f bigCircleLowerBounds;

    bigCircleLeftBounds = {this->bigCircle.getPosition().x, this->bigCircle.getPosition().y + bigCircle.getRadius()};
    bigCircleUpperBounds = {this->bigCircle.getPosition().x + bigCircle.getRadius(), this->bigCircle.getPosition().y};
    bigCircleRightBounds = {this->bigCircle.getPosition().x + bigCircle.getRadius()*2, this->bigCircle.getPosition().y + bigCircle.getRadius()};
    bigCircleLowerBounds = {this->bigCircle.getPosition().x + bigCircle.getRadius(), this->bigCircle.getPosition().y + bigCircle.getRadius()*2};

    if(bigCircleLeftBounds.x == 0){
        this->ballVelocity.x = this->ballVelocity.x * -1;
        changeBall();
    }
    else if(bigCircleUpperBounds.y == 0){
        this->ballVelocity.y = this->ballVelocity.y * -1;
        changeBall();
    }
    else if(bigCircleRightBounds.x == this->WindowBounds.x){
        this->ballVelocity.x = this->ballVelocity.x * -1;
        changeBall();
    }
    else if(bigCircleLowerBounds.y == this->WindowBounds.y){
        this->ballVelocity.y = this->ballVelocity.y * -1;
        changeBall();
    }




};

void Ball::changeBall() {
    sf::Color for1(241, 210, 71);
    sf::Color for2(30, 136, 229);
    sf::Color for4(49, 27, 146);
    sf::Color for5(255, 160, 0);
    sf::Color for6(76, 175, 80);
    sf::Color for7(128, 0, 0);

    bool colorChanged = false;
    int numToChoose;
    int newNumber;
    int numList[] = {1, 2, 4, 5, 6, 7};
    while (colorChanged == false) {
        numToChoose = rand() % 6;
        newNumber = numList[numToChoose];
        if (newNumber != previousNumber) {
            if (newNumber == 1) {
                this->previousNumber = this->ballNumber;
                this->ballNumber = 1;
                this->ballNumberText.setString("1");
                this->bigCircle.setFillColor(for1);
                colorChanged = true;
            } else if (newNumber == 2) {
                this->previousNumber = this->ballNumber;
                this->ballNumber = 2;
                this->ballNumberText.setString("2");
                this->bigCircle.setFillColor(for2);
                colorChanged = true;
            } else if (newNumber == 4) {
                this->previousNumber = this->ballNumber;
                this->ballNumber = 4;
                this->ballNumberText.setString("4");
                this->bigCircle.setFillColor(for4);
                colorChanged = true;
            } else if (newNumber == 5) {
                this->previousNumber = this->ballNumber;
                this->ballNumber = 5;
                this->ballNumberText.setString("5");
                this->bigCircle.setFillColor(for5);
                colorChanged = true;
            } else if (newNumber == 6) {
                this->previousNumber = this->ballNumber;
                this->ballNumber = 6;
                this->ballNumberText.setString("6");
                this->bigCircle.setFillColor(for6);
                colorChanged = true;
            } else if (newNumber == 7) {
                this->previousNumber = this->ballNumber;
                this->ballNumber = 7;
                this->ballNumberText.setString("7");
                this->bigCircle.setFillColor(for7);
                colorChanged = true;
            }

        }
    }

}

void Ball::setRadius(float r){
    this->bigCircleRadius = r;
}

void Ball::setColor(sf::Color c){
    this->bigCircleColor = c;
}

void Ball::setWindowBounds(sf::Vector2u wb){
    this->WindowBounds = wb;
}


//A class knows something and a class does something.