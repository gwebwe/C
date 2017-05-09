#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> test;
    for (int i=0;i<5;i++){
        test.push_back(i);
    }
    for (int z=test.size()-1;z>=0;z--){
        cout<<test[z]<<endl;
        test.pop_back();
    }
}
