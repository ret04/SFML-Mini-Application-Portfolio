//
// Created by Ryan Takeshita on 12/2/23.
//

#ifndef POKERANALYSIS_CARD_H
#define POKERANALYSIS_CARD_H

#include "Suit.h"
#include "/Users/ryantakeshita/CLionProjects/FinalPortfolio/PokerAnalysis/Rank.h"
#include <iostream>

class Card {

private:
    Rank rank;
    Suit suit;

public:
    Card();
    Card(Rank rank, Suit suit);

    void setRank(Rank rank);
    std::string getRank() const;

    void setSuit(Suit suit);
    std::string getSuit() const;

    Rank getRankEnum() const;
    Suit getSuitEnum() const;

    friend std::ostream& operator<<(std::ostream& out, const Card& card);
};


#endif //POKERANALYSIS_CARD_H
