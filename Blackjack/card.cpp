#include "card.h"
#include <iostream>
using namespace std;
card::card()
{

}

card::card(string s,string v){
    suit=s;
    value=v;
}

void card::print(){
cout<<value<<" of "<<suit<<endl;
}

string card::getsuit(){
return suit;
}
string card:: getvalue(){
return value;
}
