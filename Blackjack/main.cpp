#include <iostream>
#include <vector>
#include "card.h"
#include "deck.h"
#include "Players.h"
using namespace std;
void fillvector(vector <Players>& playerlist,int players){
    string pname;
    int pstack,phand;
    for(int i=0;i<players;i++)
    {
    cout<<"What is Player "<<i+1<<" name?"<<endl;
    cin>>pname;
    cout<<"How much will you be playing with today?"<<endl;
    cin>>pstack;
    Players newplayer(pname,pstack);
    playerlist.push_back(newplayer);
    //playerlist[i].print();
    }

}

int main(){
    card card1;
    deck deck1;
   // deck1.print();
    deck1.shuffle();
    //cout<<endl<<"Deck shuffled"<<endl;
    //deck1.print();
int option=0;
int players=0;
int i=0;
vector <Players> playervector;
cout<<"How many players will there be?"<<endl;
cin>>players;
fillvector(playervector,players);
card1=deck1.deal();
playervector[0].addtohand(card1);
card1.print();

playervector[0].print();
cout<<" Hello welcome to card game simulator, Please select the option you want to do"<<endl;
do
{
    cout<<"1. Blackjack"<<endl;
    cout<<"2. Texas Hold'em"<<endl;
    cout<<"3. 5 Card poker"<<endl;
    cout<<"4. Quit"<<endl;
    cin>>option;
    switch(option)
    {
    case(1):
        cout<<"Blackjack"<<endl;
        break;
    case (2):
        cout<<"Texas Hold'em"<<endl;
        break;
    case (3):
        cout<<"5 card poker"<<endl;
        break;
    case (4):
        cout<<"Quitting"<<endl;
        break;
    }
}while(option!=4);
//p2.print();
}
