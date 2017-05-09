#ifndef CARD_H
#define CARD_H
#include "card.h"
#include <iostream>
using namespace std;

class card
{
    public:
        card();
        card(string s,string v);
        void print();
        string getsuit();
        string getvalue();
    private:
        string suit;
        string value;
};

#endif // CARD_H
