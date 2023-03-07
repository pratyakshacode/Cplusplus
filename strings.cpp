#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
//This is all about the string in c++ library

int main(){
    string s1;
    string s2;
    int x;
    // s1.append(s2);
    // cout<<s1;

    // s1.clear();
    // cout<<s1<<endl;

    // cout<<s1.empty();
    // s1.erase(1,3);
    // cout<<s1<<endl;
    // cout<<s1.find("ly");
    // cout<<s1.length()<<endl;
    // cout<<s1.size()<<endl;
    // string s3 = s1.substr(2,3);
    // cout<<s3<<endl;
    // s1.insert(2,"hello");
    // cout<<s1<<endl;
    getline(cin,s1);
    // cout<<s1<<endl;
    getline(cin,s2);
    // // s1.append(s2);
    // cout<<stoi(s2)+2<<endl;
    // cin>>x;
    // cout<<to_string(x)+"2";
    
    // sort(s2.begin(),s2.end());
    // cout<<s2<<endl;
    // reverse(s2.begin(),s2.end());
    // cout<<s2<<endl;
    cout<<s1.compare(s2);
    
}