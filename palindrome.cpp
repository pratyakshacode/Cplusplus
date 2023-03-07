#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    char arr[n+1];

    cout<<"enter the characters: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool flag = true;

    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            flag = false;
        }
        // n--;
    }
if(flag){
    cout<<"Palindrome"<<endl;
}
else{
    cout<<"Not a Palindrome"<<endl;
}

cout<<"press any key to end: ";
cin>>n;
    return 0;
}