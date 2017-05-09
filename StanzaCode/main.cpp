#include <iostream>
using namespace std;
// Return a Array that returns the product of all values in the array, except for the current index. Example;[1,2,3] -> [2*3,1*3,1*2]=6,3,2
int* function(int* a,int size){
int *temp=new int[size+3];
int value=1;
int i=0,down,up;
while(i<size){
    down=i-1;
    up=i+1;
    while(up<size){
        value=value * a[up];
        up++;
    }
    while(down>=0){
        value=value *a[down];
        down--;
    }
    temp[i]=value;
    value=1;
    i++;
}
return temp;
}

int main()
{
    int size=3;
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
