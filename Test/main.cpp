#include <iostream>

using namespace std;

int main()
{
    int flag=0;
    for(int i=0; i<5;i++){
        if(flag==1){
                cout<<"Breaking"<<endl;
            cout<<i;
            break;
        }
        for(int z=0;z<5;z++){
            if(z==1){
                flag=1;
                break;
                cout<<z;
            }
            cout<<z<<"z"<<endl;
        }
    }
    cout<<"Out of for loop"<<endl;
}
