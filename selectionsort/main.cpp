#include <iostream>

using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int z[5]={2,4,1,0,5};
    int var=0;
    for(int i=0;i<5;i++){
        var=i;
        for(int j=i+1;j<5;j++){
            if(z[var]>z[j]){
                var=j;
            }
        }
    if(var!=i){
        swap(z[var],z[i]);
    }
    }
    for(int x=0;x<5;x++){
        cout<<z[x]<<endl;
    }
}
