#include <iostream>

using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int y[5]={5,2,1,0,6};
    int j;
    for(int i=0;i<5;i++){
        j=i;
        while(j>0 && y[j-1]>y[j]){
            swap(y[j-1],y[j]);
            j--;
        }

    }
    for(int x=0;x<5;x++){
        cout<<y[x]<<endl;
    }
}
