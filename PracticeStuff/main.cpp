#include <iostream>

using namespace std;

bool v(string pattern,string input)
{
    double inputsize=0,patternsize=0;
    inputsize=input.length();
    cout<<inputsize<<endl;
    patternsize=pattern.length();
    string *words=new string[inputsize];
    cout<< sizeof(words);
    if((patternsize % inputsize)==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}


int main()
{
    string pattern;
    string input;
    bool match;
    cout<<"Enter a pattern"<<endl;
    cin>>pattern;
    cout<<"Enter a input"<<endl;
    cin>>input;
    match=v(pattern,input);


}
