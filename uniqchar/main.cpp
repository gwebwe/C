#include <iostream>
#include <algorithm>

using namespace std;
bool unique(string a){
for(int i=0;i<a.length();i++){
    if(a[i]==a[i+1]){
        return false;
    }
}
return true;
}
int main()
{
    string b="abcd";
    char temp;
    for(int i=0;i<b.length();i++){
        for(int z=0;z<b.length()-1;z++)
        {
            if(b[i]>b[z]){
                temp=b[z];
                b[z]=b[i];
                b[i]=temp;
            }
        }
    }
    cout<<unique(b)<<endl;
}
