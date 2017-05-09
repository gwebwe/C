#include <iostream>
using namespace std;
// Return a Array that returns the product of all values in the array, except for the current index. Example;[1,2,3] -> [2*3,1*3,1*2]=6,3,2
int* function(int* a,int size){
int *temp=new int[size];
int value=1;
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(j!=i){
            value=value * a[j];
        }
    }
    temp[i]=value;
    value=1;
}
return temp;
}

int main()
{
    int size=1000;
    int *array=new int[size];
    for(int c=0;c<size;c++)
    {
        array[c]=c+1;
    }
    int *array2=function(array,size);
    for(int z=0;z<size;z++){
        cout<<array2[z]<<endl;
    }
}
