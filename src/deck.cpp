#include "deck.h"
#include <algorithm>
#include <random>
    
// Constructor method, returns always 52 different cards
Deck::Deck(){

    char ranks[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    char suits[] = {'S', 'C', 'H', 'D'};  

    // For each combination of rank and suit, creates a new card
    for (char suit : suits){
        for (char rank : ranks){
            cards.push_back(Card(rank, suit));
        }
    }
}

// Shuffles the deck according to the seed provided
void Deck::shuffle(int seed){
    std::default_random_engine rng(seed);
    std::shuffle(cards.begin(), cards.end(), rng);
}

// Method that shows all the cards in the deck
void Deck::show_deck(){
    for (Card &card : cards) {
        card.show_card();
    }
}
    