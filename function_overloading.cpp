#include<iostream>
using namespace std;

int area(int l,int b){
    return l*b;
}
int area(int s){
    return s*s;
}
int area(int l,int b,int s){
    int a=l*b;
    return a-(s*s);
}

int main(){
    cout<<"Area of rectangle is: "<<area(3,4)<<endl;
    cout<<"Area of square is: "<<area(2)<<endl;
    cout<<"Remaining area is: "<<area(3,4,2);
    cout<<"Thr no. of squares that can be made :  "<<(4,5,2);
}