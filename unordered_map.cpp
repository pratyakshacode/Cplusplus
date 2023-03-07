#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y;
    string s;

    unordered_map<string,int> m1;
    cout<<"Enter the size of map: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the key and value "<<i<<" :";
        cin>>s>>x;
        m1[s] = x;
    }

    for(auto value: m1){
        cout<<value.first<<" "<<value.second<<endl;
    }
    auto it = m1.find("ram");
    cout<<it->second;
    return 0;
}