//
// Created by Ryan Takeshita on 12/2/23.
//

#include "Deck.h"

Deck::Deck() {
    for(int s = 0; s < 4; s++){
        for(int r = 2; r < 15; r++){
            this->deck.push_back(Card(static_cast<Rank>(r), static_cast<Suit>(s)));
        }
    }

}

void Deck::shuffle() {
    int randomPos;
    Card card1, card2;
    for(int i = 0; i < 52; i++){
        randomPos = rand() % 52;
        if(randomPos != i){
            card1 = this->deck[i];
            card2 = this->deck[randomPos];
            this->deck[i] = card2;
            this->deck[randomPos] = card1;
        }
    }
}

Card Deck::dealCard(){
    Card dealtCard;
    dealtCard = this->deck.back();
    this->deck.pop_back();
    return dealtCard;
}

void Deck::printDeck(){
    for(int i = 0; i < this->deck.size(); i++){
        std::cout << i << ". ";
        std::cout << this->deck[i] << std::endl;
    }
}

std::ostream& operator<<(std::ostream& out, const Deck& deck){
    for(int i = 0; i < 52; i++){
        std::cout << deck.deck[i];
    }
}
