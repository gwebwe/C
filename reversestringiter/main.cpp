#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cout << "Enter a string" << endl;
    getline(cin,a);
    int size=a.length();
    int start=0;
    int end=size-1;
    char temp;
    cout<<a<<endl;
    while(end>start){
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        end--;
        start++;
    }
    cout<<a;
}
