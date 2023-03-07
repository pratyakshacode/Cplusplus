#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "4-89+20";
    sort(s.begin(), s.end(), greater<int> ());
    cout << s;
    return 0;
}