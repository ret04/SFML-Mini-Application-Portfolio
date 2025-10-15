//
// Created by Ryan Takeshita on 12/2/23.
//

#ifndef POKERANALYSIS_CARDHAND_H
#define POKERANALYSIS_CARDHAND_H

#include "Card.h"
#include <vector>

class CardHand {

private:
    std::vector<Card> hand;

public:
    CardHand();

    Card getCardAt(int pos);

    void addCard(Card card);
    void sortHand();
    void clearHand();

    void printHand();

};


#endif //POKERANALYSIS_CARDHAND_H
