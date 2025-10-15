//
// Created by Ryan Takeshita on 12/14/23.
//

#include "ScoreCard.h"

ScoreCard::ScoreCard(){
    royalFlushCount = 0;
    straightFlushCount = 0;
    fourOfAKindCount = 0;
    fullHouseCount = 0;
    flushCount = 0;
    straightCount = 0;
    threeOfAKindCount = 0;
    twoPairCount = 0;
    onePairCount = 0;
    highCardCount = 0;
    totalHandCount = 0;
}

void ScoreCard::addScores(std::vector<Scores> scoresVector){
    for(int i = 0; i < scoresVector.size(); i++){
        if(scoresVector[i] == 0){
            royalFlushCount++;
        }
        else if(scoresVector[i] == 1){
            straightFlushCount++;
        }
        else if(scoresVector[i] == 2){
            fourOfAKindCount++;
        }
        else if(scoresVector[i] == 3){
            fullHouseCount++;
        }
        else if(scoresVector[i] == 4){
            flushCount++;
        }
        else if(scoresVector[i] == 5){
            straightCount++;
        }
        else if(scoresVector[i] == 6){
            threeOfAKindCount++;
        }
        else if(scoresVector[i] == 7){
            twoPairCount++;
        }
        else if(scoresVector[i] == 8){
            twoPairCount++;
        }
        else if(scoresVector[i] == 9){
            onePairCount++;
        }
    }
    totalHandCount++;

}

float ScoreCard::getRoyalFlushCount() const {
    return royalFlushCount;
}

float ScoreCard::getStraightFlushCount() const {
    return straightFlushCount;
}

float ScoreCard::getFourOfAKindCount() const {
    return fourOfAKindCount;
}

float ScoreCard::getFullHouseCount() const {
    return fullHouseCount;
}

float ScoreCard::getFlushCount() const {
    return flushCount;
}

float ScoreCard::getStraightCount() const {
    return straightCount;
}

float ScoreCard::getThreeOfAKindCount() const {
    return threeOfAKindCount;
}

float ScoreCard::getTwoPairCount() const {
    return twoPairCount;
}

float ScoreCard::getOnePairCount() const {
    return onePairCount;
}

float ScoreCard::getHighCardCount() const {
    return highCardCount;
}

float ScoreCard::getTotalHandCount() const {
    return totalHandCount;
}
