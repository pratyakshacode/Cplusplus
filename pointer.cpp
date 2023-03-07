#include<iostream>
using namespace std;



int main(){
    int*ptr=NULL;
    int array[]={12,13,10,5,6};
    ptr = array;

    for(int i=0;i<5;i++){
    cout<<*(ptr+i)<<endl;
    }


    return 0;
}