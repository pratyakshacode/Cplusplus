#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,n,x,y;
    vector<vector<int>> v;
    cout<<"Enter size: ";
    cin>>N;

    for(int i=0;i<N;i++){
    vector<int> temp;
        cout<<"Enter no.of elements: ";
        cin>>n;
        for(int j=0;j<n;j++){
            cout<<"Enter element "<<j<<" into array: ";
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)
        cout<<v[i][j]<<" ";

        cout<<endl;
    }
    // cout<<v[1][1];
    return 0;
}