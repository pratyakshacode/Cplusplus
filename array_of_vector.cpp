#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,N,x,y;
    vector<int> v[3];
    cout<<"Enter size: ";
    cin>>N;

    for(int i=0;i<N;i++){
        cout<<"Enter size of array: ";
        cin>>n;
        for(int j=0; j<n; j++){
        cout<<"Enter element: ";
        cin>>x;
        v[i].push_back(x);
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<n;j++)
        cout<<v[i][j]<<" ";

        cout<<endl;
    }
    return 0;

}