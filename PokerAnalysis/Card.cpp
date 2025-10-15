
//
// Created by Ryan Takeshita on 12/2/23.
//

#include "Card.h"

Card::Card()
: Card(ACE, CLUBS){
}

Card::Card(Rank rank, Suit suit) {
    this->rank = rank;
    this->suit = suit;
}

void Card::setRank(Rank rank) {
    this->rank = rank;
}

std::string Card::getRank() const {
    if(this->rank == ACE){
        return "Ace";
    }
    else if(this->rank == TWO){
        return "Two";
    }
    else if(this->rank == THREE){
        return "Three";
    }
    else if(this->rank == FOUR){
        return "Four";
    }
    else if(this->rank == FIVE){
        return "Five";
    }
    else if(this->rank == SIX){
        return "Six";
    }
    else if(this->rank == SEVEN){
        return "Seven";
    }
    else if(this->rank == EIGHT){
        return "Eight";
    }
    else if(this->rank == NINE){
        return "Nine";
    }
    else if(this->rank == TEN){
        return "Ten";
    }
    else if(this->rank == JACK){
        return "Jack";
    }
    else if(this->rank == QUEENN){
        return "Queen";
    }
    else if(this->rank == KINGG){
        return "King";
    }
}

void Card::setSuit(Suit suit) {
    this->suit = suit;
}

std::string Card::getSuit() const {
    if(this->suit == CLUBS){
        return "Clubs";
    }
    else if(this->suit == DIAMONDS) {
        return "Diamonds";
    }
    else if(this->suit == HEARTS){
        return "Hearts";
    }
    else if(this->suit == SPADES) {
        return "Spades";
    }
}

Rank Card::getRankEnum() const{
    return this->rank;
}
Suit Card::getSuitEnum() const{
    return this->suit;
}

std::ostream& operator<<(std::ostream& out, const Card& card){
    return out << card.getRank() << " of " << card.getSuit();
}
