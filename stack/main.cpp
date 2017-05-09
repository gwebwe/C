#include <iostream>
#include <stack>
#include <cstring>
#include <stdio.h>
using namespace std;

int main()
{
    int input=0;
    cout<<"Enter a number to find primes"<<endl;
    cin>>input;
    for(int i=0;i<=input;i++){
        if(i==2){
            cout<<i<<endl;
        }
        else if(i==3){
            cout<<i<<endl;
        }
        else if(i%2!=0 && i%3!=0){
            cout<<i<<endl;
        }
    }
}
