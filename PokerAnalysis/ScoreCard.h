//
// Created by Ryan Takeshita on 12/14/23.
//

#ifndef POKERANALYSIS_SCORECARD_H
#define POKERANALYSIS_SCORECARD_H

#include "Scores.h"
#include <vector>

class ScoreCard {

private:
    std::vector<Scores> scores;

    float royalFlushCount;
    float straightFlushCount;
    float fourOfAKindCount;
    float fullHouseCount;
    float flushCount;
    float straightCount;
    float threeOfAKindCount;
    float twoPairCount;
    float onePairCount;
    float highCardCount;
    float totalHandCount;

public:
    ScoreCard();

    void addScores(std::vector<Scores> scoresVector);

    float getRoyalFlushCount() const;

    float getStraightFlushCount() const;

    float getFourOfAKindCount() const;

    float getFullHouseCount() const;

    float getFlushCount() const;

    float getStraightCount() const;

    float getThreeOfAKindCount() const;

    float getTwoPairCount() const;

    float getOnePairCount() const;

    float getHighCardCount() const;

    float getTotalHandCount() const;


};


#endif //POKERANALYSIS_SCORECARD_H
