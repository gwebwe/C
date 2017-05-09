#include "deck.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
deck::deck()
{
    int i,j,z=0;
    currcard=0;
    string value[13]={"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suit[4]={"Hearts", "Diamonds", "Clubs", "Spades"};
    carddeck=new card[52];
    for(int i=0;i<13;i++)
    {
        for(int j=0;j<4;j++)
        {
            carddeck[z]=card(suit[j],value[i]);
            z++;
        }

    }


}
deck::~deck()
{
delete [] carddeck;
}
void deck::shuffle()
{
    currcard=0;
    for(int i=0;i<52;i++)
    {
        int z=(rand()+time(0)) % 52;
        card temp=carddeck[i];
        carddeck[i]=carddeck[z];
        carddeck[z]=temp;
    }
}
void deck::print()
{
    int x=0;
    //cout<<"Current cards still in deck"<<endl;
    for(x=0;x<52;x++){

        carddeck[x].print();
    }
}

card deck:: deal(){
if(currcard>52){
    shuffle();
}
else{
        cout<<"Entered"<<endl;
    return(carddeck[currcard++]);
}
//return carddeck[0];
}


