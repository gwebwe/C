#include <iostream>
#include <string>

using namespace std;

string reverse(string a){
    if(a.length()==1)
    {
        return a;
    }
    else{
        return reverse(a.substr(1,a.length()-1)) + a[0];
    }
}
int main()
{
    string a="gary is the best person ever";
    if(a.length()>0){
        cout<<reverse(a)<<endl;
    }
}
