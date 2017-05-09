#include <iostream>

using namespace std;
void sort(int *a,int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int z=0;z<size-1;z++){
            if(a[z]>a[i]){
                temp=a[z];
                a[z]=a[i];
                a[i]=temp;
            }
        }
    }
}
int *common2(int *a1,int *a2,int size){

    int *temp=new int[size];
    sort(a2,size);
    sort(a1,size);
    int counter=0;
    int counter2=0;
    int index=0;
    while(counter<size && counter2<size){
        if((a1[counter] == a2[counter2])){
            cout<<counter<<endl;
            cout<<"enter"<<endl;
            cout<<a1[counter]<<" "<<a2[counter2]<<endl;
            temp[index]=a1[counter];
            index++;
            counter++;
            counter2++;
        }
        else if(a1[counter]<a2[counter2]){
            counter++;
        }
        else{
            counter2++;
        }
    }
    return temp;
}
int main()
{
    int a1[10]={1,2,5,7,8,66,88,222,323,111};
    int a2[10]={3,2,33,11,634,66,88,111,37,20};
    int *common=common2(a1,a2,10);
    cout<<sizeof(common)<<endl;
    int size=sizeof(common)/sizeof(*common);
    for(int z=0;z<size;z++){
        cout<<common[z]<<endl;
    }
}
