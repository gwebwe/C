#include <iostream>
#include <string>
using namespace std;

int main()
{
string str;
char remove;
int size;
cout<<"Please enter a string"<<endl;
cin>>str;
cout<<"Please enter a char to remove"<<endl;
cin>>remove;
size=str.length();
for(int i=0;i<size;i++){
    if(str[i]==remove){
        str.erase(i,1);
        i--;
    }
}
cout<<str<<endl;
}
