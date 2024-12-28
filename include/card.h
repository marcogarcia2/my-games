#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>

// Definition of class Card, that is used in plenty of games

class Card {
private:

    // A card is composed by a suit and a rank
    char rank;
    char suit;
    bool revealed;
    char color;
    std::vector<std::string> name;

    // Verify if suit is valid
    bool verify_suit(char suit);

    // Verify if rank is valid
    bool verify_rank(char rank);

    // Matching the char to the name of it
    void build_name(void);

    // Defines the color of the card based on its suit
    void set_color(char suit);

public:    

    // Constructor method of class Card
    Card(char rank, char suit);

    // Exhibiting what card this is
    void show_card();

};

#endif