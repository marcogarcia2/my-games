#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>

// Definition of class Deck, that is basically a list of cards

class Deck {

private:

    int pointer;
    std::vector<Card> cards;

public:

    // Constructor method
    Deck();

    // Shuffler method, receives a seed
    void shuffle(int seed);
    
    // Method that shows all the cards in the deck
    void show_deck();

    // Removes the top card
    Card draw_card();

};

#endif