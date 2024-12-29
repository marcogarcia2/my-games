#include "solitaire.h"
#include "deck.h"
#include "slot.h"

// Arranging slots for starting the game
void arrange_slots(Deck *deck, std::vector<Slot> *slots){

    // We need to build a "ladder" with cards, revealing the last ones
    for (int i = 0; i < 7; i++){
        for (int j = 0; j < i+1; j++){
            Card card = deck->draw_card();
            slots->at(i).add_card(card);
        }
        slots->at(i).reveal_top();
    }
}

// Show slots
void show_slots(std::vector<Slot> slots){
    for (int i = 0; i < 7; i++){
        std::cout << "----------------------" << std::endl;
        std::cout << "Slot " << i << std::endl;
        std::cout << "----------------------" << std::endl;
        slots.at(i).show_cards();
    }
}

// Main loop of the game of solitaire
void solitaire(){

    // The seeds 0 and 1 produces the same shuffling.
    int seed = 1;
    std::cout << "Type a seed: " << std::endl;
    std::cin >> seed;

    try{
        // First we will instantiate the deck of cards
        Deck deck;

        // Then we decide the shuffling of it
        deck.shuffle(seed);
        //deck.show_deck();

        // Let's set up the board.
        // First, we need to create the slots. 
        // Basically, they are decks, with revealed and not revealed cards
        // There will be seven of them.
        std::vector<Slot> slots(7);
        arrange_slots(&deck, &slots);
        //show_slots(slots);

        // Now, we need to prepare the pile, where the player draw cards.
        // Basically, all the cards reamaining from the deck will be the pile.
        // So, we can keep this variable.
        // TODO: But we must not forget create some methods to ensure this functionality.
        deck.show_deck();

        // Lastly, we must set the A piles, where the cards go to win the game.
        // We can use the Slot, but we must make sure that it is sorted all the time.
        // So the solution will be to create a class that inherits slots.
        std::vector<Slot> A_slot(4);


    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

}