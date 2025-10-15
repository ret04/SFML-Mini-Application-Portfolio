//
// Created by Ryan Takeshita on 12/2/23.
//

#ifndef POKERANALYSIS_SCORES_H
#define POKERANALYSIS_SCORES_H

enum Scores{

    ROYAL_FLUSH, //A, K, Q, J, 10, all the same suit. 0

    STRAIGHT_FLUSH, //five cards of the same suit and consecutive ranking 1

    FOUR_OF_A_KIND, //four cards of the same ranking 2

    FULL_HOUSE, //three cards of the same rank along with two cards of the same rank 3

    FLUSH, //five cards of the same suit 4

    STRAIGHT, //five cards in consecutive ranking 5

    THREE_OK_A_KIND, //three cards of the same rank 6

    TWO_PAIR, //two cards of the same rank along with another two cards of the same rank 7

    ONE_PAIR, //two cards of the same rank 8

    HIGH_CARD //highest card in the player’s hand 9
};

#endif //POKERANALYSIS_SCORES_H
