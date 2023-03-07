#include<iostream>
using namespace std;
void swap1(int a,int b){
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"The value of a and b by swap1 is: "<<a<<" "<<b;

}

void swap2(int a,int b){
    int c = a;
    a = b;
    b = c;
    cout<<"The value of a and b by swap2 is: "<<a<<" "<<b;
}
int main(){
    
    swap1(12,13);
    swap2(12,13);

    return 0;
}