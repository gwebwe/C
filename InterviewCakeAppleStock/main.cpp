#include <iostream>

using namespace std;
int maxprofit(int* a,int size){
int max=NULL;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if((a[j]-a[i])>max || max==NULL){
                max=(a[j]-a[i]);
                cout<<j<<endl;
            }
        }

    }
    return max;
}

int main()
{
    int stock_prices_yesterday[6]={0,70,73,34,23,111};
    int max_profit=maxprofit(stock_prices_yesterday,6);
    cout<< max_profit<<endl;
}
