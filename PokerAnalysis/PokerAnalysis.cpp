//
// Created by Ryan Takeshita on 12/14/23.
//

#include "PokerAnalysis.h"

PokerAnalysis::PokerAnalysis() {
    setName("Poker Analysis");
    title.setCharacterSize(18);
    title.setFont(Fonts::getFont(ARIAL));
    title.setPosition({490, 740});
    title.setString(name);

    while(scorecard.getRoyalFlushCount() == 0){
        Deck deck;
        deck.shuffle();

        CardHand handOne;
        CardHand handTwo;
        CardHand handThree;

        for(int i = 0; i < 5; i++){
            handOne.addCard(deck.dealCard());
            handTwo.addCard(deck.dealCard());
            handThree.addCard(deck.dealCard());
        }

        scorecard.addScores(CardHandScorer::scoreHand(handOne));
    }

    //Royal Flush
    tenOfHearts.setPosition({10, 10});
    Position::right(tenOfHearts, jackOfHearts, 1);
    Position::right(jackOfHearts, queenOfHearts, 1);
    Position::right(queenOfHearts, kingOfHearts, 1);
    Position::right(kingOfHearts, aceOfHearts, 1);

    //Straight Flush
    Position::bottom(tenOfHearts, fiveOfHearts, 5);
    Position::right(fiveOfHearts, sixOfHearts, 1);
    Position::right(sixOfHearts, sevenOfHearts, 1);
    Position::right(sevenOfHearts, eightOfHearts, 1);
    Position::right(eightOfHearts, nineOfHearts, 1);

    //Four of a Kind
    Position::bottom(fiveOfHearts, aceOfClubs, 5);
    Position::right(aceOfClubs, aceOfDiamonds, 1);
    Position::right(aceOfDiamonds, aceOfSpades, 1);
    Position::right(aceOfSpades, aceOfHearts2, 1);
    Position::right(aceOfHearts2, twoOfSpades, 1);


    //Full House
    Position::bottom(aceOfClubs, threeOfDiamonds, 5);
    Position::right(threeOfDiamonds, threeOfHearts, 1);
    Position::right(threeOfHearts, threeOfSpades, 1);
    Position::right(threeOfSpades, jackOfDiamonds, 1);
    Position::right(jackOfDiamonds, jackOfSpades, 1);

    //Flush
    Position::bottom(threeOfDiamonds, twoOfDiamonds, 5);
    Position::right(twoOfDiamonds, fiveOfDiamonds, 1);
    Position::right(fiveOfDiamonds, sevenOfDiamonds, 1);
    Position::right(sevenOfDiamonds, nineOfDiamonds, 1);
    Position::right(nineOfDiamonds, kingOfDiamonds, 1);

    //--------------------------------------------------------------------------------

    //Straight
    Position::bottom(twoOfDiamonds, sevenOfClubs, 5);
    Position::right(sevenOfClubs, eightOfHearts2, 1);
    Position::right(eightOfHearts2, nineOfDiamonds2, 1);
    Position::right(nineOfDiamonds2, tenOfHearts2, 1);
    Position::right(tenOfHearts2, jackOfSpades2, 1);

    //Three of a Kind
    Position::bottom(sevenOfClubs, queenOfHearts2, 5);
    Position::right(queenOfHearts2, queenOfClubs, 1);
    Position::right(queenOfClubs, queenOfDiamonds, 1);
    Position::right(queenOfDiamonds, fiveOfClubs, 1);
    Position::right(fiveOfClubs, sixOfClubs, 1);

    //Two Pair
    Position::bottom(queenOfHearts2, threeOfHearts2, 5);
    Position::right(threeOfHearts2, threeOfDiamonds2, 1);
    Position::right(threeOfDiamonds2, sixOfClubs2, 1);
    Position::right(sixOfClubs2, sixOfHearts2, 1);
    Position::right(sixOfHearts2, queenOfSpades, 1);

    //One pair
    Position::bottom(threeOfHearts2, fiveOfHearts2, 5);
    Position::right(fiveOfHearts2, fiveOfSpades, 1);
    Position::right(fiveOfSpades, twoOfClubs, 1);
    Position::right(twoOfClubs, jackOfClubs, 1);
    Position::right(jackOfClubs, aceOfDiamonds2, 1);

    //No Pair/High Card
    Position::bottom(fiveOfHearts2, sevenOfSpades, 5);
    Position::right(sevenOfSpades, fiveOfClubs2, 1);
    Position::right(fiveOfClubs2, kingOfClubs, 1);
    Position::right(kingOfClubs, threeOfHearts3, 1);
    Position::right(threeOfHearts3, jackOfDiamonds2, 1);


    std::string hand1ProbString = std::to_string(scorecard.getRoyalFlushCount()/scorecard.getTotalHandCount());
    std::string hand1CountString = std::to_string(scorecard.getTotalHandCount());
    std::string hand1String = "Royal Flush | Probability : " + hand1ProbString + "%  Odds Against: " + hand1CountString + " : 1";
    hand1.setFont(Fonts::getFont(ARIAL));
    hand1.setString(hand1String);
    hand1.setCharacterSize(16);
    hand1.setFillColor(sf::Color::Black);
    hand1.setPosition({300, 10});

    std::string hand2ProbString = std::to_string(scorecard.getStraightFlushCount()/scorecard.getTotalHandCount());
    std::string hand2CountString = std::to_string(scorecard.getTotalHandCount()/scorecard.getStraightFlushCount());
    std::string hand2String = "Straight Flush | Probability : " + hand2ProbString + "%  Odds Against: " + hand2CountString + " : 1";
    hand2.setFont(Fonts::getFont(ARIAL));
    hand2.setString(hand2String);
    hand2.setCharacterSize(16);
    hand2.setFillColor(sf::Color::Black);
    hand2.setPosition({300, 100});

    std::string hand3ProbString = std::to_string(scorecard.getFourOfAKindCount()/scorecard.getTotalHandCount());
    std::string hand3CountString = std::to_string(scorecard.getTotalHandCount()/scorecard.getFourOfAKindCount());
    std::string hand3String = "Four of a Kind | Probability : " + hand3ProbString + "%  Odds Against: " + hand3CountString + " : 1";
    hand3.setFont(Fonts::getFont(ARIAL));
    hand3.setString(hand3String);
    hand3.setCharacterSize(16);
    hand3.setFillColor(sf::Color::Black);
    hand3.setPosition({300, 170});

    std::string hand4ProbString = std::to_string(scorecard.getFullHouseCount()/scorecard.getTotalHandCount());
    std::string hand4CountString = std::to_string(scorecard.getTotalHandCount()/scorecard.getFullHouseCount());
    std::string hand4String = "Full House | Probability : " + hand4ProbString + "%  Odds Against: " + hand4CountString + " : 1";
    hand4.setFont(Fonts::getFont(ARIAL));
    hand4.setString(hand4String);
    hand4.setCharacterSize(16);
    hand4.setFillColor(sf::Color::Black);
    hand4.setPosition({300, 240});

    std::string hand5ProbString = std::to_string(scorecard.getFlushCount()/scorecard.getTotalHandCount());
    std::string hand5CountString = std::to_string(scorecard.getTotalHandCount()/scorecard.getFlushCount());
    std::string hand5String = "Flush | Probability : " + hand5ProbString + "%  Odds Against: " + hand5CountString + " : 1";
    hand5.setFont(Fonts::getFont(ARIAL));
    hand5.setString(hand5String);
    hand5.setCharacterSize(16);
    hand5.setFillColor(sf::Color::Black);
    hand5.setPosition({300, 310});

    std::string hand6ProbString = std::to_string(scorecard.getStraightCount()/scorecard.getTotalHandCount());
    std::string hand6CountString = std::to_string(scorecard.getTotalHandCount()/scorecard.getStraightCount());
    std::string hand6String = "Straight | Probability : " + hand6ProbString + "%  Odds Against: " + hand6CountString + " : 1";
    hand6.setFont(Fonts::getFont(ARIAL));
    hand6.setString(hand6String);
    hand6.setCharacterSize(16);
    hand6.setFillColor(sf::Color::Black);
    hand6.setPosition({300, 380});

    std::string hand7ProbString = std::to_string(scorecard.getThreeOfAKindCount()/scorecard.getTotalHandCount());
    std::string hand7CountString = std::to_string(scorecard.getTotalHandCount()/scorecard.getThreeOfAKindCount());
    std::string hand7String = "Three of a Kind | Probability : " + hand7ProbString + "%  Odds Against: " + hand7CountString + " : 1";
    hand7.setFont(Fonts::getFont(ARIAL));
    hand7.setString(hand7String);
    hand7.setCharacterSize(16);
    hand7.setFillColor(sf::Color::Black);
    hand7.setPosition({300, 450});

    std::string hand8ProbString = std::to_string(scorecard.getTwoPairCount()/scorecard.getTotalHandCount());
    std::string hand8CountString = std::to_string(scorecard.getTotalHandCount()/scorecard.getTwoPairCount());
    std::string hand8String = "Two Pair | Probability : " + hand8ProbString + "%  Odds Against: " + hand8CountString + " : 1";
    hand8.setFont(Fonts::getFont(ARIAL));
    hand8.setString(hand8String);
    hand8.setCharacterSize(16);
    hand8.setFillColor(sf::Color::Black);
    hand8.setPosition({300, 520});

    std::string hand9ProbString = std::to_string(scorecard.getOnePairCount()/scorecard.getTotalHandCount());
    std::string hand9CountString = std::to_string(scorecard.getTotalHandCount()/scorecard.getOnePairCount());
    std::string hand9String = "One Pair | Probability : " + hand9ProbString + "%  Odds Against: " + hand9CountString + " : 1";
    hand9.setFont(Fonts::getFont(ARIAL));
    hand9.setString(hand9String);
    hand9.setCharacterSize(16);
    hand9.setFillColor(sf::Color::Black);
    hand9.setPosition({300, 590});

    std::string hand10ProbString = std::to_string(scorecard.getHighCardCount()/scorecard.getTotalHandCount());
    std::string hand10CountString = std::to_string(scorecard.getTotalHandCount()/scorecard.getHighCardCount());
    std::string hand10String = "No Pair/High Card | Probability : 100%  Odds Against: 1 : 1";
    hand10.setFont(Fonts::getFont(ARIAL));
    hand10.setString(hand10String);
    hand10.setCharacterSize(16);
    hand10.setFillColor(sf::Color::Black);
    hand10.setPosition({300, 660});

}

void PokerAnalysis::setName(std::string n) {
    this->name = n;

}

std::string PokerAnalysis::getName() {
    return this->name;
}

sf::Text PokerAnalysis::getText(){
    return title;
}

void PokerAnalysis::eventHandler(sf::RenderWindow &window, sf::Event event) {

}

void PokerAnalysis::update() {

}

void PokerAnalysis::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    window.draw(tenOfHearts);
    window.draw(jackOfHearts);
    window.draw(queenOfHearts);
    window.draw(kingOfHearts);
    window.draw(aceOfHearts);
    window.draw(hand1);

    window.draw(fiveOfHearts);
    window.draw(sixOfHearts);
    window.draw(sevenOfHearts);
    window.draw(eightOfHearts);
    window.draw(nineOfHearts);
    window.draw(hand2);

    window.draw(aceOfClubs);
    window.draw(aceOfDiamonds);
    window.draw(aceOfSpades);
    window.draw(aceOfHearts2);
    window.draw(twoOfSpades);
    window.draw(hand3);

    window.draw(threeOfDiamonds);
    window.draw(threeOfHearts);
    window.draw(threeOfSpades);
    window.draw(jackOfDiamonds);
    window.draw(jackOfSpades);
    window.draw(hand4);

    window.draw(twoOfDiamonds);
    window.draw(fiveOfDiamonds);
    window.draw(sevenOfDiamonds);
    window.draw(nineOfDiamonds);
    window.draw(kingOfDiamonds);
    window.draw(hand5);

    //-------------------------------------

    window.draw(sevenOfClubs);
    window.draw(eightOfHearts2);
    window.draw(nineOfDiamonds2);
    window.draw(tenOfHearts2);
    window.draw(jackOfSpades2);
    window.draw(hand6);

    window.draw(queenOfHearts2);
    window.draw(queenOfClubs);
    window.draw(queenOfDiamonds);
    window.draw(fiveOfClubs);
    window.draw(sixOfClubs);
    window.draw(hand7);

    window.draw(threeOfHearts2);
    window.draw(threeOfDiamonds2);
    window.draw(sixOfClubs2);
    window.draw(sixOfHearts2);
    window.draw(queenOfSpades);
    window.draw(hand8);

    window.draw(fiveOfHearts2);
    window.draw(fiveOfSpades);
    window.draw(twoOfClubs);
    window.draw(jackOfClubs);
    window.draw(aceOfDiamonds2);
    window.draw(hand9);

    window.draw(sevenOfSpades);
    window.draw(fiveOfClubs2);
    window.draw(kingOfClubs);
    window.draw(threeOfHearts3);
    window.draw(jackOfDiamonds2);
    window.draw(hand10);

}
