#ifndef DECK_H
#define DECK_H
#define SIZE 52
#include "card.h"
#include <iostream>
using namespace std;

class deck
{
    public:
        deck();
        ~deck();
        void shuffle();
        void print();
        card deal();
    private:
        card *carddeck;
        int currcard;
};

#endif // DECK_H
