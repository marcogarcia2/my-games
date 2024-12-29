#ifndef SLOT_H
#define SLOT_H

#include "card.h"
#include <vector>

// This class represents the slots where cards will be placed in Solitaire
// It consists of nothing more than a list of cards.

class Slot{

private:

    int pointer; // points to the top 
    std::vector<Card> cards;
    

public:

    Slot();
    
    // Add card on top of the deck
    void add_card(Card card);

    // Removes the card from the top of the deck
    void pop_card();

    // Reveals the top card
    void reveal_top();

    // Shows all the cards
    void show_cards();

};

#endif