#include "Players.h"
#include <iostream>
using namespace std;
Players::Players(){
    name=' ';
    chipstack=0;
}

Players::Players(string n,double c){
    name=n;
    chipstack=c;
}

void Players::print(){
    cout<<"Name: "<<name<<" Chipstack: "<<chipstack<<endl;
}
int Players:: getchipstack(){
    return chipstack;
}
void Players:: addtohand(card c){
    hand.push_back(c);
}

string Players:: getname(){
    return name;
}
int Players:: bet(int amount,int flag){
    cout<<"worked"<<endl;
}

