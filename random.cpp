#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    int n = 5;
     
     int index = 0;
    string ans = "";

    pair<int,int>p;
    vector<pair<int,int>> v;

    int i=0, j = 0;

    while(i < n){
        
        int j = i+1;

        while(j < n){
            if(arr[i] + arr[j] == 6){
                p = {i,j};
                v.push_back(p);

            }
            j++;
        }

    i++;
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){

        ans.push_back('<');
        ans.push_back(char(v[i].first + '0'));
        ans.push_back(',');
        ans.push_back(char(v[i].second + '0'));
        
        ans.push_back('>');
        index ++;

        if(index < v.size()){
            ans.push_back(',');
        }
    }

    cout << ans;

    return 0;
}