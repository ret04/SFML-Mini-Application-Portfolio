//
// Created by Ryan Takeshita on 12/2/23.
//

#include "CardHandScorer.h"

std::vector<Scores> CardHandScorer::scoreHand(CardHand hand){
    std::vector<Scores> scoreList;

    hand.sortHand();
    Card card1 = hand.getCardAt(0);
    Card card2 = hand.getCardAt(1);
    Card card3 = hand.getCardAt(2);
    Card card4 = hand.getCardAt(3);
    Card card5 = hand.getCardAt(4);

    Suit c1Suit = card1.getSuitEnum();
    Suit c2Suit = card2.getSuitEnum();
    Suit c3Suit = card3.getSuitEnum();
    Suit c4Suit = card4.getSuitEnum();
    Suit c5Suit = card5.getSuitEnum();

    Rank c1Rank = card1.getRankEnum();
    Rank c2Rank = card2.getRankEnum();
    Rank c3Rank = card3.getRankEnum();
    Rank c4Rank = card4.getRankEnum();
    Rank c5Rank = card5.getRankEnum();

    scoreList.push_back(HIGH_CARD);

    //Flush -> Straight Flush -> Royal Flush
    if((c1Suit == c2Suit) && (c2Suit == c3Suit) && (c3Suit == c4Suit)
        && (c4Suit == c5Suit)){
        scoreList.push_back(FLUSH);
        if(
                (card1.getRankEnum() == (card2.getRankEnum() - 1)) &&
                (card2.getRankEnum() == (card3.getRankEnum() - 1)) &&
                (card3.getRankEnum() == (card4.getRankEnum() - 1)) &&
                (card4.getRankEnum() == (card5.getRankEnum() - 1)))
        {
            scoreList.push_back(STRAIGHT_FLUSH);
            scoreList.push_back(STRAIGHT);
            if(card1.getRankEnum() == TEN){
                scoreList.push_back(ROYAL_FLUSH);
            }
        }
        return scoreList;
    }

    //Straight
    if(
            (card1.getRankEnum() == (card2.getRankEnum() - 1)) &&
            (card2.getRankEnum() == (card3.getRankEnum() - 1)) &&
            (card3.getRankEnum() == (card4.getRankEnum() - 1)) &&
            (card4.getRankEnum() == (card5.getRankEnum() - 1))){
        scoreList.push_back(STRAIGHT);
        return scoreList;
    }

    //Four of a Kind
    if( ((c1Rank == c2Rank) && (c2Rank == c3Rank) && (c3Rank == c4Rank) && (c4Rank != c5Rank)) ||
        ((c2Rank == c3Rank) && (c3Rank == c4Rank) && (c4Rank == c5Rank) && (c1Rank != c2Rank))
    ){
        scoreList.push_back(FOUR_OF_A_KIND);
        scoreList.push_back(THREE_OK_A_KIND);
        scoreList.push_back(ONE_PAIR);
        return scoreList;
    }
    //Three of a Kind and Full House
    else if( ((c1Rank == c2Rank) && (c2Rank == c3Rank) && (c3Rank != c4Rank)) ||
             ((c3Rank == c4Rank) && (c4Rank == c5Rank) && (c3Rank != c2Rank)) ||
             ((c2Rank == c3Rank) && (c3Rank == c4Rank) && (c1Rank != c2Rank) && (c4Rank != c5Rank))
            ){
        if( ((c1Rank == c2Rank) && (c2Rank == c3Rank) && (c3Rank != c4Rank) && (c4Rank == c5Rank)) ||
            ((c3Rank == c4Rank) && (c4Rank == c5Rank) && (c3Rank != c2Rank) && (c1Rank == c2Rank))
            ){
            scoreList.push_back(FULL_HOUSE);
            scoreList.push_back(THREE_OK_A_KIND);
            scoreList.push_back(TWO_PAIR);
            scoreList.push_back(ONE_PAIR);
            return scoreList;
        }
        scoreList.push_back(THREE_OK_A_KIND);
        scoreList.push_back(ONE_PAIR);
        return scoreList;
    }
    //Two pair
    else if( ((c1Rank == c2Rank) && (c3Rank == c4Rank) && (c2Rank != c3Rank) && (c4Rank != c5Rank)) ||
             ((c2Rank == c3Rank) && (c4Rank == c5Rank) && (c3Rank != c4Rank) && (c1Rank != c2Rank))
            ){
        scoreList.push_back(TWO_PAIR);
        scoreList.push_back(ONE_PAIR);
        return scoreList;
    }
    //One pair
    else if( ((c1Rank == c2Rank) && (c2Rank != c3Rank) && (c3Rank != c4Rank) && (c4Rank != c5Rank)) ||
             ((c2Rank == c3Rank) && (c1Rank != c2Rank) && (c3Rank != c4Rank) && (c4Rank != c5Rank)) ||
             ((c3Rank == c4Rank) && (c1Rank != c2Rank) && (c2Rank != c3Rank) && (c4Rank != c5Rank)) ||
             ((c4Rank == c5Rank) && (c1Rank != c2Rank) && (c2Rank != c3Rank) && (c3Rank != c4Rank))
            ){
        scoreList.push_back(ONE_PAIR);
    }









    /*
    //Three of a Kind -> Full House
    if(
            (c1Rank == c2Rank) && (c2Rank == c3Rank)
            )
    {
        scoreList.push_back(THREE_OK_A_KIND);
        if(c4Rank == c5Rank)
        {
            scoreList.push_back(FULL_HOUSE);
        }
        return scoreList;
    }
    else if(
            (c3Rank == c4Rank) && (c4Rank == c5Rank)
            )
    {
        scoreList.push_back(THREE_OK_A_KIND);
        if(c1Rank == c2Rank)
        {
            scoreList.push_back(FULL_HOUSE);
        }
        return scoreList;
    }


    //Single Pair
    if(
            (c1Rank == c2Rank) && ((c2Rank != c3Rank) && (c3Rank != c4Rank) && (c4Rank != c5Rank))
            )
    {
        scoreList.push_back(ONE_PAIR);
        return scoreList;
    }
    else if(
            (c2Rank == c3Rank) && ((c1Rank != c2Rank) && (c3Rank != c4Rank) && (c4Rank != c5Rank))
            ){
        scoreList.push_back(ONE_PAIR);
        return scoreList;
    }
    else if(
            (c3Rank == c4Rank) && ((c1Rank != c2Rank) && (c2Rank != c3Rank) && (c4Rank != c5Rank))
            ){
        scoreList.push_back(ONE_PAIR);
        return scoreList;
    }
    else if(
            (c4Rank == c5Rank) && ((c1Rank != c2Rank) && (c2Rank != c3Rank) && (c3Rank != c4Rank))
            ){
        scoreList.push_back(ONE_PAIR);
        return scoreList;
    }*/


    /*
    if(c1Rank == c2Rank){
            scoreList.push_back(ONE_PAIR);
            if((c3Rank == c4Rank) || (c4Rank == c5Rank)){
                scoreList.push_back(TWO_PAIR);
            }
            if(c2Rank == c3Rank){
                scoreList.push_back(THREE_OK_A_KIND);
            }
            if(c3Rank == c4Rank){
                scoreList.push_back(FOUR_OF_A_KIND);
            }
        }
    else if(c2Rank == c3Rank){
            scoreList.push_back(ONE_PAIR);
            if(c3Rank == c4Rank){
                scoreList.push_back(THREE_OK_A_KIND);
                if(c4Rank == c5Rank){
                    scoreList.push_back(FOUR_OF_A_KIND);
                }
            }
        }
    else if(c3Rank == c4Rank) {
        scoreList.push_back(ONE_PAIR);
        if (c4Rank == c5Rank) {
            scoreList.push_back(THREE_OK_A_KIND);
        }
    }
    else if(c4Rank == c5Rank){
        scoreList.push_back(ONE_PAIR);
    }


    }
     */

    return scoreList;
}
