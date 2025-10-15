//
// Created by Ryan Takeshita on 12/2/23.
//

#ifndef POKERANALYSIS_CARDHANDSCORER_H
#define POKERANALYSIS_CARDHANDSCORER_H

#include "CardHand.h"
#include "Scores.h"

class CardHandScorer {

public:
    static std::vector<Scores> scoreHand(CardHand hand);

};


#endif //POKERANALYSIS_CARDHANDSCORER_H
