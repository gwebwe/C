#include <iostream>

using namespace std;

int main()
{

    string word;
    cout<<"Enter a word to find out if it is a palidome"<<endl;
    cin>>word;
    int start=0;
    int end=word.length()-1;
    int flag=0;
    while(start<end){
        cout<<"entered"<<start<<end<<endl;
        if(word[start]==word[end]){
            start++;
            end--;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
