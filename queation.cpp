#include<bits/stdc++.h>
using namespace std;

//in this we have given the string which specifies the no. we have to check whether any two numbers satisfy the property given or not if yes then return them into the pair

int convert(string s){

    int n= s.length();
    int ans = 0;
    int i=0;

    while(n != 0){
        int digit = s[n-1] - '0';

        if(digit == 1){
            ans += pow(2,i);
        }

        i++;
        n--;
    }

    return ans;
}


int main(){
vector<pair<int,int>> v;

    string s = "011";
    int i=0; 
    int ans = convert(s);
    cout << ans;
    int j = ans;

    while( i < ans ){

        int condn1= i+j;
        int condn2 = i^j;

         if(condn1 > 2 && condn1 == condn2){
            v.push_back(make_pair(i,j));
            i++;
            j--;
         }

         else if( i + j > ans){
            j--;
         }
         else {
            i++;
         }

    }

    for(auto i: v){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}