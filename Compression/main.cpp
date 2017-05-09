#include <iostream>

using namespace std;

int main()
{
    string val;
    cout<<"Enter a Text"<<endl;
    cin>>val;
    cout<<val.size()<<endl;
    int count=1;
    for(int i=0;i<val.size();i++){
        if (val[i]==val[i+1]){
            count++;
        }
        else{
            cout<<count<<val[i];
            count=1;
        }
    }

}
