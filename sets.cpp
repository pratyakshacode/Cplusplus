#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y;
    string s;
    multiset<string> s1;
    cin>>n;
   for(int i=0;i<n;i++){
       cin>>s;
       s1.insert(s);
   }

   for(auto value: s1){
       cout<<value<<" ";
   }
  
    
    return 0;
}