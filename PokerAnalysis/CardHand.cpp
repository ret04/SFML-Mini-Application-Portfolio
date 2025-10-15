//
// Created by Ryan Takeshita on 12/2/23.
//

#include "CardHand.h"

CardHand::CardHand(){
}

Card CardHand::getCardAt(int pos){
    return this->hand[pos];
}

void CardHand::addCard(Card card) {
    this->hand.push_back(card);
}

void CardHand::sortHand(){
    std::sort(this->hand.begin(), this->hand.end(), [](const Card& lhs, const Card& rhs){
        return lhs.getRankEnum() < rhs.getRankEnum();
    });

}

void CardHand::clearHand(){
    this->hand.clear();
}

void CardHand::printHand() {
    for(int i = 0; i < hand.size(); i++){
        std::cout << i << ". " << hand[i] << std::endl;
    }
}
