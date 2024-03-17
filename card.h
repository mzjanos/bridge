#ifndef CARD_H
#define CARD_H

enum class Suit{
    Spade,
    Hearth,
    Diamond,
    Club
}

class Card{
    private:
    int value;
    Suit color; 
    public:
    Card(int value, Suit color);
    int getValue();
    Suit getSuit();
}

#endif 