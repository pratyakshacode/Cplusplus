#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    stack<char> s;
    string str;
    cout<<"Write the Left and Right parenthesis: "<<endl;
    cin>>str;

    for(int i=0; i<str.size();i++)
    if(str[i] != '(' && str[i] !=')'){
    cout<<"Invalid String Type"<<endl;
    return 0;
    }

    for(int i=0; i<str.size(); i++){
        if(str[i] == '(')
        s.push('(');
        else if(str[i] == ')')
        s.pop();
    }

    if(s.empty())
    cout<<"Equal Parenthesis";
    else
    cout<<"Not Equal Parenthesis";

    return 0;
}