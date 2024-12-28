#include "cards.h"
#include <vector>


// This class represents the slots where cards will be placed in Solitaire

class Slot{

private:

    pointer = -1;
    std::vector<Card> cards;
    

public:

    Slot(){

    }


    // Add card on top of the deck
    void add_card(Card card){
        cards.push_back(card)
        pointer++;
    }

    // Removes the card from the top of the deck
    void pop_card(){
        cards.pop_back()
        pointer--;
    }

};