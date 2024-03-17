#include <stdlib.h>
#include <vector.h>
#include <map.h>
#include "card.h"
#ifndef GAMEPOSITION_H
#define GAMEPOSITION_H


class Player{
    private: 
    std::map<Suit, std::vector<Card>> cards;
    public:
    Player(std::vector<Card>);
    bool hasSuit(Suit);
    std::vector<Card>& get(Suit);
    void undo(Card);
    void play(Card);
}

class Gameposition{
    private: 
    std::vector<Player> players(4);
    int next;
    public: 
    Player& getNext();
    void play(Card);
    void undo(Card)
}

#endif