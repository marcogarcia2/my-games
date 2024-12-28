#include "card.h"

// Implementation of class Card, with plenty of verifications

// Verify if suit is valid
bool Card::verify_suit(char suit){
    if (suit == 'S' or suit == 'C' or suit == 'H' or suit == 'D')
        return true;
    return false;
} 

// Verify if rank is valid
bool Card::verify_rank(char rank){
    char list[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    for (int i = 0; i < 13; i++){
        if (rank == list[i])
            return true;
    }
    return false;
}

// Defines the color of the card based on its suit
void Card::set_color(char suit){
    if (suit == 'S' or suit == 'C')
        color = 'B';
    else
        color = 'R';
}

// Matching the char to the name of it
void Card::build_name(void){

    // Finding the name of the rank
    switch(rank) {
        case 'A': name.push_back("Ace"); break;
        case '2': name.push_back("Two"); break;
        case '3': name.push_back("Three"); break;
        case '4': name.push_back("Four"); break;
        case '5': name.push_back("Five"); break;
        case '6': name.push_back("Six"); break;
        case '7': name.push_back("Seven"); break;
        case '8': name.push_back("Eight"); break;
        case '9': name.push_back("Nine"); break;
        case 'T': name.push_back("Ten"); break;
        case 'J': name.push_back("Jack"); break;
        case 'Q': name.push_back("Queen"); break;
        case 'K': name.push_back("King"); break;
        default: throw std::invalid_argument("Valor de número inválido!"); break;  
    }

    // Finding the name of the suit
    switch(suit){
        case 'S': name.push_back("Spades"); break;
        case 'C': name.push_back("Clubs"); break;
        case 'H': name.push_back("Hearts"); break;
        case 'D': name.push_back("Diamonds"); break;
        default: throw std::invalid_argument("Valor de naipe inválido!"); break;  
    }
}


// Constructor method of class Card
Card::Card(char rank, char suit){

    // Make sure they are all in uppercase
    rank = std::toupper(rank);
    suit = std::toupper(suit);

    // Entry consistence verification for rank
    if (this->verify_rank(rank))
        this->rank = rank;
    else throw std::invalid_argument("Valor de número inválido!");

    // Entry consistence verification for suit
    if (this->verify_suit(suit))
        this->suit = suit;
    else throw std::invalid_argument("Valor de naipe inválido!");

    // The cards always starts unrevealed
    revealed = false;

    // Color of the card
    set_color(suit);

    // Tries to match the rank and suit to their names
    try{
        build_name();
    }
    catch (const std::invalid_argument& e){
        throw e;
    }
}

// Exhibiting what card this is
void Card::show_card(){
    std::cout << name[0] + " of " + name[1] << std::endl;
}
