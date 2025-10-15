//
// Created by Ryan Takeshita on 12/14/23.
//

#ifndef FINALPORTFOLIO_POKERANALYSIS_H
#define FINALPORTFOLIO_POKERANALYSIS_H
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Program.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Position.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/Fonts.h"
#include "Card.h"
#include "CardGraphic.h"
#include "pokerImage.h"
#include "ScoreCard.h"
#include "Deck.h"
#include "CardHand.h"
#include "CardHandScorer.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/PokerAnalysis/Rank.h"


class PokerAnalysis : public Program {

private:
    std::string name;
    sf::Text title;
    ScoreCard scorecard;

    //Sprites
    //RoyalFlush
    CardGraphic tenOfHearts = CardGraphic(pokerImage::getImage(), TEN, HEARTS);
    CardGraphic jackOfHearts = CardGraphic(pokerImage::getImage(), JACK, HEARTS);
    CardGraphic queenOfHearts =  CardGraphic(pokerImage::getImage(), QUEENN, HEARTS);
    CardGraphic kingOfHearts = CardGraphic(pokerImage::getImage(), KINGG, HEARTS);
    CardGraphic aceOfHearts = CardGraphic(pokerImage::getImage(), ACE, HEARTS);
    sf::Text hand1;

    CardGraphic fiveOfHearts = CardGraphic(pokerImage::getImage(), FIVE, HEARTS);
    CardGraphic sixOfHearts = CardGraphic(pokerImage::getImage(), SIX, HEARTS);
    CardGraphic sevenOfHearts = CardGraphic(pokerImage::getImage(), SEVEN, HEARTS);
    CardGraphic eightOfHearts = CardGraphic(pokerImage::getImage(), EIGHT, HEARTS);
    CardGraphic nineOfHearts = CardGraphic(pokerImage::getImage(), NINE, HEARTS);
    sf::Text hand2;

    CardGraphic aceOfClubs = CardGraphic(pokerImage::getImage(), ACE, CLUBS);
    CardGraphic aceOfDiamonds = CardGraphic(pokerImage::getImage(), ACE, DIAMONDS);
    CardGraphic aceOfSpades = CardGraphic(pokerImage::getImage(), ACE, SPADES);
    CardGraphic aceOfHearts2 = CardGraphic(pokerImage::getImage(), ACE, HEARTS);
    CardGraphic twoOfSpades = CardGraphic(pokerImage::getImage(), TWO, SPADES);
    sf::Text hand3;

    CardGraphic threeOfDiamonds = CardGraphic(pokerImage::getImage(), THREE, DIAMONDS);
    CardGraphic threeOfHearts = CardGraphic(pokerImage::getImage(), THREE, HEARTS);
    CardGraphic threeOfSpades = CardGraphic(pokerImage::getImage(), THREE, SPADES);
    CardGraphic jackOfDiamonds = CardGraphic(pokerImage::getImage(), JACK, DIAMONDS);
    CardGraphic jackOfSpades = CardGraphic(pokerImage::getImage(), JACK, SPADES);
    sf::Text hand4;

    CardGraphic twoOfDiamonds = CardGraphic(pokerImage::getImage(), TWO, DIAMONDS);
    CardGraphic fiveOfDiamonds = CardGraphic(pokerImage::getImage(), FIVE, DIAMONDS);
    CardGraphic sevenOfDiamonds = CardGraphic(pokerImage::getImage(), SEVEN, DIAMONDS);
    CardGraphic nineOfDiamonds = CardGraphic(pokerImage::getImage(), NINE, DIAMONDS);
    CardGraphic kingOfDiamonds = CardGraphic(pokerImage::getImage(), KINGG, DIAMONDS);
    sf::Text hand5;

    //--
    CardGraphic sevenOfClubs = CardGraphic(pokerImage::getImage(), SEVEN, CLUBS);
    CardGraphic eightOfHearts2 = CardGraphic(pokerImage::getImage(), EIGHT, HEARTS);
    CardGraphic nineOfDiamonds2 = CardGraphic(pokerImage::getImage(), NINE, DIAMONDS);
    CardGraphic tenOfHearts2 = CardGraphic(pokerImage::getImage(), TEN, HEARTS);
    CardGraphic jackOfSpades2 = CardGraphic(pokerImage::getImage(), JACK, SPADES);
    sf::Text hand6;

    CardGraphic queenOfHearts2 = CardGraphic(pokerImage::getImage(), QUEENN, HEARTS);
    CardGraphic queenOfClubs = CardGraphic(pokerImage::getImage(), QUEENN, CLUBS);
    CardGraphic queenOfDiamonds = CardGraphic(pokerImage::getImage(), QUEENN, DIAMONDS);
    CardGraphic fiveOfClubs = CardGraphic(pokerImage::getImage(), FIVE, CLUBS);
    CardGraphic sixOfClubs = CardGraphic(pokerImage::getImage(), SIX, CLUBS);
    sf::Text hand7;

    CardGraphic threeOfHearts2 =  CardGraphic(pokerImage::getImage(), THREE, HEARTS);
    CardGraphic threeOfDiamonds2 =  CardGraphic(pokerImage::getImage(), THREE, DIAMONDS);
    CardGraphic sixOfClubs2 = CardGraphic(pokerImage::getImage(), SIX, CLUBS);
    CardGraphic sixOfHearts2 = CardGraphic(pokerImage::getImage(), SIX, HEARTS);
    CardGraphic queenOfSpades = CardGraphic(pokerImage::getImage(), THREE, SPADES);
    sf::Text hand8;

    CardGraphic fiveOfHearts2 = CardGraphic(pokerImage::getImage(), FIVE, HEARTS);
    CardGraphic fiveOfSpades = CardGraphic(pokerImage::getImage(), FIVE, SPADES);
    CardGraphic twoOfClubs = CardGraphic(pokerImage::getImage(), TWO, CLUBS);
    CardGraphic jackOfClubs = CardGraphic(pokerImage::getImage(), JACK, CLUBS);
    CardGraphic aceOfDiamonds2 = CardGraphic(pokerImage::getImage(), ACE, DIAMONDS);
    sf::Text hand9;

    CardGraphic sevenOfSpades = CardGraphic(pokerImage::getImage(), SEVEN, SPADES);
    CardGraphic fiveOfClubs2 = CardGraphic(pokerImage::getImage(), FIVE, CLUBS);
    CardGraphic kingOfClubs = CardGraphic(pokerImage::getImage(), KINGG, CLUBS);
    CardGraphic threeOfHearts3 = CardGraphic(pokerImage::getImage(), THREE, HEARTS);
    CardGraphic jackOfDiamonds2 = CardGraphic(pokerImage::getImage(), JACK, DIAMONDS);
    sf::Text hand10;

public:
    PokerAnalysis();

    void setName(std::string n);

    virtual std::string getName();
    virtual sf::Text getText();
    virtual void eventHandler(sf::RenderWindow& window, sf::Event event);
    virtual void update();
    virtual void draw(sf::RenderTarget &window, sf::RenderStates states) const;

};


#endif //FINALPORTFOLIO_POKERANALYSIS_H
