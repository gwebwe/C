#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace std;
string reverse2 (string s) {
string result=""; //create a new string and set it to the empty string
for (int i=0; i<s.length( ) ; i++) { //s.length( ) returns the length of a string
result = s[i] +result; //take the newest character and add it before what we have already
}
return result;
}

int main() {

string str;
string rstr;
int size;
cout<<"Please enter a word to see if it is a palindrome"<<endl;
cin>>str;
size=str.length();
for(int i=0;i<size;i++)
{
    str[i]=tolower(str[i]);
    cout<<str[i];
}
rstr = reverse2(str); //i will create a function that takes a string and returns a new string which is the reverse
if(str==rstr)
{
    cout<<"Equal"<<endl;
}
}


