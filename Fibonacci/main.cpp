#include <iostream>

using namespace std;

int Fibonacci(int x){
int second=1;
int first=1;
int current=0;
    for(int i=0;i<x+1;i++)
    {
        if(i<2)
        {
            current=i;
        }
        else{
            current=first+second;
            first=second;
            second=current;
        }
    }
return current;
}
int main()
{
    int num=0;
    int answer=0;
    cout<<"Enter a number to find the fibonacci of it"<<endl;
    cin>>num;
    answer=Fibonacci(num);
    cout<<answer;
}
