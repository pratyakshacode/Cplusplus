#include<iostream>
using namespace std;

int main(){

    int T;
    int l,b,r;
    cin>>T;

    for(int i=0;i<T;i++){
        cin>> l >> b >> r;
        cout<<int(l*b/(3.14*r*r))+1;
    }
}