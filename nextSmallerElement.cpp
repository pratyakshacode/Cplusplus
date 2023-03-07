#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> v, int n){

    vector<int> ans(n);
    stack<int> s;
    s.push(-1);

    for(int i = n-1; i>=0; i--){

        int curr = v[i];

        //checking for all the greater element
        while(s.top() > curr){
            s.pop();
        }

        //found the smallest element
        ans[i] = s.top();
        s.push(curr);
    }

    return ans;

}

vector<int> prevSmallerElement(vector<int> v, int n){

    stack<int> s;
    vector<int> ans(n);

    s.push(-1);

    for(int i = 0; i < n; i++){
        int curr = v[i];

        while(s.top() > curr){
            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);
        
    }

    return ans;
}


int main(){

    vector<int> v = {2,1,4,3};
    vector<int> ans;
    ans = nextSmallerElement(v,v.size());

    for(int val : ans){
        cout << val << " ";
    }
cout << endl << endl;

    ans = prevSmallerElement(v,v.size());

    for(int val : ans){
        cout << val << " ";
    }

    return 0;
}