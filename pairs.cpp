#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> pair1;
    pair1 = {12,13};
    cout<<pair1.first<<" "<<pair1.second<<endl;


    pair<int,int> p_arr[3];
    
    for(int i=0;i<3;i++){
    cout<<"Enter the first value of array: ";
    cin>>p_arr[i].first;
    cout<<"Enter the second value of array: ";
    cin>>p_arr[i].second;
    }
    
    for(int i=0;i<3;i++)
    cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;


    return 0;
}