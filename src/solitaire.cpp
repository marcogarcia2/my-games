#include "solitaire.h"
#include "deck.h"

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
        deck.show_deck();

        // Let's set up the board.
        // First, we need to create the slots. 
        // Basically, they are decks, with revealed and not revealed cards



    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

}