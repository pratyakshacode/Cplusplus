#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>> v;
    int n,e1,e2;
    cout<<"Enter size : ";
    cin>>n;

    for(int i=0; i<n;i++){
        cout<<"Enter pair elements: ";
        cin>>e1>>e2;
        v.push_back(make_pair(e1,e2));
    }

    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}