#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string infix,word2;
    cout<<"Enter word1"<<endl;
    cin>>infix;
    cout<<"Enter word2"<<endl;
    cin>>word2;
    int flag=0;
    int size=infix.size();
    if(infix.size()!=word2.size()){
        cout<<"Not a anagram"<<endl;
    }
    else{
        sort(infix.begin(),infix.end());
        sort(word2.begin(),word2.end());
        for (int i=0;i<size;i++)
        {
            if(word2[i]!=infix[i]){
                cout<<"Not a anagram"<<endl;
                flag=1;
                break;
            }
        }
        if(flag!=1){
            cout<<word2<<endl;
            cout<<infix<<endl;
            cout<<"Is a anagram"<<endl;
        }
    }
    return 0;
}
