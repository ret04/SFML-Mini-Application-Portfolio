//
// Created by Ryan Takeshita on 12/2/23.
//

#ifndef POKERANALYSIS_DECK_H
#define POKERANALYSIS_DECK_H

#include "Card.h"
#include <vector>
#include <cstdlib>

class Deck {

private:
    std::vector<Card> deck;

public:
    Deck();

    void shuffle();
    Card dealCard();

    void printDeck();
    friend std::ostream& operator<<(std::ostream& out, const Deck& deck);



};


#endif //POKERANALYSIS_DECK_H
