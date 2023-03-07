#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e,x,y;
    
   vector<pair<int,int>> v;
    cout<<"Enter the size: ";
    cin>>n;

   for(int i=0;i<n;i++){
       cin>>x>>y;
       v.push_back(make_pair(x,y));
   }

   vector<pair<int,int>> :: iterator it;


//    for(auto value: v){
//        cout<<"{"<<value.first<<" "<<value.second<<"}"<<" ";
//    }
for(it=v.begin();it!=v.end();it++){
    cout<<it->first<<" "<<it->second;
}

    return 0;
}