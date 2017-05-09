#ifndef PLAYERS_H
#define PLAYERS_H
#include "card.h"
#include <iostream>
#include <vector>
using namespace std;

class Players
{

protected:
string name;
vector <card> hand;
double chipstack;

public:
Players();
Players(string n,double c);
void print();
int sethand(int h);
int getchipstack();
void addtohand(card c);
string getname();
int bet(int amount,int flag);
};


#endif // PLAYERS_H
