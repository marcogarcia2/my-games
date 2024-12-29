#include "slot.h"

// This class represents the slots where cards will be placed in Solitaire
// It consists of nothing more than a list of cards.
// There will be seven of them in the game.
    
Slot::Slot(){
    pointer = -1;
}

// Add card on top of the deck
void Slot::add_card(Card card){
    cards.push_back(card);
    pointer++;
}

// Removes the card from the top of the deck
void Slot::pop_card(){
    cards.pop_back();
    pointer--;
}

void Slot::reveal_top(){
    cards.back().setRevealed(true);
}

void Slot::show_cards(){
    for (Card &card : cards) {
        card.show_card();
    }
}
