#include <iostream>

using namespace std;

int Fibonacci(int x){
    if(x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    return Fibonacci(x-1)+Fibonacci(x-2);
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
